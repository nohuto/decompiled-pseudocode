/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x1406441CC
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x1409AE1B8 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rsi
  unsigned int v5; // edi
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // r12
  unsigned __int64 valid; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  volatile signed __int64 *v13; // rcx
  BOOL v14; // r14d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  __int64 v20[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v22; // [rsp+90h] [rbp+18h]
  unsigned int v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = 0;
  v19 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v23);
  v4 = (void *)v3;
  v18 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 48) & 0xA200000) == 0x8200000 )
    {
      v6 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v8 = MiLockWorkingSetShared((__int64)v6);
        v22 = v8;
        valid = MiLockLowestValidPageTable((__int64)v6, v7, &v19);
        v10 = MI_READ_PTE_LOCK_FREE(v19);
        v20[0] = v10;
        if ( valid == ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v10 & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)v6, valid);
        MiUnlockWorkingSetShared((__int64)v6, v8);
      }
      v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v20) >> 12) & 0xFFFFFFFFFFLL;
      v12 = 48 * v11 - 0x220000000000LL;
      LODWORD(v18) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      v13 = (volatile signed __int64 *)((a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000));
      v14 = a2 == _InterlockedCompareExchange64(v13, 0LL, a2);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v13, 0x11u);
      v15 = MiCaptureDirtyBitToPfn(48 * v11 - 0x220000000000LL);
      if ( v15 )
        v16 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
      else
        v16 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v15 )
        MiReleasePageFileInfo(v16, v15, 1);
      MiUnlockPageTableInternal((__int64)v6, valid);
      MiUnlockWorkingSetShared((__int64)v6, v22);
      v5 = !v14 ? 0xC0000272 : 0;
    }
    else
    {
      v5 = -1073741800;
    }
  }
  else
  {
    v5 = v23;
  }
  if ( v4 )
    MiUnlockAndDereferenceVad(v4);
  return v5;
}
