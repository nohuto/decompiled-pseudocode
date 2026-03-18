/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01DF13C
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2930 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C00E8806 (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C00E9F46 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01C5D18 (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D1BF0 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E0260 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E15B0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CPTPProcessor::ProcessInput(CPTPProcessor *this, void *a2, char *a3, int a4, int a5, int a6)
{
  unsigned int *v8; // rbp
  unsigned int *v9; // r15
  __int64 v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  unsigned int *v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  struct CPointerInputFrame *v16; // rax
  struct CPointerInputFrame *v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // r8
  int v20; // ecx
  char *v21; // rbx
  LARGE_INTEGER v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  LIST_ENTRY v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  bool v42; // zf
  void *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  LIST_ENTRY v48; // xmm1
  __int128 v49; // xmm0

  *((_BYTE *)this + 2364) = 0;
  v8 = (unsigned int *)a3;
  v9 = (unsigned int *)&a3[a4];
  v13 = HMValidateHandleNoSecure((int)a2, 19);
  while ( v8 + 60 <= v9 )
  {
    v14 = v8;
    v8 = (unsigned int *)((char *)v8 + *v8);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *((LARGE_INTEGER *)this + 303) = PerformanceCounter;
    *((_QWORD *)v14 + 8) = *(_QWORD *)(v13 + 2272);
    *((LARGE_INTEGER *)v14 + 9) = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v14 + 12));
    v16 = CTouchProcessor::CommitRimCompleteFrame(this, (struct RIMCOMPLETEFRAME *)v14, 1, 0);
    v17 = v16;
    if ( v16 )
    {
      v18 = v14[49];
      InputTraceLogging::PTP::EngineInput(v16);
      v19 = *(_QWORD *)(v13 + 472);
      v20 = *((_DWORD *)gpsi + 497) != 0;
      if ( *((_DWORD *)this + 139) != v20 )
      {
        *((_DWORD *)this + 139) = v20;
        CPTPProcessor::UpdateEnvironment(this, 0LL, v19);
      }
      v21 = (char *)this + 1100;
      *((_DWORD *)this + 132) = a5;
      *((_DWORD *)this + 133) = a6;
      *((_QWORD *)this + 64) = a2;
      *((_QWORD *)this + 65) = v17;
      memset((char *)this + 1100, 0, 0x278uLL);
      *(_QWORD *)((char *)this + 1100) = *(_QWORD *)(*((_QWORD *)v17 + 30) + 248LL);
      v22 = KeQueryPerformanceCounter(0LL);
      if ( qword_1C029AC80 != *((_QWORD *)this + 296) )
      {
        *((_QWORD *)this + 296) = qword_1C029AC80;
        if ( qword_1C029AC80 )
        {
          v23 = qword_1C029AC80 + *(_QWORD *)v21 - v22.QuadPart;
          v24 = *(_QWORD *)v21 - 1LL;
          if ( v23 >= v24 )
            v25 = *(_QWORD *)v21 - 1LL;
          else
            v25 = qword_1C029AC80 + *(_QWORD *)v21 - v22.QuadPart;
          if ( v25 <= *(_QWORD *)((char *)this + 1732) + 1LL )
          {
            v23 = *(_QWORD *)((char *)this + 1732) + 1LL;
          }
          else if ( v23 >= v24 )
          {
            v23 = *(_QWORD *)v21 - 1LL;
          }
          *((_QWORD *)this + 298) = v23;
        }
        else
        {
          *((_QWORD *)this + 298) = 0LL;
        }
      }
      if ( qword_1C029AC88 != *((_QWORD *)this + 297) )
      {
        *((_QWORD *)this + 297) = qword_1C029AC88;
        if ( qword_1C029AC88 )
        {
          v26 = *(_QWORD *)v21 + qword_1C029AC88 - v22.QuadPart;
          v27 = *(_QWORD *)v21 - 1LL;
          if ( v26 >= v27 )
            v28 = *(_QWORD *)v21 - 1LL;
          else
            v28 = *(_QWORD *)v21 + qword_1C029AC88 - v22.QuadPart;
          if ( v28 <= *(_QWORD *)((char *)this + 1732) + 1LL )
          {
            v26 = *(_QWORD *)((char *)this + 1732) + 1LL;
          }
          else if ( v26 >= v27 )
          {
            v26 = *(_QWORD *)v21 - 1LL;
          }
          *((_QWORD *)this + 299) = v26;
        }
        else
        {
          *((_QWORD *)this + 299) = 0LL;
        }
      }
      *(_QWORD *)((char *)this + 1108) = *((_QWORD *)this + 298);
      *(_QWORD *)((char *)this + 1116) = *((_QWORD *)this + 299);
      *((_DWORD *)this + 281) = *(_DWORD *)(*((_QWORD *)v17 + 30) + 232LL);
      *((struct tagPOINT *)this + 141) = gptCursorAsync;
      *((_DWORD *)this + 284) = v18 != 0;
      if ( (*((_DWORD *)this + 93) & 1) != 0
        || (v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                    &qword_1C029A5D0,
                    gptCursorAsync,
                    15LL)) != 0 )
      {
        LODWORD(v29) = 1;
      }
      *((_DWORD *)this + 285) = v29;
      v30 = 0LL;
      *((_DWORD *)this + 288) = -__CFSHR__(*((_DWORD *)this + 93), 2);
      *((_DWORD *)this + 286) = *((_DWORD *)v17 + 10);
      *((_DWORD *)this + 287) = *((_DWORD *)v17 + 12);
      if ( *((_DWORD *)v17 + 12) )
      {
        do
        {
          v31 = 3 * v30;
          v32 = 480LL * (unsigned int)v30;
          v33 = *((_QWORD *)v17 + 30);
          v30 = (unsigned int)(v30 + 1);
          v31 *= 32LL;
          *(_OWORD *)((char *)this + v31 + 1156) = *(_OWORD *)(v33 + v32 + 168);
          *(_OWORD *)((char *)this + v31 + 1172) = *(_OWORD *)(v33 + v32 + 184);
          *(_OWORD *)((char *)this + v31 + 1188) = *(_OWORD *)(v33 + v32 + 200);
          *(_OWORD *)((char *)this + v31 + 1204) = *(_OWORD *)(v33 + v32 + 216);
          *(_OWORD *)((char *)this + v31 + 1220) = *(_OWORD *)(v33 + v32 + 232);
          *(_OWORD *)((char *)this + v31 + 1236) = *(_OWORD *)(v33 + v32 + 248);
          *(_DWORD *)((char *)this + v31 + 1160) = *(unsigned __int16 *)(*((_QWORD *)v17 + 30) + v32 + 160);
        }
        while ( (_DWORD)v30 != *((_DWORD *)v17 + 12) );
      }
      PTPEngineTraceProducer::OnInput(
        *((PTPEngineTraceProducer **)this + 67),
        (CPTPProcessor *)((char *)this + 1100),
        (__int64)&CPTPProcessor::s_aapState);
      v34 = 4LL;
      v11 = (PDEVICE_OBJECT)((char *)this + 1732);
      do
      {
        v35 = *((_OWORD *)v21 + 1);
        *(_OWORD *)&v11->Type = *(_OWORD *)v21;
        v36 = *((_OWORD *)v21 + 2);
        *(_OWORD *)&v11->NextDevice = v35;
        v37 = *((_OWORD *)v21 + 3);
        *(_OWORD *)&v11->CurrentIrp = v36;
        v38 = *((_OWORD *)v21 + 4);
        *(_OWORD *)&v11->Flags = v37;
        v39 = (LIST_ENTRY)*((_OWORD *)v21 + 5);
        *(_OWORD *)&v11->DeviceExtension = v38;
        v40 = *((_OWORD *)v21 + 6);
        v11->Queue.ListEntry = v39;
        v41 = *((_OWORD *)v21 + 7);
        v21 += 128;
        *(_OWORD *)&v11->Queue.Wcb.NumberOfChannels = v40;
        v11 = (PDEVICE_OBJECT)((char *)v11 + 128);
        *(_OWORD *)&v11[-1].Reserved = v41;
        --v34;
      }
      while ( v34 );
      v42 = *((_QWORD *)this + 65) == 0LL;
      v43 = (void *)*((_QWORD *)v21 + 14);
      v44 = *((_OWORD *)v21 + 1);
      *(_OWORD *)&v11->Type = *(_OWORD *)v21;
      v45 = *((_OWORD *)v21 + 2);
      *(_OWORD *)&v11->NextDevice = v44;
      v46 = *((_OWORD *)v21 + 3);
      *(_OWORD *)&v11->CurrentIrp = v45;
      v47 = *((_OWORD *)v21 + 4);
      *(_OWORD *)&v11->Flags = v46;
      v48 = (LIST_ENTRY)*((_OWORD *)v21 + 5);
      *(_OWORD *)&v11->DeviceExtension = v47;
      v49 = *((_OWORD *)v21 + 6);
      v11->Queue.ListEntry = v48;
      *(_OWORD *)&v11->Queue.Wcb.NumberOfChannels = v49;
      v11->Queue.Wcb.DeviceContext = v43;
      if ( !v42 )
      {
        CTouchProcessor::FreeFrame((struct _KTHREAD **)this, (char *)v17, 1);
        *((_QWORD *)this + 65) = 0LL;
      }
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          9,
          10,
          (__int64)&WPP_f8295955e020392ec9aff055132604d6_Traceguids);
    }
  }
  if ( v8 != v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
}
