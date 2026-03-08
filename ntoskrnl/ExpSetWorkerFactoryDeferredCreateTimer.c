/*
 * XREFs of ExpSetWorkerFactoryDeferredCreateTimer @ 0x140792310
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x140340CC0 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 */

void __fastcall ExpSetWorkerFactoryDeferredCreateTimer(signed __int32 a1)
{
  LARGE_INTEGER v1; // rdx
  ULONG v2; // r9d
  signed __int32 v3; // r8d
  signed __int32 v4; // eax

  switch ( a1 )
  {
    case 1:
      v1.QuadPart = ExpWorkerFactoryDeferredLongTimeout;
      v2 = 500;
      break;
    case 2:
      v1.QuadPart = ExpWorkerFactoryDeferredMediumTimeout;
      v2 = 120;
      break;
    case 3:
      v1 = ExpWorkerFactoryDeferredShortTimeout;
      v2 = 30;
      break;
    default:
      v1.QuadPart = 0LL;
      v2 = 0;
      break;
  }
  _m_prefetchw(&ExpWorkerFactoryThreadCreationState);
  v3 = ExpWorkerFactoryThreadCreationState;
  if ( a1 > ExpWorkerFactoryThreadCreationState )
  {
    while ( 1 )
    {
      v4 = _InterlockedCompareExchange(&ExpWorkerFactoryThreadCreationState, a1, v3);
      if ( v3 == v4 )
        break;
      v3 = v4;
      if ( a1 <= v4 )
        return;
    }
    KeSetCoalescableTimer(&ExpWorkerFactoryThreadCreationTimer, v1, 0, v2, 0LL);
  }
}
