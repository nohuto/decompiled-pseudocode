/*
 * XREFs of ?Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ @ 0x1C01798B0
 * Callers:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C017A6C4 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _KEVENT *NSInstrumentation::CPlatformSignal::Create(void)
{
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v1; // rbx

  Pool2 = (struct _KEVENT *)ExAllocatePool2(70LL, 24LL);
  v1 = Pool2;
  if ( Pool2 )
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
  return v1;
}
