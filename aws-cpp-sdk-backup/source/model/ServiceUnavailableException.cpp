﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ServiceUnavailableException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ServiceUnavailableException::ServiceUnavailableException() : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

ServiceUnavailableException::ServiceUnavailableException(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceUnavailableException& ServiceUnavailableException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Context"))
  {
    m_context = jsonValue.GetString("Context");

    m_contextHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceUnavailableException::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("Context", m_context);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
