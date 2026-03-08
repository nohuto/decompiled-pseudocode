/*
 * XREFs of MiUpdateChargedWsles @ 0x14065F8E4
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1407266B4 (MiDeleteVadBitmap.c)
 *     MiComputeProcessUserVa @ 0x140729824 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1407C74B0 (MiCommitPageTablesForVad.c)
 * Callees:
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  volatile signed __int64 *result; // rax
  unsigned __int64 v2; // rdx

  result = (volatile signed __int64 *)MiGetSharedVm(a1);
  _InterlockedExchangeAdd64(result + 6, v2);
  return result;
}
