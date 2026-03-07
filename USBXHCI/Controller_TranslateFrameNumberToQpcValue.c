__int64 __fastcall Controller_TranslateFrameNumberToQpcValue(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v6; // rcx
  KIRQL v7; // bl
  int FrameNumber; // eax
  int HighPart; // r8d
  int v10; // r9d
  int v11; // r10d
  __int64 v12; // rcx
  __int64 QpcValueForFrameMicroFrameBoundary; // rax
  int v14; // edx
  __int64 LowPart; // rcx
  int v16; // r11d
  int v17; // r14d
  int v18; // r8d
  unsigned int v19; // r9d
  int v20; // r9d
  char v22; // [rsp+38h] [rbp-31h]
  char v23; // [rsp+40h] [rbp-29h]
  unsigned __int64 v24; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h] BYREF
  __int64 v26; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v27[9]; // [rsp+78h] [rbp+Fh] BYREF
  char v28; // [rsp+D0h] [rbp+67h] BYREF
  int v29; // [rsp+D8h] [rbp+6Fh] BYREF
  int v30; // [rsp+E0h] [rbp+77h] BYREF
  int v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = a1 + 664;
  v28 = 0;
  v26 = 0LL;
  v30 = 0;
  v31 = 0;
  v6 = *(_QWORD *)(a1 + 128);
  v29 = 0;
  v25 = 0LL;
  v24 = 0LL;
  Interrupter_QueryBusEdgeInformation(
    v6,
    v3,
    (unsigned int)&v28,
    (unsigned int)&v26,
    (__int64)&v30,
    (__int64)&v31,
    (__int64)&v29);
  v27[1] = &v25;
  v27[0] = v3;
  v27[2] = &v24;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, _QWORD **), _QWORD *))(WdfFunctions_01023 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_ReadAccumulatedQpcAndFrameDataForTimeSync,
    v27);
  v7 = KfRaiseIrql(2u);
  FrameNumber = Controller_GetFrameNumber(a1, 0, (unsigned int *)&a2[6], &a2[6].HighPart);
  HighPart = a2[6].HighPart;
  v10 = v29;
  v11 = v30;
  a2[7].LowPart = FrameNumber;
  v12 = (unsigned int)(HighPart + 8 * FrameNumber);
  if ( (unsigned int)v12 < v10 + 8 * v11 )
  {
    a2[5] = KeQueryPerformanceCounter(0LL);
    goto LABEL_13;
  }
  QpcValueForFrameMicroFrameBoundary = Controller_GetQpcValueForFrameMicroFrameBoundary(
                                         v12,
                                         FrameNumber,
                                         HighPart,
                                         FrameNumber,
                                         HighPart,
                                         v28,
                                         v26,
                                         v11,
                                         v10,
                                         v25,
                                         v24,
                                         &a2[4]);
  LowPart = a2[1].LowPart;
  a2[5].QuadPart = QpcValueForFrameMicroFrameBoundary;
  if ( __PAIR64__(a2[1].HighPart, LowPart) )
  {
    v16 = a2[7].LowPart;
    v17 = a2[6].HighPart;
    v18 = a2[1].HighPart;
    v19 = v18 + 8 * LowPart;
    if ( v17 + 8 * v16 >= v19 )
    {
      v14 = v29;
      if ( v19 >= v29 + 8 * v30 )
      {
        a2[2].QuadPart = Controller_GetQpcValueForFrameMicroFrameBoundary(
                           LowPart,
                           v16,
                           v17,
                           LowPart,
                           v18,
                           v28,
                           v26,
                           v30,
                           v29,
                           v25,
                           v24,
                           &a2[4]);
        goto LABEL_14;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = v29;
        v20 = 304;
        v22 = v30;
        goto LABEL_7;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = a2[6].HighPart;
      v20 = 303;
      v22 = a2[7].LowPart;
LABEL_7:
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(a1 + 72),
        v14,
        4,
        v20,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        LowPart,
        v18,
        v22,
        v23);
    }
LABEL_13:
    v2 = -1073741811;
    goto LABEL_14;
  }
  a2[2].QuadPart = 0LL;
LABEL_14:
  KeLowerIrql(v7);
  return v2;
}
