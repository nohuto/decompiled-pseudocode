/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140644F2C
 * Callers:
 *     MiDecommitEnclavePages @ 0x140A3B114 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140AAA598 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1402D99E0 (KiAbThreadRemoveBoostsSlow.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     RtlInterlockedSetClearRun @ 0x14030CDB0 (RtlInterlockedSetClearRun.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBlockEnclavePage @ 0x14056DDC8 (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x14056DFD0 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14056E00C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14056E0D0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14056E10C (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x140624468 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x140645874 (MiDeleteEnclavePage.c)
 */

char __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned int v9; // r14d
  ULONG_PTR v10; // r13
  unsigned int i; // eax
  ULONG_PTR v12; // rax
  ULONG_PTR j; // r12
  int v14; // eax
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // edi
  int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  __int64 v23; // r8
  __int64 *v24; // r14
  __int64 k; // rcx
  unsigned __int64 v26; // rax
  struct _KTHREAD *v27; // r14
  __int64 v28; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v30; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  int SessionId; // eax
  int v36; // edi
  _QWORD *v37; // rax
  struct _KTHREAD *v38; // rcx
  unsigned int v40; // ecx
  volatile signed __int32 *v41; // r9
  __int64 v42; // r10
  int v43; // r14d
  unsigned __int8 v45; // [rsp+30h] [rbp-1A8h]
  int v46; // [rsp+34h] [rbp-1A4h]
  __int64 v47; // [rsp+40h] [rbp-198h]
  unsigned __int64 v48; // [rsp+48h] [rbp-190h]
  unsigned int v49; // [rsp+50h] [rbp-188h]
  unsigned int v50; // [rsp+54h] [rbp-184h]
  unsigned __int64 ValidPte; // [rsp+58h] [rbp-180h] BYREF
  ULONG_PTR v52; // [rsp+60h] [rbp-178h]
  unsigned int v53; // [rsp+68h] [rbp-170h]
  int v54; // [rsp+6Ch] [rbp-16Ch]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-168h]
  __int64 v56; // [rsp+78h] [rbp-160h]
  int v57; // [rsp+80h] [rbp-158h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-150h]
  ULONG_PTR v59; // [rsp+90h] [rbp-148h]
  __int64 v60; // [rsp+98h] [rbp-140h]
  __int64 v61; // [rsp+A0h] [rbp-138h]
  __int64 v62; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v63; // [rsp+B0h] [rbp-128h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-120h]
  __int64 v65; // [rsp+C0h] [rbp-118h]
  _QWORD v66[24]; // [rsp+D0h] [rbp-108h] BYREF

  BugCheckParameter1 = a3;
  v56 = a2;
  v62 = a2;
  v63 = a3;
  ValidPte = 0LL;
  memset(v66, 0, 0xB8uLL);
  v60 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 1664;
  v47 = v7;
  v8 = 0LL;
  v48 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  v54 = 0;
  LODWORD(v66[0]) = 1;
  WORD2(v66[0]) = 0;
  v66[2] = 0LL;
  LODWORD(v66[1]) = 20;
  v66[3] = 0LL;
  v49 = 2;
  v45 = MiLockWorkingSetShared(v7);
  for ( i = 0; ; i = v50 + 1 )
  {
    v50 = i;
    if ( i >= v49 )
      break;
    if ( i == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)v66, (__int64)(BugCheckParameter1 << 25) >> 16, 1LL, 0);
      MiFlushTbList((int *)v66);
      v8 = v48;
    }
    v12 = BugCheckParameter1;
    for ( j = BugCheckParameter1; ; j += 8LL )
    {
      v52 = j;
      if ( j > a4 )
        break;
      if ( (j & 0x78) == 0 && j != v12 )
      {
        LODWORD(ValidPte) = 0;
        if ( MiWorkingSetIsContended(v47)
          || KeShouldYieldProcessor()
          || v8 && (unsigned int)MiPageTableLockIsContended(v47, v8) )
        {
          v14 = 1;
        }
        else
        {
          v14 = ValidPte;
        }
        if ( v14 )
        {
          if ( v8 )
          {
            MiFlushTbList((int *)v66);
            MiUnlockPageTableInternal(v47, v8);
            v8 = 0LL;
            v48 = 0LL;
          }
          MiUnlockWorkingSetShared(v47, v45);
          MiLockWorkingSetShared(v47);
        }
      }
      if ( v8 )
      {
        if ( (j & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList((int *)v66);
        MiUnlockPageTableInternal(v47, v8);
      }
      v48 = ((j >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(j, 0LL, (*(_DWORD *)(v60 + 48) >> 12) & 0x7F, v45, 0);
LABEL_23:
      ValidPte = MI_READ_PTE_LOCK_FREE(j);
      if ( !ValidPte )
        goto LABEL_67;
      v15 = (__int64)(j << 25) >> 16;
      BugCheckParameter2 = v15;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          v17 = KeRemoveEnclavePage();
          v18 = v17;
          v46 = v17;
          if ( v17 < 0 )
          {
            if ( v17 != -1073741757 || a5 )
            {
              v18 = 0;
            }
            else
            {
              if ( !v10 )
              {
                while ( 1 )
                {
                  v19 = *(_DWORD *)qword_140C69518;
                  v20 = *(_QWORD *)(qword_140C69518 + 8);
                  v21 = (*(_DWORD *)(qword_140C69518 + 8) & 4) != 0LL ? 0x20 : 0;
                  v57 = 0;
                  v22 = v21 + v19 - 1;
                  v23 = v20 - ((v20 & 4) != 0 ? 4 : 0);
                  if ( !v19 )
                    goto LABEL_32;
                  v24 = (__int64 *)(v23 + 8 * ((unsigned __int64)v21 >> 6));
                  for ( k = ((1LL << v21) - 1) | *v24; k == -1; k = *v24 )
                  {
                    if ( (unsigned __int64)++v24 > v23 + 8 * ((unsigned __int64)v22 >> 6) )
                      goto LABEL_32;
                  }
                  _BitScanForward64(&v26, ~k);
                  v57 = v26;
                  v9 = v26 + ((unsigned int)(((__int64)v24 - v23) >> 3) << 6);
                  if ( v9 <= v22 )
                  {
                    if ( v9 != -1 )
                      v9 -= v21;
                  }
                  else
                  {
LABEL_32:
                    v9 = -1;
                  }
                  if ( v9 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140C69518, v9, 1u) )
                    goto LABEL_61;
                }
                MiFlushTbList((int *)v66);
                MiUnlockPageTableInternal(v47, v48);
                MiUnlockWorkingSetShared(v47, v45);
                --CurrentThread->SpecialApcDisable;
                v53 = 0;
                v65 = 0LL;
                v27 = KeGetCurrentThread();
                v28 = 0LL;
                _disable();
                AbEntrySummary = v27->AbEntrySummary;
                if ( v27->AbEntrySummary
                  || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C69520, (__int64)v27)) != 0 )
                {
                  _BitScanForward(&v30, AbEntrySummary);
                  v53 = v30;
                  v27->AbEntrySummary = AbEntrySummary & ~(1 << v30);
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                  if ( SchedulerAssist )
                  {
                    _m_prefetchw(SchedulerAssist);
                    v33 = *SchedulerAssist;
                    do
                    {
                      v34 = v33;
                      v33 = _InterlockedCompareExchange(SchedulerAssist, v33 & 0xFFDFFFFF, v33);
                    }
                    while ( v34 != v33 );
                    if ( (v33 & 0x200000) != 0 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                  _enable();
                  v28 = (__int64)(&v27[1].Process + 12 * v53);
                  if ( (unsigned __int64)&qword_140C69520 - qword_140C65668 >= 0x8000000000LL )
                    SessionId = -1;
                  else
                    SessionId = MmGetSessionIdEx((__int64)v27->ApcState.Process);
                  *(_DWORD *)(v28 + 8) = SessionId;
                  *(_QWORD *)v28 = (unsigned __int64)&qword_140C69520 & 0x7FFFFFFFFFFFFFFCLL;
                }
                if ( (_DWORD)v65 )
                  KiAbThreadRemoveBoostsSlow((ULONG_PTR)v27, (__int64)&qword_140C69520, v65);
                if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69520, 0LL) )
                  ExfAcquirePushLockExclusiveEx(&qword_140C69520, v28, (__int64)&qword_140C69520);
                if ( v28 )
                  *(_BYTE *)(v28 + 18) = 1;
                v9 = 0;
                MiLockWorkingSetShared(v47);
                MiMakeSystemAddressValid(v52, 0LL, (*(_DWORD *)(v60 + 48) >> 12) & 0x7F, v45, 0);
LABEL_61:
                v10 = qword_140C69510 + 8 * v9;
                v59 = v10;
                ++v49;
                v18 = v46;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v18 < 0 )
            goto LABEL_66;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140C69528);
            v36 = KeOutPageEnclavePage(v15, *(_QWORD *)(v56 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C69528);
          }
          while ( v36 == -1073741802 );
          if ( v36 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v15, v36, 0LL);
        }
        MiDeleteEnclavePage(v52, 1LL);
      }
      else
      {
        v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
        ValidPte = MiMakeValidPte(v52, (v16 >> 12) & 0xFFFFFFFFFFLL, -1073741820);
        MiWriteValidPteNewProtection(v52, ValidPte);
      }
LABEL_66:
      MiInsertTbFlushEntry((__int64)v66, v15, 1LL, 0);
      j = v52;
LABEL_67:
      v8 = v48;
      v12 = BugCheckParameter1;
    }
    MiFlushTbList((int *)v66);
    v7 = v47;
    if ( v8 )
    {
      MiUnlockPageTableInternal(v47, v8);
      v8 = 0LL;
      v48 = 0LL;
    }
  }
  LOBYTE(v37) = MiUnlockWorkingSetShared(v7, v45);
  if ( v10 )
  {
    if ( v9 )
    {
      v40 = 1;
      v41 = (volatile signed __int32 *)(*(_QWORD *)(qword_140C69518 + 8) + 4 * ((unsigned __int64)v9 >> 5));
      v42 = v9 & 0x1F;
      LOBYTE(v37) = v42 + 1;
      if ( (unsigned __int64)(v42 + 1) > 0x20 )
      {
        v43 = v9 & 0x1F;
        if ( v43 )
        {
          LODWORD(v37) = ~(((1 << (32 - v43)) - 1) << v42);
          _InterlockedAnd(v41, (unsigned int)v37);
          v40 = 1 - (32 - v43);
          ++v41;
        }
        if ( v40 >= 0x20 )
        {
          v37 = (_QWORD *)((unsigned __int64)v40 >> 5);
          do
          {
            *v41++ = 0;
            v40 -= 32;
            v37 = (_QWORD *)((char *)v37 - 1);
          }
          while ( v37 );
        }
        if ( v40 )
          _InterlockedAnd(v41, -1 << v40);
      }
      else
      {
        _InterlockedAnd(v41, ~(1 << v42));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69520, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69520);
      LOBYTE(v37) = KeAbPostRelease((ULONG_PTR)&qword_140C69520);
      v38 = CurrentThread;
      if ( CurrentThread->SpecialApcDisable++ == -1 )
      {
        v37 = &v38->152;
        if ( (_QWORD *)*v37 != v37 )
          LOBYTE(v37) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v37;
}
