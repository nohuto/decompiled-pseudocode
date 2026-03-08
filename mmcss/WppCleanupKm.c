/*
 * XREFs of WppCleanupKm @ 0x1C000C5D8
 * Callers:
 *     CsTerminate @ 0x1C000C4C4 (CsTerminate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      if ( WPP_GLOBAL_Control )
      {
        do
        {
          if ( v0->Vpb )
          {
            ((void (*)(void))pfnEtwUnregister)();
            v0->Vpb = 0LL;
          }
          v0 = v0->NextDevice;
        }
        while ( v0 );
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
