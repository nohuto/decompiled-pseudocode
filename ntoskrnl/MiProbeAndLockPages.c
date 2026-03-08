/*
 * XREFs of MiProbeAndLockPages @ 0x140242114
 * Callers:
 *     CcZeroDataInCache @ 0x140241DBC (CcZeroDataInCache.c)
 *     MmProbeAndLockPagesPrivate @ 0x140242D40 (MmProbeAndLockPagesPrivate.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiGetWorkingSetInfo @ 0x1402F7C60 (MiGetWorkingSetInfo.c)
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 *     IopProbeAndLockPages @ 0x14036D5D4 (IopProbeAndLockPages.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1403C9050 (VslpLockMdlForTransfer.c)
 *     IopProbeAndLockPages_0 @ 0x1403CE574 (IopProbeAndLockPages_0.c)
 *     CcLockSystemCacheBuffer @ 0x140535340 (CcLockSystemCacheBuffer.c)
 *     VslFinalizeSecureImageHash @ 0x14054B800 (VslFinalizeSecureImageHash.c)
 *     IopProbeAndLockPages_1 @ 0x1405536D0 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1405578DC (IopProbeAndLockPages_2.c)
 *     KiOpPatchCode @ 0x14057CF80 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405A34F0 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1405CB3E4 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405F67A0 (VmProbeAndLockPages.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     MiLockRetpolineStubs @ 0x140B967E0 (MiLockRetpolineStubs.c)
 * Callees:
 *     MiProbeAndLockComplete @ 0x140267C70 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  _BYTE *v9; // rbx
  int v10; // edi
  int v11; // edx
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD v16[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = MiProbeAndLockPrepare((unsigned int)v16, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  if ( v6 < 0 )
    RtlRaiseStatus((unsigned int)v6);
  v7 = MiProbeAndLockPacket(v16);
  result = MiProbeAndLockComplete(v16, v7, 3LL);
  v9 = (_BYTE *)v16[16];
  v10 = result;
  if ( v16[16] )
  {
    v11 = *(_DWORD *)(v16[16] + 52LL);
    v12 = v16[14] + (v11 & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v16[16] + 34LL) << 31));
    v13 = v11 ^ (v12 ^ v11) & 0x7FFFFFFF;
    v14 = v16[15];
    *(_DWORD *)(v16[16] + 52LL) = v13;
    v9[34] = v12 >> 31;
    v15 = v14 - v16[14];
    if ( v15 )
      MiReturnFullProcessCommitment(v16[11], v15);
    result = MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus((unsigned int)v10);
  return result;
}
