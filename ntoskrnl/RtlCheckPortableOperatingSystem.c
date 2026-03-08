/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1402FD500
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x14069DF10 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x1407964F0 (RtlCheckRegistryKey.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  unsigned int v1; // ebx
  int RegistryValues; // eax
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v5, 0, 0x70uLL);
  v5[2] = L"PortableOperatingSystem";
  LODWORD(v5[1]) = 292;
  v5[3] = &v6;
  LODWORD(v5[4]) = 0x4000000;
  RegistryValues = RtlQueryRegistryValuesEx(2LL, 0LL, v5, 0LL, 0LL);
  v1 = RegistryValues;
  if ( RegistryValues != -1073741772 )
  {
    if ( RegistryValues < 0 )
      return v1;
LABEL_6:
    *a1 = v6 != 0;
    return v1;
  }
  return (unsigned int)-1073741275;
}
