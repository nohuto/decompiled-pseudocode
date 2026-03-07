bool PopReadErrataDeviceAllowedForPowerButtonSuppression()
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  v0 = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_POWER_BUTTON_SUPPRESSION_NOTIFICATION, &v2) >= 0 )
    return v2 == 2;
  return v0;
}
