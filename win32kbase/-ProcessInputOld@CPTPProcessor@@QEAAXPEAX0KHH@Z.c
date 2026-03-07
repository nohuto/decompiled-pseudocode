void __fastcall CPTPProcessor::ProcessInputOld(CPTPProcessor *this, void *a2, char *a3, int a4, int a5, int a6)
{
  unsigned int *v8; // rsi
  unsigned int *v9; // r15
  __int64 v10; // r13
  unsigned int *v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  const struct CPointerInputFrame *v13; // rax
  int v14; // edx
  int v15; // r8d
  const struct CPointerInputFrame *v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // r8
  int v19; // ecx
  char *v20; // rbx
  LARGE_INTEGER v21; // rax
  LARGE_INTEGER v22; // r8
  __int64 v23; // r9
  LARGE_INTEGER v24; // r10
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  LARGE_INTEGER v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  LARGE_INTEGER v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  BOOL v34; // eax
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  char *v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // rax
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0

  *((_BYTE *)this + 2372) = 0;
  v8 = (unsigned int *)a3;
  v9 = (unsigned int *)&a3[a4];
  v10 = HMValidateHandleNoSecure((int)a2, 19);
  while ( v8 + 60 <= v9 )
  {
    v11 = v8;
    v8 = (unsigned int *)((char *)v8 + *v8);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *((LARGE_INTEGER *)this + 305) = PerformanceCounter;
    *((_QWORD *)v11 + 8) = *(_QWORD *)(v10 + 2272);
    *((LARGE_INTEGER *)v11 + 9) = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v11 + 12));
    v13 = CTouchProcessor::CommitRimCompleteFrame(this, (struct RIMCOMPLETEFRAME *)v11, 1, 0);
    v16 = v13;
    if ( v13 )
    {
      v17 = v11[49];
      InputTraceLogging::PTP::EngineInput(v13, v17 != 0);
      v18 = *(_QWORD *)(v10 + 472);
      v19 = *((_DWORD *)gpsi + 497) != 0;
      if ( *((_DWORD *)this + 141) != v19 )
      {
        *((_DWORD *)this + 141) = v19;
        CPTPProcessor::UpdateEnvironment(this, 0LL, v18);
      }
      v20 = (char *)this + 1108;
      *((_DWORD *)this + 134) = a5;
      *((_DWORD *)this + 135) = a6;
      *((_QWORD *)this + 65) = a2;
      *((_QWORD *)this + 66) = v16;
      memset((char *)this + 1108, 0, 0x278uLL);
      *(_QWORD *)((char *)this + 1108) = *(_QWORD *)(*((_QWORD *)v16 + 30) + 248LL);
      v21 = KeQueryPerformanceCounter(0LL);
      v23 = *((_QWORD *)this + 297);
      v24 = v21;
      v25 = *(_QWORD *)(v23 + 96);
      if ( v25 != *((_QWORD *)this + 298) )
      {
        *((_QWORD *)this + 298) = v25;
        if ( v25 )
        {
          v22.QuadPart = *(_QWORD *)((char *)this + 1740) + 1LL;
          v26 = *(_QWORD *)v20 - v21.QuadPart + v25;
          v27 = *(_QWORD *)v20 - 1LL;
          v28.QuadPart = v26;
          if ( v26 >= v27 )
            v28.QuadPart = *(_QWORD *)v20 - 1LL;
          if ( v28.QuadPart <= (unsigned __int64)v22.QuadPart )
          {
            v26 = *(_QWORD *)((char *)this + 1740) + 1LL;
          }
          else if ( v26 >= v27 )
          {
            v26 = *(_QWORD *)v20 - 1LL;
          }
          *((_QWORD *)this + 300) = v26;
        }
        else
        {
          *((_QWORD *)this + 300) = 0LL;
        }
      }
      v29 = *(_QWORD *)(v23 + 104);
      if ( v29 != *((_QWORD *)this + 299) )
      {
        *((_QWORD *)this + 299) = v29;
        if ( v29 )
        {
          v22.QuadPart = *(_QWORD *)((char *)this + 1740) + 1LL;
          v29 += *(_QWORD *)v20 - v24.QuadPart;
          v30 = *(_QWORD *)v20 - 1LL;
          v31.QuadPart = v29;
          if ( v29 >= v30 )
            v31.QuadPart = *(_QWORD *)v20 - 1LL;
          if ( v31.QuadPart <= (unsigned __int64)v22.QuadPart )
          {
            v29 = *(_QWORD *)((char *)this + 1740) + 1LL;
          }
          else if ( v29 >= v30 )
          {
            v29 = *(_QWORD *)v20 - 1LL;
          }
          *((_QWORD *)this + 301) = v29;
        }
        else
        {
          *((_QWORD *)this + 301) = 0LL;
        }
      }
      *(_QWORD *)((char *)this + 1116) = *((_QWORD *)this + 300);
      *(_QWORD *)((char *)this + 1124) = *((_QWORD *)this + 301);
      v32 = *(unsigned int *)(*((_QWORD *)v16 + 30) + 232LL);
      *((_DWORD *)this + 283) = v32;
      *((struct tagPOINT *)this + 142) = gptCursorAsync;
      *((_DWORD *)this + 286) = v17 != 0;
      v34 = 1;
      if ( (*((_DWORD *)this + 95) & 1) == 0 )
      {
        v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
                v32,
                v29,
                (LARGE_INTEGER)v22.QuadPart,
                v23);
        if ( !CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v33 + 16904)) )
          v34 = 0;
      }
      *((_DWORD *)this + 287) = v34;
      v35 = 0;
      *((_DWORD *)this + 290) = -__CFSHR__(*((_DWORD *)this + 95), 2);
      *((_DWORD *)this + 288) = *((_DWORD *)v16 + 10);
      *((_DWORD *)this + 289) = *((_DWORD *)v16 + 12);
      if ( *((_DWORD *)v16 + 12) )
      {
        do
        {
          v36 = v35++;
          v37 = 480 * v36;
          v38 = 3 * v36;
          v39 = *((_QWORD *)v16 + 30);
          v38 *= 32LL;
          *(_OWORD *)((char *)this + v38 + 1164) = *(_OWORD *)(v39 + v37 + 168);
          *(_OWORD *)((char *)this + v38 + 1180) = *(_OWORD *)(v39 + v37 + 184);
          *(_OWORD *)((char *)this + v38 + 1196) = *(_OWORD *)(v39 + v37 + 200);
          *(_OWORD *)((char *)this + v38 + 1212) = *(_OWORD *)(v39 + v37 + 216);
          *(_OWORD *)((char *)this + v38 + 1228) = *(_OWORD *)(v39 + v37 + 232);
          *(_OWORD *)((char *)this + v38 + 1244) = *(_OWORD *)(v39 + v37 + 248);
          *(_DWORD *)((char *)this + v38 + 1168) = *(unsigned __int16 *)(*((_QWORD *)v16 + 30) + v37 + 160);
        }
        while ( v35 != *((_DWORD *)v16 + 12) );
      }
      PTPEngineTraceProducer::OnInput(
        *((PTPEngineTraceProducer **)this + 68),
        (CPTPProcessor *)((char *)this + 1108),
        *((struct tagTPAAPSTATE **)this + 297));
      v40 = 4LL;
      v41 = (char *)this + 1740;
      do
      {
        v42 = *((_OWORD *)v20 + 1);
        *(_OWORD *)v41 = *(_OWORD *)v20;
        v43 = *((_OWORD *)v20 + 2);
        *((_OWORD *)v41 + 1) = v42;
        v44 = *((_OWORD *)v20 + 3);
        *((_OWORD *)v41 + 2) = v43;
        v45 = *((_OWORD *)v20 + 4);
        *((_OWORD *)v41 + 3) = v44;
        v46 = *((_OWORD *)v20 + 5);
        *((_OWORD *)v41 + 4) = v45;
        v47 = *((_OWORD *)v20 + 6);
        *((_OWORD *)v41 + 5) = v46;
        v48 = *((_OWORD *)v20 + 7);
        v20 += 128;
        *((_OWORD *)v41 + 6) = v47;
        v41 += 128;
        *((_OWORD *)v41 - 1) = v48;
        --v40;
      }
      while ( v40 );
      v49 = *((_QWORD *)v20 + 14);
      v50 = *((_OWORD *)v20 + 1);
      *(_OWORD *)v41 = *(_OWORD *)v20;
      v51 = *((_OWORD *)v20 + 2);
      *((_OWORD *)v41 + 1) = v50;
      v52 = *((_OWORD *)v20 + 3);
      *((_OWORD *)v41 + 2) = v51;
      v53 = *((_OWORD *)v20 + 4);
      *((_OWORD *)v41 + 3) = v52;
      v54 = *((_OWORD *)v20 + 5);
      *((_OWORD *)v41 + 4) = v53;
      v55 = *((_OWORD *)v20 + 6);
      *((_OWORD *)v41 + 5) = v54;
      *((_OWORD *)v41 + 6) = v55;
      *((_QWORD *)v41 + 14) = v49;
      if ( *((_QWORD *)this + 66) )
      {
        CTouchProcessor::FreeFrame(this, v16, 1);
        *((_QWORD *)this + 66) = 0LL;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          9,
          11,
          (__int64)&WPP_8531bafaa354395dbf5d3a290addac67_Traceguids);
      }
    }
  }
  if ( v8 != v9 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 306LL);
}
