/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0
 * Callers:
 *     <none>
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00057C4 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0007714 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0009510 (WPP_RECORDER_SF_dqL.c)
 *     Endpoint_Disable @ 0x1C000AB88 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0010C04 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010CB0 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0019504 (WPP_RECORDER_SF_dqd.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001B2C0 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031CC4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032BA0 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036C74 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C004631C (UsbDevice_GetEndpointOffloadInformation.c)
 */

char __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbp
  _BYTE *v13; // r15
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // edx
  int v20; // edi
  char v21; // r14
  unsigned int i; // r15d
  unsigned int k; // r15d
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r15d
  unsigned int *m; // r14
  __int64 v30; // rdx
  int v32; // eax
  int v33; // edx
  int v34; // edx
  int v35; // edx
  __int64 v36; // rax
  int v37; // edx
  unsigned int j; // r14d
  __int64 v39; // rax
  unsigned int n; // edi
  __int64 v41; // rax
  __int64 v42; // rdi
  _DWORD *v43; // rdi
  __int64 v44; // r14
  int v45; // ecx
  __int64 v46; // rdx
  unsigned int ii; // r14d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // [rsp+40h] [rbp-78h]
  int v54; // [rsp+44h] [rbp-74h] BYREF
  __int64 v55; // [rsp+48h] [rbp-70h]
  __int64 v56; // [rsp+50h] [rbp-68h]
  __int64 v57; // [rsp+58h] [rbp-60h]
  _OWORD v58[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v59; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  v54 = 0;
  v53 = 0;
  v8 = *(_QWORD *)(v3 + 8);
  v55 = *(_QWORD *)(v3 + 440);
  v9 = *(_QWORD *)(v8 + 88);
  v57 = *(_QWORD *)(v8 + 144);
  memset(v58, 0, sizeof(v58));
  v56 = v9;
  v59 = 0LL;
  LOWORD(v58[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v55,
    v58);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v55,
          off_1C0060090);
  v12 = *((_QWORD *)&v58[0] + 1);
  v13 = (_BYTE *)v10;
  if ( a2 == 3 )
  {
    v32 = *(_DWORD *)(*((_QWORD *)&v58[0] + 1) + 24LL);
    if ( !v32 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = *(unsigned __int8 *)(v3 + 135);
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v33,
          12,
          47,
          (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
          *(_BYTE *)(v3 + 135),
          *(_QWORD *)v3,
          *(_DWORD *)(*((_QWORD *)&v58[0] + 1) + 40LL));
      }
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = *(unsigned __int8 *)(v3 + 135);
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v34,
        12,
        48,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_BYTE *)(v3 + 135),
        *(_QWORD *)v3,
        v32);
    }
    goto LABEL_31;
  }
  v14 = *(_BYTE *)(a1 + 60);
  if ( v14 == 1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
    v16 = *(_QWORD *)(v15 + 88);
    v17 = v15 + 16;
    v18 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v17 + 64) && (*(_BYTE *)(v3 + 656) && *(_DWORD *)(v18 + 556) == 2 || *(_DWORD *)(v18 + 556) == 1) )
      XilDeviceSlot_SendQuerySlotContextInfoRequest(v17, v3, 0LL, &v54);
    else
      XilUsbDevice_GetDeviceContextBufferVA(v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v19, v11, 49);
    }
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v13 || v13[1] )
    {
      v20 = -1073741823;
      goto LABEL_11;
    }
    v53 = 1;
LABEL_10:
    v20 = 0;
LABEL_11:
    v21 = 0;
    goto LABEL_12;
  }
  if ( v14 == 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v35) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v35,
        12,
        50,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v3);
    }
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_10;
LABEL_31:
    v21 = 1;
    v20 = -1073741823;
LABEL_12:
    for ( i = 0; i < *(_DWORD *)(v12 + 40); ++i )
    {
      v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * i),
              off_1C00601A8);
      Endpoint_Disable(v36, 0LL);
    }
    if ( v21 != 1 )
      goto LABEL_14;
    goto LABEL_59;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v37) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v37, v11, 51);
    v14 = *(_BYTE *)(a1 + 60);
  }
  switch ( v14 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v12 + 24) )
        *(_DWORD *)(v12 + 72) |= 4u;
      *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
      break;
  }
  if ( !*(_DWORD *)(v12 + 40) )
  {
    v20 = -1073741823;
LABEL_59:
    for ( j = 0; j < *(_DWORD *)(v12 + 24); ++j )
    {
      v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * j),
              off_1C00601A8);
      Endpoint_Disable(v39, 0LL);
    }
LABEL_14:
    if ( v53 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v12 + 24); *(_QWORD *)(v3 + 8LL * (unsigned int)v26 + 168) = v25 )
      {
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * k),
                off_1C00601A8);
        v25 = v24;
        v26 = *(unsigned int *)(v24 + 144);
        v27 = *(_QWORD *)(v3 + 8 * v26 + 168);
        if ( v27 && v27 != v24 )
        {
          LOBYTE(v26) = 1;
          Endpoint_Disable(v27, v26);
          *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v25 + 144) + 168) = 0LL;
          LODWORD(v26) = *(_DWORD *)(v25 + 144);
        }
        ++k;
      }
    }
    if ( v20 >= 0 )
    {
      v28 = 0;
      for ( m = *(unsigned int **)(v12 + 88); v28 < *(_DWORD *)(v12 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation(v3, v12, m);
        ++v28;
      }
    }
    if ( *(_DWORD *)(v3 + 448) == 259 )
      *(_DWORD *)(v3 + 448) = v20;
    if ( v20 < 0 )
      v30 = 2LL;
    else
      v30 = 1LL;
    return UsbDevice_QueueConfigureEndpointEvent(v3, v30, v11);
  }
  if ( !*(_DWORD *)(v12 + 24) || *v13 == 1 || v13[1] == 1 )
  {
    if ( *(_DWORD *)(v3 + 448) == 259 )
      *(_DWORD *)(v3 + 448) = -1073741823;
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x80000,
      (__int64)"Configure Endpoints command failed when only disabling endpoints",
      a1 + 24,
      a3);
    return Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4119, 0, 0LL, 0LL, 0LL);
  }
  else
  {
    v13[1] = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), *(unsigned __int8 *)(v3 + 135), v11, 52);
    for ( n = 0; n < *(_DWORD *)(v12 + 24); ++n )
    {
      v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * n),
              off_1C00601A8);
      Endpoint_Disable(v41, 0LL);
    }
    v42 = *(_QWORD *)((*(_BYTE *)(v3 + 657) != 0 ? 648LL : 640LL) + v3);
    if ( v42 )
      v43 = *(_DWORD **)(v42 + 16);
    else
      v43 = 0LL;
    if ( (*(_DWORD *)(v56 + 104) & 4) != 0 )
    {
      memset(v43, 0, 0x840uLL);
      v44 = 16LL;
    }
    else
    {
      memset(v43, 0, 0x420uLL);
      v44 = 8LL;
    }
    v43[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      v45 = v43[v44] | 0x4000000;
      v43[v44] = v45;
      HIBYTE(v43[v44 + 1]) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          v43[v44] = v45 | 0x2000000;
        v43[v44 + 2] ^= (v43[v44 + 2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v3 + 136) )
    {
      v46 = *(_QWORD *)(v3 + 24);
      if ( v46 )
      {
        if ( *(int *)(v3 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                           WdfDriverGlobals,
                           v46,
                           off_1C00602C0)
                       + 144) > 1u )
        {
          v43[v44] |= 0x2000000u;
        }
      }
    }
    for ( ii = 0; ii < *(_DWORD *)(v12 + 40); *v43 |= 1 << *(_DWORD *)(v48 + 144) )
      v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * ii++),
              off_1C00601A8);
    memset((void *)(v3 + 456), 0, 0x60uLL);
    *(_QWORD *)(v3 + 504) = v3;
    *(_QWORD *)(v3 + 496) = UsbDevice_EndpointsConfigureCompletion;
    *(_DWORD *)(v3 + 492) = *(_DWORD *)(v3 + 492) & 0xFFFF01FF | 0x3000;
    *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
    v49 = *(_QWORD *)((*(_BYTE *)(v3 + 657) != 0 ? 648LL : 640LL) + v3);
    if ( v49 )
      v50 = *(_QWORD *)(v49 + 24);
    else
      v50 = 0LL;
    *(_QWORD *)(v3 + 480) = v50;
    *(_QWORD *)(v3 + 528) = v43;
    v51 = *(_QWORD *)((*(_BYTE *)(v3 + 657) != 0 ? 648LL : 640LL) + v3);
    if ( v51 )
      v5 = *(_DWORD *)(v51 + 44);
    v52 = v57;
    *(_DWORD *)(v3 + 536) = v5;
    *(_DWORD *)(v3 + 540) = 1;
    *(_QWORD *)(v3 + 544) = v3;
    return Command_SendCommand(v52, v3 + 456);
  }
}
