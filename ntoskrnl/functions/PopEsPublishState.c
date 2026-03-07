__int64 PopEsPublishState()
{
  int v0; // eax
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = -1;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  v2 = v0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE, (__int64)&v2);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4u, &PopEsState);
}
