__int64 __fastcall HUBPDO_EvtDeviceEnableWakeAtBus(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // rcx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v4 = v3;
  v5 = 0;
  _InterlockedOr((volatile signed __int32 *)(v3 + 32), 8u);
  if ( a2 == 1 || (*(_DWORD *)(*(_QWORD *)(v3 + 24) + 1632LL) & 2) == 0 )
  {
    v6 = *(_QWORD *)(v3 + 24);
    if ( (*(_DWORD *)(v6 + 1632) & 0x100) != 0 )
    {
      if ( (*(_DWORD *)(v3 + 32) & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(v6 + 1456) & 0x800) != 0 )
        {
          v5 = HUBPDO_SubmitDeviceWakeNotificationIoctl((_QWORD *)v6);
          if ( v5 >= 0 )
            _InterlockedOr((volatile signed __int32 *)(v4 + 32), 0x4000u);
        }
        _InterlockedOr((volatile signed __int32 *)(v4 + 32), 4u);
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v5;
}
