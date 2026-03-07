void __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  signed __int64 *v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  int v11; // r15d
  __int64 v12; // r12
  struct _KTHREAD *CurrentThread; // rax
  PMDL *VirtualLockedRegion; // rdi
  unsigned __int16 v15; // ax
  struct _KTHREAD *v16; // rax

  v6 = *(_QWORD *)(a1 + 6216);
  v7 = (signed __int64 *)(a1 + 6024);
  v8 = *(unsigned int *)(a1 + 6208);
  v9 = a2;
  v11 = 0;
  v12 = *(_QWORD *)(v6 + 8LL * a2) & 0x7FFFFFFFFFFF0000LL;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)(v6 + 8 * v9) >= 0 )
    {
      VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a6 >> 4) & 7, v12);
      SmKmUnlockMdl(*VirtualLockedRegion);
      SmFpFree(*(_QWORD *)(a1 + 6480), 2, a1 + 6360, *VirtualLockedRegion);
      *VirtualLockedRegion = 0LL;
    }
    goto LABEL_16;
  }
  if ( (a6 & 2) != 0 )
  {
    v15 = 0x7FFF;
LABEL_8:
    _InterlockedAnd16((volatile signed __int16 *)(v6 + 8 * v9), v15);
    goto LABEL_16;
  }
  if ( (a6 & 1) != 0 )
    goto LABEL_16;
  if ( _bittest16((const signed __int16 *)(v6 + 8 * v9), 0xDu)
    && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 6488) )
  {
    v15 = -8193;
    goto LABEL_8;
  }
  if ( (_InterlockedDecrement16((volatile signed __int16 *)(v6 + 8 * v9)) & 0x1FFF) == 0
    && *(__int64 *)(v6 + 8 * v9) >= 0 )
  {
    SmAcquireReleaseCharges(*(_QWORD *)(a1 + 6728), v8, 1, 1);
  }
LABEL_16:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    v16 = KeGetCurrentThread();
    if ( v16->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
