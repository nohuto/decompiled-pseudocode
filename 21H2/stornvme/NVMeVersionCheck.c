/*
 * XREFs of NVMeVersionCheck @ 0x1C0024AE8
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C0007F68 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeVersionCheck(__int64 a1)
{
  unsigned __int16 v1; // dx
  bool v2; // cc

  v1 = *(_WORD *)(a1 + 186);
  v2 = v1 <= 1u;
  if ( v1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 185) )
      return 1;
    v2 = 1;
  }
  return !v2;
}
