/*
 * XREFs of WppCleanupKm @ 0x1C007A40C
 * Callers:
 *     RaDriverUnload @ 0x1C00344E0 (RaDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
        {
          ((void (*)(void))pfnEtwUnregister)();
          v0->Vpb = 0LL;
        }
        v0 = v0->NextDevice;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
