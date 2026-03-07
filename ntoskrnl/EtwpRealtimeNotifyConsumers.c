__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned int MaxTrackingEventBufferSize; // eax
  unsigned int v4; // r14d
  __int64 Pool2; // rax
  _DWORD *v6; // rdi
  __int64 i; // rsi
  __int64 *j; // rax
  __int64 **v9; // rbx
  __int64 *k; // rax
  unsigned int v11; // ebx
  char v12; // al
  unsigned int v14; // r12d

  v1 = (volatile signed __int64 *)(a1 + 688);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
  v4 = MaxTrackingEventBufferSize;
  if ( MaxTrackingEventBufferSize )
  {
    Pool2 = ExAllocatePool2(256LL, MaxTrackingEventBufferSize, 1651995717LL);
    v6 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      EtwpInitializeProviderInfoBuffer(a1, Pool2, v4);
      for ( i = *(_QWORD *)(a1 + 328); i != a1 + 328; i = *(_QWORD *)i )
      {
        v14 = (*(_BYTE *)(i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (__int64)v6, v4, 0LL, v14);
        if ( *(_QWORD *)(a1 + 1040) != a1 + 1040 && (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v6, v4, v14);
        *(_BYTE *)(i + 90) |= 8u;
        if ( v6[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer((_DWORD *)a1, i, (__int64)v6);
          v6[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 112); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v9 = (__int64 **)(a1 + 96);
      for ( k = *v9; k != (__int64 *)v9; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
      v11 = 0;
    }
    else
    {
      v11 = -1073741801;
    }
  }
  else
  {
    v6 = 0LL;
    v11 = -2147483622;
  }
  v12 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v11;
}
