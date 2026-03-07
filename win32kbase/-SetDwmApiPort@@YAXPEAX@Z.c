void __fastcall SetDwmApiPort(void *a1)
{
  if ( !a1 && WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    ObfDereferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = a1;
}
