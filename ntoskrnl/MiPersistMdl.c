/*
 * XREFs of MiPersistMdl @ 0x14063C214
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14063B100 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KePersistMemory @ 0x14041BC60 (KePersistMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x1404580A0 (KeInvalidateRangeAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiPersistMdl(PMDL MemoryDescriptorList)
{
  unsigned __int64 v2; // rsi
  PVOID MappedSystemVa; // rax
  __int64 v4; // rsi
  __int64 *v5; // r14
  __int64 *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r15
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  int SessionId; // eax
  BOOL v18; // edi
  unsigned __int64 ValidPte; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KTHREAD *v24; // rcx
  bool v25; // zf
  unsigned int v26; // [rsp+30h] [rbp-108h]
  _QWORD v27[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v27, 0, 0xB8uLL);
  if ( byte_140C65768 )
    return;
  v2 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( MappedSystemVa )
  {
    v4 = v2 << 12;
    if ( _bittest64(&KeFeatureBits, 0x24u) )
      KePersistMemory((__int64)MappedSystemVa, v4);
    else
      KeInvalidateRangeAllCaches(MappedSystemVa, v4);
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    return;
  }
  v5 = (__int64 *)qword_140C69368;
  v6 = (__int64 *)&MemoryDescriptorList[1];
  v27[3] = 0LL;
  LODWORD(v27[1]) = 20;
  CurrentThread = KeGetCurrentThread();
  v8 = qword_140C69368 << 25 >> 16;
  --CurrentThread->SpecialApcDisable;
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C65530, (__int64)v9)) != 0 )
  {
    _BitScanForward(&v12, AbEntrySummary);
    v26 = v12;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v15 = *SchedulerAssist;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(SchedulerAssist, v15 & 0xFFDFFFFF, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v10 = (__int64)(&v9[1].Process + 12 * v26);
    if ( (unsigned __int64)&qword_140C65530 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    *(_DWORD *)(v10 + 8) = SessionId;
    *(_QWORD *)v10 = (unsigned __int64)&qword_140C65530 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65530, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C65530, v10, (__int64)&qword_140C65530);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  if ( v2 )
  {
    v18 = MiPteInShadowRange((unsigned __int64)v5);
    do
    {
      ValidPte = MiMakeValidPte((unsigned __int64)v5, *v6, 536870913);
      v20 = 0LL;
      v21 = ValidPte;
      if ( !v18 )
        goto LABEL_34;
      if ( MiPteHasShadow() )
      {
        v20 = 1LL;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_34;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_34;
      }
      if ( (v21 & 1) != 0 )
        v21 |= 0x8000000000000000uLL;
LABEL_34:
      *v5 = v21;
      if ( (_DWORD)v20 )
        MiWritePteShadow((__int64)v5, v21, v20);
      if ( !byte_140C65768 )
      {
        if ( _bittest64(&KeFeatureBits, 0x24u) )
          KePersistMemory(v8, 4096LL);
        else
          KeInvalidateRangeAllCaches((PVOID)v8, 0x1000u);
      }
      v22 = ZeroPte;
      v23 = 0LL;
      if ( !v18 )
        goto LABEL_47;
      if ( MiPteHasShadow() )
      {
        v23 = 1LL;
        if ( !HIBYTE(word_140C6697C) )
          goto LABEL_45;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_45:
        if ( (v22 & 1) != 0 )
          v22 |= 0x8000000000000000uLL;
      }
LABEL_47:
      *v5 = v22;
      if ( (_DWORD)v23 )
        MiWritePteShadow((__int64)v5, v22, v23);
      MiInsertTbFlushEntry((__int64)v27, v8, 1LL, 0);
      MiFlushTbList((int *)v27);
      ++v6;
      --v2;
    }
    while ( v2 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65530);
  KeAbPostRelease((ULONG_PTR)&qword_140C65530);
  v24 = KeGetCurrentThread();
  v25 = v24->SpecialApcDisable++ == -1;
  if ( v25 && ($C71981A45BEB2B45F82C232A7085991E *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
    KiCheckForKernelApcDelivery();
}
