/*
 * XREFs of MiUpdateChargedWsles @ 0x14055C39C
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x14063C0B0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140660300 (MiDeleteVadBitmap.c)
 *     MiComputeProcessUserVa @ 0x1406FC2F0 (MiComputeProcessUserVa.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 6, v2);
  return result;
}
