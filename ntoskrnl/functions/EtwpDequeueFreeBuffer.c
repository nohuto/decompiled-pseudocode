unsigned int *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  char v1; // bp
  bool v3; // zf
  __int64 v4; // rcx
  unsigned int *v5; // rdi
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rax
  __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int64 v19; // rdx
  char v20; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 56) == 0LL;
  v20 = 0;
  if ( v3 && !*(_QWORD *)(a1 + 72) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v20);
    v5 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 64);
    if ( !v5 )
      v5 = (unsigned int *)EtwpDequeueBuffer(v4, a1 + 48);
    if ( *(_DWORD *)(a1 + 1168) )
    {
      v15 = *(_QWORD *)(a1 + 56);
      if ( !v15 || ((*(_DWORD *)(v15 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v1 = 1;
    }
    EtwpUnlockBufferList(a1, &v20);
    if ( v1 )
      EtwpDisableCompression(a1);
    if ( !v5 )
      return 0LL;
    do
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
      v6 = (volatile signed __int32 *)(v5 + 11);
      if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
      {
        v7 = *v6;
        if ( *v6 == 4 || v7 == 5 )
          goto LABEL_12;
      }
      v7 = 0;
LABEL_12:
      if ( !v5[3] && v7 == _InterlockedCompareExchange(v6, 1, v7) )
        break;
      EtwpEnqueueOverflowBuffer(a1);
      EtwpLockBufferList(a1, &v20);
      v5 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 48);
      EtwpUnlockBufferList(v16, &v20);
    }
    while ( v5 );
    if ( !v5 )
      return 0LL;
    v8 = *(_QWORD *)(a1 + 1296);
    if ( v8 )
    {
      v9 = *((unsigned __int16 *)v5 + 20);
      v10 = *(_QWORD *)(v8 + 8 * v9);
      do
      {
        v11 = *((_QWORD *)v5 + 2);
        if ( v11 <= v10 )
          break;
        v12 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1296) + 8 * v9), v11, v10);
      }
      while ( v12 != v10 );
      if ( *((_QWORD *)v5 + 3) <= *(_QWORD *)(a1 + 1312) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 8 * v9);
        do
        {
          v19 = *((_QWORD *)v5 + 2);
          if ( v19 <= v17 )
            break;
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1304) + 8 * v9), v19, v17);
        }
        while ( v18 != v17 );
      }
    }
    EtwpResetBufferHeader(v5, 0LL);
  }
  else
  {
    EtwpLockBufferList(a1, &v20);
    v5 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 48);
    EtwpUnlockBufferList(v14, &v20);
    if ( !v5 )
      return 0LL;
    EtwpResetBufferHeader(v5, 0LL);
    v5[11] = 1;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
  }
  if ( *(_DWORD *)(a1 + 4) != *v5 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v5, *(unsigned int *)(a1 + 4), *v5);
  return v5;
}
