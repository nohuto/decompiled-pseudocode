/*
 * XREFs of WppCleanupKm @ 0x1C00754A8
 * Callers:
 *     UsbhDriverUnload @ 0x1C00433D0 (UsbhDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) == 4 )
    {
      while ( v1 )
      {
        if ( v1->Vpb )
        {
          (*((void (**)(void))&WPP_MAIN_CB.Reserved + 1))();
          v1->Vpb = 0LL;
        }
        v1 = v1->NextDevice;
      }
    }
    else if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WppAutoLogStop(WPP_GLOBAL_Control, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
    WPP_RECORDER_INITIALIZED = &WPP_RECORDER_INITIALIZED;
  }
}
