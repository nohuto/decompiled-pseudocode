/*
 * XREFs of WMI_AcquireBusInfo @ 0x1C008B890
 * Callers:
 *     WMI_ExecuteMethodUsbWmiStdData @ 0x1C008BE50 (WMI_ExecuteMethodUsbWmiStdData.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetControllerName @ 0x1C0028D3C (HUBUCX_GetControllerName.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

__int64 __fastcall WMI_AcquireBusInfo(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int ControllerName; // ebx
  int v8; // eax
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int16 v12; // [rsp+34h] [rbp-24h]

  *a3 = 0;
  if ( a2 >= 0x10 )
  {
    v11 = 0;
    v12 = 0;
    ControllerName = HUBUCX_GetControllerName(a1, &v11, 6u);
    if ( ControllerName >= 0 )
    {
      a4[1] = 0;
      v8 = v11;
      a4[2] = 0;
      a4[3] = v8;
      *a3 = 16;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = ControllerName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0xCu,
        (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
        v10);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xBu, (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids);
    return (unsigned int)-1073741789;
  }
  return (unsigned int)ControllerName;
}
