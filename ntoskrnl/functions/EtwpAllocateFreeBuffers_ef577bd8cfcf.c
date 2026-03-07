__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  bool v4; // zf
  unsigned __int32 v7; // edi
  __int64 TraceBuffer; // r14
  unsigned __int32 v9; // eax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 816) & 0x1000) == 0;
  v13 = 0;
  if ( !v4 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 232));
      if ( v7 > *(_DWORD *)(a1 + 236) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
        goto LABEL_12;
      }
      TraceBuffer = EtwpAllocateTraceBuffer(a1, v2);
      if ( !TraceBuffer )
        break;
      while ( 1 )
      {
        v9 = *(_DWORD *)(a1 + 244);
        if ( v9 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 244), v7, v9);
      }
      EtwpInitializeBufferHeader((__int16 *)a1, (_DWORD *)TraceBuffer);
      EtwpLockBufferList(a1, &v13);
      v10 = *(_QWORD **)(a1 + 88);
      v11 = (_QWORD *)(TraceBuffer + 56);
      if ( *v10 != a1 + 80 )
        __fastfail(3u);
      *v11 = a1 + 80;
      *(_QWORD *)(TraceBuffer + 64) = v10;
      *v10 = v11;
      *(_QWORD *)(a1 + 88) = v11;
      EtwpUnlockBufferList(a1, &v13);
      EtwpEnqueueAvailableBuffer(a1, TraceBuffer, 0LL);
      if ( ++v3 >= a2 )
        goto LABEL_12;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
  }
  else
  {
LABEL_12:
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(a1 + 1096) + 4LL * (*(_DWORD *)(a1 + 300) & 1) + 4124),
      *(_DWORD *)(a1 + 4) * v3);
  }
  return v3;
}
