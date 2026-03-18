/*
 * XREFs of WheapProcessWorkQueueItem @ 0x140644030
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x140643F08 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140645F80 (WheapGenerateETWEvents.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A0A2E8 (WheapPredictiveFailureAnalysis.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140A6D528 (WheapCreateLiveDumpFromPreviousSession.c)
 */

LONG __fastcall WheapProcessWorkQueueItem(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  ULONG_PTR *v7; // rax

  if ( WheapPreviousSessionFailure )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v3 = *(_QWORD *)(a2 + 32);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 40);
        if ( v4 <= 9 )
        {
          v5 = 665;
          if ( _bittest(&v5, v4) )
            WheapCreateLiveDumpFromPreviousSession(a2);
        }
      }
    }
  }
  if ( WheapEventingInitialized && *(char *)(a2 + 144) >= 0 )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    return WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v7 = (ULONG_PTR *)qword_140C10B28;
    if ( *(__int64 **)qword_140C10B28 != &WheapWaitingETWEvents )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapWaitingETWEvents;
    *(_QWORD *)(a2 + 8) = v7;
    *v7 = a2;
    qword_140C10B28 = a2;
    return KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
  }
}
