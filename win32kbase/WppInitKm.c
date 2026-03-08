/*
 * XREFs of WppInitKm @ 0x1C03014F4
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00C35F8 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppInitKm(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // rbx
  struct _LIST_ENTRY *Blink; // rax

  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
    {
      v4 = &WPP_MAIN_CB;
      do
      {
        Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
        v4->Vpb = 0LL;
        ((void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))Blink)(
          v4->DriverObject,
          0LL,
          WppClassicProviderCallback,
          v4,
          &v4->Vpb);
        v4 = v4->NextDevice;
      }
      while ( v4 );
    }
    else if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
    WPP_RECORDER_INITIALIZED = &WPP_MAIN_CB;
  }
}
