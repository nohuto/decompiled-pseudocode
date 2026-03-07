__int64 __fastcall DpiFdoHandleQueryConnectionChange(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3504), &LockHandle);
  v5 = (_QWORD **)(a1 + 3512);
  v6 = *v5;
  if ( *v5 == v5 )
  {
    v7 = 255;
  }
  else
  {
    v4 = *v5;
    if ( (_QWORD **)v6[1] != v5 || (v8 = (_QWORD *)*v6, (_QWORD *)v8[1] != v4) )
      __fastfail(3u);
    *v5 = v8;
    v8[1] = v5;
    v7 = 0;
    *(_OWORD *)a2 = *(_OWORD *)(v4 + 3);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 5);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v4 + 7);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v4 + 9);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v4 + 11);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(v4 + 13);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(v4 + 15);
    *(_QWORD *)(a2 + 112) = v4[17];
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    ExFreeToNPagedLookasideList(&Lookaside, v4);
  return v7;
}
