/*
 * XREFs of MiDeleteVadBitmap @ 0x140706C64
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140291494 (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x14025D3F4 (MiHyperSpaceSize.c)
 *     MiGetProcessPartition @ 0x140275574 (MiGetProcessPartition.c)
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402DF130 (MiReturnFullProcessCharges.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MiUpdateChargedWsles @ 0x140661F34 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x140765364 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiDeleteVadBitmap(_QWORD *BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rbp
  __int64 ProcessPartition; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r8
  _OWORD v19[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h]

  v1 = BugCheckParameter2[158];
  result = 0LL;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  if ( v1 )
    KeBugCheckEx(0x1Au, 0x3455uLL, (ULONG_PTR)BugCheckParameter2, v1, 0LL);
  v4 = (_QWORD *)BugCheckParameter2[210];
  if ( v4 )
  {
    v5 = v4[34];
    v6 = MiHyperSpaceSize();
    MiDeletePagablePteRange((__int64)(BugCheckParameter2 + 208), 0x11u, v7, v8, v6 + v8 - 1, 0, 0, v19);
    v9 = *((_QWORD *)&v19[0] + 1);
    ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter2);
    v11 = v4[36] + v5;
    v12 = v4 + 76;
    v13 = 0LL;
    v14 = ProcessPartition;
    v15 = 2LL;
    do
    {
      v13 += *v12++;
      --v15;
    }
    while ( v15 );
    v16 = v13 + v11;
    if ( v16 )
      MiReturnFullProcessCharges((__int64)BugCheckParameter2, v16);
    v17 = v16 - v9;
    if ( v17 )
      MiReturnCommit(v14, v17);
    result = PdcCreateWatchdogAroundClientCall();
    if ( BugCheckParameter2[238] )
    {
      MiUpdateChargedWsles((__int64)(BugCheckParameter2 + 208));
      return MiReturnFullProcessCommitment(BugCheckParameter2, v18);
    }
  }
  return result;
}
