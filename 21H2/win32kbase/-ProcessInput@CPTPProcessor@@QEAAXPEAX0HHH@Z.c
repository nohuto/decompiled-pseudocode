/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A6E40
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AA390 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004300 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00413C0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00414F4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B7CC (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018EC58 (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C01A5B8C (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A7CF4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A9010 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C01C9E20 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        unsigned __int64 a2,
        struct RIMCOMPLETEFRAME *a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v9; // r14d
  struct CPointerInputFrame *v10; // rax
  int v11; // edx
  struct CPointerInputFrame *v12; // rsi
  __int64 v13; // r8
  int v14; // ecx
  int v15; // eax
  char *v16; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  struct CInertiaManager *Instance; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rcx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  bool v45; // zf
  __int64 v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int64 *v53; // [rsp+50h] [rbp+8h] BYREF

  v9 = a4;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v53, "ProcessTouchpadInput", 0LL, a4);
  *((LARGE_INTEGER *)this + 285) = KeQueryPerformanceCounter(0LL);
  v10 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 1, 0);
  v12 = v10;
  if ( v10 )
  {
    InputTraceLogging::PTP::EngineInput(v10);
    v13 = *(_QWORD *)(HMValidateHandleNoSecure(a2, 19) + 480);
    v14 = *((_DWORD *)gpsi + 497) != 0;
    if ( *((_DWORD *)this + 115) != v14 )
    {
      *((_DWORD *)this + 115) = v14;
      CPTPProcessor::UpdateEnvironment(this, 0LL, v13);
    }
    v15 = a5;
    v16 = (char *)this + 956;
    *((_QWORD *)this + 50) = a2;
    *((_QWORD *)this + 51) = v12;
    *((_DWORD *)this + 104) = v9;
    *((_DWORD *)this + 105) = v15;
    memset((char *)this + 956, 0, 0x278uLL);
    *(_QWORD *)((char *)this + 956) = *(_QWORD *)(*((_QWORD *)v12 + 17) + 248LL);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = qword_1C0255ED0;
    if ( qword_1C0255ED0 != *((_QWORD *)this + 278) )
    {
      *((_QWORD *)this + 278) = qword_1C0255ED0;
      if ( v18 )
      {
        v19 = *(_QWORD *)v16;
        v20 = v18 + *(_QWORD *)v16 - PerformanceCounter.QuadPart;
        v21 = *(_QWORD *)v16 - 1LL;
        if ( v20 >= v21 )
          v20 = *(_QWORD *)v16 - 1LL;
        if ( v20 <= *(_QWORD *)((char *)this + 1588) + 1LL )
        {
          v23 = *(_QWORD *)((char *)this + 1588) + 1LL;
        }
        else
        {
          v22 = v18 - PerformanceCounter.QuadPart;
          if ( v22 + v19 >= v21 )
            v22 = -1LL;
          v23 = v19 + v22;
        }
        *((_QWORD *)this + 280) = v23;
      }
      else
      {
        *((_QWORD *)this + 280) = 0LL;
      }
    }
    v24 = qword_1C0255ED8;
    if ( qword_1C0255ED8 != *((_QWORD *)this + 279) )
    {
      *((_QWORD *)this + 279) = qword_1C0255ED8;
      if ( v24 )
      {
        v25 = *(_QWORD *)v16;
        v26 = v24 + *(_QWORD *)v16 - PerformanceCounter.QuadPart;
        v27 = *(_QWORD *)v16 - 1LL;
        if ( v26 >= v27 )
          v26 = *(_QWORD *)v16 - 1LL;
        if ( v26 <= *(_QWORD *)((char *)this + 1588) + 1LL )
        {
          v29 = *(_QWORD *)((char *)this + 1588) + 1LL;
        }
        else
        {
          v28 = v24 - PerformanceCounter.QuadPart;
          if ( v28 + v25 >= v27 )
            v28 = -1LL;
          v29 = v25 + v28;
        }
        *((_QWORD *)this + 281) = v29;
      }
      else
      {
        *((_QWORD *)this + 281) = 0LL;
      }
    }
    *(_QWORD *)((char *)this + 964) = *((_QWORD *)this + 280);
    *(_QWORD *)((char *)this + 972) = *((_QWORD *)this + 281);
    *((_DWORD *)this + 245) = *(_DWORD *)(*((_QWORD *)v12 + 17) + 232LL);
    *((struct tagPOINT *)this + 123) = gptCursorAsync;
    *((_DWORD *)this + 248) = a6 != 0;
    if ( (*((_DWORD *)this + 95) & 1) != 0
      || (Instance = CInertiaManager::GetInstance(),
          (v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                   Instance,
                   gptCursorAsync,
                   15LL)) != 0) )
    {
      LODWORD(v31) = 1;
    }
    *((_DWORD *)this + 249) = v31;
    v32 = 0LL;
    *((_DWORD *)this + 252) = -__CFSHR__(*((_DWORD *)this + 95), 2);
    *((_DWORD *)this + 250) = *((_DWORD *)v12 + 10);
    *((_DWORD *)this + 251) = *((_DWORD *)v12 + 12);
    if ( *((_DWORD *)v12 + 12) )
    {
      do
      {
        v33 = 3 * v32;
        v34 = 480LL * (unsigned int)v32;
        v35 = *((_QWORD *)v12 + 17);
        v32 = (unsigned int)(v32 + 1);
        v33 *= 32LL;
        *(_OWORD *)((char *)this + v33 + 1012) = *(_OWORD *)(v34 + v35 + 168);
        *(_OWORD *)((char *)this + v33 + 1028) = *(_OWORD *)(v34 + v35 + 184);
        *(_OWORD *)((char *)this + v33 + 1044) = *(_OWORD *)(v34 + v35 + 200);
        *(_OWORD *)((char *)this + v33 + 1060) = *(_OWORD *)(v34 + v35 + 216);
        *(_OWORD *)((char *)this + v33 + 1076) = *(_OWORD *)(v34 + v35 + 232);
        *(_OWORD *)((char *)this + v33 + 1092) = *(_OWORD *)(v34 + v35 + 248);
        *(_DWORD *)((char *)this + v33 + 1016) = *(unsigned __int16 *)(v34 + *((_QWORD *)v12 + 17) + 160);
      }
      while ( (_DWORD)v32 != *((_DWORD *)v12 + 12) );
    }
    PTPEngineTraceProducer::OnInput(
      *((PTPEngineTraceProducer **)this + 55),
      (CPTPProcessor *)((char *)this + 956),
      (struct tagTPAAPSTATE *)&CPTPProcessor::s_aapState);
    v36 = 4LL;
    v37 = (char *)this + 1588;
    do
    {
      v38 = *((_OWORD *)v16 + 1);
      *(_OWORD *)v37 = *(_OWORD *)v16;
      v39 = *((_OWORD *)v16 + 2);
      *((_OWORD *)v37 + 1) = v38;
      v40 = *((_OWORD *)v16 + 3);
      *((_OWORD *)v37 + 2) = v39;
      v41 = *((_OWORD *)v16 + 4);
      *((_OWORD *)v37 + 3) = v40;
      v42 = *((_OWORD *)v16 + 5);
      *((_OWORD *)v37 + 4) = v41;
      v43 = *((_OWORD *)v16 + 6);
      *((_OWORD *)v37 + 5) = v42;
      v44 = *((_OWORD *)v16 + 7);
      v16 += 128;
      *((_OWORD *)v37 + 6) = v43;
      v37 += 128;
      *((_OWORD *)v37 - 1) = v44;
      --v36;
    }
    while ( v36 );
    v45 = *((_QWORD *)this + 51) == 0LL;
    v46 = *((_QWORD *)v16 + 14);
    v47 = *((_OWORD *)v16 + 1);
    *(_OWORD *)v37 = *(_OWORD *)v16;
    v48 = *((_OWORD *)v16 + 2);
    *((_OWORD *)v37 + 1) = v47;
    v49 = *((_OWORD *)v16 + 3);
    *((_OWORD *)v37 + 2) = v48;
    v50 = *((_OWORD *)v16 + 4);
    *((_OWORD *)v37 + 3) = v49;
    v51 = *((_OWORD *)v16 + 5);
    *((_OWORD *)v37 + 4) = v50;
    v52 = *((_OWORD *)v16 + 6);
    *((_OWORD *)v37 + 5) = v51;
    *((_OWORD *)v37 + 6) = v52;
    *((_QWORD *)v37 + 14) = v46;
    if ( !v45 )
    {
      CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v12, 1);
      *((_QWORD *)this + 51) = 0LL;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v11, 9, 10, (__int64)&WPP_8e51823f31cc35ee2eb7bebc0cac704e_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v53);
}
