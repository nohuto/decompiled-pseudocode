bool __fastcall HalpIommuDmaRemappingCapable(_DWORD *a1, unsigned int *a2)
{
  unsigned int AcpiDeviceMapCount; // eax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( *a1 != 2 || (int)HalpIommuQueryAcpiDeviceMapping(a1, &v6) < 0 )
    return 1;
  AcpiDeviceMapCount = HalpIommuGetAcpiDeviceMapCount(a1);
  if ( a2 )
    *a2 = AcpiDeviceMapCount;
  return AcpiDeviceMapCount <= 1;
}
