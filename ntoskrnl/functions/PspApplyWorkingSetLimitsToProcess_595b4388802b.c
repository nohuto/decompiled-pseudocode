__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r15
  int v4; // esi
  unsigned __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rcx
  unsigned __int64 v14; // [rsp+20h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 1296);
  v4 = 0;
  KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v5 = *(_QWORD *)(v3 + 984);
  v14 = *(_QWORD *)(v3 + 992);
  v6 = ((*(_DWORD *)(v3 + 1040) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D0C000, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1536), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v6 == 2 || (v4 = MmAdjustWorkingSetSize(v5, v14, 0LL, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((struct _KPROCESS *)a1, v6, v7, v8);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1536), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D0C000, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D0C000);
    KeAbPostRelease((ULONG_PTR)&qword_140D0C000);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v10 = *(_QWORD *)(a1 + 1360);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
      {
        v11 = 0LL;
        v12 = *(__int64 **)(a1 + 1408);
        if ( v12 )
          v11 = *v12;
        _interlockedbittestandset((volatile signed __int32 *)(v10 + 80), 0);
        if ( v11 )
          _interlockedbittestandset((volatile signed __int32 *)(v11 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1536), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D0C000, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D0C000);
    KeAbPostRelease((ULONG_PTR)&qword_140D0C000);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return (unsigned int)v4;
}
