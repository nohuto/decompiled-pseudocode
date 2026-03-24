/*
 * XREFs of Controller_InitiateRecovery @ 0x1C0031F80
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C0033470 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000B6F0 (CommonBuffer_FlushWorkItems.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C002E080 (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C00314CC (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C00322D8 (Controller_InternalReset.c)
 *     UsbDevice_ControllerGone @ 0x1C00459E0 (UsbDevice_ControllerGone.c)
 */

__int64 __fastcall Controller_InitiateRecovery(_QWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // r14
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  unsigned int i; // ebp
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE v16[24]; // [rsp+40h] [rbp-58h] BYREF
  int v17; // [rsp+58h] [rbp-40h]

  result = 0LL;
  memset(v16, 0, sizeof(v16));
  v5 = a3;
  v17 = 0;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    result = WPP_RECORDER_SF_(a1[9], a2, 4, 231, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
  }
  if ( (v5 & 2) != 0 )
  {
    result = *((unsigned int *)a1 + 102);
    if ( (unsigned int)result > 0xA )
    {
      v5 |= 4u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 1;
        result = WPP_RECORDER_SF_dd(
                   a1[9],
                   a2,
                   4,
                   232,
                   (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
                   result,
                   10);
      }
    }
  }
  for ( ; v5; v5 &= result )
  {
    if ( (v5 & 0x18) != 0 )
    {
      v10 = *(_DWORD *)(v6 + 84);
      if ( (v10 & 2) == 0 )
      {
        Command_FailAllCommands(a1[18], a2, a3, a4);
        KeFlushQueuedDpcs();
        v11 = (_QWORD *)a1[15];
        if ( v11 )
          CommonBuffer_FlushWorkItems(v11);
        v12 = a1[17];
        for ( i = 1; i <= *(_DWORD *)(v12 + 96); ++i )
        {
          if ( *(_BYTE *)(v12 + 80) )
            v14 = *(_QWORD *)(v12 + 24);
          else
            v14 = *(_QWORD *)(v12 + 72);
          if ( *(_QWORD *)(v14 + 8LL * i) )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(__int64, _QWORD))qword_1C00617A0)(UcxDriverGlobals, a1[1]);
        if ( (v5 & 8) != 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
            WdfDriverGlobals,
            *a1,
            2LL);
        *(_DWORD *)(v6 + 84) |= 2u;
        v10 = *(_DWORD *)(v6 + 84);
      }
      if ( (v10 & 4) == 0 && (v5 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_(a1[9], a2, 4, 233, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
        }
        v15 = *a1;
        *(_DWORD *)v16 = 28;
        *(__m128i *)&v16[4] = _mm_load_si128((const __m128i *)&_xmm);
        v17 = 2;
        *(_DWORD *)&v16[20] = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *))(WdfFunctions_01023 + 232))(
          WdfDriverGlobals,
          v15,
          v16);
        *(_DWORD *)(v6 + 84) |= 4u;
      }
      result = 4294967264LL;
    }
    else if ( (v5 & 4) != 0 )
    {
      v8 = Register_ControllerStop(a1[11]);
      if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(a1[9], v9, 4, 234, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids, v8);
      }
      Controller_DisableController((__int64)a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967288LL;
    }
    else if ( (v5 & 1) != 0 )
    {
      Controller_InternalReset(a1);
      result = 4294967294LL;
    }
    else if ( (v5 & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, _QWORD))qword_1C0061790)(UcxDriverGlobals, a1[1]);
      result = 4294967293LL;
    }
    else
    {
      if ( (v5 & 0x20) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          return WPP_RECORDER_SF_d(a1[9], a2, 4, 235, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids, v5);
        }
        return result;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967263LL;
    }
  }
  return result;
}
