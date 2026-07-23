/*
 * XREFs of RtlDestroyHeap @ 0x180009680
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x180061760 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1800FD9C0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpHpTagDestroyHeap @ 0x1800024D4 (RtlpHpTagDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180009638 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpDestroyHeapSegment @ 0x1800098EC (RtlpDestroyHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800F34E4 (RtlpCallInterceptRoutine.c)
 *     RtlDebugDestroyHeap @ 0x1800F91B8 (RtlDebugDestroyHeap.c)
 *     RtlpHeapHandleError @ 0x180108100 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x1801081BC (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x180108244 (RtlpHeapLogRangeRelease.c)
 */

PVOID __cdecl RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  PVOID v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v13; // ecx
  unsigned __int64 v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  char Fields[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v23; // [rsp+66h] [rbp-Bh]
  PVOID v24; // [rsp+80h] [rbp+Fh]
  char v25[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v26; // [rsp+8Eh] [rbp+1Dh]
  PVOID v27; // [rsp+A8h] [rbp+37h]

  if ( !HeapHandle )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError(2LL);
    }
    return 0LL;
  }
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *((_DWORD *)HeapHandle + 6);
      if ( v13 )
        RtlpCallInterceptRoutine(v13, (_DWORD)HeapHandle, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy((__int64)HeapHandle);
      RtlpHpTagDestroyHeap((__int64)HeapHandle);
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 0LL);
      RtlpHpHeapDestroy((__int64)HeapHandle);
      return 0LL;
    }
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return (PVOID)((__int64 (*)(void))qword_180166420)();
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, (_DWORD)HeapHandle, 0, 8, 0LL);
    RtlpHpStackTraceHeapDestroy((__int64)HeapHandle);
    if ( ((*((_DWORD *)HeapHandle + 28) & 0x61000000) == 0
       || (*((_DWORD *)HeapHandle + 28) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(HeapHandle))
      && HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 0LL);
      v4 = 2147353480LL;
      v5 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v5 )
      {
        v14 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v14 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v18, &v17, 0x8000LL);
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease(HeapHandle, v18, v17);
      }
      if ( *((_BYTE *)HeapHandle + 418) == 2 )
        v6 = *((_QWORD *)HeapHandle + 51);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v20 = v6;
        v19 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v20, &v19, 0x8000LL);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v21 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (char *)HeapHandle + 232, &v21, 0x8000LL);
        *((_QWORD *)HeapHandle + 29) = 0LL;
      }
      if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
      {
        if ( *((int *)HeapHandle + 28) >= 0 )
          RtlDeleteCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v7 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment(v7);
      }
      while ( v7 != HeapHandle );
      v8 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v9 = 2147353472LL;
      if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData + 550;
        v15 = (void *)*(unsigned __int8 *)v8;
        v24 = HeapHandle;
        v23 = 4131;
        NtTraceEvent(v15, 0x402u, 8u, Fields);
      }
      v10 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v11 = 2147353482LL;
      if ( *(_BYTE *)v11 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData + 560;
        v16 = (void *)*(unsigned __int8 *)v10;
        v27 = HeapHandle;
        v26 = 4131;
        NtTraceEvent(v16, 0x402u, 8u, v25);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(HeapHandle);
      return 0LL;
    }
  }
  return HeapHandle;
}
