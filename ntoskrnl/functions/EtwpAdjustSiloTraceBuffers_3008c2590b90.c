_UNKNOWN **__fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int UsedProcessorCount; // eax
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  unsigned __int8 i; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a1 + 16); ++v2 )
  {
    result = (_UNKNOWN **)EtwpAcquireLoggerContextByLoggerId(a1, v2, 0LL);
    v4 = (__int64)result;
    if ( result )
    {
      if ( (*((_DWORD *)result + 3) & 0x400) == 0 )
      {
        v5 = *((_DWORD *)result + 57);
        UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)result);
        if ( v5 > *(_DWORD *)(v4 + 224) && v5 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v4, &i);
          v7 = EtwpDequeueBuffer(v4, (_QWORD *)(v4 + 48));
          v8 = v7;
          if ( v7 )
          {
            v9 = v7 + 7;
            v10 = v7[7];
            if ( *(_QWORD **)(v10 + 8) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
              __fastfail(3u);
            *v11 = v10;
            *(_QWORD *)(v10 + 8) = v11;
          }
          EtwpUnlockBufferList(v4, &i);
          if ( v8 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 232));
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 228));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v4 + 1096) + 4LL * (*(_DWORD *)(v4 + 300) & 1) + 4124),
              -*(_DWORD *)(v4 + 4));
            EtwpFreeTraceBuffer(v4, v8);
          }
        }
      }
      result = (_UNKNOWN **)EtwpReleaseLoggerContext(v4, 0LL);
    }
  }
  return result;
}
