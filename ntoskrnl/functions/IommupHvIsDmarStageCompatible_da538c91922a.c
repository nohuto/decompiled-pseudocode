bool __fastcall IommupHvIsDmarStageCompatible(_DWORD *a1, char a2)
{
  bool v3; // zf
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( a2 )
    v3 = HalpHvParaVirtIommuDomain == 0;
  else
    v3 = HalpHvIommuDeviceDomain == 0;
  if ( !v3 && *a1 == 1 && (int)((__int64 (__fastcall *)(_DWORD *, __int128 *))qword_140C62200)(a1, &v5) >= 0 )
  {
    if ( a2 )
      return (v5 & 0x20) != 0;
    if ( (v5 & 0x10) != 0 )
      return 1;
  }
  return 0;
}
