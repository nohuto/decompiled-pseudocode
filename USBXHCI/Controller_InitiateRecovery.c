/*
 * XREFs of Controller_InitiateRecovery @ 0x1C0033990
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C0034EB0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000ED94 (CommonBuffer_FlushWorkItems.c)
 *     Register_ControllerStop @ 0x1C000EEB0 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C002FB48 (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C003314C (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0038210 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     UsbDevice_ControllerGone @ 0x1C0048450 (UsbDevice_ControllerGone.c)
 */

__int64 __fastcall Controller_InitiateRecovery(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r15
  _QWORD *v7; // r14
  bool i; // zf
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  unsigned int j; // esi
  __int64 v15; // rdx
  _BYTE v16[24]; // [rsp+40h] [rbp-68h] BYREF
  int v17; // [rsp+58h] [rbp-50h]

  result = 0LL;
  memset(v16, 0, sizeof(v16));
  v17 = 0;
  v5 = a2;
  v7 = a1 + 9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    result = WPP_RECORDER_SF_(*v7, a2, 4, 234, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  }
  if ( (a3 & 2) != 0 )
  {
    result = *((unsigned int *)a1 + 102);
    if ( (unsigned int)result > 0xA )
    {
      a3 |= 4u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 1;
        result = WPP_RECORDER_SF_dd(
                   *v7,
                   a2,
                   4,
                   235,
                   (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                   result,
                   10);
      }
    }
  }
  for ( i = a3 == 0; !i; i = a3 == 0 )
  {
    if ( (a3 & 0x18) != 0 )
    {
      v11 = *(_DWORD *)(v5 + 84);
      if ( (v11 & 2) == 0 )
      {
        Command_FailAllCommands(a1[18]);
        KeFlushQueuedDpcs();
        v12 = (_QWORD *)a1[15];
        if ( v12 )
          CommonBuffer_FlushWorkItems(v12);
        v13 = a1[17];
        for ( j = 1; j <= *(_DWORD *)(v13 + 96); ++j )
        {
          if ( *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(v13) + 8LL * j) )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(__int64, _QWORD))qword_1C0064800)(UcxDriverGlobals, a1[1]);
        if ( (a3 & 8) != 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
            WdfDriverGlobals,
            *a1,
            2LL);
        *(_DWORD *)(v5 + 84) |= 2u;
        v11 = *(_DWORD *)(v5 + 84);
      }
      if ( (v11 & 4) == 0 && (a3 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_(*v7, a2, 4, 236, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
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
        *(_DWORD *)(v5 + 84) |= 4u;
      }
      result = 4294967264LL;
    }
    else if ( (a3 & 4) != 0 )
    {
      v9 = Register_ControllerStop(a1[11]);
      if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(*v7, v10, 4, 237, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v9);
      }
      Controller_DisableController((__int64)a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967288LL;
    }
    else if ( (a3 & 1) != 0 )
    {
      Controller_InternalReset(a1);
      result = 4294967294LL;
    }
    else if ( (a3 & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, _QWORD))qword_1C00647F0)(UcxDriverGlobals, a1[1]);
      result = 4294967293LL;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      result = 4294967263LL;
    }
    else
    {
      if ( (a3 & 0x40) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          return WPP_RECORDER_SF_D(*v7, a2, 4, 238, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, a3);
        }
        return result;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 696))(
        WdfDriverGlobals,
        *a1,
        1LL);
      result = 4294967231LL;
    }
    a3 &= result;
  }
  return result;
}
