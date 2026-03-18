/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C4EF8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01D2C30 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     IsPTPIVEnabled @ 0x1C0042570 (IsPTPIVEnabled.c)
 *     PushW32ThreadLock @ 0x1C0097140 (PushW32ThreadLock.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C00DCD30 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     PopW32ThreadLock @ 0x1C00DD608 (PopW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     IsTouchpadDevice @ 0x1C00E8F60 (IsTouchpadDevice.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C014C790 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C014CB60 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C014CB90 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C014CE50 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C01A3FC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BFDA0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01C35AC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01C5678 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C5AE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C649C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C6724 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1C01C6A74 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01C7D8C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C8770 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01CD5C8 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01CE0AC (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01CEB5C (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01D0660 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01D2144 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D2B28 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01D7798 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x1C01DAA6C (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 *     IsPenIVEnabled @ 0x1C01F0D34 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01F0DB4 (IsTouchIVEnabled.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C020AD4C (ApiSetEditionProcessPointerInputAsMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  struct _KTHREAD **v5; // r13
  int v6; // r15d
  unsigned int v7; // r12d
  PDEVICE_OBJECT v8; // rcx
  unsigned int v9; // ebx
  const struct CPointerInputFrame *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CTouchProcessor *v14; // rcx
  __int64 v15; // r8
  int v16; // r14d
  const struct CPointerInfoNode *v17; // rdi
  CTouchProcessor *v18; // rcx
  BOOL v19; // r14d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // edi
  int v26; // r15d
  unsigned int v27; // r13d
  int v28; // r12d
  unsigned int *v29; // rbx
  unsigned int v30; // r14d
  CTouchProcessor *v31; // rcx
  CTouchProcessor *v32; // rcx
  unsigned __int64 PrevMsgId; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 *v36; // rbx
  unsigned int v37; // edi
  int v38; // r13d
  CTouchProcessor *v39; // r12
  CTouchProcessor *v40; // rcx
  unsigned __int64 *v41; // rbx
  unsigned int v42; // edi
  int v43; // r13d
  CTouchProcessor *v44; // rcx
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  struct DEVICEINFO *v48; // rax
  struct CPTPProcessor *Processor; // rax
  unsigned int v50; // ebx
  int v51; // r14d
  int v52; // edi
  unsigned int v53; // r12d
  CTouchProcessor *v54; // r15
  unsigned int v55; // r12d
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  unsigned int v60; // edi
  CTouchProcessor *v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // edi
  __int64 *i; // rbx
  CTouchProcessor *v65; // rcx
  LARGE_INTEGER v66; // rbx
  __int64 v67; // r8
  __int64 v68; // r9
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v70; // rdx
  CTouchProcessor *v71; // rcx
  __int64 v72; // r8
  const struct CPointerInfoNode *v73; // rdi
  __int16 v74; // bx
  bool v75; // cf
  unsigned __int16 v76; // bx
  int v78; // [rsp+28h] [rbp-A1h]
  int v79; // [rsp+30h] [rbp-99h]
  int v80; // [rsp+40h] [rbp-89h]
  unsigned int v81[2]; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v82; // [rsp+70h] [rbp-59h]
  int v83; // [rsp+74h] [rbp-55h]
  int v84; // [rsp+78h] [rbp-51h]
  __int64 v85; // [rsp+80h] [rbp-49h] BYREF
  __int128 v86; // [rsp+88h] [rbp-41h] BYREF
  __int64 v87; // [rsp+98h] [rbp-31h]
  __int64 *v88; // [rsp+A0h] [rbp-29h] BYREF
  PERESOURCE *v89[14]; // [rsp+A8h] [rbp-21h] BYREF
  CTouchProcessor *v90; // [rsp+128h] [rbp+5Fh] BYREF
  int v91; // [rsp+130h] [rbp+67h]
  int v92; // [rsp+138h] [rbp+6Fh]
  int v93; // [rsp+140h] [rbp+77h]

  v93 = a4;
  v92 = a3;
  v91 = a2;
  v90 = this;
  v5 = (struct _KTHREAD **)this;
  v6 = a4;
  v7 = a2;
  v86 = 0LL;
  *(_QWORD *)v81 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v87 = 0LL;
  v8 = WPP_GLOBAL_Control;
  v9 = 0;
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
      71,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( v5[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
  v10 = a5;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)v5, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( CInputThreadBase::IsInputThread(gpInputThread) && gptiManipulationThread )
  {
    if ( !v6 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v14, v10) )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)v10 + 10), *((_DWORD *)v10 + 12), v15);
        if ( qword_1C029BD10 )
          qword_1C029BD10(v10, &v86, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
        CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, v10, 0);
        if ( qword_1C029BD20 )
          qword_1C029BD20(&v86);
      }
      goto LABEL_29;
    }
  }
  else if ( !v6 )
  {
    goto LABEL_29;
  }
  v16 = 0;
  v17 = (const struct CPointerInfoNode *)*((_QWORD *)v10 + 30);
  if ( *((_DWORD *)v10 + 12) )
  {
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v14, v10, v17, v6) )
        ++v16;
      v17 = (const struct CPointerInfoNode *)((char *)v17 + 480);
      ++v9;
    }
    while ( v9 < *((_DWORD *)v10 + 12) );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)v10 + 10), v16, v15);
LABEL_29:
  v18 = (CTouchProcessor *)*((unsigned int *)v10 + 57);
  v19 = (*((_DWORD *)v10 + 57) & 1) == 0;
  if ( (*((_DWORD *)v10 + 57) & 1) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((char *)v10 + (isChildPartition() ? 0x48 : 0) + 120) = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)v10 + 72),
      *((_BYTE *)v10 + 228) & 1);
LABEL_38:
    if ( v19 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v88, "GenerateFrameMessages", 0LL);
      EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)v10 + 10), *((_DWORD *)v10 + 12), v21);
      if ( isRootPartition()
        && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
      {
        CTouchProcessor::CheckandDeliverContainerInput(v5, v10, v7, v6);
      }
      v24 = *((unsigned int *)v10 + 12);
      v84 = 0;
      v25 = 0;
      v83 = 0;
      v26 = 0;
      LODWORD(a5) = 0;
      v27 = 0;
      v28 = 0;
      v29 = (unsigned int *)*((_QWORD *)v10 + 30);
      v30 = 0;
      if ( (_DWORD)v24 )
      {
        do
        {
          v31 = (CTouchProcessor *)(*((_QWORD *)v10 + 30) + 480 * v24);
          if ( v29 >= (unsigned int *)v31 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v22, v23);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v31, v10, (const struct CPointerInfoNode *)v29, v93) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v32, *((_QWORD *)v29 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              v90,
              (const struct CPointerInfoNode *)v29,
              PrevMsgId,
              v81[0],
              v91,
              v92);
            v34 = *v29;
            if ( (v34 & 0x1000) == 0 )
            {
              if ( (v34 & 8) != 0 )
              {
                if ( __CFSHR__(v34, 7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v22, v23);
                ++v25;
              }
              else if ( __CFSHR__(v34, 7) )
              {
                ++v28;
              }
              v35 = v29[45];
              if ( (v35 & 1) != 0 )
                ++v26;
              if ( (v35 & 2) == 0 )
                ++v84;
              if ( (v35 & 0x10000) != 0 )
              {
                ++v27;
              }
              else if ( (v35 & 0x40000) != 0 )
              {
                LODWORD(a5) = (_DWORD)a5 + 1;
              }
              else
              {
                if ( (v35 & 0x20000) == 0 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v22, v23);
                ++v83;
              }
            }
          }
          v24 = *((unsigned int *)v10 + 12);
          v29 += 120;
          ++v30;
        }
        while ( v30 < (unsigned int)v24 );
        v82 = v27;
        LODWORD(v85) = v28;
        if ( v25 || v28 || v26 )
        {
          v36 = (__int64 *)*((_QWORD *)v10 + 30);
          v37 = 0;
          if ( (_DWORD)v24 )
          {
            v38 = v93;
            v39 = v90;
            do
            {
              v40 = (CTouchProcessor *)(*((_QWORD *)v10 + 30) + 480 * v24);
              if ( v36 >= (__int64 *)v40 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v22, v23);
              if ( (*(_DWORD *)v36 & 0x1000) == 0
                && CTouchProcessor::ShouldGenerateMessagesForNode(v40, v10, (const struct CPointerInfoNode *)v36, v38) )
              {
                CTouchProcessor::GenerateEnterMessages(v39, v10, v37, v36[2], v81[0], v91, v92);
              }
              v24 = *((unsigned int *)v10 + 12);
              v36 += 60;
              ++v37;
            }
            while ( v37 < (unsigned int)v24 );
            v28 = v85;
            v27 = v82;
          }
          if ( v28 )
          {
            v41 = (unsigned __int64 *)*((_QWORD *)v10 + 30);
            v42 = 0;
            if ( (_DWORD)v24 )
            {
              v43 = v93;
              do
              {
                v44 = (CTouchProcessor *)(*((_QWORD *)v10 + 30) + 480 * v24);
                if ( v41 >= (unsigned __int64 *)v44 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v22, v23);
                if ( (*(_DWORD *)v41 & 0x1000) == 0
                  && CTouchProcessor::ShouldGenerateMessagesForNode(v44, v10, (const struct CPointerInfoNode *)v41, v43) )
                {
                  CTouchProcessor::GenerateRoutedToMessages(v90, v10, v42, v41[2], v81[0], v91, v92);
                }
                v24 = *((unsigned int *)v10 + 12);
                v41 += 60;
                ++v42;
              }
              while ( v42 < (unsigned int)v24 );
              v27 = v82;
            }
          }
        }
      }
      if ( IsTouchpadDevice(*((_QWORD *)v10 + 8)) )
      {
        if ( isRootPartition() )
        {
          if ( IsPTPIVEnabled() )
          {
            if ( v27 )
            {
              v48 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)v10 + 8), 19);
              Processor = CPTPProcessorFactory::GetProcessor(v48);
              if ( Processor )
              {
                *((_DWORD *)Processor + 93) &= ~2u;
                *((_DWORD *)Processor + 92) = 0;
              }
            }
          }
        }
        v50 = 0;
        if ( (*((_DWORD *)v10 + 57) & 8) != 0 && v27 > 1 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v45) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v46) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v46) = 0;
          }
          if ( (_BYTE)v45 || (_BYTE)v46 )
          {
            v51 = (int)a5;
            WPP_RECORDER_AND_TRACE_SF_LLL(
              WPP_GLOBAL_Control->AttachedDevice,
              v45,
              v46,
              v47,
              v78,
              v79,
              72,
              v80,
              *((_DWORD *)v10 + 10),
              v27,
              (char)a5);
          }
          else
          {
            v51 = (int)a5;
          }
          v52 = v93;
          v53 = v81[0];
          v50 = 0x2000;
          v54 = v90;
          CTouchProcessor::GeneratePointerInputMessages(v90, v10, v81[0], v91, v92, 0x2000u, 0, v93);
        }
        else
        {
          v53 = v81[0];
          v54 = v90;
          v51 = (int)a5;
          v52 = v93;
        }
        if ( !v83 && v27 && v51 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v45) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v46) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v46) = 0;
          }
          if ( (_BYTE)v45 || (_BYTE)v46 )
            WPP_RECORDER_AND_TRACE_SF_LLL(
              WPP_GLOBAL_Control->AttachedDevice,
              v45,
              v46,
              73,
              v78,
              v79,
              73,
              v80,
              *((_DWORD *)v10 + 10),
              v27,
              v51);
          CTouchProcessor::GeneratePointerInputMessages(v54, v10, v53, v91, v92, 0x10000u, v50, v52);
          v50 |= 0x10000u;
        }
      }
      else
      {
        v50 = 0;
        v51 = (int)a5;
      }
      v6 = v93;
      v55 = v81[0];
      v5 = (struct _KTHREAD **)v90;
      CTouchProcessor::GeneratePointerInputMessages(v90, v10, v81[0], v91, v92, 0, v50, v93);
      if ( v51 )
      {
        v58 = *((unsigned int *)v10 + 12);
        v59 = *((_QWORD *)v10 + 30);
        v60 = 0;
        if ( (_DWORD)v58 )
        {
          do
          {
            v61 = (CTouchProcessor *)(*((_QWORD *)v10 + 30) + 480 * v58);
            if ( v59 >= (unsigned __int64)v61 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v56, v57);
            if ( (*(_DWORD *)v59 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v61, v10, (const struct CPointerInfoNode *)v59, v6)
              && (*(_DWORD *)(v59 + 180) & 0x40000) != 0 )
            {
              CTouchProcessor::ProcessRoutedAwayList(
                (CTouchProcessor *)v5,
                *(_WORD *)(v59 + 172),
                1,
                v10,
                v60,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            }
            v58 = *((unsigned int *)v10 + 12);
            v59 += 480LL;
            ++v60;
          }
          while ( v60 < (unsigned int)v58 );
          v55 = v81[0];
        }
      }
      if ( v84 )
      {
        v62 = *((unsigned int *)v10 + 12);
        v63 = 0;
        for ( i = (__int64 *)*((_QWORD *)v10 + 30); v63 < (unsigned int)v62; ++v63 )
        {
          v65 = (CTouchProcessor *)(*((_QWORD *)v10 + 30) + 480 * v62);
          if ( i >= (__int64 *)v65 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v65, v56, v57);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v65, v10, (const struct CPointerInfoNode *)i, v6) )
            CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)v5, v10, v63, i[2], v55, v91, v92);
          v62 = *((unsigned int *)v10 + 12);
          i += 60;
        }
      }
      v66 = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)((char *)v10 + (-(__int64)isChildPartition() & 0x48) + 120) = v66;
      InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
        (const struct CPointerInputFrame *)((char *)v10 + 72),
        0);
      if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 32LL) )
      {
        LODWORD(v90) = *((_DWORD *)v10 + 12);
        LODWORD(a5) = *((_DWORD *)v10 + 10);
        *(_QWORD *)v81 = *((_QWORD *)v10 + 9);
        v85 = *((_QWORD *)v10 + 27);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C028EE70,
          byte_1C02614EC,
          v67,
          v68,
          (__int64)&v85,
          (__int64)v81,
          (__int64)&a5,
          (__int64)&v90);
      }
      EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)v10 + 10), *((_DWORD *)v10 + 12), v67);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v88);
      v7 = v91;
    }
    goto LABEL_146;
  }
  if ( ((unsigned __int8)v18 & 8) != 0 )
  {
    if ( qword_1C029BD10 )
      qword_1C029BD10(v10, &v86, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, v10, v6 != 0);
    if ( qword_1C029BD20 )
      qword_1C029BD20(&v86);
  }
  if ( (*((_DWORD *)v10 + 57) & 2) == 0 || v6 )
    goto LABEL_38;
LABEL_146:
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v18, v10, v15);
  v73 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v71, NodeForPointerPromotion, v6) )
  {
    v74 = (v7 != 0) | ((*v70 & 0x8000u) >> 13) | ((*v70 & 0x10000u) >> 13) | ((*v70 & 0x40u) >> 2);
    v75 = v92 != 0;
    v92 = -v92;
    v76 = (v75 ? 2 : 0) | v74;
    if ( v70[44] != *((_DWORD *)v10 + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v70, v72);
    PushW32ThreadLock((__int64)v10, (__int64)&v86, (__int64)CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v89, v5 + 4, 0LL);
    ApiSetEditionProcessPointerInputAsMouse((char *)v73 + 168, *((unsigned __int16 *)v73 + 80), v76);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v89);
    PopW32ThreadLock((__int64)&v86);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v70) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v70) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v72) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v72) = 0;
  }
  if ( (_BYTE)v70 || (_BYTE)v72 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v70,
      v72,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      74,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  return 1LL;
}
