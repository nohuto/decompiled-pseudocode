/*
 * XREFs of RtlpRegisterStackTrace @ 0x18010AC98
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x18010AEE0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A10F0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1800A1E90 (RtlCompareMemory.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     RtlpInitializeStackTraceLog @ 0x1801097CC (RtlpInitializeStackTraceLog.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18011C010 (RtlAllocateMemoryBlockLookaside.c)
 */

signed __int64 __fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  signed __int64 *v7; // r14
  signed __int64 v8; // rdi
  signed __int64 v10; // rbp
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  signed __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  if ( !RtlpHeapStackTraceLog )
  {
    RtlpInitializeStackTraceLog();
    v3 = RtlpHeapStackTraceLog;
    if ( !RtlpHeapStackTraceLog )
      return 0LL;
  }
  if ( !(_DWORD)v5 )
    return 0LL;
  v7 = (signed __int64 *)(v3 + 16 * (a3 % 0x191 + 1LL));
  v8 = v7[1];
  if ( !v8
    || *(_DWORD *)(v8 + 8) != a3
    || *(_DWORD *)(v8 + 12) != (_DWORD)v5
    || RtlCompareMemory(a2, (const void *)(v8 + 16), 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *v7;
      v13 = v10;
      v8 = v10;
      if ( v10 )
        break;
LABEL_15:
      if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v13) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
         || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v13) < 0) )
      {
        return 0LL;
      }
      v12 = v13;
      *(_DWORD *)(v13 + 8) = a3;
      *(_DWORD *)(v12 + 12) = v5;
      *(_QWORD *)v12 = v10;
      memmove((void *)(v12 + 16), a2, 8 * v5);
      if ( v10 == _InterlockedCompareExchange64(v7, v12, v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
        return v13;
      }
      RtlpInterlockedPushEntrySList(*(__int128 **)(v13 - 16), (_QWORD *)(v13 - 48));
    }
    v11 = v10;
    while ( *(_DWORD *)(v8 + 8) != a3
         || *(_DWORD *)(v8 + 12) != (_DWORD)v5
         || RtlCompareMemory(a2, (const void *)(v11 + 16), 8 * v5) != 8 * v5 )
    {
      v11 = *(_QWORD *)v8;
      v13 = v11;
      v8 = v11;
      if ( !v11 )
        goto LABEL_15;
    }
    v7[1] = v8;
  }
  return v8;
}
