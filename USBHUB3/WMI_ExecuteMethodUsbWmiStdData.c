/*
 * XREFs of WMI_ExecuteMethodUsbWmiStdData @ 0x1C008BE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     WMI_AcquireHubName @ 0x1C008B7AC (WMI_AcquireHubName.c)
 *     WMI_AcquireBusInfo @ 0x1C008B890 (WMI_AcquireBusInfo.c)
 *     WMI_AcquireControllerName @ 0x1C008B98C (WMI_AcquireControllerName.c)
 */

__int64 __fastcall WMI_ExecuteMethodUsbWmiStdData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax

  v6 = 0;
  *a6 = 0;
  if ( a4 < 4 )
    return (unsigned int)-1073741789;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C006A198);
  if ( *a5 != 4 )
  {
    switch ( *a5 )
    {
      case 5:
        return (unsigned int)WMI_AcquireBusInfo(v9, a4, a6, a5);
      case 6:
        return (unsigned int)WMI_AcquireHubName(v9, a4, a6, (__int64)a5);
      case 7:
        return (unsigned int)WMI_AcquireControllerName(v9, a4, a6, (__int64)a5);
      default:
        return v6;
    }
  }
  *a6 = 0;
  if ( a4 < 0x18 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v11 = v9 + 2360;
    v12 = *(_QWORD *)(v9 + 2360);
    v13 = v12 - 248;
    if ( v11 == v12 )
      return (unsigned int)-1073741811;
    while ( *(unsigned __int16 *)(v13 + 200) != a5[1] )
    {
      v14 = *(_QWORD *)(v13 + 248);
      v13 = v14 - 248;
      if ( v11 == v14 )
        return (unsigned int)-1073741811;
    }
    if ( !v13 )
    {
      return (unsigned int)-1073741811;
    }
    else if ( (*(_DWORD *)(v13 + 1336) & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v13 + 1336), 0xFFFFFFFB);
      (*(void (__fastcall **)(__int64, __int64))(v13 + 1240))(v13, 3054LL);
    }
  }
  return v6;
}
