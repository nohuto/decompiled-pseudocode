/*
 * XREFs of WppInitKm @ 0x1C00747C4
 * Callers:
 *     DriverEntry @ 0x1C0074360 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppInitKm(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // rbx
  void (__fastcall *Reserved)(_DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **); // rax

  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( *(_DWORD *)&WPP_MAIN_CB.SectorSize == 4 )
    {
      v4 = &WPP_MAIN_CB;
      do
      {
        Reserved = (void (__fastcall *)(_DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **))WPP_MAIN_CB.Reserved;
        v4->Vpb = 0LL;
        Reserved(v4->DriverObject, 0LL, WppClassicProviderCallback, v4, &v4->Vpb);
        v4 = v4->NextDevice;
      }
      while ( v4 );
    }
    else if ( *(_DWORD *)&WPP_MAIN_CB.SectorSize == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
    WPP_RECORDER_INITIALIZED = &WPP_MAIN_CB;
  }
}
