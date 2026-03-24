/*
 * XREFs of VidSchiSignalFlipEvents @ 0x1C0004ED0
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C00041E0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0004CF8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalFlipEvents(__int64 a1, int a2, __int16 a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  struct _KEVENT *v7; // r14
  KIRQL v8; // r12
  struct _KEVENT *v9; // r15
  struct _KEVENT **v10; // rdi
  KIRQL v11; // r14
  struct _KEVENT *i; // r15
  struct _KEVENT *v13; // rdi
  KIRQL v14; // r15
  struct _KEVENT *v15; // r14
  struct _KEVENT *v16; // rdi
  KIRQL v17; // r15
  struct _KEVENT *v18; // r14
  struct _KEVENT *v19; // rdi
  KIRQL v20; // r14
  struct _KEVENT *v21; // rsi
  int v22; // ecx
  int Flink; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // edi
  __int64 v28; // rcx
  bool v29; // zf
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rsi
  _QWORD *v36; // r12
  _QWORD *v37; // rsi
  struct _KEVENT *v38; // rax
  struct _KEVENT *v39; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v41; // [rsp+38h] [rbp-B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+50h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+80h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+98h] [rbp-50h] BYREF
  char v47; // [rsp+F0h] [rbp+8h]

  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return;
  v6 = v3[4];
  v7 = (struct _KEVENT *)(v3 + 15);
  v8 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &LockHandle);
  v9 = (struct _KEVENT *)v3[15];
  if ( *(struct _KEVENT **)&v7->Header.Lock != v7 )
  {
    do
    {
      if ( LODWORD(v9->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v9[1].Header.Lock + 4LL * LODWORD(v9[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v9[1].Header.Lock + 244LL) )
          goto LABEL_22;
      }
      else if ( ((__int64)v9[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v9[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v9[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_22;
      }
      ++v9[5].Header.LockNV;
      KeSetEvent(v9 + 4, 0, 0);
LABEL_22:
      v9 = *(struct _KEVENT **)&v9->Header.Lock;
    }
    while ( v9 != v7 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v8);
  v10 = (struct _KEVENT **)(v3 + 17);
  v11 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v41);
  for ( i = *v10; i != (struct _KEVENT *)v10; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 244LL) )
        continue;
    }
    else if ( ((__int64)i[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v24 = (int)i[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(i[5].Header.WaitListHead.Blink) = v24;
      if ( v24 )
        continue;
    }
    ++i[5].Header.LockNV;
    KeSetEvent(i + 4, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v41);
  KeLowerIrql(v11);
  v13 = (struct _KEVENT *)(v6 + 1656);
  v14 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v42);
  v15 = *(struct _KEVENT **)(v6 + 1656);
  if ( *(struct _KEVENT **)&v13->Header.Lock != v13 )
  {
    do
    {
      if ( LODWORD(v15->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v15[1].Header.Lock + 4LL * LODWORD(v15[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v15[1].Header.Lock + 244LL) )
          goto LABEL_38;
      }
      else if ( ((__int64)v15[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v25 = (int)v15[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v15[5].Header.WaitListHead.Blink) = v25;
        if ( v25 )
          goto LABEL_38;
      }
      ++v15[5].Header.LockNV;
      KeSetEvent(v15 + 4, 0, 0);
LABEL_38:
      v15 = *(struct _KEVENT **)&v15->Header.Lock;
    }
    while ( v15 != v13 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
  KeLowerIrql(v14);
  v16 = (struct _KEVENT *)(v6 + 1640);
  v17 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v43);
  v18 = *(struct _KEVENT **)(v6 + 1640);
  if ( *(struct _KEVENT **)&v16->Header.Lock != v16 )
  {
    while ( LODWORD(v18->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v18[1].Header.Lock + 4LL * LODWORD(v18[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v18[1].Header.Lock + 244LL) )
        goto LABEL_41;
LABEL_14:
      v18 = *(struct _KEVENT **)&v18->Header.Lock;
      if ( v18 == v16 )
        goto LABEL_6;
    }
    if ( ((__int64)v18[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v22 = (int)v18[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v18[5].Header.WaitListHead.Blink) = v22;
      if ( v22 )
        goto LABEL_14;
    }
LABEL_41:
    ++v18[5].Header.LockNV;
    KeSetEvent(v18 + 4, 0, 0);
    goto LABEL_14;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
  KeLowerIrql(v17);
  *(_QWORD *)(v6 + 1488) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 1456), 0, 0);
  *(_QWORD *)(v6 + 1600) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 1568), 0, 0);
  if ( a2 )
  {
    *(_QWORD *)(v6 + 1208) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 1176), 0, 0);
  }
  v19 = (struct _KEVENT *)(v6 + 1672);
  v20 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v44);
  v21 = *(struct _KEVENT **)(v6 + 1672);
  if ( *(struct _KEVENT **)&v19->Header.Lock != v19 )
  {
    do
    {
      if ( LODWORD(v21->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v21[1].Header.Lock + 4LL * LODWORD(v21[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v21[1].Header.Lock + 244LL) )
          goto LABEL_48;
      }
      else if ( ((__int64)v21[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v26 = (int)v21[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v21[5].Header.WaitListHead.Blink) = v26;
        if ( v26 )
          goto LABEL_48;
      }
      ++v21[5].Header.LockNV;
      KeSetEvent(v21 + 4, 0, 0);
LABEL_48:
      v21 = *(struct _KEVENT **)&v21->Header.Lock;
    }
    while ( v21 != v19 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
  KeLowerIrql(v20);
  if ( *(_WORD *)(a1 + 33164) )
  {
    LOWORD(v27) = a3;
    if ( a3 )
    {
      do
      {
        LOBYTE(v28) = -1;
        v29 = !_BitScanForward((unsigned int *)&v30, (unsigned __int16)v27);
        v31 = 0;
        if ( !v29 )
          LOBYTE(v28) = v30;
        v28 = (char)v28;
        v47 = v28;
        if ( *(_WORD *)(a1 + 33162) )
        {
          v32 = v28 << 6;
          do
          {
            v33 = v32 + v31;
            v34 = 6 * v33;
            v35 = *(_QWORD *)(a1 + 48 * v33 + 2456);
            if ( v35 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 32), &v45);
              v36 = (_QWORD *)(v35 + 16);
              v37 = *(_QWORD **)(v35 + 16);
              if ( v37 != v36 )
              {
                v38 = (struct _KEVENT *)(v6 + 1176);
                do
                {
                  v39 = (struct _KEVENT *)v37[2];
                  if ( v39 != v38 )
                  {
                    KeSetEvent(v39, 0, 0);
                    v38 = (struct _KEVENT *)(v6 + 1176);
                  }
                  v37 = (_QWORD *)*v37;
                }
                while ( v37 != v36 );
              }
              KeReleaseInStackQueuedSpinLock(&v45);
              *(_QWORD *)(a1 + 8 * v34 + 2456) = 0LL;
            }
            ++v31;
          }
          while ( v31 < *(unsigned __int16 *)(a1 + 33162) );
          LOBYTE(v28) = v47;
        }
        v27 = (unsigned __int16)v27 & ~(1 << v28);
      }
      while ( (_WORD)v27 );
    }
  }
}
