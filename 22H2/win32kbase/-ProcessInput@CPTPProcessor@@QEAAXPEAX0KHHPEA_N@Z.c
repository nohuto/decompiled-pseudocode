/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D49B8
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2DA0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage @ 0x1C00D4F40 (Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C00E5002 (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C00E74F6 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE764 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01C3308 (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D0604 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E1058 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E1FE0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        void *a2,
        char *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  bool *v7; // r13
  __int64 v9; // r12
  __int64 v11; // rax
  char *v12; // r12
  __int64 v13; // r13
  char *v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  const struct CPointerInputFrame *v16; // rax
  int v17; // edx
  int v18; // r8d
  const struct CPointerInputFrame *v19; // r14
  int v20; // r15d
  __int64 v21; // rsi
  char v22; // bl
  int v23; // ecx
  int v24; // eax
  char *v25; // rbx
  LARGE_INTEGER v26; // rax
  LARGE_INTEGER v27; // r8
  __int64 v28; // r9
  LARGE_INTEGER v29; // r10
  __int64 v30; // rdx
  unsigned __int64 QuadPart; // rcx
  LARGE_INTEGER v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  LARGE_INTEGER v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  bool v38; // zf
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  char *v46; // rcx
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rax
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0

  v7 = a7;
  *((_BYTE *)this + 2388) = 0;
  *((_BYTE *)this + 48) = 0;
  v9 = a4;
  *a7 = 0;
  v11 = HMValidateHandleNoSecure((int)a2, 19);
  v12 = &a3[v9];
  if ( a3 + 240 <= v12 )
  {
    v13 = v11;
    while ( 1 )
    {
      v14 = a3;
      a3 += *(unsigned int *)a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *((LARGE_INTEGER *)this + 307) = PerformanceCounter;
      *((_QWORD *)v14 + 8) = *(_QWORD *)(v13 + 2272);
      *((LARGE_INTEGER *)v14 + 9) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v14 + 48));
      v16 = CTouchProcessor::CommitRimCompleteFrame(this, (struct RIMCOMPLETEFRAME *)v14, 1, 0);
      v19 = v16;
      if ( v16 )
        break;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          4,
          10,
          (__int64)&WPP_14e06e2c7e7239a09fc45a455b078030_Traceguids);
      }
LABEL_54:
      if ( a3 + 240 > v12 )
      {
        v7 = a7;
        goto LABEL_56;
      }
    }
    v20 = *((_DWORD *)v14 + 49);
    InputTraceLogging::PTP::EngineInput(v16, v20 != 0);
    v21 = *(_QWORD *)(v13 + 472);
    v22 = 0;
    v23 = *((_DWORD *)gpsi + 497) != 0;
    if ( *((_DWORD *)this + 145) != v23 )
    {
      *((_DWORD *)this + 145) = v23;
      v22 = 1;
    }
    if ( !(unsigned int)Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage()
      || (!*(_DWORD *)(v21 + 268) || gptiForeground && (*(_BYTE *)(*((_QWORD *)gptiForeground + 53) + 824LL) & 1) != 0
        ? (v24 = 0)
        : (v24 = 1),
          v24 == *((_DWORD *)this + 143)) )
    {
      if ( !v22 )
      {
LABEL_23:
        v25 = (char *)this + 1124;
        *((_QWORD *)this + 67) = a2;
        *((_DWORD *)this + 138) = a5;
        *((_DWORD *)this + 139) = a6;
        *((_QWORD *)this + 68) = v19;
        memset((char *)this + 1124, 0, 0x278uLL);
        *(_QWORD *)((char *)this + 1124) = *(_QWORD *)(*((_QWORD *)v19 + 30) + 248LL);
        v26 = KeQueryPerformanceCounter(0LL);
        v28 = *((_QWORD *)this + 299);
        v29 = v26;
        v30 = *(_QWORD *)(v28 + 96);
        if ( v30 != *((_QWORD *)this + 300) )
        {
          *((_QWORD *)this + 300) = v30;
          if ( v30 )
          {
            v27.QuadPart = v30 + *(_QWORD *)v25 - v26.QuadPart;
            QuadPart = *(_QWORD *)v25 - 1LL;
            v32 = v27;
            if ( v27.QuadPart >= QuadPart )
              v32.QuadPart = *(_QWORD *)v25 - 1LL;
            if ( v32.QuadPart <= (unsigned __int64)(*(_QWORD *)((char *)this + 1756) + 1LL) )
            {
              QuadPart = *(_QWORD *)((char *)this + 1756) + 1LL;
            }
            else if ( v27.QuadPart < QuadPart )
            {
              QuadPart = v27.QuadPart;
            }
            *((_QWORD *)this + 302) = QuadPart;
          }
          else
          {
            *((_QWORD *)this + 302) = 0LL;
          }
        }
        v33 = *(_QWORD *)(v28 + 104);
        if ( v33 != *((_QWORD *)this + 301) )
        {
          *((_QWORD *)this + 301) = v33;
          if ( v33 )
          {
            v27.QuadPart = v33 + *(_QWORD *)v25 - v29.QuadPart;
            v34 = *(_QWORD *)v25 - 1LL;
            v33 = *(_QWORD *)((char *)this + 1756) + 1LL;
            v35 = v27;
            if ( v27.QuadPart >= v34 )
              v35.QuadPart = *(_QWORD *)v25 - 1LL;
            if ( v35.QuadPart <= v33 )
            {
              v34 = *(_QWORD *)((char *)this + 1756) + 1LL;
            }
            else if ( v27.QuadPart < v34 )
            {
              v34 = v27.QuadPart;
            }
            *((_QWORD *)this + 303) = v34;
          }
          else
          {
            *((_QWORD *)this + 303) = 0LL;
          }
        }
        *(_QWORD *)((char *)this + 1132) = *((_QWORD *)this + 302);
        *(_QWORD *)((char *)this + 1140) = *((_QWORD *)this + 303);
        v36 = *(unsigned int *)(*((_QWORD *)v19 + 30) + 232LL);
        *((_DWORD *)this + 287) = v36;
        *((struct tagPOINT *)this + 144) = gptCursorAsync;
        *((_DWORD *)this + 290) = v20 != 0;
        if ( (*((_DWORD *)this + 99) & 1) != 0
          || (v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
                      v36,
                      v33,
                      (LARGE_INTEGER)v27.QuadPart,
                      v28),
              v38 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                      v37 + 16904,
                      gptCursorAsync,
                      15LL) == 0,
              v39 = 0,
              !v38) )
        {
          v39 = 1;
        }
        *((_DWORD *)this + 291) = v39;
        v40 = 0;
        *((_DWORD *)this + 294) = -__CFSHR__(*((_DWORD *)this + 99), 2);
        *((_DWORD *)this + 292) = *((_DWORD *)v19 + 10);
        *((_DWORD *)this + 293) = *((_DWORD *)v19 + 12);
        if ( *((_DWORD *)v19 + 12) )
        {
          do
          {
            v41 = v40++;
            v42 = 480 * v41;
            v43 = 3 * v41;
            v44 = *((_QWORD *)v19 + 30);
            v43 *= 32LL;
            *(_OWORD *)((char *)this + v43 + 1180) = *(_OWORD *)(v44 + v42 + 168);
            *(_OWORD *)((char *)this + v43 + 1196) = *(_OWORD *)(v44 + v42 + 184);
            *(_OWORD *)((char *)this + v43 + 1212) = *(_OWORD *)(v44 + v42 + 200);
            *(_OWORD *)((char *)this + v43 + 1228) = *(_OWORD *)(v44 + v42 + 216);
            *(_OWORD *)((char *)this + v43 + 1244) = *(_OWORD *)(v44 + v42 + 232);
            *(_OWORD *)((char *)this + v43 + 1260) = *(_OWORD *)(v44 + v42 + 248);
            *(_DWORD *)((char *)this + v43 + 1184) = *(unsigned __int16 *)(*((_QWORD *)v19 + 30) + v42 + 160);
          }
          while ( v40 != *((_DWORD *)v19 + 12) );
        }
        PTPEngineTraceProducer::OnInput(
          *((PTPEngineTraceProducer **)this + 70),
          (CPTPProcessor *)((char *)this + 1124),
          *((struct tagTPAAPSTATE **)this + 299));
        v45 = 4LL;
        v46 = (char *)this + 1756;
        do
        {
          v47 = *((_OWORD *)v25 + 1);
          *(_OWORD *)v46 = *(_OWORD *)v25;
          v48 = *((_OWORD *)v25 + 2);
          *((_OWORD *)v46 + 1) = v47;
          v49 = *((_OWORD *)v25 + 3);
          *((_OWORD *)v46 + 2) = v48;
          v50 = *((_OWORD *)v25 + 4);
          *((_OWORD *)v46 + 3) = v49;
          v51 = *((_OWORD *)v25 + 5);
          *((_OWORD *)v46 + 4) = v50;
          v52 = *((_OWORD *)v25 + 6);
          *((_OWORD *)v46 + 5) = v51;
          v53 = *((_OWORD *)v25 + 7);
          v25 += 128;
          *((_OWORD *)v46 + 6) = v52;
          v46 += 128;
          *((_OWORD *)v46 - 1) = v53;
          --v45;
        }
        while ( v45 );
        v54 = *((_QWORD *)v25 + 14);
        v55 = *((_OWORD *)v25 + 1);
        *(_OWORD *)v46 = *(_OWORD *)v25;
        v56 = *((_OWORD *)v25 + 2);
        *((_OWORD *)v46 + 1) = v55;
        v57 = *((_OWORD *)v25 + 3);
        *((_OWORD *)v46 + 2) = v56;
        v58 = *((_OWORD *)v25 + 4);
        *((_OWORD *)v46 + 3) = v57;
        v59 = *((_OWORD *)v25 + 5);
        *((_OWORD *)v46 + 4) = v58;
        v60 = *((_OWORD *)v25 + 6);
        *((_OWORD *)v46 + 5) = v59;
        *((_OWORD *)v46 + 6) = v60;
        *((_QWORD *)v46 + 14) = v54;
        if ( *((_QWORD *)this + 68) )
        {
          CTouchProcessor::FreeFrame(this, v19, 1);
          *((_QWORD *)this + 68) = 0LL;
        }
        goto LABEL_54;
      }
    }
    else
    {
      *((_DWORD *)this + 143) = v24;
    }
    CPTPProcessor::UpdateEnvironment(this, 0LL, v21);
    goto LABEL_23;
  }
LABEL_56:
  if ( a3 != v12 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 196LL);
  *v7 = *((_BYTE *)this + 48);
}
