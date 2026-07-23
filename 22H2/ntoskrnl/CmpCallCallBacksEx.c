/*
 * XREFs of CmpCallCallBacksEx @ 0x140640B60
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140645C90 (NtQueryKey.c)
 *     CmpParseKey @ 0x140646330 (CmpParseKey.c)
 *     NtQueryMultipleValueKey @ 0x140686BA0 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140696C00 (NtFlushKey.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406DDF10 (CmpSecurityMethod.c)
 *     CmPostCallbackNotification @ 0x1406E05C0 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406E081C (CmpCallCallBacks.c)
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1406E5000 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140729810 (NtSaveKeyEx.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140869190 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140869520 (NtRestoreKey.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1403F8BE0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpFreeCallbackContext @ 0x1404EC79C (CmpFreeCallbackContext.c)
 *     CmpCallbackFillObjectContext @ 0x140641110 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFatalFilter @ 0x14086A0C4 (CmpCallbackFatalFilter.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r14
  _SLIST_ENTRY *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID SparePtr; // rax
  __int64 *v13; // r12
  struct _KTHREAD *v14; // rax
  _SLIST_ENTRY *v15; // r13
  struct _KTHREAD *v16; // rcx
  bool v17; // zf
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v19; // rdx
  _SLIST_ENTRY **v20; // rax
  _SLIST_ENTRY *v21; // rcx
  int v22; // ecx
  int v23; // ecx
  struct _KTHREAD *v24; // rcx
  __int128 *v25; // r12
  unsigned int v27; // r9d
  _SLIST_ENTRY *v28; // rbx
  _SLIST_ENTRY **v29; // rax
  _SLIST_ENTRY *v30; // r14
  _OWORD *v31; // r8
  PVOID *v32; // rax
  unsigned int v33; // ecx
  struct _KTHREAD *v34; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v36; // rax
  PVOID *v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  signed __int32 v40[8]; // [rsp+0h] [rbp-108h] BYREF
  char v41; // [rsp+20h] [rbp-E8h]
  char v42; // [rsp+21h] [rbp-E7h]
  int v43; // [rsp+24h] [rbp-E4h]
  _SLIST_ENTRY *v44; // [rsp+30h] [rbp-D8h]
  __int128 *v45; // [rsp+38h] [rbp-D0h]
  __int64 *v46; // [rsp+40h] [rbp-C8h]
  _SLIST_ENTRY *v47; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v48; // [rsp+50h] [rbp-B8h]
  _SLIST_ENTRY *v49; // [rsp+58h] [rbp-B0h]
  __int128 v50; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+70h] [rbp-98h]
  __int128 v52; // [rsp+80h] [rbp-88h]
  __int64 v53; // [rsp+90h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  __int128 v56; // [rsp+A8h] [rbp-60h] BYREF

  v7 = a4;
  v8 = a3;
  v49 = a3;
  v55 = a2;
  v54 = a6;
  v43 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v41 = 0;
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  if ( a4 == 1 )
  {
    SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
      v13 = (__int64 *)*((_QWORD *)SparePtr + 1);
    else
      v13 = &CallbackListHead;
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    v15 = (_SLIST_ENTRY *)a7;
    while ( 1 )
    {
      do
      {
        v13 = (__int64 *)*v13;
        v46 = v13;
        v42 = 1;
        if ( v13 == &CallbackListHead )
          goto LABEL_21;
      }
      while ( *((int *)v13 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v16 = KeGetCurrentThread();
      v17 = v16->KernelApcDisable++ == -1;
      if ( v17
        && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152
        && !v16->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v16);
      }
      v42 = 0;
      PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !PoolWithTag )
        PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v44 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v13;
      PoolWithTag[2].Next = 0LL;
      v19 = v48;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)v48[1].WaitBlock[0].SparePtr;
      v19[1].WaitBlock[0].SparePtr = &PoolWithTag[1];
      v20 = *(_SLIST_ENTRY ***)(a7 + 8);
      if ( *v20 != (_SLIST_ENTRY *)a7 )
        goto LABEL_98;
      PoolWithTag->Next = (_SLIST_ENTRY *)a7;
      *((_QWORD *)&PoolWithTag->Next + 1) = v20;
      *v20 = PoolWithTag;
      *(_QWORD *)(a7 + 8) = PoolWithTag;
      CmpCallbackFillObjectContext(a1, a2, v13 + 3);
      v21 = a3;
      if ( !a3 || (*((_DWORD *)v13 + 5) & 1) == 0 )
        v21 = (_SLIST_ENTRY *)a2;
      v22 = ((__int64 (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *))v13[5])(v13[4], (int)a1, v21);
      v43 = v22;
      if ( a1 == 14 )
      {
        v43 = 0;
      }
      else if ( v22 < 0 )
      {
        Next = PoolWithTag->Next;
        v36 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v36 != PoolWithTag )
LABEL_98:
          __fastfail(3u);
        *v36 = Next;
        *((_QWORD *)&Next->Next + 1) = v36;
        v37 = (PVOID *)v48[1].WaitBlock[0].SparePtr;
        if ( v37 )
          v48[1].WaitBlock[0].SparePtr = *v37;
        CmpFreeCallbackContext(PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
        {
          _InterlockedOr(v40, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v7 = 0;
        v41 = 1;
LABEL_21:
        v23 = v43;
        goto LABEL_22;
      }
      switch ( a1 )
      {
        case 0x1Cu:
LABEL_55:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
          *(_QWORD *)(a2 + 80) = 0LL;
          break;
        case 8u:
LABEL_56:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
          *(_QWORD *)(a2 + 48) = 0LL;
          break;
        case 7u:
LABEL_49:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
          break;
        case 0xEu:
LABEL_20:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_20;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_49;
            case 2u:
            case 4u:
            case 0x22u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 16);
              *(_QWORD *)(a2 + 16) = 0LL;
              break;
            case 3u:
            case 0x24u:
            case 0x2Fu:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 32);
              *(_QWORD *)(a2 + 32) = 0LL;
              break;
            case 9u:
              goto LABEL_56;
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x16u:
            case 0x17u:
            case 0x18u:
            case 0x19u:
            case 0x1Bu:
            case 0x1Du:
            case 0x1Fu:
            case 0x21u:
            case 0x23u:
            case 0x25u:
            case 0x27u:
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x30u:
              *(_QWORD *)(a2 + 32) = PoolWithTag[2].Next;
              break;
            case 0x1Au:
              goto LABEL_55;
            case 0x20u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 64);
              *(_QWORD *)(a2 + 64) = 0LL;
              break;
            case 0x26u:
            case 0x29u:
            case 0x2Bu:
            case 0x2Du:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 24);
              *(_QWORD *)(a2 + 24) = 0LL;
              break;
            default:
              goto LABEL_50;
          }
          break;
      }
LABEL_50:
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
    {
      _InterlockedOr(v40, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v23 = -1073741670;
    v43 = -1073741670;
    v41 = 1;
    v7 = 0;
LABEL_22:
    if ( v42 )
    {
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v24 = KeGetCurrentThread();
      v17 = v24->KernelApcDisable++ == -1;
      if ( v17
        && ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v24);
      }
      v23 = v43;
    }
    v8 = a3;
  }
  else
  {
    v15 = (_SLIST_ENTRY *)a7;
    v23 = v43;
  }
  if ( v7 )
  {
    v25 = v45;
  }
  else
  {
    if ( v41 == 1 )
    {
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      v25 = &v50;
      v45 = &v50;
      v27 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v50 = v54;
      }
      else
      {
        if ( v23 == -1073740541 )
          v38 = **(_QWORD **)(a2 + 72);
        else
          v38 = 0LL;
        *(_QWORD *)&v50 = v38;
      }
      if ( v23 == -1073740541 )
      {
        v39 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v39 = *((_DWORD *)&v8->Next + 3);
        DWORD2(v50) = v39;
      }
      else
      {
        DWORD2(v50) = v23;
        v39 = v23;
      }
      DWORD2(v51) = v39;
      *(_QWORD *)&v51 = v55;
      if ( v8 )
      {
        v47 = (_SLIST_ENTRY *)&v56;
        *(_QWORD *)&v56 = &v50;
        *((_QWORD *)&v56 + 1) = v49;
      }
    }
    else
    {
      v25 = (__int128 *)a2;
      v45 = (__int128 *)a2;
      v47 = v8;
      v27 = a1;
      a5 = a1;
    }
    while ( v15->Next != v15 )
    {
      v28 = (_SLIST_ENTRY *)*((_QWORD *)&v15->Next + 1);
      v49 = v28;
      v29 = (_SLIST_ENTRY **)*((_QWORD *)&v28->Next + 1);
      if ( v28->Next != v15 || *v29 != v28 )
        goto LABEL_98;
      *((_QWORD *)&v15->Next + 1) = v29;
      *v29 = v15;
      v44 = (_SLIST_ENTRY *)*((_QWORD *)&v28[1].Next + 1);
      v30 = v44;
      *((_QWORD *)v25 + 4) = v28[2].Next;
      CmpCallbackFillObjectContext(v27, v25, &v30[1].Next + 1);
      if ( v8 && (HIDWORD(v30[1].Next) & 1) != 0 )
        v31 = v47;
      else
        v31 = v25;
      v43 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _OWORD *))&v30[2].Next + 1))(v30[2].Next, (int)a5, v31);
      v32 = (PVOID *)v48[1].WaitBlock[0].SparePtr;
      if ( v32 )
        v48[1].WaitBlock[0].SparePtr = *v32;
      v33 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v33 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v33 )
        ExFreePoolWithTag(v28, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v28);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v30[1]) == 0x80000000 )
      {
        _InterlockedOr(v40, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v43 == -1073740541 )
        *((_DWORD *)v25 + 2) = *((_DWORD *)v25 + 6);
      v23 = 0;
      v43 = 0;
      v27 = a5;
    }
  }
  if ( v41 == 1 )
  {
    if ( v25 )
    {
      v23 = *((_DWORD *)v25 + 6);
      if ( v23 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v23;
}
