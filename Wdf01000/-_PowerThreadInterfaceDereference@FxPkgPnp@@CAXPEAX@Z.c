void __fastcall FxPkgPnp::_PowerThreadInterfaceDereference(void *Context)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 312, 0xFFFFFFFF) == 1 )
    KeSetEvent(*((PRKEVENT *)Context + 157), 0, 0);
}
