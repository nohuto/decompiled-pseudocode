/*
 * XREFs of MmDuplicateMemory @ 0x140AA96DC
 * Callers:
 *     IopLiveDumpCapture @ 0x14094AEEC (IopLiveDumpCapture.c)
 *     MmCreateMirror @ 0x140A2C460 (MmCreateMirror.c)
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CcNotifyWriteBehind @ 0x1405345B8 (CcNotifyWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockDynamicMemoryExclusive @ 0x140619164 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140619B70 (MiUnlockDynamicMemoryExclusive.c)
 *     MiMirrorBlackPhase @ 0x1406247B4 (MiMirrorBlackPhase.c)
 *     MiMirrorVerify @ 0x1406261B0 (MiMirrorVerify.c)
 *     MiResumeFromHibernate @ 0x1406263EC (MiResumeFromHibernate.c)
 *     MiLockAllMemoryLists @ 0x14064E354 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140650214 (MiUnlockAllMemoryLists.c)
 *     MmLockPagableSectionByHandle @ 0x1406A7BD0 (MmLockPagableSectionByHandle.c)
 *     MiActOnMirrorBitmap @ 0x140A2C318 (MiActOnMirrorBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140A2C418 (MiUpdateMirrorBitmaps.c)
 *     MiMirrorBrownPhase @ 0x140AA94BC (MiMirrorBrownPhase.c)
 */

NTSTATUS __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // edx
  unsigned __int8 v2; // r13
  unsigned __int8 v4; // r12
  NTSTATUS result; // eax
  int v6; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi
  int v11; // esi
  unsigned __int8 v12; // r8
  _DWORD *v13; // r10
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v23 = 0LL;
  v22 = 0LL;
  v2 = 17;
  v4 = 17;
  v21 = 0LL;
  DWORD2(v21) = v1;
  if ( (v1 & 1) != 0 && (v1 & 0x404) != 0 )
    return -1073741811;
  if ( (v1 & 8) != 0 )
  {
    v1 &= 0xFFFFFBFA;
    DWORD2(v21) = v1;
  }
  if ( (v1 & 0x400) != 0 && (v1 & 4) != 0
    || (v1 & 0xC0) != 0 && ((v1 & 0xFFFFFC2E) != 0 || (v1 & 0x11) != 0x11 || (v1 & 0x40) != 0 && (v1 & 0x80u) != 0) )
  {
    return -1073741811;
  }
  if ( (v1 & 0xA) == 0 )
    CcNotifyWriteBehind();
  *(_QWORD *)&v21 = a1;
  v6 = 0;
  HIDWORD(v21) = 8;
  BYTE4(v22) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140C67AD0,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v23 & -(__int64)((WORD4(v21) & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&qword_140C67008, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67008, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C67008, v8, (__int64)&qword_140C67008);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140C69560);
    if ( !(unsigned int)MiUpdateMirrorBitmaps() )
    {
      v10 = -1073741670;
LABEL_60:
      dword_140C67ACC = 0;
      if ( BYTE4(v22) )
        _InterlockedAdd(&dword_140C6935C, 0xFFFFFFFF);
      if ( qword_140C67B08 )
        qword_140C67B08 = 0LL;
      if ( v2 != 17 )
      {
        if ( v4 != 17 )
          MiUnlockAllMemoryLists();
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (v2 + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v2);
      }
      if ( v6 )
      {
        stru_140C67AE8.Parameter = (void *)HIDWORD(v21);
        ExQueueWorkItem(&stru_140C67AE8, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedAdd(&dword_140C69560, 0xFFFFFFFF);
        KeSetEvent(&stru_140C67AD0, 0, 0);
      }
      MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
      KeAbPostRelease((ULONG_PTR)&qword_140C67008);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      return v10;
    }
    MiActOnMirrorBitmap((__int64)&xmmword_140C67B20, 1);
    v11 = 1;
    LODWORD(v22) = 0;
    if ( (BYTE8(v21) & 1) != 0 )
    {
      LODWORD(v22) = 3;
LABEL_34:
      v11 = 0;
LABEL_35:
      v10 = (*(__int64 (**)(void))a1)();
      if ( v10 < 0 )
        goto LABEL_59;
      dword_140C67ACC = 1;
      v10 = MiMirrorBrownPhase((__int64)&v21);
      if ( v10 < 0 )
        goto LABEL_59;
      if ( (BYTE8(v21) & 2) == 0 && BYTE4(v22) )
      {
        _InterlockedAdd(&dword_140C6935C, 0xFFFFFFFF);
        BYTE4(v22) = 0;
      }
      v2 = KeGetCurrentIrql();
      v10 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
      if ( v10 < 0 )
        goto LABEL_59;
      v4 = KeGetCurrentIrql();
      if ( *(_QWORD *)(a1 + 24) )
        MiActOnMirrorBitmap((__int64)xmmword_140C67B10, 1);
      if ( v4 < 2u )
      {
        v12 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
        {
          v13 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v12 == 2 )
            LODWORD(v14) = 4;
          else
            v14 = (-1LL << (v12 + 1)) & 4;
          v13[5] |= v14;
        }
        v4 = v12;
      }
      MiLockAllMemoryLists();
      qword_140C67B08 = (__int64)CurrentThread;
      if ( BYTE4(v22) )
      {
        _InterlockedAdd(&dword_140C6935C, 0xFFFFFFFF);
        BYTE4(v22) = 0;
      }
      dword_140C67ACC = 2;
      v10 = MiMirrorBlackPhase((__int64 *)&v21);
      if ( v10 < 0
        || (v10 = MiMirrorVerify(a1), v10 < 0)
        || (v15 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(1LL), qword_140C67B08 = 0LL,
                                                                      v10 = v15,
                                                                      v15 != 1073742484)
        || v11 )
      {
LABEL_59:
        v6 = 0;
      }
      else
      {
        v10 = 0;
        MiResumeFromHibernate(HIDWORD(v21));
        v6 = 1;
      }
      goto LABEL_60;
    }
    if ( (WORD4(v21) & 0x400) == 0 )
    {
      if ( (BYTE8(v21) & 4) != 0 )
      {
        HIDWORD(v21) = 7;
LABEL_33:
        LODWORD(v22) = 2;
        goto LABEL_34;
      }
      if ( (BYTE8(v21) & 8) == 0 )
        goto LABEL_35;
    }
    HIDWORD(v21) = 0;
    goto LABEL_33;
  }
  return result;
}
