/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x140209498
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 * Callees:
 *     MiDoesPageRequireRetpolineImportFixups @ 0x140209788 (MiDoesPageRequireRetpolineImportFixups.c)
 *     MiUpdateRetpolineImportFixups @ 0x1402097C0 (MiUpdateRetpolineImportFixups.c)
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v7; // r12
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v19; // rbx
  struct _KTHREAD *v20; // r13
  unsigned int AbEntrySummary; // eax
  unsigned int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  bool v26; // zf
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  unsigned __int64 v30; // rbx
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // [rsp+70h] [rbp+8h]
  unsigned int v38; // [rsp+90h] [rbp+28h]

  v4 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(v4 + 32);
  v9 = 0LL;
  if ( !(unsigned int)MiDoesPageRequireRetpolineImportFixups(v4, a3) )
    return 1LL;
  v10 = 48 * v8 - 0x220000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v11 = 0LL;
    v35 = 0LL;
    goto LABEL_9;
  }
  v35 = a2;
  v11 = MiReservePtes(&qword_140C695C0, 1LL);
  if ( v11 )
  {
LABEL_6:
    a2 = v11 << 25 >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v10);
    ValidPte = MiMakeValidPte(v11, a4, ProtectionPfnCompatible | 0xA0000000);
    v14 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v11) )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17) )
    {
      v14 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
LABEL_45:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_45;
    }
LABEL_7:
    *(_QWORD *)v11 = ValidPte;
    if ( v14 )
      MiWritePteShadow(v11, ValidPte);
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    v19 = (volatile signed __int64 *)(v7 + 24);
    if ( *(struct _KTHREAD **)(v7 + 8) == CurrentThread )
    {
      CurrentThread = 0LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v20 = KeGetCurrentThread();
      _disable();
      AbEntrySummary = v20->AbEntrySummary;
      if ( v20->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v7 + 24, v20)) != 0 )
      {
        _BitScanForward(&v22, AbEntrySummary);
        v38 = v22;
        v20->AbEntrySummary = AbEntrySummary & ~(1 << v22);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v28 = *SchedulerAssist;
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
          }
          while ( v29 != v28 );
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v9 = (__int64)(&v20[1].Process + 12 * v38);
        if ( (unsigned __int64)v19 - qword_140C65668 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(v20->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v9 + 8) = SessionId;
        *(_QWORD *)v9 = (unsigned __int64)v19 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v7 + 24, 0LL, v9, v7 + 24);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
    }
    MiUpdateRetpolineImportFixups(a2, *(_QWORD *)(v7 + 88), a3);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7 + 24);
      KeAbPostRelease(v7 + 24);
      v26 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v26
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v11 )
      return 0LL;
    if ( v11 != v35 )
    {
      MiReleasePtes(&qword_140C695C0, v11, 1LL);
      return 0LL;
    }
    v30 = ZeroPte;
    v31 = 0;
    if ( (unsigned int)MiPteInShadowRange(v11) )
    {
      if ( (unsigned int)MiPteHasShadow(v33, v32, v34) )
      {
        v31 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_55;
LABEL_53:
        if ( (ZeroPte & 1) != 0 )
          v30 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_55;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_53;
    }
LABEL_55:
    *(_QWORD *)v11 = v30;
    if ( v31 )
      MiWritePteShadow(v11, v30);
    KeFlushSingleTb(a2, 0LL, 1LL);
    return 0LL;
  }
  if ( a2 )
  {
    v11 = a2;
    goto LABEL_6;
  }
  return 3221225626LL;
}
