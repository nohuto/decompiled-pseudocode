/*
 * XREFs of PopDispatchShutdownEvent @ 0x1409914E0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1403B127C (PopEventCalloutDispatch.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

struct _KTHREAD *PopDispatchShutdownEvent()
{
  unsigned __int32 v0; // eax
  struct _KTHREAD *result; // rax

  v0 = _InterlockedExchange(&PopShutdownEventCode, 0);
  if ( v0 )
    PopEventCalloutDispatch(1, v0);
  if ( PoPdcCallbacks )
    PoPdcCallbacks();
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
