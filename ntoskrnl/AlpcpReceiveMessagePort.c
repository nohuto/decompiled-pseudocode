/*
 * XREFs of AlpcpReceiveMessagePort @ 0x1407CD3A0
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x1407168B0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x1407CCD50 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     AlpcpWaitForSingleObject @ 0x1402E0F40 (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14076BBC4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1407926EC (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x1407CAA30 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1407CF440 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x14097743C (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x140977588 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, KPROCESSOR_MODE a2, LARGE_INTEGER *a3, ULONG_PTR *a4, LONG a5)
{
  __int64 v5; // rsi
  volatile signed __int64 *v7; // r14
  int i; // r13d
  int v9; // eax
  volatile signed __int64 *v10; // rbp
  _QWORD *v11; // r15
  ULONG_PTR v12; // rdi
  ULONG_PTR v13; // rax
  signed __int64 BugCheckParameter4; // rax
  __int64 result; // rax
  _QWORD **v16; // rdi
  __int64 v17; // rax
  volatile signed __int64 *v18; // rdi
  struct _LIST_ENTRY *v19; // rcx
  LIST_ENTRY *p_WaitListHead; // r13
  __int64 v21; // r8
  unsigned int v22; // ebp
  unsigned int v23; // edx
  int v24; // ecx
  unsigned int v25; // edi
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  _QWORD **v30; // r15
  __int64 v31; // r8
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]

  v5 = *a1;
  CurrentThread = KeGetCurrentThread();
  v7 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    ExAcquirePushLockSharedEx(v5 + 352, 0LL);
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v5 + 416);
        if ( (v9 & 0x40) != 0 )
        {
          v25 = -1073740032;
          goto LABEL_54;
        }
        if ( (v9 & 0x10) != 0 )
        {
          v25 = -1073741759;
          goto LABEL_54;
        }
        v10 = (volatile signed __int64 *)(v5 + 136);
        ExAcquirePushLockExclusiveEx(v5 + 136, 0LL);
        v11 = (_QWORD *)(v5 + 160);
        v12 = *(_QWORD *)(v5 + 160);
        if ( v12 != v5 + 160 && v12 || (v12 = *(_QWORD *)(v5 + 144), v12 != v5 + 144) && v12 )
        {
          v13 = KeAbPreAcquire(v12 - 16, 0LL);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 - 16), 0LL) )
          {
            if ( v13 )
              *(_BYTE *)(v13 + 18) = 1;
            *(_BYTE *)(v12 - 32) |= 1u;
            BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), 0x10000uLL) + 0x10000;
            if ( BugCheckParameter4 <= 0 )
              KeBugCheckEx(0x18u, 0LL, v12, 0x27uLL, BugCheckParameter4);
LABEL_12:
            if ( (*(_DWORD *)(v12 + 40) & 7) == 1 )
              --*(_DWORD *)(v5 + 448);
            else
              --*(_DWORD *)(v5 + 452);
            *(_DWORD *)(v12 + 40) &= 0xFFFFFFF8;
            *(_QWORD *)(v12 + 16) = 0LL;
            **(_QWORD **)(v12 + 8) = *(_QWORD *)v12;
            *(_QWORD *)(*(_QWORD *)v12 + 8LL) = *(_QWORD *)(v12 + 8);
            if ( (*(_DWORD *)(v12 + 40) & 0x200) == 0 )
              goto LABEL_15;
            v23 = (*(_QWORD *)(v12 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
            if ( !*(_QWORD *)(v12 + 144) )
              v23 = *(_QWORD *)(v12 + 136) != 0LL ? 0x80000000 : 0;
            v24 = v23 | 0x10000000;
            if ( !*(_QWORD *)(v12 + 152) )
              v24 = v23;
            if ( (v24 & a5) != 0 )
            {
LABEL_15:
              *(_WORD *)(v12 + 244) |= 0x2000u;
              AlpcpInsertMessagePendingQueue(v5, v12);
            }
            else
            {
              *(_WORD *)(v12 + 244) &= ~0x2000u;
              --*(_WORD *)(v12 - 30);
            }
            if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
            KeAbPostRelease(v5 + 136);
            if ( i )
            {
              if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
            }
            else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
            {
              ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
            }
            KeAbPostRelease(v5 + 352);
            goto LABEL_22;
          }
          if ( v13 )
            KeAbPostReleaseEx(v12 - 16, v13);
          if ( *(_QWORD *)(v12 + 96) )
          {
            if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
            KeAbPostRelease(v5 + 136);
            if ( i )
              goto LABEL_100;
            goto LABEL_120;
          }
          AlpcpReferenceBlob(v12);
          if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
          KeAbPostRelease(v5 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
            i = 0;
          }
          else
          {
            i = 0;
            if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
          }
          KeAbPostRelease(v5 + 352);
          AlpcpLockForCachedReferenceBlob(v12);
          --*(_WORD *)(v12 - 30);
          ExAcquirePushLockSharedEx(v5 + 352, 0LL);
          if ( (*(_DWORD *)(v5 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
              goto LABEL_88;
          }
          else
          {
            ExAcquirePushLockExclusiveEx(v5 + 136, 0LL);
            v26 = (_QWORD *)*v11;
            if ( (_QWORD *)*v11 == v11 || !v26 )
            {
              v27 = *(_QWORD *)(v5 + 144);
              if ( v27 == v5 + 144 || !v27 )
                v27 = 0LL;
              if ( v12 == v27 )
                goto LABEL_12;
              if ( v26 == v11 || !v26 )
                v26 = 0LL;
            }
            if ( (_QWORD *)v12 == v26 )
              goto LABEL_12;
            if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
            KeAbPostRelease(v5 + 136);
            if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
LABEL_88:
              ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
          }
          KeAbPostRelease(v5 + 352);
          AlpcpUnlockMessage(v12);
          goto LABEL_2;
        }
        v16 = *(_QWORD ***)(v5 + 384);
        if ( v16 == (_QWORD **)(v5 + 384) )
          break;
        if ( !v16 )
          break;
        v30 = v16 - 10;
        if ( v16 == (_QWORD **)80 )
          break;
        if ( AlpcpTryLockForCachedReferenceBlob((ULONG_PTR)(v16 - 10)) )
        {
          *((_DWORD *)v30 + 10) &= ~0x20000u;
          *v16[1] = *v16;
          (*v16)[1] = v16[1];
          --*(_DWORD *)(v5 + 464);
          if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
          KeAbPostRelease(v5 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
          }
          else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
          }
          KeAbPostRelease(v5 + 352);
          --*((_WORD *)v16 - 55);
          result = 0LL;
          *a4 = (ULONG_PTR)v30;
          return result;
        }
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
        KeAbPostRelease(v5 + 136);
        if ( i )
        {
LABEL_100:
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
          goto LABEL_64;
        }
LABEL_120:
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          goto LABEL_63;
LABEL_64:
        KeAbPostRelease(v5 + 352);
        ExAcquirePushLockExclusiveEx(v5 + 352, 0LL);
        i = 1;
      }
      v17 = *(_QWORD *)(v5 + 360);
      if ( v17 && (*(_QWORD *)(*(_QWORD *)(v17 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
        KeAbPostRelease(v5 + 136);
        v25 = 1073741872;
        goto LABEL_54;
      }
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 136));
      KeAbPostRelease(v5 + 136);
      if ( *(_QWORD *)(v5 + 32) )
        goto LABEL_53;
      if ( (*(_DWORD *)(v5 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v5 + 368) )
      {
        v25 = 258;
LABEL_54:
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
        }
        else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
        }
        KeAbPostRelease(v5 + 352);
        return v25;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_53;
      if ( i )
      {
        v18 = (volatile signed __int64 *)(v5 + 224);
        CurrentThread[1].Timer.Header.LockNV = a5;
        ExAcquirePushLockExclusiveEx(v5 + 224, 0LL);
        v19 = *(struct _LIST_ENTRY **)(v5 + 240);
        p_WaitListHead = &CurrentThread[1].Timer.Header.WaitListHead;
        if ( v19->Flink != (struct _LIST_ENTRY *)(v5 + 232) )
          goto LABEL_147;
        p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v5 + 232);
        CurrentThread[1].Timer.Header.WaitListHead.Blink = v19;
        v19->Flink = p_WaitListHead;
        *(_QWORD *)(v5 + 240) = p_WaitListHead;
        if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 224));
        KeAbPostRelease(v5 + 224);
        if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
        KeAbPostRelease(v5 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v5);
        v22 = AlpcpCompleteDeferSignalRequestAndWait((__int64)a1, &CurrentThread[1].KernelStack, v21, a2, a3);
        if ( v22 )
        {
          ExAcquirePushLockExclusiveEx(v5 + 224, 0LL);
          Flink = p_WaitListHead->Flink;
          if ( p_WaitListHead->Flink )
          {
            *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
            Blink = CurrentThread[1].Timer.Header.WaitListHead.Blink;
            if ( Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
LABEL_147:
              __fastfail(3u);
            Blink->Flink = Flink;
            Flink->Blink = Blink;
            p_WaitListHead->Flink = 0LL;
            if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 224));
            KeAbPostRelease(v5 + 224);
            return v22;
          }
          if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 224));
          KeAbPostRelease(v5 + 224);
          AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
          v12 = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          if ( !v12 )
            return v22;
LABEL_45:
          AlpcpLockForCachedReferenceBlob(v12);
          --*(_WORD *)(v12 - 30);
          *(_DWORD *)(v12 + 40) &= ~0x2000u;
LABEL_22:
          if ( AlpcpLogEnabled )
            AlpcpLogReceiveMessage(v12);
          *a4 = v12;
          return 0LL;
        }
        v12 = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
        *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
        if ( v12 )
          goto LABEL_45;
        goto LABEL_2;
      }
      if ( _InterlockedCompareExchange64(v7, 1LL, 17LL) != 17 )
      {
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) == 17 )
          goto LABEL_64;
LABEL_63:
        ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
        goto LABEL_64;
      }
    }
    if ( (*(_DWORD *)(v5 + 256) & 0x1000) == 0 )
    {
LABEL_53:
      v25 = -1073741823;
      goto LABEL_54;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
    }
    else if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    }
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogWaitForNewMessage(v5);
    result = AlpcpCompleteDeferSignalRequestAndWait((__int64)a1, *(void **)(v5 + 248), v31, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
