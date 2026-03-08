/*
 * XREFs of ?_PowerThreadInterfaceDereference@FxPkgPnp@@CAXPEAX@Z @ 0x1C0076580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::_PowerThreadInterfaceDereference(void *Context)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 312, 0xFFFFFFFF) == 1 )
    KeSetEvent(*((PRKEVENT *)Context + 157), 0, 0);
}
