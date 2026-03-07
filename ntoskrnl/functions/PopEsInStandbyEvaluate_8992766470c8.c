__int64 __fastcall PopEsInStandbyEvaluate(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int PowerSettingValue; // edi
  int v4; // ebx
  int v5; // ecx
  _DWORD v7[4]; // [rsp+30h] [rbp-10h] BYREF
  char v8; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  int v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, a2, 3, &v11, 4u, &v9);
  if ( PowerSettingValue >= 0 )
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v2, 3, &v10, 4u, &v9);
    if ( PowerSettingValue >= 0 )
    {
      v4 = 1;
      v9 = 1;
      PowerSettingValue = ExQueryWnfStateData(PopEsWnfSubscriptionOpportunisticCs, v7, &v8, &v9);
      if ( PowerSettingValue >= 0 )
      {
        if ( v9 )
        {
          if ( !v10 || v11 != 1 || v8 || (PopAggressiveStandbyAppliedActions & 1) != 0 )
            v4 = 0;
          v5 = PopEsBgActivityPolicy;
          if ( PopEsBgActivityPolicy != v4 )
          {
            PopEsBgActivityPolicy = v4;
            PopTraceEsBgActivityPolicyUpdate(v5);
            PopEsQueueStateEvaluation(0);
          }
        }
      }
    }
  }
  return (unsigned int)PowerSettingValue;
}
