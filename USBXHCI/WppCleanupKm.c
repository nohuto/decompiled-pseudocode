/*
 * XREFs of WppCleanupKm @ 0x1C007999C
 * Callers:
 *     DriverEntry @ 0x1C0074360 (DriverEntry.c)
 *     DriverCleanup @ 0x1C0079890 (DriverCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( *(_DWORD *)&WPP_MAIN_CB.SectorSize == 4 )
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
    else if ( *(_DWORD *)&WPP_MAIN_CB.SectorSize == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WppAutoLogStop(WPP_GLOBAL_Control, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
    WPP_RECORDER_INITIALIZED = &WPP_RECORDER_INITIALIZED;
  }
}
