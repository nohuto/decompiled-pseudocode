/*
 * XREFs of MiDeleteVadBitmap @ 0x1407266B4
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140222C78 (MiHyperSpaceSize.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140289980 (MiReturnFullProcessCharges.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiUpdateChargedWsles @ 0x14065F8E4 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
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
      MiReturnCommit(v14, v17, v15);
    result = PdcCreateWatchdogAroundClientCall();
    if ( BugCheckParameter2[238] )
    {
      MiUpdateChargedWsles((__int64)(BugCheckParameter2 + 208));
      return MiReturnFullProcessCommitment((__int64)BugCheckParameter2, v18);
    }
  }
  return result;
}
