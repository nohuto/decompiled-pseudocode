/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x140693BC0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeRundownQueueEx @ 0x140292C14 (KeRundownQueueEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpUnreferenceDataBlock @ 0x1406909A0 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x1406909C8 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140695900 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x140695998 (EtwpRundownNotifications.c)
 *     EtwpQueueReply @ 0x140783E98 (EtwpQueueReply.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r13
  __int64 v2; // r14
  ULONG_PTR v4; // rdi
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // r8
  __int64 **v9; // rdx
  ULONG_PTR v10; // rax
  volatile __int64 *v11; // rbp
  __int64 v12; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  char v17; // si
  void *v18; // r14
  __int64 v19; // rax
  volatile signed __int32 *v20; // rbp
  volatile signed __int32 *v21; // rsi
  __int64 v22; // r15
  struct _KQUEUE *v23; // rcx
  volatile signed __int32 **v24; // rbx
  _QWORD v25[9]; // [rsp+30h] [rbp-68h] BYREF

  v1 = BugCheckParameter2[4];
  v2 = 4LL;
  v4 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 408, 0LL);
      *(_QWORD *)(v4 + 416) = KeGetCurrentThread();
    }
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 408, 0LL);
    *(_QWORD *)(v1 + 416) = KeGetCurrentThread();
    v6 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) == BugCheckParameter2 )
    {
      v7 = (__int64 **)BugCheckParameter2[1];
      if ( *v7 == BugCheckParameter2 )
      {
        *v7 = v6;
        v6[1] = (__int64)v7;
        v8 = (__int64 *)BugCheckParameter2[2];
        if ( (__int64 *)v8[1] == BugCheckParameter2 + 2 )
        {
          v9 = (__int64 **)BugCheckParameter2[3];
          if ( *v9 == BugCheckParameter2 + 2 )
          {
            *v9 = v8;
            v8[1] = (__int64)v9;
            *(_QWORD *)(v1 + 416) = 0LL;
            ExReleasePushLockEx((__int64 *)(v1 + 408), 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( v4 )
            {
              *(_QWORD *)(v4 + 416) = 0LL;
              ExReleasePushLockEx((__int64 *)(v4 + 408), 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            goto LABEL_10;
          }
        }
      }
    }
LABEL_25:
    __fastfail(3u);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
  v15 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_25;
  v16 = (__int64 **)BugCheckParameter2[1];
  if ( *v16 != BugCheckParameter2 )
    goto LABEL_25;
  *v16 = v15;
  v15[1] = (__int64)v16;
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
  KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
LABEL_10:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v10 = *((unsigned __int16 *)BugCheckParameter2 + 49);
  if ( (v10 & 2) != 0 )
  {
    v11 = BugCheckParameter2 + 6;
    do
    {
      v12 = _InterlockedExchange64(v11, 0LL);
      if ( v12 )
      {
        v22 = *(_QWORD *)(v12 + 32);
        memset(v25, 0, sizeof(v25));
        if ( (*(_BYTE *)(v22 + 98) & 0x40) == 0 )
        {
          v23 = *(struct _KQUEUE **)(v22 + 48);
          *(_OWORD *)&v25[7] = *(_OWORD *)(v1 + 40);
          v25[0] = 0x4800000001LL;
          EtwpQueueReply(v23);
        }
        EtwpReleaseQueueEntry((PVOID *)v12, 2);
      }
      ++v11;
      --v2;
    }
    while ( v2 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v10 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v10, 0LL);
    v18 = (void *)BugCheckParameter2[6];
    v19 = KeRundownQueueEx((__int64)v18, 1);
    v20 = (volatile signed __int32 *)v19;
    if ( v19 )
    {
      v21 = (volatile signed __int32 *)v19;
      do
      {
        v24 = (volatile signed __int32 **)v21;
        v21 = *(volatile signed __int32 **)v21;
        EtwpUnreferenceDataBlock(v24[2]);
        ExFreePoolWithTag(v24, 0);
      }
      while ( v20 != v21 );
    }
    ExFreePoolWithTag(v18, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v4 )
    return EtwpUnreferenceGuidEntry(v4);
  return result;
}
