/*
 * XREFs of NVMeVersionCheck @ 0x1C00244A8
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeVersionCheck(__int64 a1)
{
  __int16 v1; // dx
  bool v2; // cf
  bool v3; // zf

  v1 = *(_WORD *)(a1 + 194);
  v2 = v1 == 0;
  v3 = v1 == 1;
  if ( v1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 193) )
      return 1;
    v2 = 0;
    v3 = 1;
  }
  return !v2 && !v3;
}
