/*
 * XREFs of ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C01799B0
 * Callers:
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C017A0A4 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C017A288 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C017A3C0 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C017ADD8 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPlatformSingleWatierSignal::Wait(
        NSInstrumentation::CPlatformSingleWatierSignal *this)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *(_QWORD *)this = &Event;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 2, -1, 0) != 1 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
}
