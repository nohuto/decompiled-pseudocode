/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x1C0048620
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_Disable @ 0x1C000B0AC (Endpoint_Disable.c)
 *     UsbDevice_GetEndpointState @ 0x1C00111B4 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0019330 (WPP_RECORDER_SF_dq.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_dLL @ 0x1C004A0B0 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dqLL @ 0x1C004A520 (WPP_RECORDER_SF_dqLL.c)
 */

__int64 __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, __int128 *a3, int a4)
{
  __int64 v4; // rbx
  char v6; // r14
  int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 48);
  v6 = a2;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v8,
        12,
        62,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
    v9 = (__int64 *)(v4 + 184);
    v10 = 30LL;
    do
    {
      if ( *v9 )
        Endpoint_Disable(*v9, 0LL);
      ++v9;
      --v10;
    }
    while ( v10 );
LABEL_19:
    *(_DWORD *)(v4 + 152) = 3;
    v16 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v16,
             0LL);
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v11,
        12,
        63,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v4);
    }
    if ( !(unsigned int)UsbDevice_GetEndpointState(v4, 1)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dLL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 61),
        v12,
        v13,
        v18,
        *(_BYTE *)(a1 + 61),
        *(_BYTE *)(a1 + 60),
        v6);
    }
    v14 = (__int64 *)(v4 + 184);
    v15 = 30LL;
    do
    {
      if ( *v14 )
        Endpoint_Disable(*v14, 0LL);
      ++v14;
      --v15;
    }
    while ( v15 );
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqLL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), (_DWORD)a3, a4);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)(v4 + 8),
    *(_QWORD *)v4,
    0,
    0x200000LL,
    "Reset Device Command failed",
    (__int128 *)(a1 + 24),
    a3);
  return Controller_ReportFatalErrorEx(*(_QWORD *)(v4 + 8), 2u, 4121, 0LL, 0LL, 0LL, 0LL, 0LL);
}
