/*
 * XREFs of ACPIDevicePowerDpc @ 0x1C0020030
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C00136BC (ACPIDevicePowerProcessPhase3.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     ACPIInternalMovePowerList @ 0x1C001E594 (ACPIInternalMovePowerList.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001EAE8 (ACPIDeviceCompleteRequest.c)
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C0020800 (WPP_RECORDER_SF_qsLLdqss.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0029294 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C0029398 (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIDeviceRecordDependencies @ 0x1C002953C (ACPIDeviceRecordDependencies.c)
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C002ADE8 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C002B9D4 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x1C0031938 (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C0052110 (ACPIMovePowerListUnblockedItems.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  PVOID *v5; // rdi
  PVOID *v6; // rbx
  struct _SLIST_ENTRY *v7; // rcx
  PVOID *p_Next; // rbx
  char v9; // bp
  PVOID *v10; // rsi
  struct _SLIST_ENTRY *v11; // r14
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // ebx
  __int64 v14; // rdx
  int v15; // edx
  char v16; // si
  __int64 v17; // rcx
  void *v18; // r10
  __int64 v19; // rax
  void *v20; // r9
  __int64 v21; // r8
  const char *v22; // r8
  PVOID *v23; // rdi
  struct _SLIST_ENTRY *v24; // rsi
  unsigned __int32 v25; // eax
  __int64 v26; // rdx
  int v27; // edx
  char v28; // di
  __int64 v29; // r8
  void *v30; // r10
  __int64 v31; // rax
  void *v32; // r9
  __int64 v33; // rcx
  const char *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  _SLIST_ENTRY *v39; // rcx
  struct _SLIST_ENTRY **v40; // rax
  struct _SLIST_ENTRY **v41; // rax
  _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v43; // rax
  struct _SLIST_ENTRY **v44; // rax
  __int64 i; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-88h]
  int v47; // [rsp+48h] [rbp-60h]
  PVOID Entry[2]; // [rsp+70h] [rbp-38h] BYREF

  Entry[1] = Entry;
  Entry[0] = Entry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v4 = AcpiPowerDpcFlags;
  while ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    AcpiPowerDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
      ACPIInternalMovePowerList(&AcpiPowerQueueList, (__int64)Entry);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
    if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
    {
      if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
        ACPIInternalMovePowerList(&AcpiPowerBlockedOnPhase3List, (__int64)Entry);
    }
    else
    {
      if ( Entry[0] == Entry )
        goto LABEL_9;
      ACPIDeviceRecordBlockedOnPhase3List(Entry);
    }
    if ( Entry[0] != Entry )
    {
      ACPIDeviceRecordDependencies(Entry);
      ACPIInternalMovePowerList(Entry, (__int64)&AcpiPowerPhase0List);
    }
LABEL_9:
    if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
      ACPIDevicePowerProcessBlockedItems();
    v5 = (PVOID *)AcpiPowerPhase0List;
    if ( AcpiPowerPhase0List != &AcpiPowerPhase0List )
    {
      v9 = 1;
      while ( 1 )
      {
        v10 = (PVOID *)*v5;
        v11 = (struct _SLIST_ENTRY *)v5;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)v5 + 52, 1, 1);
        v13 = v12;
        if ( v12 >= 5 )
LABEL_124:
          KeBugCheckEx(0xA3u, 1uLL, 0xC1743uLL, 0LL, 0LL);
        _mm_lfence();
        v14 = AcpiDevicePowerProcessPhase0Dispatch[v12];
        if ( !v14 )
          goto LABEL_39;
        _InterlockedCompareExchange((volatile signed __int32 *)v5 + 52, 1, v12);
        if ( (*(int (__fastcall **)(PVOID *))(v14 + 8LL * *((int *)v5 + 12)))(v5) < 0 )
          break;
LABEL_43:
        if ( v5 == &AcpiPowerPhase0List )
        {
          if ( v9 )
            ACPIInternalMovePowerList(&AcpiPowerPhase0List, (__int64)&AcpiPowerPhase1List);
          goto LABEL_12;
        }
      }
      v13 = 0;
LABEL_39:
      v5 = v10;
      if ( v13 == 1 )
      {
        v15 = *((_DWORD *)&v11[3].Next + 2);
        if ( (v15 & 0x10000000) != 0
          || (v16 = 0, (v15 & 0x1000000) != 0)
          && ((v15 & 0x4000000) != 0
           || (*(_BYTE *)(*((_QWORD *)&v11[2].Next + 1) + 960LL) & 0x40) != 0
           && (v11[4].Next != &v11[4] || (v15 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
        {
          v16 = 1;
        }
        v17 = *((_QWORD *)&v11[2].Next + 1);
        v18 = &unk_1C00701BA;
        LOBYTE(v19) = 0;
        v20 = &unk_1C00701BA;
        if ( v17 )
        {
          v21 = *(_QWORD *)(v17 + 8);
          v19 = *((_QWORD *)&v11[2].Next + 1);
          if ( (v21 & 0x200000000000LL) != 0 )
          {
            v18 = *(void **)(v17 + 568);
            if ( (v21 & 0x400000000000LL) != 0 )
              v20 = *(void **)(v17 + 576);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( v16 )
            v22 = "IS";
          else
            v22 = "NOT";
          WPP_RECORDER_SF_qsLLdqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            (_DWORD)v22,
            (_DWORD)v20,
            BugCheckParameter4,
            (char)v11,
            (__int64)v22,
            v15,
            *(_DWORD *)(v17 + 960),
            v47,
            v19,
            (__int64)v18,
            (__int64)v20);
        }
        if ( v16 )
        {
          Next = v11->Next;
          if ( *(&v11->Next->Next + 1) != v11
            || (v43 = (struct _SLIST_ENTRY **)*((_QWORD *)&v11->Next + 1), *v43 != v11)
            || (*v43 = Next,
                *((_QWORD *)&Next->Next + 1) = v43,
                v11[6].Next = (_SLIST_ENTRY *)&AcpiPowerPhase0List,
                v44 = (struct _SLIST_ENTRY **)qword_1C0082118,
                *(__int64 **)qword_1C0082118 != &AcpiPowerBlockedOnDependencyList) )
          {
LABEL_111:
            __fastfail(3u);
          }
          v11->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
          *((_QWORD *)&v11->Next + 1) = v44;
          *v44 = v11;
          qword_1C0082118 = (__int64)v11;
          goto LABEL_43;
        }
      }
      else if ( !v13 )
      {
        goto LABEL_41;
      }
      v9 = 0;
LABEL_41:
      if ( v13 == 2 )
        ACPIDeviceCompleteRequest(v11);
      goto LABEL_43;
    }
LABEL_12:
    if ( (__int64 *)AcpiPowerPhase1List != &AcpiPowerPhase1List )
    {
      if ( AcpiPowerPhase0List != &AcpiPowerPhase0List )
        goto LABEL_19;
      v36 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase1List, &AcpiDevicePowerProcessPhase1Dispatch, 7LL, 0LL);
      if ( v36 >= 0 && v36 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase1List, (__int64)&AcpiPowerPhase2List);
    }
    if ( AcpiPowerPhase0List == &AcpiPowerPhase0List )
    {
      if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List )
      {
        v37 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase2List, &AcpiDevicePowerProcessPhase2Dispatch, 6LL, 0LL);
        if ( v37 >= 0 && v37 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase2List, (__int64)&AcpiPowerPhase3List);
      }
      if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && AcpiPowerPhase0List == &AcpiPowerPhase0List
        && (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
      {
        v35 = ACPIDevicePowerProcessPhase3();
        if ( v35 >= 0 )
        {
          if ( v35 == 259 )
          {
            if ( (unsigned __int8)ACPIIsPhase3ListEmptyOfUnblockedItems() )
            {
              ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
              for ( i = AcpiPowerPhase3List; (__int64 *)i != &AcpiPowerPhase3List; i = *(_QWORD *)i )
                *(_DWORD *)(i + 56) &= 0xEEFFFFFF;
            }
          }
          else
          {
            ACPIInternalMovePowerList(&AcpiPowerPhase3List, (__int64)&AcpiPowerPhase4List);
          }
        }
      }
    }
LABEL_19:
    if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
    {
      v38 = ACPIDevicePowerProcessPhase4();
      if ( v38 >= 0 && v38 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase4List, (__int64)&AcpiPowerPhase5List);
    }
    v6 = (PVOID *)AcpiPowerPhase5List;
    if ( AcpiPowerPhase5List != &AcpiPowerPhase5List )
    {
      do
      {
        v23 = (PVOID *)*v6;
        v24 = (struct _SLIST_ENTRY *)v6;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)v6 + 52, 1, 1);
        if ( v25 >= 9 )
          goto LABEL_124;
        _mm_lfence();
        v26 = AcpiDevicePowerProcessPhase5Dispatch[v25];
        if ( v26 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v6 + 52, 1, v25);
          if ( (*(int (__fastcall **)(PVOID *))(v26 + 8LL * *((int *)v6 + 12)))(v6) >= 0 )
            continue;
          v25 = 0;
        }
        v6 = v23;
        if ( v25 == 1 )
        {
          v27 = *((_DWORD *)&v24[3].Next + 2);
          if ( (v27 & 0x10000000) != 0
            || (v28 = 0, (v27 & 0x1000000) != 0)
            && ((v27 & 0x4000000) != 0
             || (*(_BYTE *)(*((_QWORD *)&v24[2].Next + 1) + 960LL) & 0x40) != 0
             && (v24[4].Next != &v24[4] || (v27 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
          {
            v28 = 1;
          }
          v29 = *((_QWORD *)&v24[2].Next + 1);
          v30 = &unk_1C00701BA;
          LOBYTE(v31) = 0;
          v32 = &unk_1C00701BA;
          if ( v29 )
          {
            v33 = *(_QWORD *)(v29 + 8);
            v31 = *((_QWORD *)&v24[2].Next + 1);
            if ( (v33 & 0x200000000000LL) != 0 )
            {
              v30 = *(void **)(v29 + 568);
              if ( (v33 & 0x400000000000LL) != 0 )
                v32 = *(void **)(v29 + 576);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v34 = "IS";
            if ( !v28 )
              v34 = "NOT";
            WPP_RECORDER_SF_qsLLdqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v27,
              v29,
              (_DWORD)v32,
              BugCheckParameter4,
              (char)v24,
              (__int64)v34,
              v27,
              *(_DWORD *)(v29 + 960),
              v47,
              v31,
              (__int64)v30,
              (__int64)v32);
          }
          if ( v28 )
          {
            v39 = v24->Next;
            if ( *(&v24->Next->Next + 1) != v24 )
              goto LABEL_111;
            v40 = (struct _SLIST_ENTRY **)*((_QWORD *)&v24->Next + 1);
            if ( *v40 != v24 )
              goto LABEL_111;
            *v40 = v39;
            *((_QWORD *)&v39->Next + 1) = v40;
            v24[6].Next = (_SLIST_ENTRY *)&AcpiPowerPhase5List;
            v41 = (struct _SLIST_ENTRY **)qword_1C0082118;
            if ( *(__int64 **)qword_1C0082118 != &AcpiPowerBlockedOnDependencyList )
              goto LABEL_111;
            v24->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
            *((_QWORD *)&v24->Next + 1) = v41;
            *v41 = v24;
            qword_1C0082118 = (__int64)v24;
          }
        }
        else if ( (v25 & 0xFFFFFFFD) == 0 )
        {
          ACPIDeviceCompleteRequest(v24);
        }
      }
      while ( v6 != &AcpiPowerPhase5List );
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
    v4 = AcpiPowerDpcFlags;
  }
  if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
    && (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && AcpiPowerPhase5List == &AcpiPowerPhase5List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && AcpiPowerPhase4List == &AcpiPowerPhase4List )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x33u,
        (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids);
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
      ACPIInternalMovePowerList(&AcpiPowerSynchronizeList, (__int64)Entry);
  }
  AcpiPowerDpcFlags &= ~1u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v7 = (struct _SLIST_ENTRY *)Entry[0];
  if ( Entry[0] != Entry )
  {
    do
    {
      p_Next = (PVOID *)&v7->Next->Next;
      ACPIDeviceCompleteRequest(v7);
      v7 = (struct _SLIST_ENTRY *)p_Next;
    }
    while ( p_Next != Entry );
  }
}
