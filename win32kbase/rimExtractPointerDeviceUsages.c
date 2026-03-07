__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v11; // r11
  unsigned __int16 *v12; // rdi
  int v13; // r14d
  int v14; // r15d
  __int64 v15; // rbp
  __int64 v16; // r10
  _DWORD *v18; // r12
  _DWORD *v19; // rax
  unsigned int v20; // r13d
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // r8
  BOOL v24; // r15d
  int v25; // edx
  int DigitizerPageButtonUsages; // esi
  int v27; // r8d
  _DWORD *v28; // r14
  unsigned __int16 v29; // ax
  _DWORD *v30; // rax
  PDEVICE_OBJECT v31; // rcx
  __int16 v32; // ax
  int v33; // edx
  int v34; // r8d
  int v35; // ecx
  int v36; // edx
  __int64 v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // r8
  _BYTE v42[88]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+8h]
  __int64 v44; // [rsp+B8h] [rbp+10h]
  unsigned __int8 *v45; // [rsp+C0h] [rbp+18h] BYREF
  int v46; // [rsp+C8h] [rbp+20h]

  v46 = a4;
  v45 = a3;
  v44 = a2;
  v11 = *(_QWORD *)(a1 + 760);
  v12 = (unsigned __int16 *)(a1 + 400);
  v13 = *a3;
  v14 = a4;
  v15 = a7;
  v43 = v11;
  v16 = (__int64)a3;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      60,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    v16 = (__int64)v45;
    v11 = v43;
  }
  v18 = a8;
  *a9 = 0;
  v19 = a10;
  *v18 = 1;
  v20 = 0;
  *v19 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 772) )
  {
LABEL_57:
    *(_DWORD *)(v15 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
    *(_DWORD *)(v15 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v35 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v35 - 1) <= 3 )
    {
      *(_DWORD *)(v15 + 64) = 2;
    }
    else
    {
      if ( v35 != 7 )
      {
        if ( (unsigned int)(v35 - 5) <= 1 )
        {
          v36 = a6;
          *(_DWORD *)(v15 + 64) = 3;
          rimExtractPenInfo(a1, v36, (_DWORD *)v15);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v33) = 0;
          }
          if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v33,
              v34,
              (_DWORD)gRimLog,
              4,
              1,
              63,
              (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
          }
          LODWORD(a9) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2802);
        }
        goto LABEL_72;
      }
      *(_DWORD *)(v15 + 64) = 5;
    }
    rimExtractTouchInfo(a1, a6, (_DWORD *)v15);
LABEL_72:
    v37 = (__int64)v45;
    DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, v44, (__int64)v45, v14, v15);
    if ( DigitizerPageButtonUsages >= 0 )
    {
      v39 = *(_DWORD *)(a1 + 360);
      if ( (v39 & 8) != 0 && (v39 & 0x2000) == 0 )
      {
        v40 = *(unsigned __int16 *)(v15 + 58);
        LOWORD(v45) = 0;
        LODWORD(a9) = 1;
        if ( (int)rimHidP_GetUsages(v38, 65280LL, v40, (__int64)&v45, (__int64)&a9, v44, v37, v14) >= 0
          && (_DWORD)a9 == 1
          && (_WORD)v45 == 207 )
        {
          *a11 = 1;
        }
      }
    }
    goto LABEL_79;
  }
  v21 = v13;
  LODWORD(a7) = v13;
  while ( 1 )
  {
    if ( v21 != *((_DWORD *)v12 + 1) )
      goto LABEL_27;
    v22 = v12[6];
    v23 = *(unsigned __int16 *)(v15 + 58);
    v24 = (unsigned __int16)(v22 - 48) <= 1u;
    if ( v11 && *(_WORD *)(v11 + 8) && *v12 == 1 && (unsigned __int16)(v22 - 48) <= 1u )
    {
      *((_DWORD *)v12 + 12) = 0;
      v23 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 24) + 8LL * *(unsigned __int16 *)(v15 + 58) + 2);
    }
    if ( (*(_DWORD *)(a1 + 360) & 0x200) != 0 && *v12 == 1 && (unsigned __int16)(v22 - 48) <= 1u )
    {
      DigitizerPageButtonUsages = rimHidP_GetUsageValueArray(0LL, 1LL, v23, v22, (__int64)v42, 8, v44, v16, v46);
      if ( DigitizerPageButtonUsages < 0 )
      {
        v31 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v25) = 0;
        }
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = 61;
LABEL_48:
          WPP_RECORDER_AND_TRACE_SF_D(
            v31->AttachedDevice,
            v25,
            v27,
            (_DWORD)gRimLog,
            4,
            1,
            v32,
            (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
            DigitizerPageButtonUsages);
          goto LABEL_79;
        }
        goto LABEL_79;
      }
      v28 = v12 + 26;
      rimExtractGeometryPoints(v12[6], v15, (__int64)(v12 + 26), (__int64)v42, v12[28]);
      goto LABEL_22;
    }
    v28 = v12 + 26;
    DigitizerPageButtonUsages = rimHidP_GetUsageValue(0LL, *v12, v23, v22, (__int64)(v12 + 26), v44, v16, v46);
    if ( DigitizerPageButtonUsages < 0 )
      break;
LABEL_22:
    if ( *((_DWORD *)v12 + 4) )
    {
      if ( *v28 < *((_DWORD *)v12 + 8) || *v28 > *((_DWORD *)v12 + 9) )
      {
        if ( *v12 == 1 && v24 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v29 = v12[6];
          if ( v29 == 48 )
          {
            v30 = a9;
          }
          else
          {
            if ( v29 != 49 )
            {
              LODWORD(a8) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2755);
            }
            v30 = a10;
          }
          *v30 = 1;
        }
      }
      else
      {
        *v18 = 0;
      }
    }
    else
    {
      *v18 = 0;
      if ( !v24 || a5 )
        RIMEnsureUsageWithinLogicalBoundary((__int64)v12);
    }
    v21 = a7;
LABEL_27:
    ++v20;
    v12 += 30;
    if ( v20 >= *(_DWORD *)(a1 + 772) )
    {
      v14 = v46;
      goto LABEL_57;
    }
    v16 = (__int64)v45;
    v11 = v43;
  }
  v31 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v25) = 0;
  }
  LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = 62;
    goto LABEL_48;
  }
LABEL_79:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v27,
      (_DWORD)gRimLog,
      4,
      1,
      64,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
      DigitizerPageButtonUsages);
  }
  return (unsigned int)DigitizerPageButtonUsages;
}
