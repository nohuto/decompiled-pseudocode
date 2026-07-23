/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140549968
 * Callers:
 *     MiDecommitEnclavePages @ 0x1408D2ED4 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1409B0F04 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     RtlInterlockedSetClearRun @ 0x140331470 (RtlInterlockedSetClearRun.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeBlockEnclavePage @ 0x14051500C (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x14051522C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x140515270 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140515330 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140515374 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x140534900 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x14054A380 (MiDeleteEnclavePage.c)
 */

char __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  _KPROCESS *v14; // rdx
  unsigned int v15; // ebx
  _KPROCESS *v16; // rdx
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // r13
  int v19; // ebx
  unsigned __int8 v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  int v29; // eax
  int v30; // ebx
  int v31; // r8d
  __int64 v32; // r9
  unsigned int v33; // r10d
  unsigned int v34; // r11d
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 *v37; // rdx
  __int64 i; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  _DWORD *v42; // r9
  int v43; // ebx
  unsigned __int64 v44; // rax
  struct _KTHREAD *v45; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v47; // r15
  __int64 v48; // r14
  unsigned int v49; // edx
  __int64 v50; // rcx
  bool v51; // zf
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // ecx
  volatile signed __int32 *v56; // r9
  __int64 v57; // r10
  int v58; // r15d
  unsigned __int8 v60; // [rsp+30h] [rbp-1A8h]
  int v61; // [rsp+34h] [rbp-1A4h]
  unsigned int v62; // [rsp+3Ch] [rbp-19Ch]
  int v63; // [rsp+40h] [rbp-198h]
  ULONG_PTR v64; // [rsp+48h] [rbp-190h]
  int v65; // [rsp+58h] [rbp-180h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-178h]
  unsigned __int64 v67; // [rsp+68h] [rbp-170h]
  unsigned __int64 ValidPte; // [rsp+70h] [rbp-168h] BYREF
  __int64 v69; // [rsp+78h] [rbp-160h]
  int v70; // [rsp+80h] [rbp-158h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-150h]
  ULONG_PTR v72; // [rsp+90h] [rbp-148h]
  __int64 v73; // [rsp+98h] [rbp-140h]
  __int64 v74; // [rsp+A0h] [rbp-138h]
  __int64 v75; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v76; // [rsp+B0h] [rbp-128h]
  __int64 v77; // [rsp+B8h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-118h]
  _QWORD v79[24]; // [rsp+D0h] [rbp-108h] BYREF

  BugCheckParameter1 = a3;
  v69 = a2;
  v75 = a2;
  v76 = a3;
  ValidPte = 0LL;
  memset(v79, 0, 0xB8uLL);
  v73 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 1664;
  v77 = v7;
  v8 = 0LL;
  v67 = 0LL;
  v9 = 0;
  v64 = 0LL;
  v74 = 0LL;
  LODWORD(v79[0]) = 1;
  WORD2(v79[0]) = 0;
  v79[2] = 0LL;
  LODWORD(v79[1]) = 20;
  v79[3] = 0LL;
  v10 = 2;
  v63 = 2;
  v60 = MiLockWorkingSetShared(v7, v11, v12, v13);
  v15 = 0;
  while ( 1 )
  {
    v62 = v15;
    if ( v15 >= v10 )
      break;
    if ( v15 == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)v79, (__int64)(BugCheckParameter1 << 25) >> 16, 1LL, 0);
      MiFlushTbList((__int64)v79, v16);
    }
    v17 = BugCheckParameter1;
    v18 = BugCheckParameter1;
    v72 = BugCheckParameter1;
    while ( v18 <= a4 )
    {
      if ( (v18 & 0x78) != 0 || v18 == v17 )
        goto LABEL_18;
      v19 = 0;
      if ( MiWorkingSetIsContended(v7)
        || KeShouldYieldProcessor()
        || v8 && (unsigned int)MiPageTableLockIsContended(v7, v8) )
      {
        v19 = 1;
      }
      if ( v19 != 1 )
      {
LABEL_18:
        v20 = v60;
      }
      else
      {
        if ( v8 )
        {
          MiFlushTbList((__int64)v79, v14);
          MiUnlockPageTableInternal(v7, v8);
          v8 = 0LL;
          v67 = 0LL;
        }
        v20 = v60;
        MiUnlockWorkingSetShared(v7, v60);
        MiLockWorkingSetShared(v7, v21, v22, v23);
      }
      if ( v8 )
      {
        if ( (v18 & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList((__int64)v79, v14);
        MiUnlockPageTableInternal(v7, v8);
      }
      v8 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v67 = v8;
      MiMakeSystemAddressValid(v18, 0LL, (*(_DWORD *)(v73 + 48) >> 12) & 0x3F, v20, 0);
LABEL_23:
      v24 = MI_READ_PTE_LOCK_FREE(v18);
      ValidPte = v24;
      if ( !v24 )
        goto LABEL_62;
      v25 = (__int64)(v18 << 25) >> 16;
      BugCheckParameter2 = v25;
      if ( v62 )
      {
        if ( v62 == 1 )
        {
          v29 = KeRemoveEnclavePage();
          v30 = v29;
          v61 = v29;
          if ( v29 < 0 )
          {
            if ( v29 != -1073741757 || a5 )
            {
              v30 = 0;
            }
            else
            {
              if ( !v64 )
              {
                while ( 1 )
                {
                  v31 = *(_DWORD *)qword_140C4EE90;
                  v32 = *(_QWORD *)(qword_140C4EE90 + 8);
                  v33 = (*(_DWORD *)(qword_140C4EE90 + 8) & 4) != 0LL ? 0x20 : 0;
                  v70 = 0;
                  v34 = v33 + v31 - 1;
                  v35 = v32 - ((v32 & 4) != 0 ? 4 : 0);
                  if ( v31 )
                  {
                    v37 = (__int64 *)(v35 + 8 * ((unsigned __int64)v33 >> 6));
                    for ( i = *v37 | ((1LL << v33) - 1); i == -1; i = *v37 )
                    {
                      if ( (unsigned __int64)++v37 > v35 + 8 * ((unsigned __int64)v34 >> 6) )
                        goto LABEL_43;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v70 = i;
                    v36 = (unsigned int)i + ((unsigned int)(((__int64)v37 - v35) >> 3) << 6);
                    if ( (unsigned int)v36 > v34 )
                      v36 = 0xFFFFFFFFLL;
                  }
                  else
                  {
LABEL_43:
                    v36 = 0xFFFFFFFFLL;
                  }
                  v9 = v36 - v33;
                  if ( (_DWORD)v36 == -1 )
                    v9 = -1;
                  if ( v9 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140C4EE90, v9, 1u) )
                    goto LABEL_56;
                }
                MiFlushTbList((__int64)v79, (_KPROCESS *)v36);
                v39 = v77;
                MiUnlockPageTableInternal(v77, v8);
                MiUnlockWorkingSetShared(v39, v60);
                --CurrentThread->SpecialApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EE98, 0LL);
                v9 = 0;
                MiLockWorkingSetShared(v39, v40, v41, v42);
                MiMakeSystemAddressValid(v18, 0LL, (*(_DWORD *)(v73 + 48) >> 12) & 0x3F, v60, 0);
LABEL_56:
                v64 = qword_140C4EE88 + 8 * v9;
                ++v63;
                v30 = v61;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v30 < 0 )
            goto LABEL_61;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140C4EEA0);
            v43 = KeOutPageEnclavePage(v25, *(_QWORD *)(v69 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EEA0);
          }
          while ( v43 == -1073741802 );
          if ( v43 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v25, v43, 0LL);
        }
        MiDeleteEnclavePage(v18, 1LL);
      }
      else
      {
        if ( MiPteInShadowRange((unsigned __int64)&ValidPte)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
            if ( (v28 & 0x20) != 0 )
              v24 |= 0x20uLL;
            if ( (v28 & 0x42) != 0 )
              v24 |= 0x42uLL;
          }
        }
        ValidPte = MiMakeValidPte(v18, (v24 >> 12) & 0xFFFFFFFFFLL, 3221225476LL, v26);
        MiWriteValidPteNewProtection(v18, ValidPte);
      }
LABEL_61:
      MiInsertTbFlushEntry((__int64)v79, v25, 1LL, 0);
      v7 = v77;
LABEL_62:
      v18 += 8LL;
      v72 = v18;
      v17 = BugCheckParameter1;
    }
    MiFlushTbList((__int64)v79, v14);
    if ( v8 )
    {
      MiUnlockPageTableInternal(v7, v8);
      v8 = 0LL;
      v67 = 0LL;
    }
    v15 = v62 + 1;
    v10 = v63;
  }
  LOBYTE(v44) = MiUnlockWorkingSetShared(v7, v60);
  if ( v64 )
  {
    if ( v9 )
    {
      v55 = 1;
      v56 = (volatile signed __int32 *)(*(_QWORD *)(qword_140C4EE90 + 8) + 4 * ((unsigned __int64)v9 >> 5));
      v57 = v9 & 0x1F;
      LOBYTE(v44) = v57 + 1;
      if ( (unsigned __int64)(v57 + 1) > 0x20 )
      {
        v58 = v9 & 0x1F;
        if ( v58 )
        {
          LODWORD(v44) = ~(((1 << (32 - v58)) - 1) << v57);
          _InterlockedAnd(v56, v44);
          v55 = 1 - (32 - v58);
          ++v56;
        }
        if ( v55 >= 0x20 )
        {
          v44 = (unsigned __int64)v55 >> 5;
          do
          {
            *v56++ = 0;
            v55 -= 32;
            --v44;
          }
          while ( v44 );
        }
        if ( v55 )
          _InterlockedAnd(v56, -1 << v55);
      }
      else
      {
        _InterlockedAnd(v56, ~(1 << v57));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EE98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4EE98);
      v65 = 0;
      v45 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4EE98) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v45->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v45->SpecialApcDisable;
      v47 = ++v45->AbAllocationRegionCount;
      v48 = 0LL;
      v49 = ((char)v45->AbEntrySummary | (char)v45->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v51 = !_BitScanReverse((unsigned int *)&v52, v49);
        if ( v51 )
          break;
        v49 &= ~(1 << v52);
        v50 = (__int64)&v45->LockEntries[v52];
        if ( (*(_BYTE *)(v50 + 26) & 1) != 0
          && (*(_DWORD *)(v50 + 32) & 1) == 0
          && (*(_QWORD *)(v50 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4EE98 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v50 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v50 + 26) &= ~1u;
          if ( *(_QWORD *)(v50 + 32) )
          {
            v48 = v50;
            break;
          }
        }
      }
      if ( v48 )
      {
        *(_BYTE *)(v48 + 32) |= 2u;
        if ( *(__int64 *)(v48 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v48);
        v65 = *(_DWORD *)(v48 + 88) & 0x1FFFF;
        *(_DWORD *)(v48 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v48 + 25) &= ~1u;
        *(_QWORD *)(v48 + 32) = 0LL;
        v53 = (signed __int64)(v48 - (unsigned __int64)v45->LockEntries) / 96;
        if ( v47 == 1 )
          v45->AbEntrySummary |= 1 << v53;
        else
          _InterlockedOr8((volatile signed __int8 *)&v45->AbOrphanedEntrySummary, 1 << v53);
      }
      else if ( (*((_DWORD *)&v45->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v45, (ULONG_PTR)&qword_140C4EE98, SessionId, 0LL);
      }
      --v45->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v45, (__int64)&qword_140C4EE98, &v65);
      v51 = v45->SpecialApcDisable++ == -1;
      if ( v51 && ($C459BD0D405E8E46662177FB3D0A143F *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
        KiCheckForKernelApcDelivery(v54);
      LOBYTE(v44) = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return v44;
}
