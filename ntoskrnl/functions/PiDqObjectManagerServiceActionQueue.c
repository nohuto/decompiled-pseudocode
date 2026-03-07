char __fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  struct _FAST_MUTEX *v1; // rbx
  PERESOURCE v2; // rdi
  char v3; // r14
  PERESOURCE v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int OwnerTable; // r12d
  char v7; // cl
  void *Pool2; // rax
  __int64 v9; // rdx
  volatile signed __int32 *j; // rcx
  PVOID v11; // r15
  __int64 v12; // rax
  char *v13; // r13
  __int64 v14; // rdi
  struct _LIST_ENTRY *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  PVOID v22; // r15
  PVOID *v23; // rbx
  __int64 v24; // rsi
  int OwnerTable_high; // eax
  char result; // al
  PVOID *i; // rsi
  struct _KTHREAD *v28; // rax
  char v29; // [rsp+20h] [rbp-50h]
  char v30; // [rsp+21h] [rbp-4Fh]
  PVOID P[2]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-38h]
  PVOID v33; // [rsp+40h] [rbp-30h]
  struct _LIST_ENTRY *v34; // [rsp+48h] [rbp-28h]
  PERESOURCE v35; // [rsp+50h] [rbp-20h]
  struct _LIST_ENTRY v36; // [rsp+58h] [rbp-18h] BYREF

  v34 = 0LL;
  v1 = (struct _FAST_MUTEX *)&Resource[1];
  v35 = Resource;
  *(_OWORD *)P = 0LL;
  v2 = Resource;
  v30 = 1;
  v36 = 0LL;
  v3 = 1;
  v4 = Resource + 2;
  do
  {
    CurrentThread = KeGetCurrentThread();
    OwnerTable = 0;
    v33 = 0LL;
    v32 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v1);
    if ( (PERESOURCE)v4->SystemResourcesList.Flink == v4 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v4->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v4->SystemResourcesList.Blink = &v4->SystemResourcesList;
      v4->SystemResourcesList.Flink = &v4->SystemResourcesList;
    }
    v7 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v7 = v3;
    v3 = v7;
    if ( v7 )
    {
      OwnerTable = (unsigned int)v2[2].OwnerTable;
      v32 = OwnerTable;
      if ( OwnerTable )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, 8LL * OwnerTable, 1483763280LL);
        v33 = Pool2;
        if ( !Pool2 )
        {
          v3 = 0;
LABEL_51:
          for ( i = (PVOID *)v2[1].Address; i != &v2[1].Address; i = (PVOID *)*i )
          {
            v28 = KeGetCurrentThread();
            --v28->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 8), 0LL);
            *((_DWORD *)i + 54) |= 1u;
            PiDqQueryFreeActiveData(i);
            PiDqQueryCompletePendedIrp(i);
            ExReleasePushLockEx((__int64 *)i + 8, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          HIDWORD(v2[2].OwnerTable) &= ~2u;
          goto LABEL_14;
        }
        v9 = 0LL;
        for ( j = (volatile signed __int32 *)v2[1].Address;
              j != (volatile signed __int32 *)&v2[1].Address;
              j = *(volatile signed __int32 **)j )
        {
          if ( (unsigned int)v9 >= OwnerTable )
          {
            v3 = 0;
            goto LABEL_13;
          }
          *((_QWORD *)Pool2 + v9) = j;
          v9 = (unsigned int)(v9 + 1);
          _InterlockedIncrement(j + 53);
        }
      }
    }
    else
    {
LABEL_13:
      if ( !v3 )
        goto LABEL_51;
    }
LABEL_14:
    ExReleaseFastMutex((PFAST_MUTEX)&v2[1]);
    while ( 1 )
    {
      v11 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v12 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v12 + 8) = P;
      if ( v3 && OwnerTable )
      {
        v13 = (char *)v33;
        v14 = OwnerTable;
        v15 = v34;
        do
        {
          v16 = *(_QWORD *)v13;
          if ( *(_QWORD *)(*(_QWORD *)v13 + 224LL) <= *((_QWORD *)v11 + 3) )
          {
            v29 = 0;
            if ( !(unsigned __int8)PnpIsNullGuid(*(void **)(v16 + 24)) )
            {
              v36 = *(struct _LIST_ENTRY *)*(_QWORD *)(v16 + 24);
              v15 = IoSetActivityIdThread(&v36);
              v29 = 1;
            }
            if ( byte_140C0E10A < 0 )
              McTemplateK0p_EtwWriteTransfer(
                v17,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStart,
                *(const GUID **)(v16 + 24),
                v16);
            v18 = KeGetCurrentThread();
            --v18->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v16 + 64, 0LL);
            v19 = *(_DWORD *)(v16 + 216);
            ExReleasePushLockEx((__int64 *)(v16 + 64), 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( (v19 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v16, *((_QWORD *)v11 + 2));
              v21 = KeGetCurrentThread();
              --v21->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v16 + 64, 0LL);
              if ( (*(_DWORD *)(v16 + 216) & 1) != 0 || *(_QWORD *)(v16 + 192) != v16 + 192 )
                PiDqQueryCompletePendedIrp(v16);
              ExReleasePushLockEx((__int64 *)(v16 + 64), 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            if ( byte_140C0E10A < 0 )
              McTemplateK0p_EtwWriteTransfer(
                v20,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStop,
                *(const GUID **)(v16 + 24),
                v16);
            if ( v29 )
              IoClearActivityIdThread(v15);
          }
          v13 += 8;
          --v14;
        }
        while ( v14 );
        v2 = v35;
        v34 = v15;
        OwnerTable = v32;
        v4 = v35 + 2;
      }
      PiPnpRtlObjectEventRelease(*((PVOID *)v11 + 2));
      ExFreePoolWithTag(v11, 0x58706E50u);
    }
    v22 = v33;
    if ( v33 )
    {
      if ( OwnerTable )
      {
        v23 = (PVOID *)v33;
        v24 = OwnerTable;
        do
        {
          PiDqQueryRelease(*v23++);
          --v24;
        }
        while ( v24 );
      }
      ExFreePoolWithTag(v22, 0x58706E50u);
    }
    v1 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    if ( (PERESOURCE)v4->SystemResourcesList.Flink == v4 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v30 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    ExReleaseFastMutex((PFAST_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  while ( v30 );
  return result;
}
