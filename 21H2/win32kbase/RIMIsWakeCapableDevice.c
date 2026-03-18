/*
 * XREFs of RIMIsWakeCapableDevice @ 0x1C00D2D98
 * Callers:
 *     RIMIsInputSuppressed @ 0x1C0004020 (RIMIsInputSuppressed.c)
 *     RIMSetDeviceInputMode @ 0x1C00D2D38 (RIMSetDeviceInputMode.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01B81A8 (RIMHandleTTMDeviceInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMIsWakeCapableDevice(__int64 a1)
{
  char v1; // al
  unsigned int v2; // r9d
  int v3; // r8d
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx

  if ( (*(_DWORD *)(a1 + 188) & 2) == 0 )
    return 0LL;
  v1 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
  v2 = 0;
  v3 = (2 * (v1 & 1)) | 4;
  if ( (v1 & 2) == 0 )
    v3 = 2 * (v1 & 1);
  v4 = v3 | 8;
  if ( (v1 & 0x10) == 0 )
    v4 = v3;
  v5 = v4 | 0x10;
  if ( (v1 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x20;
  if ( (v1 & 8) == 0 )
    v6 = v5;
  v7 = v6 | 0x100;
  if ( (v1 & 0x20) == 0 )
    v7 = v6;
  LOBYTE(v2) = (v7 & *((_DWORD *)gpInputGlobals + 25)) != 0;
  return v2;
}
