/*
 * XREFs of BiWasFirmwareModified @ 0x140390280
 * Callers:
 *     BiCloseStore @ 0x14082BD84 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v4 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v3 != 0;
  }
  return v1;
}
