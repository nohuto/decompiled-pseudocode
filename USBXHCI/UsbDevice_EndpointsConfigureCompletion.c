char __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rbp
  _BYTE *v13; // r15
  int v14; // eax
  int v15; // edx
  int v16; // edx
  char v17; // r14
  int v18; // edi
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // edx
  unsigned int i; // r15d
  __int64 v28; // rax
  int v29; // edx
  char v30; // al
  unsigned int j; // r14d
  __int64 v32; // rax
  unsigned int k; // r15d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rcx
  unsigned int v38; // r15d
  unsigned int *m; // r14
  int v40; // edx
  unsigned int n; // edi
  __int64 v43; // rax
  __int64 v44; // r14
  int *v45; // r14
  int *v46; // rdi
  int v47; // ecx
  __int64 v48; // rdx
  unsigned int ii; // edi
  __int64 v50; // rax
  __int64 v51; // rdx
  char v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  char v56; // [rsp+40h] [rbp-78h]
  int v57; // [rsp+44h] [rbp-74h] BYREF
  __int64 v58; // [rsp+48h] [rbp-70h]
  __int64 v59; // [rsp+50h] [rbp-68h]
  __int64 v60; // [rsp+58h] [rbp-60h]
  _OWORD v61[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v62; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  v57 = 0;
  v56 = 0;
  v8 = *(_QWORD *)(v3 + 8);
  v58 = *(_QWORD *)(v3 + 440);
  v9 = *(_QWORD *)(v8 + 88);
  v60 = *(_QWORD *)(v8 + 144);
  memset(v61, 0, sizeof(v61));
  v59 = v9;
  v62 = 0LL;
  LOWORD(v61[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v58,
    v61);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v58,
          off_1C0063090);
  v12 = *((_QWORD *)&v61[0] + 1);
  v13 = (_BYTE *)v10;
  if ( a2 == 3 )
  {
    v14 = *(_DWORD *)(*((_QWORD *)&v61[0] + 1) + 24LL);
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(unsigned __int8 *)(v3 + 135);
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v15,
          12,
          47,
          (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
          *(_BYTE *)(v3 + 135),
          *(_QWORD *)v3,
          *(_DWORD *)(*((_QWORD *)&v61[0] + 1) + 40LL));
      }
      goto LABEL_25;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *(unsigned __int8 *)(v3 + 135);
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v16,
        12,
        48,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(v3 + 135),
        *(_QWORD *)v3,
        v14);
    }
LABEL_7:
    v17 = 1;
    v18 = -1073741823;
    goto LABEL_27;
  }
  v19 = *(_BYTE *)(a1 + 60);
  if ( v19 == 1 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
    v21 = *(_QWORD *)(v20 + 88);
    v22 = v20 + 16;
    v23 = *(_QWORD *)(v21 + 8);
    if ( *(_BYTE *)(v22 + 64) && (*(_BYTE *)(v3 + 656) && *(_DWORD *)(v23 + 604) == 2 || *(_DWORD *)(v23 + 604) == 1) )
      XilDeviceSlot_SendQuerySlotContextInfoRequest(v22, v3, 0LL, &v57);
    else
      XilUsbDevice_GetDeviceContextBufferVA(v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v25) = 4;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v25, v24, 49);
    }
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v13 || v13[1] )
    {
      v18 = -1073741823;
LABEL_26:
      v17 = 0;
LABEL_27:
      for ( i = 0; i < *(_DWORD *)(v12 + 40); ++i )
      {
        v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * i),
                off_1C00631A8);
        Endpoint_Disable(v28, 0LL);
      }
      if ( v17 != 1 )
        goto LABEL_48;
      goto LABEL_46;
    }
    v56 = 1;
LABEL_25:
    v18 = 0;
    goto LABEL_26;
  }
  if ( v19 == 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v26) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v26,
        12,
        50,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v3);
    }
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_25;
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v29) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v29, v11, 51);
  }
  v30 = *(_BYTE *)(a1 + 60);
  switch ( v30 )
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
    v18 = -1073741823;
LABEL_46:
    for ( j = 0; j < *(_DWORD *)(v12 + 24); ++j )
    {
      v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * j),
              off_1C00631A8);
      Endpoint_Disable(v32, 0LL);
    }
LABEL_48:
    if ( v56 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v12 + 24); *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v36 + 144) + 168) = v36 )
      {
        v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * k),
                off_1C00631A8);
        v36 = v34;
        v37 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v34 + 144) + 168);
        if ( v37 && v37 != v34 )
        {
          LOBYTE(v35) = 1;
          Endpoint_Disable(v37, v35);
          *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v36 + 144) + 168) = 0LL;
        }
        ++k;
      }
    }
    if ( v18 >= 0 )
    {
      v38 = 0;
      for ( m = *(unsigned int **)(v12 + 88); v38 < *(_DWORD *)(v12 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation(v3, v12, m);
        ++v38;
      }
    }
    if ( *(_DWORD *)(v3 + 448) == 259 )
      *(_DWORD *)(v3 + 448) = v18;
    if ( v18 < 0 )
      v40 = 2;
    else
      v40 = 1;
    return UsbDevice_QueueConfigureEndpointEvent(v3, v40);
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
    return Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2, 4119, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v13[1] = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), *(unsigned __int8 *)(v3 + 135), v11, 52);
    for ( n = 0; n < *(_DWORD *)(v12 + 24); ++n )
    {
      v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * n),
              off_1C00631A8);
      Endpoint_Disable(v43, 0LL);
    }
    v44 = *(_QWORD *)((*(_BYTE *)(v3 + 657) != 0 ? 648LL : 640LL) + v3);
    if ( v44 )
      v45 = *(int **)(v44 + 16);
    else
      v45 = 0LL;
    if ( (*(_DWORD *)(v59 + 104) & 4) != 0 )
    {
      memset(v45, 0, 0x840uLL);
      v46 = v45 + 16;
    }
    else
    {
      memset(v45, 0, 0x420uLL);
      v46 = v45 + 8;
    }
    v45[1] |= 1u;
    if ( *(_BYTE *)(v3 + 136) )
    {
      v47 = *v46 | 0x4000000;
      *v46 = v47;
      *((_BYTE *)v46 + 7) = *(_BYTE *)(v3 + 140);
      if ( *(_DWORD *)(v3 + 20) == 2 )
      {
        if ( *(_DWORD *)(v3 + 144) > 1u )
          *v46 = v47 | 0x2000000;
        v46[2] ^= (v46[2] ^ (*(_DWORD *)(v3 + 148) << 16)) & 0x30000;
      }
    }
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v3 + 8) + 336LL), 0x3Du) )
    {
      if ( !*(_BYTE *)(v3 + 136) )
      {
        v48 = *(_QWORD *)(v3 + 24);
        if ( v48 )
        {
          if ( *(int *)(v3 + 20) < 2
            && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                             WdfDriverGlobals,
                             v48,
                             off_1C00632C0)
                         + 144) > 1u )
          {
            *v46 |= 0x2000000u;
          }
        }
      }
    }
    for ( ii = 0; ii < *(_DWORD *)(v12 + 40); *v45 |= 1 << *(_DWORD *)(v50 + 144) )
      v50 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * ii++),
              off_1C00631A8);
    memset((void *)(v3 + 456), 0, 0x60uLL);
    *(_QWORD *)(v3 + 504) = v3;
    *(_QWORD *)(v3 + 496) = UsbDevice_EndpointsConfigureCompletion;
    v51 = v3 + 648;
    *(_DWORD *)(v3 + 492) = *(_DWORD *)(v3 + 492) & 0xFFFF01FF | 0x3000;
    *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
    v52 = *(_BYTE *)(v3 + 657);
    if ( !v52 )
      v51 = v3 + 640;
    v53 = v3 + 640;
    if ( *(_QWORD *)v51 )
      v54 = *(_QWORD *)(*(_QWORD *)v51 + 24LL);
    else
      v54 = 0LL;
    *(_QWORD *)(v3 + 480) = v54;
    *(_QWORD *)(v3 + 528) = v45;
    if ( v52 )
      v53 = v3 + 648;
    if ( *(_QWORD *)v53 )
      v5 = *(_DWORD *)(*(_QWORD *)v53 + 44LL);
    v55 = v60;
    *(_DWORD *)(v3 + 536) = v5;
    *(_DWORD *)(v3 + 540) = 1;
    *(_QWORD *)(v3 + 544) = v3;
    return Command_SendCommand(v55, v3 + 456);
  }
}
