/*
 * XREFs of NVMeVersionCheck @ 0x1C001C288
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeNameSpaceIdentify @ 0x1C001A730 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeVersionCheck(__int64 a1)
{
  unsigned __int16 v1; // dx
  bool v2; // cc

  v1 = *(_WORD *)(a1 + 170);
  v2 = v1 <= 1u;
  if ( v1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 169) )
      return 1;
    v2 = 1;
  }
  return !v2;
}
