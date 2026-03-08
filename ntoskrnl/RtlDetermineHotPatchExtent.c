/*
 * XREFs of RtlDetermineHotPatchExtent @ 0x140A736B4
 * Callers:
 *     MiCheckPatchPagesCallback @ 0x140A33660 (MiCheckPatchPagesCallback.c)
 *     MiLockHotPatchPages @ 0x140A358D8 (MiLockHotPatchPages.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140A38200 (MiPrepareToHotPatchImagePatchCallback.c)
 *     RtlValidateHotPatchBase @ 0x140A73A54 (RtlValidateHotPatchBase.c)
 * Callees:
 *     RtlpDetermineHotPatchExtent @ 0x140AAAB14 (RtlpDetermineHotPatchExtent.c)
 */

char __fastcall RtlDetermineHotPatchExtent(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v7; // ecx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+24h] [rbp-14h] BYREF

  v10[0] = 0;
  v9 = 0;
  if ( !(unsigned __int8)RtlpDetermineHotPatchExtent(a1, a3, &v9, v10) || v9 < 0 && -v9 > a2 )
    return 0;
  v7 = v10[0] - 1;
  *a4 = (v9 + a2) >> 12;
  *a5 = (a2 + v7) >> 12;
  return 1;
}
