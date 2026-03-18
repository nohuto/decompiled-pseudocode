/*
 * XREFs of ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C0305FCC
 * Callers:
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C0080554 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C0080D84 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C008D700 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00A225C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C0114828 (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
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
