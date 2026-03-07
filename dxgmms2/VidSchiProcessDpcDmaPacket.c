void __fastcall VidSchiProcessDpcDmaPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rbp
  int v6; // eax
  KSPIN_LOCK *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  void (__fastcall *v10)(KSPIN_LOCK); // rax
  void (__fastcall *v11)(KSPIN_LOCK); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+68h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(unsigned int *)(v3 + 1416);
  v5 = *(KSPIN_LOCK **)(*(_QWORD *)(v1 + 104) + 32LL);
  if ( a1 != (struct _VIDSCH_DMA_PACKET *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v3 + 8 * v4 + 1424),
                                            0LL,
                                            (signed __int64)a1) )
  {
    WdLogSingleEntry2(1LL, v5, a1);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, KSPIN_LOCK *, struct _VIDSCH_DMA_PACKET *, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Hardware queue is inconsistant",
      v5,
      a1,
      0LL,
      0LL,
      0LL);
  }
  _InterlockedExchange((volatile __int32 *)(v3 + 1416), ((_BYTE)v4 + 1) & 0xF);
  *(_DWORD *)(v3 + 504) = ((unsigned __int8)*(_DWORD *)(v3 + 504) + 1) & 0xF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v5 + 216, &LockHandle);
  v6 = *((_DWORD *)a1 + 23);
  if ( (v6 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 23) = v6 & 0xFFFFFBFF;
    if ( *(_DWORD *)(v3 + 11272) != -1 )
    {
      v10 = (void (__fastcall *)(KSPIN_LOCK))v5[386];
      if ( v10 )
        v10(v5[390]);
    }
  }
  if ( (*((_DWORD *)a1 + 23) & 0x800) != 0 )
  {
    if ( *(_DWORD *)(v5[*(unsigned int *)(*((_QWORD *)a1 + 7) + 388LL) + 400] + 44328) != -1 )
    {
      v11 = (void (__fastcall *)(KSPIN_LOCK))v5[384];
      if ( v11 )
        v11(v5[390]);
    }
    *((_DWORD *)a1 + 23) &= ~0x800u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    VidSchiProcessDpcSystemRequest(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 10 || *((_DWORD *)a1 + 18) == 18 )
  {
    VidSchiProcessDpcCompletedPacket(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 11 )
  {
    VidSchiProcessDpcPreemptedPacket(a1);
  }
  v7 = (KSPIN_LOCK *)(*(_QWORD *)(v3 + 24) + 1736LL);
  v8 = (_QWORD *)((char *)a1 + 16);
  memset(&v13, 0, sizeof(v13));
  KeAcquireInStackQueuedSpinLock(v7, &v13);
  v9 = *(_QWORD **)(v3 + 11288);
  if ( *v9 != v3 + 11280 )
    __fastfail(3u);
  *v8 = v3 + 11280;
  v8[1] = v9;
  *v9 = v8;
  *(_QWORD *)(v3 + 11288) = v8;
  KeReleaseInStackQueuedSpinLock(&v13);
}
