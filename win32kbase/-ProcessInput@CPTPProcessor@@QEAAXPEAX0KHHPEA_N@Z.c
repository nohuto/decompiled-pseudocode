/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00E0308
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C00F32A2 (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C00F5C86 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01F2168 (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01FF3E4 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020FAF8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1C0210C78 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 */

void __fastcall CPTPProcessor::ProcessInput(CPTPProcessor *this, void *a2, char *a3, int a4, int a5, int a6, bool *a7)
{
  bool *v7; // r12
  unsigned int *v9; // rsi
  unsigned int *v10; // r15
  __int64 v11; // r13
  unsigned int *v12; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  const struct CPointerInputFrame *v14; // rax
  int v15; // edx
  int v16; // r8d
  const struct CPointerInputFrame *v17; // rbp
  unsigned int v18; // r14d
  __int64 v19; // r8
  int v20; // ecx
  char *v21; // rbx
  LARGE_INTEGER v22; // rax
  LARGE_INTEGER v23; // r8
  __int64 v24; // r9
  LARGE_INTEGER v25; // r10
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  LARGE_INTEGER v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  LARGE_INTEGER v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  BOOL v35; // eax
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  char *v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rax
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0

  v7 = a7;
  *((_BYTE *)this + 2372) = 0;
  *((_BYTE *)this + 48) = 0;
  *a7 = 0;
  v9 = (unsigned int *)a3;
  v10 = (unsigned int *)&a3[a4];
  v11 = HMValidateHandleNoSecure((int)a2, 19);
  if ( v9 + 60 <= v10 )
  {
    do
    {
      v12 = v9;
      v9 = (unsigned int *)((char *)v9 + *v9);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *((LARGE_INTEGER *)this + 305) = PerformanceCounter;
      *((_QWORD *)v12 + 8) = *(_QWORD *)(v11 + 2272);
      *((LARGE_INTEGER *)v12 + 9) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v12 + 12));
      v14 = CTouchProcessor::CommitRimCompleteFrame(this, (struct RIMCOMPLETEFRAME *)v12, 1, 0);
      v17 = v14;
      if ( v14 )
      {
        v18 = v12[49];
        InputTraceLogging::PTP::EngineInput(v14, v18 != 0);
        v19 = *(_QWORD *)(v11 + 472);
        v20 = *((_DWORD *)gpsi + 497) != 0;
        if ( *((_DWORD *)this + 141) != v20 )
        {
          *((_DWORD *)this + 141) = v20;
          CPTPProcessor::UpdateEnvironment(this, 0LL, v19);
        }
        v21 = (char *)this + 1108;
        *((_DWORD *)this + 134) = a5;
        *((_DWORD *)this + 135) = a6;
        *((_QWORD *)this + 65) = a2;
        *((_QWORD *)this + 66) = v17;
        memset((char *)this + 1108, 0, 0x278uLL);
        *(_QWORD *)((char *)this + 1108) = *(_QWORD *)(*((_QWORD *)v17 + 30) + 248LL);
        v22 = KeQueryPerformanceCounter(0LL);
        v24 = *((_QWORD *)this + 297);
        v25 = v22;
        v26 = *(_QWORD *)(v24 + 96);
        if ( v26 != *((_QWORD *)this + 298) )
        {
          *((_QWORD *)this + 298) = v26;
          if ( v26 )
          {
            v23.QuadPart = *(_QWORD *)((char *)this + 1740) + 1LL;
            v27 = *(_QWORD *)v21 - v22.QuadPart + v26;
            v28 = *(_QWORD *)v21 - 1LL;
            v29.QuadPart = v27;
            if ( v27 >= v28 )
              v29.QuadPart = *(_QWORD *)v21 - 1LL;
            if ( v29.QuadPart <= (unsigned __int64)v23.QuadPart )
            {
              v27 = *(_QWORD *)((char *)this + 1740) + 1LL;
            }
            else if ( v27 >= v28 )
            {
              v27 = *(_QWORD *)v21 - 1LL;
            }
            *((_QWORD *)this + 300) = v27;
          }
          else
          {
            *((_QWORD *)this + 300) = 0LL;
          }
        }
        v30 = *(_QWORD *)(v24 + 104);
        if ( v30 != *((_QWORD *)this + 299) )
        {
          *((_QWORD *)this + 299) = v30;
          if ( v30 )
          {
            v23.QuadPart = *(_QWORD *)((char *)this + 1740) + 1LL;
            v30 += *(_QWORD *)v21 - v25.QuadPart;
            v31 = *(_QWORD *)v21 - 1LL;
            v32.QuadPart = v30;
            if ( v30 >= v31 )
              v32.QuadPart = *(_QWORD *)v21 - 1LL;
            if ( v32.QuadPart <= (unsigned __int64)v23.QuadPart )
            {
              v30 = *(_QWORD *)((char *)this + 1740) + 1LL;
            }
            else if ( v30 >= v31 )
            {
              v30 = *(_QWORD *)v21 - 1LL;
            }
            *((_QWORD *)this + 301) = v30;
          }
          else
          {
            *((_QWORD *)this + 301) = 0LL;
          }
        }
        *(_QWORD *)((char *)this + 1116) = *((_QWORD *)this + 300);
        *(_QWORD *)((char *)this + 1124) = *((_QWORD *)this + 301);
        v33 = *(unsigned int *)(*((_QWORD *)v17 + 30) + 232LL);
        *((_DWORD *)this + 283) = v33;
        *((struct tagPOINT *)this + 142) = gptCursorAsync;
        *((_DWORD *)this + 286) = v18 != 0;
        v35 = 1;
        if ( (*((_DWORD *)this + 95) & 1) == 0 )
        {
          v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
                  v33,
                  v30,
                  (LARGE_INTEGER)v23.QuadPart,
                  v24);
          if ( !CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v34 + 16904)) )
            v35 = 0;
        }
        *((_DWORD *)this + 287) = v35;
        v36 = 0;
        *((_DWORD *)this + 290) = -__CFSHR__(*((_DWORD *)this + 95), 2);
        *((_DWORD *)this + 288) = *((_DWORD *)v17 + 10);
        *((_DWORD *)this + 289) = *((_DWORD *)v17 + 12);
        if ( *((_DWORD *)v17 + 12) )
        {
          do
          {
            v37 = v36++;
            v38 = 480 * v37;
            v39 = 3 * v37;
            v40 = *((_QWORD *)v17 + 30);
            v39 *= 32LL;
            *(_OWORD *)((char *)this + v39 + 1164) = *(_OWORD *)(v40 + v38 + 168);
            *(_OWORD *)((char *)this + v39 + 1180) = *(_OWORD *)(v40 + v38 + 184);
            *(_OWORD *)((char *)this + v39 + 1196) = *(_OWORD *)(v40 + v38 + 200);
            *(_OWORD *)((char *)this + v39 + 1212) = *(_OWORD *)(v40 + v38 + 216);
            *(_OWORD *)((char *)this + v39 + 1228) = *(_OWORD *)(v40 + v38 + 232);
            *(_OWORD *)((char *)this + v39 + 1244) = *(_OWORD *)(v40 + v38 + 248);
            *(_DWORD *)((char *)this + v39 + 1168) = *(unsigned __int16 *)(*((_QWORD *)v17 + 30) + v38 + 160);
          }
          while ( v36 != *((_DWORD *)v17 + 12) );
        }
        PTPEngineTraceProducer::OnInput(
          *((PTPEngineTraceProducer **)this + 68),
          (CPTPProcessor *)((char *)this + 1108),
          *((struct tagTPAAPSTATE **)this + 297));
        v41 = 4LL;
        v42 = (char *)this + 1740;
        do
        {
          v43 = *((_OWORD *)v21 + 1);
          *(_OWORD *)v42 = *(_OWORD *)v21;
          v44 = *((_OWORD *)v21 + 2);
          *((_OWORD *)v42 + 1) = v43;
          v45 = *((_OWORD *)v21 + 3);
          *((_OWORD *)v42 + 2) = v44;
          v46 = *((_OWORD *)v21 + 4);
          *((_OWORD *)v42 + 3) = v45;
          v47 = *((_OWORD *)v21 + 5);
          *((_OWORD *)v42 + 4) = v46;
          v48 = *((_OWORD *)v21 + 6);
          *((_OWORD *)v42 + 5) = v47;
          v49 = *((_OWORD *)v21 + 7);
          v21 += 128;
          *((_OWORD *)v42 + 6) = v48;
          v42 += 128;
          *((_OWORD *)v42 - 1) = v49;
          --v41;
        }
        while ( v41 );
        v50 = *((_QWORD *)v21 + 14);
        v51 = *((_OWORD *)v21 + 1);
        *(_OWORD *)v42 = *(_OWORD *)v21;
        v52 = *((_OWORD *)v21 + 2);
        *((_OWORD *)v42 + 1) = v51;
        v53 = *((_OWORD *)v21 + 3);
        *((_OWORD *)v42 + 2) = v52;
        v54 = *((_OWORD *)v21 + 4);
        *((_OWORD *)v42 + 3) = v53;
        v55 = *((_OWORD *)v21 + 5);
        *((_OWORD *)v42 + 4) = v54;
        v56 = *((_OWORD *)v21 + 6);
        *((_OWORD *)v42 + 5) = v55;
        *((_OWORD *)v42 + 6) = v56;
        *((_QWORD *)v42 + 14) = v50;
        if ( *((_QWORD *)this + 66) )
        {
          CTouchProcessor::FreeFrame(this, v17, 1);
          *((_QWORD *)this + 66) = 0LL;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v15) = 0;
        }
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            9,
            10,
            (__int64)&WPP_8531bafaa354395dbf5d3a290addac67_Traceguids);
        }
      }
    }
    while ( v9 + 60 <= v10 );
    v7 = a7;
  }
  if ( v9 != v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 183LL);
  *v7 = *((_BYTE *)this + 48);
}
