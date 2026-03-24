/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x140762740
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     IoSetActivityIdThread @ 0x14032D510 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x14032D530 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14050D7A0 (McTemplateK0p_EtwWriteTransfer.c)
 *     PnpIsNullGuid @ 0x140634DDC (PnpIsNullGuid.c)
 *     PiDqQueryRelease @ 0x1406A747C (PiDqQueryRelease.c)
 *     PiDqQueryFreeActiveData @ 0x1406A74F8 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406ACE28 (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryApplyObjectEvent @ 0x140762AE4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryCompletePendedIrp @ 0x140763064 (PiDqQueryCompletePendedIrp.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  struct _FAST_MUTEX *v1; // rdi
  PERESOURCE v2; // rsi
  char v3; // r14
  PERESOURCE v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v6; // r13
  __int64 v7; // r12
  char v8; // cl
  PVOID *PoolWithTag; // rax
  __int64 v10; // rdx
  volatile signed __int32 *i; // rcx
  PVOID v12; // r15
  __int64 v13; // rax
  PVOID *v14; // rsi
  struct _LIST_ENTRY *v15; // r13
  char *v16; // rdi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  PVOID *v22; // rbx
  __int64 v23; // rdi
  int OwnerTable_high; // eax
  _QWORD *result; // rax
  __int64 j; // rdi
  struct _KTHREAD *v27; // rax
  char v28; // [rsp+20h] [rbp-60h]
  char v29; // [rsp+21h] [rbp-5Fh]
  PVOID P[2]; // [rsp+28h] [rbp-58h] BYREF
  int v31; // [rsp+38h] [rbp-48h]
  struct _LIST_ENTRY *v32; // [rsp+40h] [rbp-40h]
  PVOID *v33; // [rsp+48h] [rbp-38h]
  PERESOURCE v34; // [rsp+58h] [rbp-28h]
  struct _LIST_ENTRY v35; // [rsp+60h] [rbp-20h] BYREF

  v32 = 0LL;
  v1 = (struct _FAST_MUTEX *)&Resource[1];
  v34 = Resource;
  *(_OWORD *)P = 0LL;
  v2 = Resource;
  v29 = 1;
  v35 = 0LL;
  v3 = 1;
  v4 = Resource + 2;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    LODWORD(v7) = 0;
    v33 = 0LL;
    v31 = 0;
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
    v8 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v8 = v3;
    v3 = v8;
    if ( v8 )
    {
      LODWORD(v7) = v2[2].OwnerTable;
      v31 = v7;
      if ( (_DWORD)v7 )
      {
        PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v7, 0x58706E50u);
        v33 = PoolWithTag;
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v10 = 0LL;
          for ( i = (volatile signed __int32 *)v2[1].Address;
                i != (volatile signed __int32 *)&v2[1].Address;
                i = *(volatile signed __int32 **)i )
          {
            if ( (unsigned int)v10 >= (unsigned int)v7 )
              goto LABEL_49;
            PoolWithTag[v10] = (PVOID)i;
            v10 = (unsigned int)(v10 + 1);
            _InterlockedIncrement(i + 53);
          }
        }
        else
        {
LABEL_49:
          v3 = 0;
        }
      }
    }
    if ( !v3 )
    {
      for ( j = (__int64)v2[1].Address; (PVOID *)j != &v2[1].Address; j = *(_QWORD *)j )
      {
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(j + 64, 0LL);
        *(_DWORD *)(j + 216) |= 1u;
        PiDqQueryFreeActiveData(j);
        PiDqQueryCompletePendedIrp(j);
        ExReleasePushLockEx(j + 64, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
      v1 = (struct _FAST_MUTEX *)&v2[1];
    }
    KeReleaseGuardedMutex(v1);
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v3 && (_DWORD)v7 )
      {
        v14 = v6;
        v15 = v32;
        v7 = (unsigned int)v7;
        do
        {
          v16 = (char *)*v14;
          if ( *((_QWORD *)*v14 + 28) <= *((_QWORD *)v12 + 3) )
          {
            v28 = 0;
            if ( !PnpIsNullGuid(*((void **)v16 + 3)) )
            {
              v35 = *(struct _LIST_ENTRY *)*((_QWORD *)v16 + 3);
              v15 = IoSetActivityIdThread(&v35);
              v28 = 1;
            }
            if ( byte_140C1327A < 0 )
              McTemplateK0p_EtwWriteTransfer(
                v17,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStart,
                *((const GUID **)v16 + 3),
                v16);
            v18 = KeGetCurrentThread();
            --v18->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 64), 0LL);
            v19 = *((_DWORD *)v16 + 54);
            ExReleasePushLockEx((ULONG_PTR)(v16 + 64), 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( (v19 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v16, *((_QWORD *)v12 + 2));
              v21 = KeGetCurrentThread();
              --v21->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 64), 0LL);
              if ( (*((_DWORD *)v16 + 54) & 1) != 0 || *((char **)v16 + 24) != v16 + 192 )
                PiDqQueryCompletePendedIrp(v16);
              ExReleasePushLockEx((ULONG_PTR)(v16 + 64), 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            if ( byte_140C1327A < 0 )
              McTemplateK0p_EtwWriteTransfer(
                v20,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStop,
                *((const GUID **)v16 + 3),
                v16);
            if ( v28 )
              IoClearActivityIdThread(v15);
          }
          ++v14;
          --v7;
        }
        while ( v7 );
        v2 = v34;
        LODWORD(v7) = v31;
        v32 = v15;
        v6 = v33;
      }
      PiPnpRtlObjectEventRelease(*((char **)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    if ( v6 )
    {
      if ( (_DWORD)v7 )
      {
        v22 = v6;
        v23 = (unsigned int)v7;
        do
        {
          PiDqQueryRelease(*v22++);
          --v23;
        }
        while ( v23 );
      }
      ExFreePoolWithTag(v6, 0x58706E50u);
    }
    v1 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    v4 = v2 + 2;
    if ( (PERESOURCE)v4->SystemResourcesList.Flink == v4 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v29 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  while ( v29 );
  return result;
}
