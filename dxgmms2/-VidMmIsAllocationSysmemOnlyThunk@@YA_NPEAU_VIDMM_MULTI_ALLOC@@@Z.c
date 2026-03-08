/*
 * XREFs of ?VidMmIsAllocationSysmemOnlyThunk@@YA_NPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002CCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidMmIsAllocationSysmemOnlyThunk(struct _VIDMM_MULTI_ALLOC *a1)
{
  return (*(_DWORD *)(**(_QWORD **)a1 + 68LL) & 0x80) != 0;
}
