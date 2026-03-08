/*
 * XREFs of ?VidSchPostSignalCrossAdapter@@YAXPEAUVIDSCH_SYNC_OBJECT_CROSS_ADAPTER@@@Z @ 0x1C003D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchPostSignalCrossAdapter(struct VIDSCH_SYNC_OBJECT_CROSS_ADAPTER *a1)
{
  KSPIN_LOCK *v2; // rcx
  _QWORD *v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)a1 + 1) + 3176LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v2, &LockHandle);
  v3 = (_QWORD *)((char *)a1 + 160);
  if ( !*((_QWORD *)a1 + 20) )
  {
    _m_prefetchw((char *)a1 + 36);
    v4 = *((_DWORD *)a1 + 9);
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 9, v4 + 1, v4);
      if ( v5 == v4 )
      {
        v6 = *((_QWORD *)a1 + 1) + 3160LL;
        v7 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
          __fastfail(3u);
        *v3 = v7;
        *((_QWORD *)a1 + 21) = v6;
        *(_QWORD *)(v7 + 8) = v3;
        *(_QWORD *)v6 = v3;
        ++*(_DWORD *)(*((_QWORD *)a1 + 1) + 3192LL);
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 1224LL) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 1) + 1192LL), 0, 0);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
