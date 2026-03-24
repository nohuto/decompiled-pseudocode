/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x14069862C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x140321364 (EtwpFreeTraceBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14032EE60 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x14032F1FC (EtwpDequeueBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int v2; // esi
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  char *v7; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int UsedProcessorCount; // eax
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // r14
  volatile __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rcx
  _QWORD **v20; // rbx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax

  v1 = *a1;
  v2 = 0;
  if ( (a1[3] & 0x40000) == 0 )
  {
    do
    {
      v4 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
      v7 = v4;
      if ( v4 )
      {
        _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
        ++v2;
        _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
        EtwpFreeTraceBuffer(v5, v4, v6);
      }
    }
    while ( v7 );
    while ( 1 )
    {
      v8 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 10);
      if ( !v8 )
        break;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
      EtwpFreeTraceBuffer(v9, v8, v10);
    }
    UsedProcessorCount = EtwpQueryUsedProcessorCount(v9);
    if ( UsedProcessorCount )
    {
      v13 = 0LL;
      v14 = UsedProcessorCount;
      do
      {
        if ( (a1[3] & 0x10000000) != 0 )
          v15 = (volatile __int64 *)(a1 + 36);
        else
          v15 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v13) + 8 * v1);
        v16 = _InterlockedExchange64(v15, 0LL);
        v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), -(v16 & 0xF));
          do
          {
            v18 = *(_QWORD *)(v17 + 32);
            _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v17, v12);
            v17 = v18;
          }
          while ( v18 );
        }
        v13 += 64LL;
        --v14;
      }
      while ( v14 );
    }
    if ( *((_QWORD *)a1 + 142) )
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 142), v12);
    }
    while ( 1 )
    {
      v19 = (_QWORD *)*((_QWORD *)a1 + 146);
      if ( !v19 )
        break;
      *((_QWORD *)a1 + 146) = *v19;
      ExFreePoolWithTag(v19 - 4, 0);
    }
    v20 = (_QWORD **)(a1 + 24);
    while ( 1 )
    {
      v21 = *v20;
      if ( *v20 == v20 )
        break;
      if ( (_QWORD **)v21[1] != v20 || (v22 = (_QWORD *)*v21, *(_QWORD **)(*v21 + 8LL) != v21) )
        __fastfail(3u);
      *v20 = v22;
      v22[1] = v20;
      ExFreePoolWithTag(v21, 0);
    }
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*((_QWORD *)a1 + 135) + 4LL * (a1[79] & 1) + 4116),
      -(v2 * a1[1]));
  }
  return 0LL;
}
