__int64 AMLIGetEmOverride()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  gOverrideFlags = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_RETURN_REV1, &v1) >= 0 && v1 == 2 )
    gOverrideFlags |= 2u;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_RETURN_REV3, &v1) >= 0 && v1 == 2 )
    gOverrideFlags |= 0x10u;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_IGNORE_PACKAGE_LENGTH_CHECK, &v1) >= 0 && v1 == 2 )
    gOverrideFlags |= 4u;
  result = EmClientQueryRuleState(&GUID_EM_RULE_AMLI_USE_NAMESPACE_OVERRIDE, &v1);
  if ( (int)result >= 0 && v1 == 2 )
    gOverrideFlags |= 0x20u;
  return result;
}
