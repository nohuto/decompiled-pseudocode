/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403CE694
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1407867DC (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408D87A0 (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140311238 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}
