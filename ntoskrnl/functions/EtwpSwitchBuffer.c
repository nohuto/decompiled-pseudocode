__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r14d
  __int64 v10; // rdx
  signed __int64 i; // rbx
  signed __int64 v12; // rax
  unsigned __int64 v13; // rbp

  v6 = *(_DWORD *)(a1 + 12) & 0x400;
  v10 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v10 )
  {
LABEL_2:
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v10 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v6 )
        *(_QWORD *)(v10 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v12 )
      {
        v12 = _InterlockedCompareExchange64(a3, v10 | 0xF, i);
        if ( i == v12 )
          break;
      }
      v13 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
      {
        if ( v13 )
        {
          EtwpPrepareDirtyBuffer(a1, (LARGE_INTEGER *)(i & 0xFFFFFFFFFFFFFFF0uLL));
          _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), ~(i & 0xF));
          if ( !v6 && EtwpBuffersFlushRequired((_DWORD *)a1) )
          {
            if ( (a5 & 0x600) != 0 || ObGetCurrentIrql() > 2u )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
                KiInsertQueueDpc(a1 + 568, 0);
            }
            else
            {
              KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
            }
          }
        }
        else if ( *(_DWORD *)(a1 + 208) )
        {
          EtwpRequestFlushTimer(a1, (a5 & 0x600) != 0);
        }
        return 0LL;
      }
      if ( v13 )
        break;
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFF1);
    if ( v6 )
      EtwpEnqueueOverflowBuffer(a1);
    else
      EtwpEnqueueAvailableBuffer(a1, v10, 0LL);
    return 0LL;
  }
  else
  {
    if ( (a5 & 0x200) == 0 )
    {
      while ( ObGetCurrentIrql() <= 2u
           && (*(_DWORD *)(a1 + 12) & 0x40000) == 0
           && (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) == 1 )
      {
        v10 = EtwpDequeueFreeBuffer(a1);
        if ( v10 )
          goto LABEL_2;
      }
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
