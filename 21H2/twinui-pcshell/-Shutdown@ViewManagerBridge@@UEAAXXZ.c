/*
 * XREFs of ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x180332300
 * Callers:
 *     ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x180315F90 (-Shutdown@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     IsNAVShutdownPresent @ 0x180092818 (IsNAVShutdownPresent.c)
 *     ?Shutdown@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180332340 (-Shutdown@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

void __fastcall ViewManagerBridge::Shutdown(ViewManagerBridge *this)
{
  ViewManagerInteropTraceLogging::Shutdown();
  if ( IsNAVShutdownPresent() )
  {
    if ( !*((_BYTE *)this + 145) )
    {
      *((_BYTE *)this + 144) = 1;
      NAVShutdown();
    }
  }
}
