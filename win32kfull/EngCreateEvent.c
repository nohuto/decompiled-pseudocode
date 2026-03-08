/*
 * XREFs of EngCreateEvent @ 0x1C027B9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngCreateEvent(PEVENT *ppEvent)
{
  __int64 v2; // rax
  struct _ENG_EVENT *v3; // rbx

  v2 = Win32AllocPoolNonPaged(40LL, 1836279364LL);
  v3 = (struct _ENG_EVENT *)v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)v2 = v2 + 16;
    KeInitializeEvent((PRKEVENT)(v2 + 16), SynchronizationEvent, 0);
    LODWORD(v2) = 1;
    *ppEvent = v3;
  }
  return v2;
}
