/*
 * XREFs of WheapProcessWorkQueueItem @ 0x14060EC70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WheapFreeErrorRecord @ 0x14060EAB0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140610F18 (WheapGenerateETWEvents.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A063BC (WheapPredictiveFailureAnalysis.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AA8884 (WheapCreateLiveDumpFromPreviousSession.c)
 */

void __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  __int64 *v6; // rax

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
    WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v6 = (__int64 *)qword_140C2C648;
    if ( *(__int64 **)qword_140C2C648 != &WheapWaitingETWEvents )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapWaitingETWEvents;
    *(_QWORD *)(a2 + 8) = v6;
    *v6 = a2;
    qword_140C2C648 = a2;
    KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
  }
}
