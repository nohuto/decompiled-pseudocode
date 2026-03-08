/*
 * XREFs of ExIsStateSeparationEnabled @ 0x1409F5E28
 * Callers:
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AA674 (PspSiloInitializeIsStateSeparationEnabled.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall ExIsStateSeparationEnabled(bool *a1)
{
  int RegistryValues; // eax
  unsigned int v3; // ecx
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B0h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0;
  memset(v5, 0, 0x70uLL);
  LODWORD(v5[1]) = 292;
  LODWORD(v5[4]) = 67108868;
  v5[2] = L"Enabled";
  v5[3] = &v6;
  RegistryValues = RtlpQueryRegistryValues(2LL, L"StateSeparation\\Policy", v5, 0LL);
  v3 = RegistryValues;
  if ( RegistryValues >= 0 )
    goto LABEL_4;
  if ( RegistryValues == -1073741772 )
  {
    v3 = 0;
LABEL_4:
    *a1 = v6 != 0;
  }
  return v3;
}
