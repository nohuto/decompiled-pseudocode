__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r12
  int v2; // esi
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebp
  unsigned int UsedProcessorCount; // r15d
  __int64 v10; // r14
  __int64 v11; // rax
  volatile __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 v17; // rbx

  v1 = *a1;
  v2 = 0;
  if ( (a1[3] & 0x40000) == 0 )
  {
    while ( 1 )
    {
      v4 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 6);
      if ( !v4 )
        break;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
      EtwpFreeTraceBuffer(v5, v4);
    }
    while ( 1 )
    {
      v6 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
      if ( !v6 )
        break;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
      EtwpFreeTraceBuffer(v7, v6);
    }
    v8 = 0;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(v7);
    if ( UsedProcessorCount )
    {
      v10 = 0LL;
      do
      {
        if ( (a1[3] & 0x10000000) != 0 )
        {
          v12 = (volatile __int64 *)(a1 + 32);
        }
        else
        {
          v11 = *((_QWORD *)a1 + 137);
          if ( v11 == EtwpHostSiloState )
            v12 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v8) + 34472) + 320LL) + 8 * v1);
          else
            v12 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(v11 + 4144) + v10) + 8 * v1);
        }
        v13 = _InterlockedExchange64(v12, 0LL);
        v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), -(v13 & 0xF));
          do
          {
            v17 = *(_QWORD *)(v14 + 32);
            _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v14);
            v14 = v17;
          }
          while ( v17 );
        }
        ++v8;
        v10 += 64LL;
      }
      while ( v8 < UsedProcessorCount );
    }
    if ( *((_QWORD *)a1 + 144) && (a1[3] & 0x400) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 144));
    }
    while ( 1 )
    {
      v15 = (_QWORD *)*((_QWORD *)a1 + 148);
      if ( !v15 )
        break;
      *((_QWORD *)a1 + 148) = *v15;
      ExFreePoolWithTag(v15 - 4, 0);
    }
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*((_QWORD *)a1 + 137) + 4LL * (a1[75] & 1) + 4124),
      -(a1[1] * v2));
  }
  return 0LL;
}
