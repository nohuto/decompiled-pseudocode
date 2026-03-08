/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0090E3C
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1)
{
  if ( !a1 && WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    ObfDereferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = a1;
}
