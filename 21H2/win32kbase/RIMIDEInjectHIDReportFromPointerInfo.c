/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168EBC
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C0131BF0 (NtUserInjectPointerInput.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0168528 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C016877C (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0168B48 (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016B0DC (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  int v5; // ebx
  _WORD *v6; // rdi
  int v7; // edx
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // edx
  struct tagINPUT_INJECTION_VALUE *v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  unsigned int v27; // r13d
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  unsigned int v40; // edx
  __int64 v41; // rcx
  unsigned int v42; // eax
  int v43; // r9d
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // r13
  __int64 v51; // rcx
  unsigned int v52; // eax
  int v53; // eax
  unsigned int v55[2]; // [rsp+38h] [rbp-A9h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-A1h]
  struct tagINPUT_INJECTION_VALUE *v57; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v58[3]; // [rsp+50h] [rbp-91h] BYREF
  __int128 v59; // [rsp+68h] [rbp-79h]
  __int128 v60; // [rsp+78h] [rbp-69h]
  __int128 v61; // [rsp+88h] [rbp-59h]
  __int128 v62; // [rsp+98h] [rbp-49h]
  __int128 v63; // [rsp+A8h] [rbp-39h]
  __int128 v64; // [rsp+B8h] [rbp-29h]
  __int128 v65; // [rsp+C8h] [rbp-19h]
  __int128 v66; // [rsp+D8h] [rbp-9h]
  __int64 v67; // [rsp+E8h] [rbp+7h]
  unsigned int v70; // [rsp+150h] [rbp+6Fh]
  unsigned int v71; // [rsp+158h] [rbp+77h] BYREF
  unsigned int v72; // [rsp+160h] [rbp+7Fh]

  v71 = a3;
  v3 = a3;
  v57 = 0LL;
  v4 = a2;
  v55[1] = 0;
  v5 = 0;
  v72 = 0;
  v6 = 0LL;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1591);
  if ( (unsigned int)v3 > 0x100 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1592);
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)v4, &v57, &v55[1]) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 45, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    goto LABEL_68;
  }
  v8 = v55[1];
  v9 = v3 * v55[1];
  v56 = v9;
  if ( v9 > 0xFFFFFFFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d((_DWORD)gRimLog, 2, 1, 36, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v3);
LABEL_68:
    v5 = -1073741811;
    goto LABEL_69;
  }
  if ( *(_DWORD *)v4 == 2 )
  {
    v10 = v55[1] - 2;
LABEL_11:
    v55[1] = v10;
    goto LABEL_12;
  }
  if ( *(_DWORD *)v4 == 3 )
  {
    v10 = v55[1] - 1;
    goto LABEL_11;
  }
LABEL_12:
  v6 = Win32AllocPoolZInit(12LL * (unsigned int)v9, 1785620818LL);
  if ( !v6 )
  {
    v5 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v11, 1, 37, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, 23);
    }
  }
  if ( v8 > 0xC )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1630);
  if ( v5 < 0 )
    goto LABEL_69;
  v13 = v71;
  v14 = 0LL;
  v55[0] = 0;
  if ( !v71 )
  {
LABEL_30:
    if ( v5 < 0 )
      goto LABEL_69;
    if ( *(_DWORD *)v4 != 2 )
      goto LABEL_47;
    v31 = v72;
    v32 = v56;
    LODWORD(v12) = v72 + 1;
    if ( v72 + 1 > (unsigned int)v56 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v32, 1, 39, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
        v32 = v56;
        v31 = v72;
      }
      v5 = -1073741811;
    }
    else
    {
      v33 = 3LL * v72;
      v6[2 * v33 + 4] = 0;
      v31 = (unsigned int)v12;
      *(_DWORD *)&v6[2 * v33] = 5505037;
      *(_DWORD *)&v6[2 * v33 + 2] = v13;
      v72 = (unsigned int)v12;
    }
    if ( v5 < 0 )
      goto LABEL_47;
    if ( v31 + 1 > v32 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_46:
        v5 = -1073741811;
LABEL_47:
        v40 = v72;
        v42 = v56;
LABEL_48:
        if ( *(_DWORD *)v4 == 3 )
        {
          v70 = v40 + 1;
          if ( v40 + 1 <= v42 )
          {
            v44 = *(_OWORD *)(v4 + 8);
            v45 = *(_OWORD *)(v4 + 24);
            v71 = 0;
            *(_OWORD *)&v58[1] = v44;
            v46 = *(_OWORD *)(v4 + 40);
            v59 = v45;
            v47 = *(_OWORD *)(v4 + 56);
            v60 = v46;
            v48 = *(_OWORD *)(v4 + 72);
            v61 = v47;
            v49 = *(_OWORD *)(v4 + 88);
            v50 = a1;
            v62 = v48;
            v63 = v49;
            if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v58[1], &v71, (int)v12) )
            {
              v51 = 3LL * v72;
              *(_DWORD *)&v6[2 * v51 + 2] = v71;
              v52 = v70;
              *(_DWORD *)&v6[2 * v51] = 5636109;
              v6[2 * v51 + 4] = 0;
LABEL_60:
              if ( v5 >= 0 )
              {
                v53 = RIMIDEInjectDeviceInput(v50, (__int64)v6, v52);
                v5 = v53;
                if ( v53 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_d(
                    (_DWORD)gRimLog,
                    2,
                    1,
                    44,
                    (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
                    v53);
              }
              goto LABEL_69;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 42, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
            v5 = -1073741811;
LABEL_59:
            v52 = v56;
            goto LABEL_60;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 43, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
          v5 = -1073741811;
        }
        v50 = a1;
        goto LABEL_59;
      }
      v43 = 41;
      LOBYTE(v32) = 2;
    }
    else
    {
      v34 = *(_OWORD *)(v4 + 8);
      v71 = 0;
      v35 = *(_OWORD *)(v4 + 24);
      *(_OWORD *)&v58[1] = v34;
      v36 = *(_OWORD *)(v4 + 40);
      v59 = v35;
      v37 = *(_OWORD *)(v4 + 56);
      v60 = v36;
      v38 = *(_OWORD *)(v4 + 72);
      v61 = v37;
      v39 = *(_OWORD *)(v4 + 88);
      v62 = v38;
      v63 = v39;
      if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v58[1], &v71, (int)v12) )
      {
        v40 = v72;
        v41 = 3LL * v72;
        *(_DWORD *)&v6[2 * v41 + 2] = v71;
        v6[2 * v41 + 4] = 0;
        v42 = v40 + 1;
        v56 = v40 + 1;
        *(_DWORD *)&v6[2 * v41] = 5636109;
        goto LABEL_48;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v43 = 40;
      v32 = 2;
    }
    WPP_RECORDER_SF_((_DWORD)gRimLog, v32, 1, v43, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    goto LABEL_46;
  }
  while ( v5 >= 0 )
  {
    v15 = v4 + 152 * v14;
    v16 = *(_OWORD *)(v15 + 16);
    *(_OWORD *)&v58[1] = *(_OWORD *)v15;
    v17 = *(_OWORD *)(v15 + 32);
    v59 = v16;
    v18 = *(_OWORD *)(v15 + 48);
    v60 = v17;
    v19 = *(_OWORD *)(v15 + 64);
    v61 = v18;
    v20 = *(_OWORD *)(v15 + 80);
    v62 = v19;
    v21 = *(_OWORD *)(v15 + 96);
    v63 = v20;
    v22 = *(_OWORD *)(v15 + 112);
    v64 = v21;
    v23 = *(_OWORD *)(v15 + 128);
    v24 = *(_QWORD *)(v15 + 144);
    v65 = v22;
    v66 = v23;
    v67 = v24;
    if ( (unsigned int)RIMIDEFillContactUsageValues(v57, v55[1], &v58[1]) )
    {
      v25 = v55[1];
      v26 = 0;
      if ( v55[1] )
      {
        v12 = v57;
        v27 = v56;
        v28 = v72;
        do
        {
          if ( v28 >= v27 )
            break;
          ++v26;
          v29 = v28++;
          v30 = 3 * v29;
          *(_QWORD *)&v6[2 * v30] = *(_QWORD *)v12;
          *(_DWORD *)&v6[2 * v30 + 4] = *((_DWORD *)v12 + 2);
          v6[2 * v30 + 4] = LOWORD(v55[0]) + 1;
          *((_DWORD *)v12 + 1) = 0;
          v12 = (struct tagINPUT_INJECTION_VALUE *)((char *)v12 + 12);
        }
        while ( v26 < v25 );
        v4 = a2;
        v72 = v28;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 38, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      v5 = -1073741811;
    }
    v13 = v71;
    v14 = v55[0] + 1;
    v55[0] = v14;
    if ( (unsigned int)v14 >= v71 )
      goto LABEL_30;
  }
LABEL_69:
  if ( v57 )
    Win32FreePool((__int64)v57);
  if ( v6 )
    Win32FreePool((__int64)v6);
  return (unsigned int)v5;
}
