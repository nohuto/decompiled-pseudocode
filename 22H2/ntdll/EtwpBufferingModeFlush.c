/*
 * XREFs of EtwpBufferingModeFlush @ 0x180110AE0
 * Callers:
 *     EtwpFlushUmLogger @ 0x18004FA7C (EtwpFlushUmLogger.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFlushBuffer @ 0x18004CA44 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18004CC38 (EtwpWaitForBufferReferenceCount.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x180110DC0 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(__int64 a1)
{
  unsigned int v1; // esi
  NTSTATUS v3; // eax
  ULONG v4; // ebp
  __int64 i; // r8
  __int64 v6; // rcx
  unsigned __int32 v7; // eax
  __int64 v8; // rsi
  __int64 j; // rdi
  int v10; // eax

  v1 = *(_DWORD *)(a1 + 208);
  v3 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0, 0);
  if ( v3 )
  {
    v4 = RtlNtStatusToDosError(v3);
    if ( v4 )
      return v4;
  }
  else
  {
    v4 = 0;
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 204); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a1 + 8 * i + 576);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8 * i + 576) = 0LL;
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v1);
      if ( v7 <= v1 )
        *(_DWORD *)(v6 + 4) = v7;
      *(_DWORD *)(v6 + 44) = 0;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v6 + 32;
      *(_QWORD *)(a1 + 256) = v6 + 32;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
    }
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  v8 = *(_QWORD *)(a1 + 416);
  for ( j = EtwpFindAndLockBufferForFlushing(a1, v8); j; j = EtwpFindAndLockBufferForFlushing(a1, --v8) )
  {
    EtwpWaitForBufferReferenceCount(j);
    v10 = EtwpFlushBuffer(a1, j, 0);
    _InterlockedExchange((volatile __int32 *)(j + 44), 0);
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2147483614 )
      break;
  }
  EtwpFinalizeLogFileHeader(a1, 0);
  NtClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  return v4;
}
