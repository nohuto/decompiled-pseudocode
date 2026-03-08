/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403717EC
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x140A404AC (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1402D8C88 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // ebx

  v3 = a3;
  MiReturnCommit(a1, a2, a3);
  return MiReturnSystemCharges(a1, a2, v3);
}
