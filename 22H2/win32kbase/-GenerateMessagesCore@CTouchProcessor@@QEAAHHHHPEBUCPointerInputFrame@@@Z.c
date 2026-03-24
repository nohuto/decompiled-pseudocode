/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0190000
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C018DB0C (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019A6E0 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BBCC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     IsPTPIVEnabled @ 0x1C00A9B40 (IsPTPIVEnabled.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C0121C80 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C0122060 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C0122090 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C0122400 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C016F804 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187454 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189634 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C018C2E4 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C018E384 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018E9D0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018F788 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018F944 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0190A74 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0191200 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0195828 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01967E8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01972F8 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0198CF0 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0199E3C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019A5AC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C019EC34 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C01A15F0 (WPP_RECORDER_SF_LLL.c)
 *     IsTouchpadDevice @ 0x1C01AEA50 (IsTouchpadDevice.c)
 *     IsPenIVEnabled @ 0x1C01BA66C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA6BC (IsTouchIVEnabled.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C01CD614 (ApiSetEditionProcessPointerInputAsMouse.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        struct _KTHREAD **this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  struct _KTHREAD **v5; // r14
  int v7; // r12d
  unsigned int v8; // r15d
  void *v9; // rdx
  CInputThread *v11; // rdi
  bool v12; // bl
  CTouchProcessor *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // r8
  int v18; // r14d
  const struct CPointerInfoNode *v19; // rdi
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rax
  int v23; // r14d
  int v24; // edi
  int v25; // r12d
  unsigned int v26; // r15d
  unsigned __int64 v27; // rbx
  CTouchProcessor *v28; // rcx
  CTouchProcessor *v29; // rcx
  unsigned __int64 PrevMsgId; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // edx
  __int64 *v36; // rbx
  unsigned int v37; // edi
  CTouchProcessor *v38; // rcx
  unsigned __int64 *v39; // rbx
  unsigned int i; // edi
  CTouchProcessor *v41; // rcx
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  unsigned int v45; // edi
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // ebx
  int v49; // r15d
  unsigned int v50; // r12d
  CTouchProcessor *v51; // r14
  __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  unsigned int j; // edi
  CTouchProcessor *v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // edi
  __int64 *k; // rbx
  CTouchProcessor *v60; // rcx
  __int64 v61; // r9
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v63; // rdx
  CTouchProcessor *v64; // rcx
  const struct CPointerInfoNode *v65; // rdi
  unsigned __int16 v66; // bx
  unsigned int v68; // [rsp+28h] [rbp-81h]
  int v69; // [rsp+48h] [rbp-61h] BYREF
  int v70; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v71; // [rsp+50h] [rbp-59h]
  unsigned int v72; // [rsp+54h] [rbp-55h]
  __int64 v73; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v74[2]; // [rsp+60h] [rbp-49h]
  __int64 v75; // [rsp+68h] [rbp-41h] BYREF
  __int128 v76; // [rsp+70h] [rbp-39h] BYREF
  __int64 v77; // [rsp+80h] [rbp-29h]
  __int64 *v78; // [rsp+88h] [rbp-21h] BYREF
  PERESOURCE *v79[13]; // [rsp+90h] [rbp-19h] BYREF
  int v83; // [rsp+128h] [rbp+7Fh]

  v5 = this;
  v7 = a3;
  v8 = a2;
  v76 = 0LL;
  *(_QWORD *)v74 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v77 = 0LL;
  v9 = &WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      7,
      73,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  if ( v5[6] != KeGetCurrentThread() )
  {
    LODWORD(v73) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2188);
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)v5, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2189);
  v11 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v11, 0LL);
  v12 = CInputThread::_CalledOnInputThread(v11);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( !v12 )
  {
    v16 = 0;
LABEL_17:
    if ( !a4 )
      goto LABEL_23;
    goto LABEL_18;
  }
  v16 = 0;
  if ( !gptiManipulationThread )
    goto LABEL_17;
  if ( !a4 )
  {
    if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v13, a5) )
    {
      EtwTraceDwmManipulationFrameStart(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v17);
      if ( qword_1C0255FC0 )
        qword_1C0255FC0(a5, &v76, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)v5, a5);
      if ( qword_1C0255FD0 )
        qword_1C0255FD0(&v76);
    }
    goto LABEL_23;
  }
LABEL_18:
  v18 = 0;
  v19 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 17);
  if ( *((_DWORD *)a5 + 12) )
  {
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v13, a5, v19, a4) )
        ++v18;
      v19 = (const struct CPointerInfoNode *)((char *)v19 + 480);
      ++v16;
    }
    while ( v16 < *((_DWORD *)a5 + 12) );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v18, v14);
  v5 = this;
LABEL_23:
  v20 = *((_DWORD *)a5 + 31);
  if ( (v20 & 1) == 0 )
  {
    if ( (v20 & 8) != 0 && !a4 )
    {
      if ( qword_1C0255FC0 )
        qword_1C0255FC0(a5, &v76, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
      CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)v5, a5);
      if ( qword_1C0255FD0 )
        qword_1C0255FD0(&v76);
    }
    if ( (*((_DWORD *)a5 + 31) & 2) == 0 || a4 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v78, "GenerateFrameMessages", 0LL, v15);
      EtwTraceBeginPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v21);
      if ( isRootPartition()
        && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
      {
        CTouchProcessor::CheckandDeliverContainerInput(v5, a5, v8, a4);
      }
      v22 = *((unsigned int *)a5 + 12);
      v71 = 0;
      v23 = 0;
      v72 = 0;
      v24 = 0;
      LODWORD(v73) = 0;
      v25 = 0;
      v83 = 0;
      v26 = 0;
      v70 = 0;
      v27 = *((_QWORD *)a5 + 17);
      if ( (_DWORD)v22 )
      {
        do
        {
          v28 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v22);
          if ( v27 >= (unsigned __int64)v28 )
          {
            LODWORD(v75) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2342);
          }
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v28, a5, (const struct CPointerInfoNode *)v27, a4) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v29, *(_QWORD *)(v27 + 16));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v27,
              PrevMsgId,
              v74[0],
              a2,
              a3);
            v31 = *(_DWORD *)v27;
            if ( (*(_DWORD *)v27 & 0x1000) == 0 )
            {
              if ( (v31 & 8) != 0 )
              {
                if ( __CFSHR__(v31, 7) )
                {
                  v70 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2364);
                }
                ++v23;
              }
              else if ( __CFSHR__(v31, 7) )
              {
                ++v25;
              }
              v32 = v24 + 1;
              v33 = *(_DWORD *)(v27 + 180);
              if ( (v33 & 1) == 0 )
                v32 = v24;
              v24 = v32;
              v34 = v71 + 1;
              if ( (v33 & 2) != 0 )
                v34 = v71;
              v71 = v34;
              v35 = v34;
              if ( (v33 & 0x10000) != 0 )
              {
                ++v72;
              }
              else if ( (v33 & 0x40000) != 0 )
              {
                ++v83;
                v71 = v34;
              }
              else
              {
                if ( (v33 & 0x20000) == 0 )
                {
                  v69 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2389);
                  v35 = v71;
                }
                LODWORD(v73) = v73 + 1;
                v71 = v35;
              }
            }
          }
          v22 = *((unsigned int *)a5 + 12);
          v27 += 480LL;
          ++v26;
        }
        while ( v26 < (unsigned int)v22 );
        v70 = v25;
        if ( v23 || v25 )
          goto LABEL_63;
      }
      if ( v24 )
      {
LABEL_63:
        v36 = (__int64 *)*((_QWORD *)a5 + 17);
        v37 = 0;
        if ( (_DWORD)v22 )
        {
          do
          {
            v38 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v22);
            if ( v36 >= (__int64 *)v38 )
            {
              v69 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2410);
            }
            if ( (*(_DWORD *)v36 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v38, a5, (const struct CPointerInfoNode *)v36, a4) )
            {
              v68 = v74[0];
              CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v37, v36[2]);
            }
            v22 = *((unsigned int *)a5 + 12);
            v36 += 60;
            ++v37;
          }
          while ( v37 < (unsigned int)v22 );
          v25 = v70;
        }
        if ( v25 )
        {
          v39 = (unsigned __int64 *)*((_QWORD *)a5 + 17);
          for ( i = 0; i < (unsigned int)v22; ++i )
          {
            v41 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v22);
            if ( v39 >= (unsigned __int64 *)v41 )
            {
              v69 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2439);
            }
            if ( (*(_DWORD *)v39 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v41, a5, (const struct CPointerInfoNode *)v39, a4) )
            {
              CTouchProcessor::GenerateRoutedToMessages((CTouchProcessor *)this, a5, i, v39[2], v74[0], a2, a3);
            }
            v22 = *((unsigned int *)a5 + 12);
            v39 += 60;
          }
        }
      }
      if ( (unsigned __int8)IsTouchpadDevice(*((_QWORD *)a5 + 8)) )
      {
        if ( isRootPartition() )
        {
          v45 = v72;
          if ( IsPTPIVEnabled() && v72 )
          {
            v46 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), 19) + 480);
            v47 = v46 ? *(_QWORD *)(v46 + 1000) : 0LL;
            if ( v47 )
            {
              *(_DWORD *)(v47 + 380) &= ~2u;
              *(_DWORD *)(v47 + 376) = 0;
            }
          }
        }
        else
        {
          v45 = v72;
        }
        v48 = 0;
        if ( (*((_DWORD *)a5 + 31) & 8) != 0 && v45 > 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v49 = v83;
          }
          else
          {
            v49 = v83;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_LLL(v43, v42, v44, 74, v68, *((_DWORD *)a5 + 10), v45, v83);
          }
          v50 = v74[0];
          v51 = (CTouchProcessor *)this;
          v48 = 0x2000;
          CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v74[0], a2, a3, 0x2000u, 0, a4);
        }
        else
        {
          v50 = v74[0];
          v49 = v83;
          v51 = (CTouchProcessor *)this;
        }
        if ( !(_DWORD)v73 && v45 && v49 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_LLL(0, v42, v44, 75, v68, *((_DWORD *)a5 + 10), v45, v49);
          }
          CTouchProcessor::GeneratePointerInputMessages(v51, a5, v50, a2, a3, 0x10000u, v48, a4);
          v48 |= 0x10000u;
        }
      }
      else
      {
        v48 = 0;
        v49 = v83;
      }
      v5 = this;
      CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v74[0], a2, a3, 0, v48, a4);
      if ( v49 )
      {
        v53 = *((unsigned int *)a5 + 12);
        v54 = *((_QWORD *)a5 + 17);
        for ( j = 0; j < (unsigned int)v53; ++j )
        {
          v56 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v53);
          if ( v54 >= (unsigned __int64)v56 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2597);
          if ( (*(_DWORD *)v54 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v56, a5, (const struct CPointerInfoNode *)v54, a4)
            && (*(_DWORD *)(v54 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)this,
              *(_WORD *)(v54 + 172),
              1,
              a5,
              j,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v53 = *((unsigned int *)a5 + 12);
          v54 += 480LL;
        }
      }
      if ( v71 )
      {
        v57 = *((unsigned int *)a5 + 12);
        v58 = 0;
        for ( k = (__int64 *)*((_QWORD *)a5 + 17); v58 < (unsigned int)v57; ++v58 )
        {
          v60 = (CTouchProcessor *)(*((_QWORD *)a5 + 17) + 480 * v57);
          if ( k >= (__int64 *)v60 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2626);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v60, a5, (const struct CPointerInfoNode *)k, a4) )
            CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v58, k[2]);
          v57 = *((unsigned int *)a5 + 12);
          k += 60;
        }
      }
      if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 32LL) )
      {
        v69 = *((_DWORD *)a5 + 12);
        v70 = *((_DWORD *)a5 + 10);
        v75 = *((_QWORD *)a5 + 9);
        v73 = *((_QWORD *)a5 + 14);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C024AA90,
          byte_1C021DED9,
          v52,
          v61,
          (__int64)&v73,
          (__int64)&v75,
          (__int64)&v70,
          (__int64)&v69);
      }
      EtwTraceEndPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v52);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v78);
      v8 = a2;
      v7 = a3;
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion(v13, a5);
  v65 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v64, NodeForPointerPromotion, a4) )
  {
    v66 = (v7 != 0 ? 2 : 0) | (v8 != 0) | ((*v63 & 0x8000u) >> 13) | ((*v63 & 0x10000u) >> 13) | ((*v63 & 0x40u) >> 2);
    if ( v63[44] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2665);
    if ( qword_1C0255FC0 )
      qword_1C0255FC0(a5, &v76, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v79,
      (struct CInpLockGuard *)(v5 + 5),
      0LL);
    ApiSetEditionProcessPointerInputAsMouse((char *)v65 + 168, *((unsigned __int16 *)v65 + 80), v66);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v79);
    if ( qword_1C0255FD0 )
      qword_1C0255FD0(&v76);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v63) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v63,
      7,
      76,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  return 1LL;
}
