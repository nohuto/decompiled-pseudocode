void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, char a3, unsigned __int64 *a4, char a5)
{
  __int64 v5; // rsi
  int v7; // ecx
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rdx
  int v13; // ecx
  int v14; // ecx
  unsigned __int64 *v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rsi
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 == 4 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a2 + 28) )
    {
      WdLogSingleEntry3(4LL, a2, **(_QWORD **)(a2 + 64), *a4);
      v11 = *a4;
      v12 = *(unsigned __int64 **)(a2 + 64);
      if ( *(_BYTE *)(a2 + 29) )
      {
        if ( a3 || v11 > *v12 )
          *v12 = v11;
      }
      else if ( a3 || *(_DWORD *)v12 - (int)v11 < 0 )
      {
        *(_DWORD *)v12 = v11;
      }
      VidSchiUnwaitMonitoredFences(a1, v5, 0LL);
    }
    goto LABEL_7;
  }
  if ( v7 )
  {
    v13 = v7 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v19 = v14 - 1;
        if ( !v19 )
        {
          if ( *(_BYTE *)(a2 + 31) )
            DxgCoreInterface[69](*(ADAPTER_DISPLAY **)(a2 + 64), 0LL);
          else
            KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
          goto LABEL_7;
        }
        if ( v19 != 2 )
          goto LABEL_7;
        goto LABEL_2;
      }
      if ( *(_BYTE *)(a2 + 27) )
      {
        v20 = *(_QWORD *)(a2 + 208);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v20 + 8), &LockHandle);
        if ( *(_QWORD *)(v20 + 32) < *a4 )
          *(_QWORD *)(v20 + 32) = *a4;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v15 = (unsigned __int64 *)(a2 + 72);
      }
      else
      {
        v15 = (unsigned __int64 *)(a2 + 72);
        if ( *(_QWORD *)(a2 + 72) < *a4 )
          *v15 = *a4;
      }
      if ( *(_DWORD *)(a2 + 40) )
        VidSchiUnblockUnorderedWaiter(a1, a2, 0LL);
      v16 = *(_QWORD **)(a2 + 96);
      while ( v16 != (_QWORD *)(a2 + 96) )
      {
        v17 = v16 - 36;
        v16 = (_QWORD *)*v16;
        if ( *(_BYTE *)(a2 + 27) )
          v18 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
        else
          v18 = *v15;
        if ( v17[38] <= v18 )
          VidSchiUnwaitWaitQueuePacket(a1, v17, 0LL, 0LL);
      }
    }
    else
    {
      v21 = *(_DWORD *)(a2 + 56);
      if ( v21 < *(_DWORD *)(a2 + 60) )
      {
        *(_DWORD *)(a2 + 56) = v21 + 1;
        v22 = a2 + 96;
        v23 = *(_QWORD *)(a2 + 96);
        if ( v23 != v22 )
        {
          *(_DWORD *)(a2 + 56) = v21;
          VidSchiUnwaitWaitQueuePacket(a1, v23 - 288, 0LL, 0LL);
        }
      }
    }
  }
  else
  {
    v24 = a2 + 96;
    *(_QWORD *)(a2 + 56) = 0LL;
    v25 = *(_QWORD *)(a2 + 96);
    if ( v25 != v24 )
    {
      v26 = v25 - 288;
      v27 = *(_QWORD *)(v26 + 88);
      if ( !v27 )
        v27 = *(_QWORD *)(v26 + 96);
      *(_QWORD *)(a2 + 56) = v27;
      VidSchiUnwaitWaitQueuePacket(a1, v26, 0LL, 0LL);
    }
  }
LABEL_7:
  if ( *(_BYTE *)(a2 + 27) )
  {
    if ( a5 )
    {
      v28 = *(_DWORD *)(a2 + 48);
      if ( ((v28 - 2) & 0xFFFFFFFC) == 0 && v28 != 3 )
        VidSchiPropagateCrossAdapterSignal(a2);
    }
  }
}
