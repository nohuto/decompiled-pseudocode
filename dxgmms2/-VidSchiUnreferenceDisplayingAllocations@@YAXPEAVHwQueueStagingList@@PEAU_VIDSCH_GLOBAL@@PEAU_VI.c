void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        __int16 a4)
{
  struct HwQueueStagingList *v5; // r10
  int v6; // edi
  int v7; // r15d
  bool v8; // zf
  int v9; // eax
  char v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // r13
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  int i; // r12d
  _QWORD *v23; // rcx
  int v24; // edx
  __int64 v25; // rdi
  int v26; // r13d
  _QWORD **v27; // rsi
  _QWORD *v28; // rax
  struct HwQueueStagingList ***v29; // rax
  struct HwQueueStagingList **v30; // rcx
  int v31; // r13d
  _QWORD *v32; // r14
  __int64 v33; // rdi
  struct _KEVENT **v34; // r12
  KSPIN_LOCK *v35; // rsi
  struct _KEVENT *v36; // r14
  KIRQL v37; // r12
  struct _KEVENT *v38; // r14
  struct _KEVENT *v39; // r12
  struct _KEVENT *v40; // r14
  KIRQL v41; // r12
  struct _KEVENT *v42; // r14
  KIRQL v43; // r12
  struct _KEVENT *v44; // rsi
  int v45; // ecx
  const unsigned __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  const unsigned __int64 *v49; // rax
  const unsigned __int64 *v50; // r12
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v51; // rdx
  _QWORD *v52; // rcx
  struct HwQueueStagingList **v53; // rdx
  struct HwQueueStagingList **v54; // rcx
  struct HwQueueStagingList **v55; // rdx
  struct _KEVENT *v56; // rsi
  int Flink; // ecx
  struct _KEVENT *v58; // rsi
  int v59; // ecx
  struct _KEVENT *v60; // rsi
  int v61; // ecx
  int v62; // ecx
  int v63; // edx
  __int64 v64; // rcx
  int v65; // eax
  unsigned int v66; // r14d
  __int64 v67; // r12
  __int64 v68; // rsi
  _QWORD *v69; // r13
  _QWORD *v70; // rsi
  struct _KEVENT *v71; // rax
  struct _KEVENT *v72; // rcx
  struct _VIDSCH_SYNC_OBJECT *v73; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v74; // [rsp+60h] [rbp-A8h]
  __int64 v75; // [rsp+68h] [rbp-A0h]
  const unsigned __int64 *v76; // [rsp+70h] [rbp-98h]
  __int64 v77; // [rsp+78h] [rbp-90h]
  __int64 v78; // [rsp+80h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v80; // [rsp+A0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v81; // [rsp+B8h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v82; // [rsp+D0h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v83; // [rsp+E8h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v84; // [rsp+100h] [rbp-8h] BYREF
  struct HwQueueStagingList *v85; // [rsp+158h] [rbp+50h]
  int v87; // [rsp+160h] [rbp+58h]
  char v88; // [rsp+170h] [rbp+68h]
  KIRQL v89; // [rsp+170h] [rbp+68h]
  KIRQL v90; // [rsp+170h] [rbp+68h]
  char v91; // [rsp+170h] [rbp+68h]

  if ( !a4 )
    return;
  v85 = a1;
  v5 = a1;
  LOWORD(v6) = a4;
  v88 = 0;
  LOWORD(a1) = *((_WORD *)a3 + 22069);
  LOWORD(v7) = 0;
  do
  {
    v8 = !_BitScanForward((unsigned int *)&v9, (unsigned __int16)v6);
    LODWORD(v75) = v9;
    if ( v8 )
      LOBYTE(v9) = -1;
    v10 = v9;
    v11 = 0;
    v78 = (char)v9;
    v12 = (char)v9;
    if ( (_WORD)a1 )
    {
      v88 = 1;
      v13 = (__int64)(char)v9 << 6;
      do
      {
        v77 = v13 + v11;
        v14 = (char *)a3 + 64 * v77;
        v74 = v14;
        v15 = *((_QWORD *)v14 + 398);
        v16 = *(_QWORD *)(v15 + 24);
        if ( v16 )
        {
          v46 = (const unsigned __int64 *)(v14 + 3216);
          v76 = v46;
          if ( *v46 )
          {
            if ( (int)VidSchiSignalSyncObjectsFromCpu(v85, 1u, (struct _VIDSCH_SYNC_OBJECT **)(v16 + 8), 0, v46, 0LL) < 0 )
            {
              WdLogSingleEntry2(1LL, *(_QWORD *)(*(_QWORD *)(v74[398] + 24LL) + 8LL), *v76);
              ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to signal FlipFrom fence 0x%p value 0x%I64x",
                *(_QWORD *)(*(_QWORD *)(v74[398] + 24LL) + 8LL),
                v74[402],
                0LL,
                0LL,
                0LL);
            }
            v47 = *(_QWORD *)(v74[398] + 24LL);
            v48 = 2LL * *(unsigned int *)(v47 + 32);
            *(_OWORD *)(v47 + 8 * v48 + 40) = 0LL;
            *(_DWORD *)(v47 + 32) = ((unsigned __int8)*(_DWORD *)(v47 + 32) + 1) & 7;
            v49 = v76;
            *(_DWORD *)(v47 + 8 * v48 + 40) = 2;
            *(_QWORD *)(v47 + 8 * v48 + 48) = *v49;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v15 + 16);
          if ( v17 )
            _InterlockedDecrement((volatile signed __int32 *)(v17 + 8));
        }
        VidSchiCheckPendingDeviceCommand(*((_QWORD **)a3 + 2));
        v18 = v74;
        ++v11;
        v74[397] = 0LL;
        v18[398] = 0LL;
        *((_WORD *)v18 + 1604) = 0;
        *((_QWORD *)a3 + 8 * v77 + 400) = 0LL;
        LODWORD(a1) = *((unsigned __int16 *)a3 + 22069);
      }
      while ( v11 < (unsigned int)a1 );
      v12 = v78;
      v5 = v85;
      v10 = v78;
    }
    v19 = v12 << 12;
    if ( *(_QWORD *)((char *)a3 + v19 + 3224) )
    {
      v73 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)a3 + v19 + 3224);
      v50 = (const unsigned __int64 *)((char *)a3 + v19 + 3232);
      if ( (int)VidSchiSignalSyncObjectsFromCpu(v5, 1u, &v73, 0, v50, 0LL) < 0 )
      {
        WdLogSingleEntry2(1LL, *(_QWORD *)((char *)a3 + v19 + 3224), *v50);
        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to signal RuntimeFlipAwayFence 0x%p value 0x%I64x",
          *(_QWORD *)((char *)a3 + v19 + 3224),
          *v50,
          0LL,
          0LL,
          0LL);
      }
      VidSchiReleaseSyncObjectReference(*(char **)((char *)a3 + v19 + 3224), v51);
      v5 = v85;
      *(_QWORD *)((char *)a3 + v19 + 3224) = 0LL;
      *v50 = 0LL;
      LOWORD(a1) = *((_WORD *)a3 + 22069);
    }
    v6 = (unsigned __int16)v6 & ~(1 << v10);
    v7 = (unsigned __int16)v7 | (1 << v10);
    *((_WORD *)a3 + 22068) &= ~(1 << v10);
  }
  while ( (_WORD)v6 );
  if ( !v88 )
    return;
  v20 = *((_QWORD *)a3 + 2);
  if ( v20 )
  {
    v21 = *(_QWORD **)(v20 + 72);
    for ( i = 0; v21 != (_QWORD *)(v20 + 72); i |= v24 )
    {
      v23 = v21 - 3;
      v24 = 0;
      if ( (v21[20] & 0x10) != 0 )
      {
        *((_DWORD *)v23 + 46) &= ~0x10u;
        v24 = (unsigned __int8)VidSchiUnwaitContext(v23, 22944LL);
      }
      v21 = (_QWORD *)*v21;
    }
    v25 = *(_QWORD *)(v20 + 32);
    v26 = 0;
    v27 = (_QWORD **)(v25 + 3520);
    while ( 1 )
    {
      v28 = *v27;
      if ( *v27 == v27 )
        break;
      if ( (_QWORD **)v28[1] != v27 || (v52 = (_QWORD *)*v28, *(_QWORD **)(*v28 + 8LL) != v28) )
LABEL_57:
        __fastfail(3u);
      *v27 = v52;
      v52[1] = v27;
      v28[1] = 0LL;
      *v28 = 0LL;
      v26 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v28 - 5));
    }
    v29 = (struct HwQueueStagingList ***)(v25 + 3536);
    while ( 1 )
    {
      v30 = *v29;
      if ( *v29 == (struct HwQueueStagingList **)v29 )
        break;
      if ( v30[1] != (struct HwQueueStagingList *)v29 )
        goto LABEL_57;
      v53 = (struct HwQueueStagingList **)*v30;
      if ( *((struct HwQueueStagingList ***)*v30 + 1) != v30 )
        goto LABEL_57;
      *v29 = v53;
      v53[1] = (struct HwQueueStagingList *)v29;
      *v30 = 0LL;
      v30[1] = 0LL;
      v54 = v30 + 19;
      if ( !*v54 )
      {
        v55 = (struct HwQueueStagingList **)*((_QWORD *)v85 + 1);
        if ( *v55 != v85 )
          goto LABEL_57;
        *v54 = v85;
        v54[1] = (struct HwQueueStagingList *)v55;
        *v55 = (struct HwQueueStagingList *)v54;
        *((_QWORD *)v85 + 1) = v54;
        *((_BYTE *)v85 + 16) = 0;
      }
    }
    v31 = i | v26;
  }
  else
  {
    v31 = 0;
  }
  v32 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( !v32 )
    goto LABEL_34;
  v33 = v32[4];
  v34 = (struct _KEVENT **)(v32 + 15);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v35 = (KSPIN_LOCK *)(v33 + 1744);
  v89 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v33 + 1744), &LockHandle);
  if ( *v34 != (struct _KEVENT *)v34 )
  {
    v56 = *v34;
    while ( 1 )
    {
      if ( LODWORD(v56->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v56[1].Header.Lock + 4LL * LODWORD(v56[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v56[1].Header.Lock + 244LL) )
          goto LABEL_66;
      }
      else if ( ((__int64)v56[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v56[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v56[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_66;
      }
      ++v56[5].Header.LockNV;
      KeSetEvent(v56 + 4, 0, 0);
LABEL_66:
      v56 = *(struct _KEVENT **)&v56->Header.Lock;
      if ( v56 == (struct _KEVENT *)v34 )
      {
        v35 = (KSPIN_LOCK *)(v33 + 1744);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v89);
  memset(&v80, 0, sizeof(v80));
  v36 = (struct _KEVENT *)(v32 + 17);
  v37 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v80);
  if ( *(struct _KEVENT **)&v36->Header.Lock == v36 )
    goto LABEL_28;
  v58 = *(struct _KEVENT **)&v36->Header.Lock;
  do
  {
    if ( LODWORD(v58->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v58[1].Header.Lock + 4LL * LODWORD(v58[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v58[1].Header.Lock + 244LL) )
        goto LABEL_75;
    }
    else if ( ((__int64)v58[1].Header.WaitListHead.Flink & 0x10) == 0
           || (v59 = (int)v58[1].Header.WaitListHead.Blink->Flink, (HIDWORD(v58[5].Header.WaitListHead.Blink) = v59) == 0) )
    {
LABEL_75:
      ++v58[5].Header.LockNV;
      KeSetEvent(v58 + 4, 0, 0);
    }
    v58 = *(struct _KEVENT **)&v58->Header.Lock;
  }
  while ( v58 != v36 );
  v35 = (KSPIN_LOCK *)(v33 + 1744);
LABEL_28:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v80);
  KeLowerIrql(v37);
  v38 = (struct _KEVENT *)(v33 + 1672);
  memset(&v81, 0, sizeof(v81));
  v90 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v81);
  v39 = *(struct _KEVENT **)(v33 + 1672);
  if ( *(struct _KEVENT **)&v38->Header.Lock != v38 )
  {
    while ( LODWORD(v39->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v39[1].Header.Lock + 4LL * LODWORD(v39[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v39[1].Header.Lock + 244LL) )
        goto LABEL_79;
LABEL_39:
      v39 = *(struct _KEVENT **)&v39->Header.Lock;
      if ( v39 == v38 )
        goto LABEL_29;
    }
    if ( ((__int64)v39[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v45 = (int)v39[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v39[5].Header.WaitListHead.Blink) = v45;
      if ( v45 )
        goto LABEL_39;
    }
LABEL_79:
    ++v39[5].Header.LockNV;
    KeSetEvent(v39 + 4, 0, 0);
    goto LABEL_39;
  }
LABEL_29:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
  KeLowerIrql(v90);
  v40 = (struct _KEVENT *)(v33 + 1656);
  memset(&v82, 0, sizeof(v82));
  v41 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v82);
  if ( *(struct _KEVENT **)&v40->Header.Lock == v40 )
    goto LABEL_30;
  v60 = *(struct _KEVENT **)&v40->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v60->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v60[1].Header.Lock + 4LL * LODWORD(v60[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v60[1].Header.Lock + 244LL) )
        goto LABEL_87;
    }
    else if ( ((__int64)v60[1].Header.WaitListHead.Flink & 0x10) == 0
           || (v61 = (int)v60[1].Header.WaitListHead.Blink->Flink, (HIDWORD(v60[5].Header.WaitListHead.Blink) = v61) == 0) )
    {
LABEL_87:
      ++v60[5].Header.LockNV;
      KeSetEvent(v60 + 4, 0, 0);
    }
    v60 = *(struct _KEVENT **)&v60->Header.Lock;
    if ( v60 != v40 )
      continue;
    break;
  }
  v35 = (KSPIN_LOCK *)(v33 + 1744);
LABEL_30:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v82);
  KeLowerIrql(v41);
  *(_QWORD *)(v33 + 1504) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v33 + 1472), 0, 0);
  *(_QWORD *)(v33 + 1616) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v33 + 1584), 0, 0);
  if ( v31 )
  {
    *(_QWORD *)(v33 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v33 + 1192), 0, 0);
  }
  v42 = (struct _KEVENT *)(v33 + 1688);
  memset(&v83, 0, sizeof(v83));
  v43 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v83);
  v44 = *(struct _KEVENT **)(v33 + 1688);
  if ( *(struct _KEVENT **)&v42->Header.Lock != v42 )
  {
    do
    {
      if ( LODWORD(v44->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 4LL * LODWORD(v44[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 244LL) )
          goto LABEL_97;
      }
      else if ( ((__int64)v44[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v62 = (int)v44[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v44[5].Header.WaitListHead.Blink) = v62;
        if ( v62 )
          goto LABEL_97;
      }
      ++v44[5].Header.LockNV;
      KeSetEvent(v44 + 4, 0, 0);
LABEL_97:
      v44 = *(struct _KEVENT **)&v44->Header.Lock;
    }
    while ( v44 != v42 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v83);
  KeLowerIrql(v43);
  if ( *((_WORD *)a3 + 22070) )
  {
    LOWORD(v63) = a4;
    do
    {
      v63 = (unsigned __int16)v63;
      LOBYTE(v64) = -1;
      v8 = !_BitScanForward((unsigned int *)&v65, (unsigned __int16)v63);
      v66 = 0;
      v87 = (unsigned __int16)v63;
      if ( !v8 )
        LOBYTE(v64) = v65;
      v64 = (char)v64;
      v91 = v64;
      if ( *((_WORD *)a3 + 22069) )
      {
        v67 = v64 << 6;
        do
        {
          v73 = (struct _VIDSCH_PRESENT_INFO *)((char *)a3 + 64 * (v67 + v66) + 3192);
          v68 = *(_QWORD *)v73;
          if ( *(_QWORD *)v73 )
          {
            memset(&v84, 0, sizeof(v84));
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v68 + 32), &v84);
            v69 = (_QWORD *)(v68 + 16);
            v70 = *(_QWORD **)(v68 + 16);
            if ( v70 != v69 )
            {
              v71 = (struct _KEVENT *)(v33 + 1192);
              do
              {
                v72 = (struct _KEVENT *)v70[2];
                if ( v72 != v71 )
                {
                  KeSetEvent(v72, 0, 0);
                  v71 = (struct _KEVENT *)(v33 + 1192);
                }
                v70 = (_QWORD *)*v70;
              }
              while ( v70 != v69 );
            }
            KeReleaseInStackQueuedSpinLock(&v84);
            *(_QWORD *)v73 = 0LL;
          }
          ++v66;
        }
        while ( v66 < *((unsigned __int16 *)a3 + 22069) );
        LOBYTE(v64) = v91;
        v63 = v87;
      }
      v63 &= ~(1 << v64);
    }
    while ( (_WORD)v63 );
  }
LABEL_34:
  *((_WORD *)a3 + 22070) &= ~(_WORD)v7;
}
