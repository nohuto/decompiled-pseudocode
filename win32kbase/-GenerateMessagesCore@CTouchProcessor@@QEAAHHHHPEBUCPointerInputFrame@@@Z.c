/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01F0C6C (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C02005EC (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C0202354 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     IsPTPIVEnabled @ 0x1C008B994 (IsPTPIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C008B9C0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C008B9EC (IsTouchIVEnabled.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9BD0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00C9C40 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00F0068 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C00F2816 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     IsTouchpadDevice @ 0x1C00F422E (IsTouchpadDevice.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C0161B40 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C0162060 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C0162090 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C0162400 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01EB57C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01EEC18 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01F161C (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01F1CA0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F2ED8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F3160 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1C01F34B0 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01F494C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F5428 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01FB894 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01FC40C (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01FE0EC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01FFA04 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C02004C4 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0205FD8 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x1C0209974 (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C020DE90 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C0242098 (ApiSetEditionProcessPointerInputAsMouse.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        CTouchProcessor *this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  struct _KTHREAD **v5; // r13
  int v6; // r15d
  int v7; // r12d
  unsigned int v8; // r14d
  const struct CPointerInputFrame *v9; // rbx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  const struct CPointerInfoNode *v13; // rsi
  unsigned int i; // edi
  int v15; // edi
  BOOL v16; // esi
  LARGE_INTEGER PerformanceCounter; // r14
  bool v18; // al
  LARGE_INTEGER *v19; // rcx
  CTouchProcessor *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // esi
  unsigned __int64 v28; // rdi
  int v29; // r15d
  unsigned int v30; // r13d
  int v31; // r12d
  CTouchProcessor *v32; // rcx
  CTouchProcessor *v33; // rcx
  struct CPointerMsgData *PrevMsgId; // rax
  int v35; // ecx
  int v36; // eax
  __int64 *v37; // rdi
  unsigned int v38; // esi
  int v39; // r13d
  CTouchProcessor *v40; // r12
  CTouchProcessor *v41; // rcx
  unsigned __int64 *v42; // rdi
  unsigned int v43; // esi
  int v44; // r13d
  CTouchProcessor *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  int v51; // r8d
  struct DEVICEINFO *v52; // rax
  struct CPTPProcessor *Processor; // rax
  unsigned int v54; // edi
  int v55; // esi
  int v56; // r14d
  unsigned int v57; // r12d
  CTouchProcessor *v58; // r15
  unsigned int v59; // r14d
  __int64 v60; // rax
  unsigned int v61; // esi
  unsigned __int64 v62; // rdi
  CTouchProcessor *v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // esi
  __int64 *j; // rdi
  CTouchProcessor *v67; // rcx
  LARGE_INTEGER v68; // rsi
  bool v69; // al
  LARGE_INTEGER *v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v74; // rdx
  CTouchProcessor *v75; // rcx
  int v76; // r8d
  const struct CPointerInfoNode *v77; // rsi
  __int64 v78; // r9
  __int16 v79; // di
  bool v80; // cf
  unsigned __int16 v81; // di
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  int v86; // [rsp+28h] [rbp-A1h]
  int v87; // [rsp+30h] [rbp-99h]
  int v88; // [rsp+40h] [rbp-89h]
  unsigned int v89; // [rsp+68h] [rbp-61h]
  int v90; // [rsp+6Ch] [rbp-5Dh]
  int v91; // [rsp+70h] [rbp-59h]
  int v92; // [rsp+74h] [rbp-55h]
  __int64 v93; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v94[2]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v95; // [rsp+88h] [rbp-41h] BYREF
  __int64 v96; // [rsp+98h] [rbp-31h]
  __int64 *v97; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v98[40]; // [rsp+A8h] [rbp-21h] BYREF
  CInpLockGuard *v99; // [rsp+D0h] [rbp+7h]
  CTouchProcessor *v100; // [rsp+128h] [rbp+5Fh] BYREF
  int v101; // [rsp+130h] [rbp+67h]
  int v102; // [rsp+138h] [rbp+6Fh]
  int v103; // [rsp+140h] [rbp+77h]

  v103 = a4;
  v102 = a3;
  v101 = a2;
  v100 = this;
  v5 = (struct _KTHREAD **)this;
  v6 = a4;
  v7 = a2;
  v95 = 0LL;
  *(_QWORD *)v94 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v96 = 0LL;
  v8 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      75,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( v5[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2413);
  v9 = a5;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)v5, *((_DWORD *)a5 + 10)) )
  {
    LODWORD(a5) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2414);
  }
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    && gptiManipulationThread )
  {
    if ( !v6 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v10, v9) )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)v9 + 10), *((_DWORD *)v9 + 12), v12);
        if ( qword_1C02D65C8 )
          qword_1C02D65C8(v9, &v95, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
        CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, (__int64)v9, 0);
        if ( qword_1C02D65D8 )
          qword_1C02D65D8(&v95);
      }
      goto LABEL_29;
    }
  }
  else if ( !v6 )
  {
    goto LABEL_29;
  }
  v13 = (const struct CPointerInfoNode *)*((_QWORD *)v9 + 30);
  for ( i = 0; i < *((_DWORD *)v9 + 12); ++i )
  {
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v10, v9, v13, v6) )
      ++v8;
    v13 = (const struct CPointerInfoNode *)((char *)v13 + 480);
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)v9 + 10), v8, v11);
  v8 = 0;
LABEL_29:
  v15 = -(*((_DWORD *)v9 + 57) & 1);
  v16 = (*((_DWORD *)v9 + 57) & 1) == 0;
  if ( (*((_DWORD *)v9 + 57) & 1) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = isChildPartition();
    v19 = (LARGE_INTEGER *)((char *)v9 + 120);
    if ( v18 )
      v19 = (LARGE_INTEGER *)((char *)v9 + 192);
    *v19 = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)v9 + 72),
      *((_BYTE *)v9 + 228) & 1);
    v20 = (CTouchProcessor *)v16;
    v8 = 0;
    goto LABEL_41;
  }
  if ( (*((_DWORD *)v9 + 57) & 8) != 0 )
  {
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(v9, &v95, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, v9, v6 != 0);
    if ( qword_1C02D65D8 )
    {
      qword_1C02D65D8(&v95);
LABEL_39:
      v20 = (CTouchProcessor *)v16;
      if ( (*((_DWORD *)v9 + 57) & 2) != 0 && !v6 )
        goto LABEL_152;
      goto LABEL_41;
    }
  }
  v20 = (CTouchProcessor *)v16;
  if ( !v15 )
    goto LABEL_39;
LABEL_41:
  if ( (_DWORD)v20 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v97, "GenerateFrameMessages", 0LL);
    EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)v9 + 10), *((_DWORD *)v9 + 12), v21);
    if ( isRootPartition(v23, v22, v24, v25) && (IsTouchIVEnabled() || IsPenIVEnabled() || IsPTPIVEnabled()) )
      CTouchProcessor::CheckandDeliverContainerInput(v5, v9, v7, v6);
    v26 = *((unsigned int *)v9 + 12);
    v27 = 0;
    v28 = *((_QWORD *)v9 + 30);
    v29 = 0;
    v91 = 0;
    v30 = 0;
    v90 = 0;
    v31 = 0;
    LODWORD(a5) = 0;
    if ( (_DWORD)v26 )
    {
      do
      {
        v32 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v26);
        if ( v28 >= (unsigned __int64)v32 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2576);
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v32, v9, (const struct CPointerInfoNode *)v28, v103) )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v33, *(_QWORD *)(v28 + 16));
          CTouchProcessor::ProcessAndUnreferencePreviousInput(
            v100,
            (const struct CPointerInfoNode *)v28,
            (unsigned __int64)PrevMsgId,
            v94[0],
            v101,
            v102);
          v35 = *(_DWORD *)v28;
          if ( (*(_DWORD *)v28 & 0x1000) == 0 )
          {
            if ( (v35 & 8) != 0 )
            {
              if ( __CFSHR__(v35, 7) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2598);
              ++v27;
            }
            else if ( __CFSHR__(v35, 7) )
            {
              ++v31;
            }
            v36 = *(_DWORD *)(v28 + 180);
            if ( (v36 & 1) != 0 )
              ++v29;
            if ( (v36 & 2) == 0 )
              ++v91;
            if ( (v36 & 0x10000) != 0 )
            {
              ++v30;
            }
            else if ( (v36 & 0x40000) != 0 )
            {
              LODWORD(a5) = (_DWORD)a5 + 1;
            }
            else
            {
              if ( (v36 & 0x20000) == 0 )
              {
                LODWORD(v93) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2623);
              }
              ++v90;
            }
          }
        }
        v26 = *((unsigned int *)v9 + 12);
        v28 += 480LL;
        ++v8;
      }
      while ( v8 < (unsigned int)v26 );
      v89 = v30;
      v92 = v31;
      if ( v27 || v31 || v29 )
      {
        v37 = (__int64 *)*((_QWORD *)v9 + 30);
        v38 = 0;
        if ( (_DWORD)v26 )
        {
          v39 = v103;
          v40 = v100;
          do
          {
            v41 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v26);
            if ( v37 >= (__int64 *)v41 )
            {
              LODWORD(v93) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2644);
            }
            if ( (*(_DWORD *)v37 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v41, v9, (const struct CPointerInfoNode *)v37, v39) )
            {
              CTouchProcessor::GenerateEnterMessages(v40, v9, v38, v37[2], v94[0], v101, v102);
            }
            v26 = *((unsigned int *)v9 + 12);
            v37 += 60;
            ++v38;
          }
          while ( v38 < (unsigned int)v26 );
          v31 = v92;
          v30 = v89;
        }
        if ( v31 )
        {
          v42 = (unsigned __int64 *)*((_QWORD *)v9 + 30);
          v43 = 0;
          if ( (_DWORD)v26 )
          {
            v44 = v103;
            do
            {
              v45 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v26);
              if ( v42 >= (unsigned __int64 *)v45 )
              {
                LODWORD(v93) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2673);
              }
              if ( (*(_DWORD *)v42 & 0x1000) == 0
                && CTouchProcessor::ShouldGenerateMessagesForNode(v45, v9, (const struct CPointerInfoNode *)v42, v44) )
              {
                CTouchProcessor::GenerateRoutedToMessages(v100, v9, v43, v42[2], v94[0], v101, v102);
              }
              v26 = *((unsigned int *)v9 + 12);
              v42 += 60;
              ++v43;
            }
            while ( v43 < (unsigned int)v26 );
            v30 = v89;
          }
        }
      }
    }
    if ( IsTouchpadDevice(*((_QWORD *)v9 + 8)) )
    {
      if ( isRootPartition(v47, v46, v48, v49) )
      {
        if ( IsPTPIVEnabled() )
        {
          if ( v30 )
          {
            v52 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)v9 + 8), 19);
            Processor = CPTPProcessorFactory::GetProcessor(v52);
            if ( Processor )
            {
              *((_DWORD *)Processor + 95) &= ~2u;
              *((_DWORD *)Processor + 94) = 0;
            }
          }
        }
      }
      v54 = 0;
      if ( (*((_DWORD *)v9 + 57) & 8) != 0 && v30 > 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v50) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v50) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v51) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v51) = 0;
        }
        if ( (_BYTE)v50 || (_BYTE)v51 )
        {
          v55 = (int)a5;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            WPP_GLOBAL_Control->AttachedDevice,
            v50,
            v51,
            76,
            v86,
            v87,
            76,
            v88,
            *((_DWORD *)v9 + 10),
            v30,
            (char)a5);
        }
        else
        {
          v55 = (int)a5;
        }
        v56 = v103;
        v57 = v94[0];
        v54 = 0x2000;
        v58 = v100;
        CTouchProcessor::GeneratePointerInputMessages(v100, v9, v94[0], v101, v102, 0x2000u, 0, v103);
      }
      else
      {
        v57 = v94[0];
        v58 = v100;
        v56 = v103;
        v55 = (int)a5;
      }
      if ( !v90 && v30 && v55 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v50) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v50) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v51) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v51) = 0;
        }
        if ( (_BYTE)v50 || (_BYTE)v51 )
          WPP_RECORDER_AND_TRACE_SF_LLL(
            WPP_GLOBAL_Control->AttachedDevice,
            v50,
            v51,
            77,
            v86,
            v87,
            77,
            v88,
            *((_DWORD *)v9 + 10),
            v30,
            v55);
        CTouchProcessor::GeneratePointerInputMessages(v58, v9, v57, v101, v102, 0x10000u, v54, v56);
        v54 |= 0x10000u;
      }
    }
    else
    {
      v55 = (int)a5;
      v54 = 0;
    }
    v6 = v103;
    v5 = (struct _KTHREAD **)v100;
    v7 = v101;
    v59 = v94[0];
    CTouchProcessor::GeneratePointerInputMessages(v100, v9, v94[0], v101, v102, 0, v54, v103);
    if ( v55 )
    {
      v60 = *((unsigned int *)v9 + 12);
      v61 = 0;
      v62 = *((_QWORD *)v9 + 30);
      if ( (_DWORD)v60 )
      {
        do
        {
          v63 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v60);
          if ( v62 >= (unsigned __int64)v63 )
          {
            LODWORD(v100) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2831);
          }
          if ( (*(_DWORD *)v62 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v63, v9, (const struct CPointerInfoNode *)v62, v6)
            && (*(_DWORD *)(v62 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)v5,
              *(_WORD *)(v62 + 172),
              1,
              v9,
              v61,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v60 = *((unsigned int *)v9 + 12);
          v62 += 480LL;
          ++v61;
        }
        while ( v61 < (unsigned int)v60 );
        v59 = v94[0];
        v7 = v101;
      }
    }
    if ( v91 )
    {
      v64 = *((unsigned int *)v9 + 12);
      v65 = 0;
      for ( j = (__int64 *)*((_QWORD *)v9 + 30); v65 < (unsigned int)v64; ++v65 )
      {
        v67 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v64);
        if ( j >= (__int64 *)v67 )
        {
          LODWORD(v100) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2860);
        }
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v67, v9, (const struct CPointerInfoNode *)j, v6) )
          CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)v5, v9, v65, j[2], v59, v7, v102);
        v64 = *((unsigned int *)v9 + 12);
        j += 60;
      }
    }
    v68 = KeQueryPerformanceCounter(0LL);
    v69 = isChildPartition();
    v70 = (LARGE_INTEGER *)((char *)v9 + 120);
    if ( v69 )
      v70 = (LARGE_INTEGER *)((char *)v9 + 192);
    *v70 = v68;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)v9 + 72),
      0);
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
    {
      LODWORD(v100) = *((_DWORD *)v9 + 12);
      LODWORD(a5) = *((_DWORD *)v9 + 10);
      *(_QWORD *)v94 = *((_QWORD *)v9 + 9);
      v93 = *((_QWORD *)v9 + 27);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C029AB27,
        v71,
        v72,
        (__int64)&v93,
        (__int64)v94,
        (__int64)&a5,
        (__int64)&v100);
    }
    EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)v9 + 10), *((_DWORD *)v9 + 12), v71);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v97);
  }
LABEL_152:
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v20, v9);
  v77 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v75, NodeForPointerPromotion, v6) )
  {
    v79 = (v7 != 0) | ((*v74 & 0x8000u) >> 13) | ((*v74 & 0x10000u) >> 13) | ((*v74 & 0x40u) >> 2);
    v80 = v102 != 0;
    v102 = -v102;
    v81 = (v80 ? 2 : 0) | v79;
    if ( v74[44] != *((_DWORD *)v9 + 10) )
    {
      LODWORD(v100) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2902);
    }
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(v9, &v95, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v98,
      (struct CInpLockGuard *)(v5 + 4),
      0LL,
      v78);
    ApiSetEditionProcessPointerInputAsMouse((char *)v77 + 168, *((unsigned __int16 *)v77 + 80), v81);
    CInpLockGuard::LockExclusive(v99);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v98, v82, v83, v84);
    if ( qword_1C02D65D8 )
      qword_1C02D65D8(&v95);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v74) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v74) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v76) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v76) = 0;
  }
  if ( (_BYTE)v74 || (_BYTE)v76 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v74,
      v76,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      78,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  return 1LL;
}
