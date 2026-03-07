__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int128 *a2,
        __int128 *a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int128 *v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  PVOID SparePtr; // rax
  __int64 *v11; // rdi
  struct _KTHREAD *v12; // rax
  __int64 v13; // rbx
  _SLIST_ENTRY *v14; // rbx
  char v15; // r14
  signed __int64 v16; // rdx
  ULONG_PTR v17; // rtt
  struct _SLIST_ENTRY *Pool2; // rsi
  PVOID *v19; // rdx
  struct _SLIST_ENTRY **v20; // rcx
  __int128 *v21; // r8
  int v22; // eax
  struct _KTHREAD *v23; // rax
  __int64 v24; // rsi
  int v25; // ecx
  signed __int64 v26; // rdx
  ULONG_PTR v27; // rtt
  unsigned int v29; // r12d
  struct _SLIST_ENTRY *v30; // rdi
  struct _SLIST_ENTRY **v31; // rax
  volatile signed __int32 *v32; // rsi
  __int128 *v33; // r8
  PVOID *v34; // rax
  unsigned int v35; // ecx
  _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  signed __int32 v40[8]; // [rsp+0h] [rbp-128h] BYREF
  char v41; // [rsp+20h] [rbp-108h]
  char v42; // [rsp+21h] [rbp-107h]
  int v43; // [rsp+24h] [rbp-104h]
  struct _SLIST_ENTRY *v44; // [rsp+28h] [rbp-100h]
  char v45; // [rsp+30h] [rbp-F8h]
  __int128 *v46; // [rsp+38h] [rbp-F0h]
  volatile signed __int32 *v47; // [rsp+40h] [rbp-E8h]
  __int64 *v48; // [rsp+48h] [rbp-E0h]
  __int128 *v49; // [rsp+50h] [rbp-D8h]
  struct _SLIST_ENTRY ***v50; // [rsp+58h] [rbp-D0h]
  struct _SLIST_ENTRY *v51; // [rsp+60h] [rbp-C8h]
  struct _SLIST_ENTRY *v52; // [rsp+68h] [rbp-C0h]
  PVOID *p_SparePtr; // [rsp+70h] [rbp-B8h]
  __int128 v54; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v55; // [rsp+88h] [rbp-A0h]
  __int128 v56; // [rsp+98h] [rbp-90h]
  __int64 v57; // [rsp+A8h] [rbp-80h]
  __int64 v58; // [rsp+B0h] [rbp-78h]
  __int128 *v59; // [rsp+B8h] [rbp-70h]
  struct _KTHREAD *v60; // [rsp+C0h] [rbp-68h]
  __int128 v61; // [rsp+C8h] [rbp-60h] BYREF
  __int128 *v62; // [rsp+140h] [rbp+18h]

  v62 = a3;
  v41 = a4;
  v7 = a2;
  v51 = (struct _SLIST_ENTRY *)a3;
  v59 = a2;
  v58 = a6;
  v43 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v61 = 0LL;
  v46 = 0LL;
  v49 = 0LL;
  v42 = 0;
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  if ( a4 == 1 )
  {
    p_SparePtr = &CurrentThread[1].WaitBlock[0].SparePtr;
    SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
      v11 = (__int64 *)*((_QWORD *)SparePtr + 1);
    else
      v11 = &CallbackListHead;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v13, (__int64)&CmpCallbackListLock);
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    v14 = (_SLIST_ENTRY *)a7;
    while ( 1 )
    {
      do
      {
        v11 = (__int64 *)*v11;
        v48 = v11;
        v15 = 1;
        if ( v11 == &CallbackListHead )
          goto LABEL_34;
        v47 = (volatile signed __int32 *)(v11 + 2);
      }
      while ( *((int *)v11 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v11 + 4);
      _m_prefetchw(&CmpCallbackListLock);
      v16 = CmpCallbackListLock - 16;
      if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (CmpCallbackListLock & 2) != 0
        || (v17 = CmpCallbackListLock,
            v17 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpCallbackListLock,
                     v16,
                     CmpCallbackListLock)) )
      {
        ExfReleasePushLock(&CmpCallbackListLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
      KeLeaveCriticalRegion();
      v15 = 0;
      v45 = 0;
      Pool2 = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !Pool2 )
        Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(256LL, 48LL, 1768115523LL);
      v52 = Pool2;
      if ( !Pool2 )
        break;
      *((_QWORD *)&Pool2[1].Next + 1) = v11;
      v44 = Pool2 + 2;
      Pool2[2].Next = 0LL;
      v19 = p_SparePtr;
      Pool2[1].Next = (_SLIST_ENTRY *)*p_SparePtr;
      *v19 = &Pool2[1];
      v20 = *(struct _SLIST_ENTRY ***)(a7 + 8);
      if ( *v20 != (struct _SLIST_ENTRY *)a7 )
        goto LABEL_108;
      Pool2->Next = (_SLIST_ENTRY *)a7;
      v50 = (struct _SLIST_ENTRY ***)(&Pool2->Next + 1);
      *((_QWORD *)&Pool2->Next + 1) = v20;
      *v20 = Pool2;
      *(_QWORD *)(a7 + 8) = Pool2;
      CmpCallbackFillObjectContext(a1, v7, v11 + 3);
      if ( v62 && (*((_DWORD *)v11 + 5) & 1) != 0 )
        v21 = v62;
      else
        v21 = v7;
      v22 = ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))v11[5])(v11[4], (int)a1, v21);
      v43 = v22;
      if ( a1 == 14 )
      {
        v43 = 0;
      }
      else if ( v22 < 0 )
      {
        Next = Pool2->Next;
        v37 = *v50;
        if ( *(&Pool2->Next->Next + 1) != Pool2 || *v37 != Pool2 )
LABEL_108:
          __fastfail(3u);
        *v37 = Next;
        *((_QWORD *)&Next->Next + 1) = v37;
        if ( *p_SparePtr )
          *p_SparePtr = *(PVOID *)*p_SparePtr;
        CmpFreeCallbackContext(Pool2);
        if ( _InterlockedDecrement(v47) == 0x80000000 )
        {
          _InterlockedOr(v40, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v41 = 0;
        v42 = 1;
LABEL_34:
        v25 = v43;
        goto LABEL_35;
      }
      switch ( a1 )
      {
        case 0x1Cu:
LABEL_28:
          v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = 0LL;
          break;
        case 8u:
LABEL_70:
          v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 6);
          *((_QWORD *)v7 + 6) = 0LL;
          break;
        case 7u:
LABEL_69:
          v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 5);
          *((_QWORD *)v7 + 5) = 0LL;
          break;
        case 0xEu:
LABEL_27:
          v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 1);
          *((_QWORD *)v7 + 1) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_27;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_69;
            case 2u:
            case 4u:
            case 0x22u:
              v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 2);
              *((_QWORD *)v7 + 2) = 0LL;
              break;
            case 3u:
            case 0x24u:
            case 0x2Fu:
            case 0x31u:
              v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 4);
              *((_QWORD *)v7 + 4) = 0LL;
              break;
            case 9u:
              goto LABEL_70;
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
            case 0x32u:
              *((_QWORD *)v7 + 4) = v44->Next;
              break;
            case 0x1Au:
              goto LABEL_28;
            case 0x20u:
              v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 8);
              *((_QWORD *)v7 + 8) = 0LL;
              break;
            case 0x26u:
            case 0x29u:
            case 0x2Bu:
            case 0x2Du:
              v44->Next = (_SLIST_ENTRY *)*((_QWORD *)v7 + 3);
              *((_QWORD *)v7 + 3) = 0LL;
              break;
            default:
              goto LABEL_29;
          }
          break;
      }
LABEL_29:
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v24, (__int64)&CmpCallbackListLock);
      if ( v24 )
        *(_BYTE *)(v24 + 18) = 1;
    }
    if ( _InterlockedDecrement(v47) == 0x80000000 )
    {
      _InterlockedOr(v40, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v25 = -1073741670;
    v43 = -1073741670;
    v42 = 1;
    v41 = 0;
LABEL_35:
    if ( v15 )
    {
      _m_prefetchw(&CmpCallbackListLock);
      v26 = CmpCallbackListLock - 16;
      if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v26 = 0LL;
      if ( (CmpCallbackListLock & 2) != 0
        || (v27 = CmpCallbackListLock,
            v27 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpCallbackListLock,
                     v26,
                     CmpCallbackListLock)) )
      {
        ExfReleasePushLock(&CmpCallbackListLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
      KeLeaveCriticalRegion();
      v25 = v43;
    }
    a3 = v62;
  }
  else
  {
    v14 = (_SLIST_ENTRY *)a7;
    v25 = v43;
  }
  if ( v41 )
  {
    v7 = v46;
  }
  else
  {
    if ( v42 == 1 )
    {
      v54 = 0LL;
      v55 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      v46 = &v54;
      v29 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v54 = v58;
      }
      else
      {
        if ( v25 == -1073740541 )
          v38 = **((_QWORD **)v7 + 9);
        else
          v38 = 0LL;
        *(_QWORD *)&v54 = v38;
      }
      if ( v25 == -1073740541 )
      {
        v39 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v39 = *((_DWORD *)a3 + 3);
        DWORD2(v54) = v39;
      }
      else
      {
        DWORD2(v54) = v25;
        v39 = v25;
      }
      DWORD2(v55) = v39;
      *(_QWORD *)&v55 = v59;
      v7 = v46;
      if ( a3 )
      {
        v49 = &v61;
        *(_QWORD *)&v61 = &v54;
        *((_QWORD *)&v61 + 1) = v51;
      }
    }
    else
    {
      v46 = v7;
      v49 = a3;
      v29 = a1;
    }
    while ( v14->Next != v14 )
    {
      v30 = (struct _SLIST_ENTRY *)*((_QWORD *)&v14->Next + 1);
      v51 = v30;
      v31 = (struct _SLIST_ENTRY **)*((_QWORD *)&v30->Next + 1);
      if ( v30->Next != v14 || *v31 != v30 )
        goto LABEL_108;
      *((_QWORD *)&v14->Next + 1) = v31;
      *v31 = v14;
      v47 = (volatile signed __int32 *)*((_QWORD *)&v30[1].Next + 1);
      v32 = v47;
      *((_QWORD *)v7 + 4) = v30[2].Next;
      CmpCallbackFillObjectContext(v29, v7, v32 + 6);
      if ( v62 && (v32[5] & 1) != 0 )
        v33 = v49;
      else
        v33 = v7;
      v43 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))v32 + 5))(*((_QWORD *)v32 + 4), (int)v29, v33);
      v34 = (PVOID *)v60[1].WaitBlock[0].SparePtr;
      if ( v34 )
        v60[1].WaitBlock[0].SparePtr = *v34;
      v35 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v35 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v35 )
        ExFreePoolWithTag(v30, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v30);
      if ( _InterlockedDecrement(v32 + 4) == 0x80000000 )
      {
        _InterlockedOr(v40, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v43 == -1073740541 )
        *((_DWORD *)v46 + 2) = *((_DWORD *)v46 + 6);
      v25 = 0;
      v43 = 0;
      v7 = v46;
    }
  }
  if ( v42 == 1 )
  {
    if ( v7 )
    {
      v25 = *((_DWORD *)v7 + 6);
      if ( v25 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v25;
}
