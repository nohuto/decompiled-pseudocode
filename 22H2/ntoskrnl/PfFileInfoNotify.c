/*
 * XREFs of PfFileInfoNotify @ 0x14029DC90
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExRundownCompleted @ 0x1402517A0 (ExRundownCompleted.c)
 *     PfLogDeleteHelper @ 0x14026E3C8 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14026E544 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x14026E634 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14026E710 (PfFbLogEntryComplete.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     PfSnLogPageFaultCommon @ 0x14029B6DC (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x14029E950 (PfSnReferenceProcessTrace.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     PfSnCheckLoggingForThread @ 0x1402F3958 (PfSnCheckLoggingForThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     _wcsupr @ 0x1403D1CF0 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x140601860 (PfpRpFileKeyUpdate.c)
 *     PfSnLogVolumeCreate @ 0x14062E2BC (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x14062EED4 (PfSnLogStreamCreate.c)
 *     PfSnNameRemoveAll @ 0x14067CFFC (PfSnNameRemoveAll.c)
 */

__int64 __fastcall PfFileInfoNotify(__int64 a1)
{
  _DWORD *v1; // rsi
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbx
  unsigned __int64 *v17; // rdi
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rdx
  PSLIST_ENTRY j; // rcx
  int v22; // r14d
  unsigned __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _SLIST_ENTRY *Next; // rdi
  __int64 v28; // r14
  unsigned __int64 v29; // r12
  __int64 v30; // r15
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rdi
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // edx
  const void *v38; // r12
  int v39; // ebx
  unsigned int v40; // r13d
  unsigned int v41; // r15d
  unsigned int *v42; // rdi
  int v43; // r9d
  wchar_t *v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  unsigned __int64 v47; // r15
  _QWORD *v48; // rcx
  int *v49; // r8
  unsigned __int64 v50; // rdx
  int v51; // ecx
  __int64 v52; // rdx
  int v53; // ecx
  int *v54; // rcx
  int v55; // edx
  int v56; // eax
  unsigned int v57; // r13d
  unsigned int *v58; // rdi
  __int16 v59; // cx
  int v60; // ecx
  struct _KTHREAD *v61; // rax
  unsigned int v62; // r12d
  struct _KTHREAD *v63; // rax
  struct _KTHREAD *v64; // r14
  unsigned int v65; // r8d
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // r15
  __int64 v69; // rcx
  struct _KTHREAD *v70; // rbx
  unsigned int v71; // edx
  __int64 v72; // rcx
  __int64 v73; // r15
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rdx
  int v77; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v79; // r12d
  struct _KTHREAD *v80; // rax
  __int64 i; // r14
  struct _KTHREAD *v82; // r14
  unsigned int SessionId; // r8d
  unsigned int v84; // edx
  __int64 v85; // rcx
  __int64 v86; // r15
  __int64 v87; // rdx
  __int64 v88; // rcx
  struct _KTHREAD *v89; // rbx
  unsigned int v90; // edx
  __int64 v91; // rcx
  __int64 v92; // r15
  __int64 v93; // rdx
  __int64 v94; // rcx
  _SLIST_ENTRY *v95; // rcx
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-51h] BYREF
  unsigned int *v97; // [rsp+50h] [rbp-49h] BYREF
  int v98; // [rsp+58h] [rbp-41h] BYREF
  int v99; // [rsp+5Ch] [rbp-3Dh]
  __int64 v100; // [rsp+60h] [rbp-39h]
  unsigned __int64 v101; // [rsp+68h] [rbp-31h]
  _QWORD v102[2]; // [rsp+70h] [rbp-29h] BYREF
  int v103; // [rsp+80h] [rbp-19h]
  int v104; // [rsp+84h] [rbp-15h]
  __int128 v105; // [rsp+88h] [rbp-11h]
  __int128 v106; // [rsp+98h] [rbp-1h]
  unsigned __int64 v107; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 v109; // [rsp+100h] [rbp+67h]
  unsigned __int8 v110; // [rsp+100h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v112; // [rsp+100h] [rbp+67h]
  __int64 v113; // [rsp+108h] [rbp+6Fh]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)a1 == 15;
  v99 = 0;
  v104 = 0;
  ListEntry = 0LL;
  v97 = 0LL;
  if ( !v2 )
  {
    v22 = -1073741811;
    goto LABEL_62;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 4);
    if ( v34 == 7 )
    {
      v1[4] = _InterlockedIncrement(&dword_140CEC350);
      return 0;
    }
    v60 = v34 - 10;
    if ( v60 )
    {
      v77 = v60 - 1;
      if ( v77 )
      {
        if ( v77 != 1 )
        {
LABEL_123:
          v22 = -1073741637;
          goto LABEL_62;
        }
        if ( (dword_140C50550 & 2) != 0 )
        {
          v22 = -1073741431;
          goto LABEL_62;
        }
        return 0;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50408, 0LL);
      v79 = -1;
      if ( qword_140C503F8 )
      {
        v80 = KeGetCurrentThread();
        --v80->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50410, 0LL);
        dword_140C50428 |= 1u;
        for ( i = qword_140C50418; (__int64 *)i != &qword_140C50418; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50410, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50410);
        v82 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_140C50410) == 1 )
          SessionId = MmGetSessionIdEx(v82->ApcState.Process);
        else
          SessionId = -1;
        --v82->SpecialApcDisable;
        ++v82->AbAllocationRegionCount;
        v84 = ((char)v82->AbEntrySummary | (char)v82->AbOrphanedEntrySummary) ^ 0x3F;
        AbAllocationRegionCount = v82->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v85, v84);
        if ( v2 )
          goto LABEL_148;
        while ( 1 )
        {
          v86 = (__int64)&v82->LockEntries[v85];
          v84 &= ~(1 << v85);
          if ( (*(_BYTE *)(v86 + 26) & 1) != 0
            && (*(_DWORD *)(v86 + 32) & 1) == 0
            && (*(_QWORD *)(v86 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50410 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v86 + 40) == SessionId )
          {
            *(_BYTE *)(v86 + 26) &= ~1u;
            if ( *(_QWORD *)(v86 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v85, v84);
          if ( v2 )
            goto LABEL_148;
        }
        if ( !v86 )
        {
LABEL_148:
          if ( (*((_DWORD *)&v82->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v82, (ULONG_PTR)&qword_140C50410, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v86 + 32) |= 2u;
          if ( *(__int64 *)(v86 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v86);
          *(_DWORD *)(v86 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v86 + 25) &= ~1u;
          *(_QWORD *)(v86 + 32) = 0LL;
          v87 = (signed __int64)(v86 - (unsigned __int64)v82->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v82->AbEntrySummary |= 1 << v87;
          else
            _InterlockedOr8((volatile signed __int8 *)&v82->AbOrphanedEntrySummary, 1 << v87);
        }
        --v82->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v82);
        v2 = v82->SpecialApcDisable++ == -1;
        if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
          KiCheckForKernelApcDelivery(v88);
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50400);
        ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50400);
        qword_140C503F8 = 0LL;
        v22 = 0;
      }
      else
      {
        v22 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50408);
      v89 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_140C50408) == 1 )
        v79 = MmGetSessionIdEx(v89->ApcState.Process);
      --v89->SpecialApcDisable;
      ++v89->AbAllocationRegionCount;
      v90 = ((char)v89->AbEntrySummary | (char)v89->AbOrphanedEntrySummary) ^ 0x3F;
      v112 = v89->AbAllocationRegionCount;
      v2 = !_BitScanReverse((unsigned int *)&v91, v90);
      if ( v2 )
        goto LABEL_172;
      while ( 1 )
      {
        v92 = (__int64)&v89->LockEntries[v91];
        v90 &= ~(1 << v91);
        if ( (*(_BYTE *)(v92 + 26) & 1) != 0
          && (*(_DWORD *)(v92 + 32) & 1) == 0
          && (*(_QWORD *)(v92 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50408 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v92 + 40) == v79 )
        {
          *(_BYTE *)(v92 + 26) &= ~1u;
          if ( *(_QWORD *)(v92 + 32) )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v91, v90);
        if ( v2 )
          goto LABEL_172;
      }
      if ( !v92 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v89->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v89, (ULONG_PTR)&qword_140C50408, v79, 0LL);
      }
      else
      {
        *(_BYTE *)(v92 + 32) |= 2u;
        if ( *(__int64 *)(v92 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v92);
        *(_DWORD *)(v92 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v92 + 25) &= ~1u;
        *(_QWORD *)(v92 + 32) = 0LL;
        v93 = (signed __int64)(v92 - (unsigned __int64)v89->LockEntries) / 96;
        if ( v112 == 1 )
          v89->AbEntrySummary |= 1 << v93;
        else
          _InterlockedOr8((volatile signed __int8 *)&v89->AbOrphanedEntrySummary, 1 << v93);
      }
      --v89->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v89);
      v2 = v89->SpecialApcDisable++ == -1;
      if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v89->ApcState.ApcListHead[0].Flink != &v89->152 )
        KiCheckForKernelApcDelivery(v94);
    }
    else
    {
      v61 = KeGetCurrentThread();
      --v61->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50408, 0LL);
      v62 = -1;
      if ( qword_140C503F8 )
      {
        v22 = -1073741791;
      }
      else
      {
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50410, 0LL);
        dword_140C50428 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50410, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50410);
        v64 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_140C50410) == 1 )
          v65 = MmGetSessionIdEx(v64->ApcState.Process);
        else
          v65 = -1;
        --v64->SpecialApcDisable;
        ++v64->AbAllocationRegionCount;
        v66 = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
        v109 = v64->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v67, v66);
        if ( v2 )
          goto LABEL_85;
        while ( 1 )
        {
          v68 = (__int64)&v64->LockEntries[v67];
          v66 &= ~(1 << v67);
          if ( (*(_BYTE *)(v68 + 26) & 1) != 0
            && (*(_DWORD *)(v68 + 32) & 1) == 0
            && (*(_QWORD *)(v68 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50410 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v68 + 40) == v65 )
          {
            *(_BYTE *)(v68 + 26) &= ~1u;
            if ( *(_QWORD *)(v68 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v67, v66);
          if ( v2 )
            goto LABEL_85;
        }
        if ( !v68 )
        {
LABEL_85:
          if ( (*((_DWORD *)&v64->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v64, (ULONG_PTR)&qword_140C50410, v65, 0LL);
        }
        else
        {
          *(_BYTE *)(v68 + 32) |= 2u;
          if ( *(__int64 *)(v68 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v68);
          *(_DWORD *)(v68 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v68 + 25) &= ~1u;
          *(_QWORD *)(v68 + 32) = 0LL;
          v75 = (signed __int64)(v68 - (unsigned __int64)v64->LockEntries) / 96;
          if ( v109 == 1 )
            v64->AbEntrySummary |= 1 << v75;
          else
            _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v75);
        }
        --v64->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v64);
        v2 = v64->SpecialApcDisable++ == -1;
        if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
          KiCheckForKernelApcDelivery(v69);
        KeLeaveCriticalRegion();
        (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        qword_140C503F8 = *((_QWORD *)v1 + 2);
        v22 = 0;
        _InterlockedExchange64((volatile __int64 *)&stru_140C50400, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50408);
      v70 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_140C50408) == 1 )
        v62 = MmGetSessionIdEx(v70->ApcState.Process);
      --v70->SpecialApcDisable;
      ++v70->AbAllocationRegionCount;
      v71 = ((char)v70->AbEntrySummary | (char)v70->AbOrphanedEntrySummary) ^ 0x3F;
      v110 = v70->AbAllocationRegionCount;
      v2 = !_BitScanReverse((unsigned int *)&v72, v71);
      if ( v2 )
        goto LABEL_97;
      while ( 1 )
      {
        v73 = (__int64)&v70->LockEntries[v72];
        v71 &= ~(1 << v72);
        if ( (*(_BYTE *)(v73 + 26) & 1) != 0
          && (*(_DWORD *)(v73 + 32) & 1) == 0
          && (*(_QWORD *)(v73 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50408 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v73 + 40) == v62 )
        {
          *(_BYTE *)(v73 + 26) &= ~1u;
          if ( *(_QWORD *)(v73 + 32) )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v72, v71);
        if ( v2 )
          goto LABEL_97;
      }
      if ( !v73 )
      {
LABEL_97:
        if ( (*((_DWORD *)&v70->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v70, (ULONG_PTR)&qword_140C50408, v62, 0LL);
      }
      else
      {
        *(_BYTE *)(v73 + 32) |= 2u;
        if ( *(__int64 *)(v73 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v73);
        *(_DWORD *)(v73 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v73 + 25) &= ~1u;
        *(_QWORD *)(v73 + 32) = 0LL;
        v76 = (signed __int64)(v73 - (unsigned __int64)v70->LockEntries) / 96;
        if ( v110 == 1 )
          v70->AbEntrySummary |= 1 << v76;
        else
          _InterlockedOr8((volatile signed __int8 *)&v70->AbOrphanedEntrySummary, 1 << v76);
      }
      --v70->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v70);
      v2 = v70->SpecialApcDisable++ == -1;
      if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v70->ApcState.ApcListHead[0].Flink != &v70->152 )
        KiCheckForKernelApcDelivery(v74);
    }
    KeLeaveCriticalRegion();
    goto LABEL_20;
  }
  if ( (v3 & 4) != 0 )
  {
    v46 = *(_DWORD *)(a1 + 4);
    if ( v46 == 2 )
    {
      PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else if ( v46 )
    {
      if ( v46 == 3 )
        PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (v1[2] & 1) == 0 )
    return 0;
  if ( dword_140C4FDE0 >= (unsigned int)dword_140C4FDE4 )
  {
    v53 = v1[1];
    v4 = v53;
    if ( v53 != 4 && v53 != 2 && v53 != 3 )
    {
      v22 = -1073741697;
      goto LABEL_62;
    }
  }
  else
  {
    v4 = v1[1];
  }
  if ( v4 == 4 )
  {
    v5 = *((_QWORD *)v1 + 2);
    v6 = *(unsigned int *)(v5 + 16) + 4095LL;
    v7 = (v6 + (unsigned __int64)(*(_DWORD *)(v5 + 8) & 0xFFF)) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v28 = *(_QWORD *)(v5 + 32);
      v29 = (v6 + (unsigned __int64)(*(_DWORD *)(v5 + 8) & 0xFFF)) >> 12;
      v30 = *(_QWORD *)(v5 + 8);
      v31 = *(_QWORD *)(v5 + 24);
      v113 = *(_QWORD *)v5;
      v32 = PfSnReferenceProcessTrace(*(_QWORD *)(v28 + 544));
      v33 = (struct _EX_RUNDOWN_REF *)v32;
      if ( v32 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v28, v32, 0LL) )
        {
          v47 = v30 & 0xFFFFFFFFFFFFF000uLL;
          if ( v7 )
          {
            do
            {
              if ( (int)PfSnLogPageFaultCommon((__int64)v33, v113, v31, v47, 0) < 0 )
                break;
              v47 += 4096LL;
              --v29;
            }
            while ( v29 );
            v1 = (_DWORD *)a1;
          }
        }
        ExReleaseRundownProtection(v33 + 45);
      }
    }
    if ( dword_140C4FDE0 < (unsigned int)dword_140C4FDE4 )
    {
      v8 = *((_QWORD *)v1 + 2);
      v9 = *(_QWORD *)(v8 + 32);
      v10 = *(int *)(v8 + 20);
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 24);
      v13 = *(_QWORD *)(v9 + 544);
      v14 = (*(_DWORD *)(v9 + 1296) >> 12) & 7;
      if ( (*(_DWORD *)(v13 + 1124) & 0x100000) != 0 )
      {
        v56 = 2;
        if ( v14 < 2 )
          v56 = (*(_DWORD *)(v9 + 1296) >> 12) & 7;
        v14 = v56;
      }
      if ( v14 < dword_140C4E82C )
      {
        v22 = 0;
        goto LABEL_20;
      }
      v15 = *(_QWORD *)(v13 + 1088);
      *(_QWORD *)&v106 = v7 | (v10 << 63);
      v16 = 0LL;
      v17 = 0LL;
      v18 = (v15 ^ *(_QWORD *)(v13 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v105 = v12;
      *((_QWORD *)&v106 + 1) = v18;
      v107 = __PAIR64__(v15, dword_140CEC350);
      *((_QWORD *)&v105 + 1) = v11 >> 12;
      v19 = dword_140C502DC
          + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
      if ( ExAcquireRundownProtection(&stru_140C4FD20) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_140C4FD40); !j; j = RtlpInterlockedPopEntrySList(&stru_140C4FD40) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140C4FD30);
            if ( j )
              break;
            v22 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_140C4FD78)(&stru_140C4FD20);
            if ( v22 < 0 )
              goto LABEL_190;
          }
          v20 = *((_QWORD *)&j[1].Next + 1);
          if ( (__int64)j[2].Next - v20 >= 64 )
          {
            v17 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v16 = j;
            v22 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          ((void (*)(void))qword_140C4FD80)();
          if ( !ExAcquireRundownProtection(&stru_140C4FD20) )
            goto LABEL_185;
        }
        RtlpInterlockedPushEntrySList(&stru_140C4FD30, j);
        v22 = -1073741789;
LABEL_190:
        ++dword_140C4FD8C;
        dword_140C4FD90 += 64;
        ExReleaseRundownProtection(&stru_140C4FD20);
LABEL_16:
        if ( v22 >= 0 )
        {
          v23 = *v17;
          v24 = v105;
          *((_DWORD *)v17 + 2) = v19;
          v25 = v106;
          *v17 = v23 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v17 + 1) = v24;
          *(_QWORD *)&v24 = v107;
          *((_OWORD *)v17 + 2) = v25;
          v17[6] = v24;
          *((_QWORD *)&v16[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v16[2].Next + 2);
          Next = v16[1].Next;
          if ( (__int64)v16[2].Next - *((_QWORD *)&v16[1].Next + 1) < SLODWORD(Next[5].Next) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Next)(v16);
          }
          else
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v16);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
          }
          v22 = 0;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_185:
        v22 = -1073741431;
      }
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FED0 + 1, 1u);
      if ( v16 )
      {
        v95 = v16;
LABEL_188:
        PfFbLogEntryComplete(v95, v20, 0LL);
      }
LABEL_20:
      if ( v22 >= 0 )
        return (unsigned int)v22;
      goto LABEL_62;
    }
    v22 = -1073741697;
LABEL_62:
    if ( (int)v1[1] <= 3 )
      ++dword_140C4FEE4;
    return (unsigned int)v22;
  }
  switch ( v4 )
  {
    case 0:
      v57 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL);
      v41 = (v57 + 65) & 0xFFFFFFF8;
      v22 = PfFbLogEntryReserve(&stru_140C4FCA0, &ListEntry, &v97, v41);
      if ( v22 < 0 )
        goto LABEL_180;
      v58 = v97;
      *v97 = (8 * v41) | *v97 & 0x80000002 | 2;
      v58[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 52LL);
      v58[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 56LL);
      *((_QWORD *)v58 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v58[9] ^= (v58[9] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF;
      v58[9] ^= ((unsigned __int8)v58[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v58 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v58[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 24LL);
      v59 = 2 * *(_WORD *)(*((_QWORD *)v1 + 2) + 30LL);
      *((_WORD *)v58 + 20) = v59;
      *((_WORD *)v58 + 21) = v59;
      memmove(v58 + 14, *(const void **)(*((_QWORD *)v1 + 2) + 40LL), v57);
      v44 = (wchar_t *)(v58 + 14);
      *((_WORD *)v58 + *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL) + 28) = 0;
      goto LABEL_33;
    case 1:
      PfLogDeleteHelper(2, *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL), *(_DWORD *)(*((_QWORD *)v1 + 2) + 56LL), 0);
      return 0;
    case 2:
      v35 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v35 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v35 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C50358, v35, 1LL);
      if ( dword_140C4FDE0 >= (unsigned int)dword_140C4FDE4 )
      {
        v22 = -1073741697;
        goto LABEL_62;
      }
      v36 = *((_QWORD *)v1 + 2);
      v37 = *(_DWORD *)(v36 + 32);
      v38 = (const void *)(*(_QWORD *)(v36 + 24) + 2LL * (unsigned __int16)v37);
      v39 = HIWORD(v37) - (unsigned __int16)v37;
      v40 = 2 * v39;
      v41 = (2 * v39 + 53) & 0xFFFFFFF8;
      v22 = PfFbLogEntryReserve(&stru_140C4FCA0, &ListEntry, &v97, v41);
      if ( v22 >= 0 )
      {
        v42 = v97;
        *v97 = *v97 & 0x80000000 | (8 * ((v40 + 53) & 0xFFFFFF8));
        v42[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 40LL);
        v42[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 44LL);
        *((_QWORD *)v42 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
        v42[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL);
        *((_QWORD *)v42 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
        v42[10] ^= (v42[10] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL)) & 1;
        v43 = v42[10] ^ ((unsigned __int8)v42[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL) >> 3)) & 2;
        v42[10] = v43;
        v42[10] = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL))) & 4;
        *((_WORD *)v42 + 21) = v39;
        memmove(v42 + 11, v38, v40);
        v44 = (wchar_t *)(v42 + 11);
        *((_WORD *)v42 + *((unsigned __int16 *)v42 + 21) + 22) = 0;
LABEL_33:
        wcsupr(v44);
        PfFbLogEntryComplete(ListEntry, v45, v41);
        return 0;
      }
LABEL_180:
      v95 = ListEntry;
      if ( !ListEntry )
        goto LABEL_20;
      goto LABEL_188;
    case 3:
      v52 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v52 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v52 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C50358, v52, 0LL);
      if ( dword_140C4FDE0 < (unsigned int)dword_140C4FDE4 )
      {
        PfLogDeleteHelper(
          0,
          *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL),
          *(_DWORD *)(*((_QWORD *)v1 + 2) + 44LL),
          (*(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL) >> 3) & 1);
        return 0;
      }
      v22 = -1073741697;
      goto LABEL_62;
    case 8:
      v54 = (int *)*((_QWORD *)v1 + 2);
      v49 = &v98;
      v99 = 0;
      v55 = *v54;
      v98 = v54[1];
      v100 = *((_QWORD *)v54 + 1);
      v101 = (*((_QWORD *)v54 + 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL | (2LL * (v55 & 3));
      v50 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v51 = 24;
      goto LABEL_52;
    case 13:
      v48 = (_QWORD *)*((_QWORD *)v1 + 2);
      if ( !v48[1] )
      {
        v22 = -1073741747;
        goto LABEL_62;
      }
      v102[1] = v48[1];
      v49 = (int *)v102;
      v103 = dword_140CEC350;
      v102[0] = *v48;
      v104 = 0;
      v50 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v51 = 31;
LABEL_52:
      PfLogEvent(v51, dword_140C502DC + (v50 >> 10), v49, 0x18u);
      v22 = 0;
      break;
    default:
      goto LABEL_123;
  }
  return (unsigned int)v22;
}
