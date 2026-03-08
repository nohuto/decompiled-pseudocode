/*
 * XREFs of MiTransferFileExtent @ 0x14063D474
 * Callers:
 *     MiIssueHardFaultIo @ 0x1403435F0 (MiIssueHardFaultIo.c)
 *     MiFlushFileOnlyMdl @ 0x14063B100 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KePersistMemory @ 0x14041BC60 (KePersistMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x1404580A0 (KeInvalidateRangeAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetCachedExtentWalkerNextPage @ 0x14063B268 (MiGetCachedExtentWalkerNextPage.c)
 *     MiInitializeCachedExtentWalker @ 0x14063B7E8 (MiInitializeCachedExtentWalker.c)
 */

__int64 __fastcall MiTransferFileExtent(
        PMDL MemoryDescriptorList,
        __int64 *BugCheckParameter2,
        ULONG_PTR a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  unsigned __int64 v9; // r14
  int v10; // r15d
  int v11; // r9d
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // rdi
  bool v15; // zf
  unsigned __int64 MappedSystemVa; // r13
  ULONG Priority; // eax
  __int64 v18; // r15
  ULONG_PTR v19; // rax
  __int64 *v20; // r12
  __int64 v21; // r15
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v23; // rdi
  int v24; // r14d
  __int64 v25; // r8
  unsigned int v26; // edi
  unsigned int v27; // r14d
  int CachedExtentWalkerNextPage; // eax
  unsigned __int64 v29; // rdi
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rax
  bool v33; // cf
  _DWORD *v34; // rdx
  int v35; // r12d
  __int64 v36; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v38; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v40; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  int SessionId; // eax
  _QWORD *v46; // r14
  int v47; // eax
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rbx
  int v50; // r14d
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  int v53; // r11d
  __int64 v54; // rdx
  __int64 v55; // r8
  PVOID v56; // r14
  __int64 v57; // rdi
  unsigned __int64 v58; // rbx
  int v59; // r15d
  __int64 v60; // r8
  int v61; // eax
  struct _KTHREAD *v62; // rcx
  int v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+34h] [rbp-CCh]
  unsigned int v65; // [rsp+34h] [rbp-CCh]
  int v66; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v68; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v69; // [rsp+48h] [rbp-B8h]
  unsigned int v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+54h] [rbp-ACh]
  unsigned int v72; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h]
  BOOL v75; // [rsp+70h] [rbp-90h]
  __int64 v76; // [rsp+78h] [rbp-88h]
  PVOID BaseAddress; // [rsp+80h] [rbp-80h]
  __int64 *v78; // [rsp+88h] [rbp-78h]
  __int64 v79; // [rsp+90h] [rbp-70h]
  __int64 v80; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2a; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int128 v84; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+E0h] [rbp-20h]
  _QWORD v87[24]; // [rsp+F0h] [rbp-10h] BYREF

  v5 = a5;
  BugCheckParameter3 = a3;
  BugCheckParameter2a = (ULONG_PTR)BugCheckParameter2;
  v79 = a5;
  v86 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  memset(v87, 0, 0xB8uLL);
  v9 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v72 = v9;
  if ( a4 )
  {
    v64 = 4;
    v10 = 1;
    v66 = 1;
    v11 = 0;
  }
  else
  {
    v10 = 4;
    v64 = 1;
    v66 = 4;
    v11 = 1;
  }
  result = MiInitializeCachedExtentWalker((__int64)&v84, BugCheckParameter2, BugCheckParameter3, v11);
  v13 = result;
  if ( (int)result < 0 )
  {
LABEL_7:
    if ( a4 )
      KeBugCheckEx(0x1Au, 0x14000uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, v13);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)v5 = v13;
    return result;
  }
  v14 = v85;
  result = 0x8000000000000000uLL;
  if ( (_QWORD)v85 == 0x8000000000000000uLL )
  {
    v5 = v79;
    v13 = -1073740023;
    goto LABEL_7;
  }
  v15 = (MemoryDescriptorList->MdlFlags & 5) == 0;
  v73 = v85;
  if ( v15 )
  {
    Priority = 1073741840;
    if ( v10 != 4 )
      Priority = -1073741808;
    MappedSystemVa = (unsigned __int64)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, Priority);
    v68 = MappedSystemVa;
  }
  else
  {
    MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
    v68 = MappedSystemVa;
  }
  if ( MappedSystemVa )
  {
    v18 = ((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v80 = v18;
    v19 = MiReservePtes((__int64)&qword_140C695C0, v9);
    v20 = (__int64 *)v19;
    if ( !v19 )
    {
      v76 = 1LL;
      goto LABEL_53;
    }
    v21 = (__int64)(v19 << 25) >> 16;
    ValidPte = MiMakeValidPte(v19, v14, v64 | 0xA0000000);
    v23 = ValidPte;
    v24 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v20) )
      goto LABEL_24;
    if ( MiPteHasShadow() )
    {
      v24 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_24;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_24;
    }
    if ( (ValidPte & 1) != 0 )
      v23 = ValidPte | 0x8000000000000000uLL;
LABEL_24:
    *v20 = v23;
    if ( v24 )
      MiWritePteShadow((__int64)v20, v23, v25);
    v26 = v72;
    v27 = 1;
    if ( v72 <= 1 )
    {
LABEL_41:
      if ( !a4 )
        goto LABEL_49;
      memmove((void *)v21, (const void *)MappedSystemVa, v27 << 12);
      if ( !byte_140C65768 )
      {
        if ( _bittest64(&KeFeatureBits, 0x24u) )
          KePersistMemory(v21, 4096LL);
        else
          KeInvalidateRangeAllCaches((PVOID)v21, 0x1000u);
      }
LABEL_50:
      MiReleasePtes((__int64)&qword_140C695C0, v20, v26);
      v32 = v27 << 12;
      v33 = v27 != 0;
      goto LABEL_51;
    }
    while ( 1 )
    {
      CachedExtentWalkerNextPage = MiGetCachedExtentWalkerNextPage((__int64)&v84, &v73);
      if ( CachedExtentWalkerNextPage < 0 )
      {
        if ( a4 )
          KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3, CachedExtentWalkerNextPage);
        MappedSystemVa = v68;
LABEL_49:
        memmove((void *)MappedSystemVa, (const void *)v21, v27 << 12);
        goto LABEL_50;
      }
      ValidPte ^= (ValidPte ^ (v73 << 12)) & 0xFFFFFFFFFF000LL;
      v29 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)&v20[v27]) )
      {
        if ( MiPteHasShadow() )
        {
          v31 = 1;
          if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
            v29 = ValidPte | 0x8000000000000000uLL;
          goto LABEL_37;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          v29 = ValidPte | 0x8000000000000000uLL;
        }
      }
      v31 = 0;
LABEL_37:
      v20[v27] = v29;
      if ( v31 )
        MiWritePteShadow((__int64)&v20[v27], v29, v30);
      v26 = v72;
      if ( ++v27 >= v72 )
      {
        MappedSystemVa = v68;
        goto LABEL_41;
      }
    }
  }
  v18 = 0LL;
  v80 = 0LL;
  v76 = 2LL;
LABEL_53:
  WORD2(v87[0]) = 0;
  v87[1] = 20LL;
  LODWORD(v87[0]) = 0;
  v87[2] = 0LL;
  v82 = qword_140C69368 + 8;
  v87[3] = 0LL;
  v69 = qword_140C69368;
  v35 = 0;
  v83 = 0LL;
  BaseAddress = (PVOID)(qword_140C69368 << 25 >> 16);
  v78 = (__int64 *)&MemoryDescriptorList[1];
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v63 = 0;
  --CurrentThread->SpecialApcDisable;
  v38 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v38->AbEntrySummary;
  if ( v38->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C65530, (__int64)v38)) != 0 )
  {
    _BitScanForward(&v40, AbEntrySummary);
    v70 = v40;
    v38->AbEntrySummary = AbEntrySummary & ~(1 << v40);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v43 = *SchedulerAssist;
      do
      {
        v44 = v43;
        v43 = _InterlockedCompareExchange(SchedulerAssist, v43 & 0xFFDFFFFF, v43);
      }
      while ( v44 != v43 );
      if ( (v43 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v36 = (__int64)(&v38[1].Process + 12 * v70);
    if ( (unsigned __int64)&qword_140C65530 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v38->ApcState.Process);
    *(_DWORD *)(v36 + 8) = SessionId;
    *(_QWORD *)v36 = (unsigned __int64)&qword_140C65530 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65530, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C65530, v36, (__int64)&qword_140C65530);
  if ( v36 )
    *(_BYTE *)(v36 + 18) = 1;
  v71 = 0;
  if ( !v72 )
    goto LABEL_117;
  v46 = (_QWORD *)v69;
  v65 = v64 | 0xA0000000;
  v75 = MiPteInShadowRange(v69);
  v47 = v66;
  while ( 2 )
  {
    if ( !v18 )
    {
      v48 = v82;
      v49 = MiMakeValidPte(v82, *v78, v47 | 0x20000000u);
      v50 = 0;
      if ( MiPteInShadowRange(v48) )
      {
        if ( MiPteHasShadow() )
        {
          v50 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
LABEL_76:
            if ( (v49 & 1) != 0 )
              v49 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_76;
        }
      }
      *(_QWORD *)v48 = v49;
      if ( v50 )
        MiWritePteShadow(v48, v49, v51);
      v46 = (_QWORD *)v69;
      MappedSystemVa = (__int64)((v48 << 25) - v83) >> 16;
      v68 = MappedSystemVa;
    }
    v52 = MiMakeValidPte((unsigned __int64)v46, v73, v65);
    v53 = 0;
    v54 = v52;
    v55 = 0LL;
    if ( v75 )
    {
      if ( MiPteHasShadow() )
      {
        v55 = 1LL;
        if ( HIBYTE(word_140C6697C) == (_BYTE)v53 )
        {
LABEL_86:
          if ( (v54 & 1) != 0 )
            v54 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_86;
      }
    }
    *v46 = v54;
    if ( (_DWORD)v55 )
      MiWritePteShadow((__int64)v46, v54, v55);
    if ( a4 == v53 )
    {
      memmove((void *)MappedSystemVa, BaseAddress, 0x1000uLL);
    }
    else
    {
      v56 = BaseAddress;
      memmove(BaseAddress, (const void *)MappedSystemVa, 0x1000uLL);
      if ( !byte_140C65768 )
      {
        if ( (KeFeatureBits & 0x1000000000LL) != 0 )
          KePersistMemory((__int64)v56, 4096LL);
        else
          KeInvalidateRangeAllCaches(v56, 0x1000u);
      }
      v46 = (_QWORD *)v69;
    }
    ++v63;
    if ( v18 )
      v68 = MappedSystemVa + 4096;
    v57 = v76;
    do
    {
      v58 = ZeroPte;
      v59 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v46) )
        goto LABEL_107;
      if ( MiPteHasShadow() )
      {
        v59 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_107;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_107;
      }
      if ( (ZeroPte & 1) != 0 )
        v58 = ZeroPte | 0x8000000000000000uLL;
LABEL_107:
      *v46 = v58;
      if ( v59 )
        MiWritePteShadow((__int64)v46, v58, v60);
      ++v46;
      --v57;
    }
    while ( v57 );
    MappedSystemVa = v68;
    MiInsertTbFlushEntry((__int64)v87, (unsigned __int64)BaseAddress, v76, 0);
    MiFlushTbList((int *)v87);
    if ( v63 == v72 || (v61 = MiGetCachedExtentWalkerNextPage((__int64)&v84, &v73), v61 >= 0) )
    {
      ++v78;
      v47 = v66;
      if ( ++v71 < v72 )
      {
        v18 = v80;
        v46 = (_QWORD *)v69;
        continue;
      }
    }
    else if ( a4 )
    {
      KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3, v61);
    }
    break;
  }
  v35 = v63;
LABEL_117:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65530);
  KeAbPostRelease((ULONG_PTR)&qword_140C65530);
  v62 = KeGetCurrentThread();
  v15 = v62->SpecialApcDisable++ == -1;
  if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
    KiCheckForKernelApcDelivery();
  v32 = (unsigned int)(v35 << 12);
  v33 = v35 != 0;
LABEL_51:
  v34 = (_DWORD *)v79;
  *(_QWORD *)(v79 + 8) = v32;
  result = v33 ? 0 : 0xC0000709;
  *v34 = result;
  return result;
}
