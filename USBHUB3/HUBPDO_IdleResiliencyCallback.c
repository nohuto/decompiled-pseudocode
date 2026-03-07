__int64 __fastcall HUBPDO_IdleResiliencyCallback(
        __int64 SettingGuid,
        _BYTE *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  unsigned int v4; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-28h]

  v4 = 0;
  if ( !*Value )
  {
    v7 = Context[2];
    if ( *(_DWORD *)(v7 + 404) )
    {
      PoUnregisterPowerSettingCallback(*(PVOID *)(v7 + 416));
      *(_QWORD *)(v7 + 416) = 0LL;
      _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 404), 0, 1);
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v7);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v8,
        "DRIPS IO Tag",
        12101LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    }
    else
    {
      v4 = -1073741811;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_dd(*(_QWORD *)(Context[1] + 1432LL), (__int64)Value, ValueLength, 0xB4u, v10, SettingGuid);
  return v4;
}
