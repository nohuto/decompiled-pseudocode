/*
 * XREFs of NtTraceControl @ 0x1405EAF60
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407970B0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407972F8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092FC18 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402D2070 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     EtwpCreateActivityId @ 0x140308F08 (EtwpCreateActivityId.c)
 *     PtrToUlong @ 0x140321160 (PtrToUlong.c)
 *     EtwpTransitionToRealtime @ 0x1403F8718 (EtwpTransitionToRealtime.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     WdiUpdateSem @ 0x1405A5530 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x1405AA664 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1405AD2D4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405AD7A4 (EtwpSetCompressionSettings.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x14069B834 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x14069B8B8 (EtwpRealtimeConnect.c)
 *     EtwpSendReplyDataBlock @ 0x14069E628 (EtwpSendReplyDataBlock.c)
 *     EtwpTrackProviderBinary @ 0x1406A2A08 (EtwpTrackProviderBinary.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406A3D70 (EtwpReceiveReplyDataBlock.c)
 *     EtwpSetProviderTraitsUm @ 0x1406BBE50 (EtwpSetProviderTraitsUm.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     EtwpStartTrace @ 0x140710EBC (EtwpStartTrace.c)
 *     EtwpFlushTrace @ 0x140710F3C (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407126B8 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x140712880 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1407150A4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x140717CB4 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x14071802C (EtwpReceiveNotification.c)
 *     EtwpEnumerateTraceGuids @ 0x14072B948 (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGuidInfo @ 0x14072EB7C (EtwpGetTraceGuidInfo.c)
 *     WdiDispatchControl @ 0x1407891E0 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x140791BF8 (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D5180 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateDisallowList @ 0x140934430 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409346C8 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1409347A4 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x140934A18 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140934AB8 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x140934BA4 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x140934C34 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140934D20 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F200 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x14093F37C (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F6B4 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140940E90 (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  ETWTRACECONTROLCODE v7; // r14d
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  char PreviousMode; // bl
  __int64 v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  __int64 CurrentSiloState; // r15
  unsigned int v15; // r13d
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  ULONG v19; // r14d
  ULONG v20; // ebx
  SIZE_T v21; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v23; // r9
  __int64 v25; // rax
  PVOID v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  PULONG v33; // rcx
  __int64 v34; // rdx
  _WORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  ETWTRACECONTROLCODE v37; // [rsp+34h] [rbp-64h]
  size_t Size; // [rsp+38h] [rbp-60h] BYREF
  int v39; // [rsp+40h] [rbp-58h]
  void *Src; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+58h] [rbp-40h]

  v7 = FunctionCode;
  v37 = FunctionCode;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  LODWORD(Size) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentSiloState = EtwpGetCurrentSiloState(*(__int64 *)&FunctionCode, (__int64)InputBuffer);
  LOBYTE(v15) = 0;
  if ( PreviousMode )
  {
    v15 = (unsigned int)v7 >> 31;
    v16 = v7 & 0x7FFFFFFF;
    if ( v7 >= 0 )
      v16 = v7;
    v7 = v16;
    v37 = v16;
    v17 = 0x7FFFFFFF0000LL;
    if ( InputBuffer )
    {
      if ( InputBufferLength )
      {
        v12 = (char *)InputBuffer + InputBufferLength;
        if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < InputBuffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      InputBufferLength = 0;
    }
    if ( OutputBuffer )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 1u);
    else
      OutputBufferLength = 0;
    if ( !ReturnLength )
    {
      LODWORD(v8) = -1073741811;
      v39 = -1073741811;
      goto LABEL_151;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v17 = (__int64)ReturnLength;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
  if ( (unsigned int)v7 <= EtwAddNotificationEvent && (v18 = 134238208, _bittest(&v18, v7)) )
  {
    v19 = OutputBufferLength;
    v20 = InputBufferLength;
  }
  else
  {
    v20 = InputBufferLength;
    v19 = OutputBufferLength;
    if ( InputBufferLength || OutputBufferLength )
    {
      v21 = OutputBufferLength;
      if ( InputBufferLength > OutputBufferLength )
        v21 = InputBufferLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v21, 0x50777445u);
      v9 = PoolWithQuotaTag;
      Src = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        LODWORD(v8) = -1073741801;
        goto LABEL_151;
      }
      memset(PoolWithQuotaTag, 0, OutputBufferLength);
      if ( InputBuffer )
        memmove(v9, InputBuffer, InputBufferLength);
    }
  }
  switch ( v37 )
  {
    case EtwStartLoggerCode:
    case EtwStopLoggerCode:
    case EtwQueryLoggerCode:
    case EtwUpdateLoggerCode:
    case EtwFlushLoggerCode:
    case EtwIncrementLoggerFile:
    case EtwRealtimeTransition:
      LODWORD(v8) = EtwpValidateUserModeLoggerInfo(v9, v20, v19);
      if ( (int)v8 >= 0 )
      {
        if ( (unsigned int)v23 <= 6 )
          __asm { jmp     rcx }
        LODWORD(Size) = 176;
      }
      goto LABEL_139;
    case EtwRealtimeConnectCode:
      if ( v20 != 96 || v19 != 96 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRealtimeConnect(v9);
      LODWORD(Size) = 96;
      goto LABEL_139;
    case EtwActivityIdCreate:
      if ( v19 != 16 )
        goto LABEL_61;
      EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
      v27 = (unsigned int)v37;
      goto LABEL_140;
    case EtwWdiScenarioCode:
      if ( v20 != 48 || v19 )
        goto LABEL_61;
      LODWORD(v8) = WdiDispatchControl(v9);
      goto LABEL_139;
    case EtwRealtimeDisconnectCode:
      if ( v20 != 8 || v19 )
        goto LABEL_61;
      LODWORD(v25) = PtrToUlong((const void *)*(unsigned int *)InputBuffer);
      v41 = v25;
      LODWORD(v8) = EtwpRealtimeDisconnectConsumerByHandle(v25);
      goto LABEL_139;
    case EtwRegisterGuidsCode:
      if ( v20 != 160 || v19 - 160 > 0xFF60 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterUMGuid(CurrentSiloState, (_DWORD)v9, v19, (unsigned __int8)v15, (__int64)&Size);
      goto LABEL_139;
    case EtwReceiveNotification:
      if ( v20 || v19 - 72 > 0xFFB8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpReceiveNotification(v9);
      goto LABEL_139;
    case EtwSendDataBlock:
      if ( v20 < 0x48 || v19 != 72 || *((_DWORD *)v9 + 1) != v20 )
        goto LABEL_61;
      if ( *(_DWORD *)v9 == 3 )
      {
        if ( v20 < 0x78 )
          goto LABEL_61;
        LOBYTE(v13) = 1;
        LODWORD(v8) = EtwpEnableGuid(CurrentSiloState, v9, v13);
        LODWORD(Size) = 72;
      }
      else
      {
        LOBYTE(v13) = 1;
        LODWORD(v8) = EtwpNotifyGuid(CurrentSiloState, v9, v13);
        LODWORD(Size) = 72;
      }
      goto LABEL_139;
    case EtwSendReplyDataBlock:
      if ( v20 < 0x48 || *((_DWORD *)v9 + 1) != v20 )
        goto LABEL_61;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      LODWORD(v8) = EtwpSendReplyDataBlock(v9);
      goto LABEL_139;
    case EtwReceiveReplyDataBlock:
      if ( v20 != 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpReceiveReplyDataBlock(v9);
      Size = 0LL;
      goto LABEL_139;
    case EtwWdiSemUpdate:
      if ( v20 || v19 )
        goto LABEL_61;
      LODWORD(v8) = WdiUpdateSem();
      goto LABEL_139;
    case EtwEnumTraceGuidList:
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGuidList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwGetTraceGuidInfo:
      if ( v20 != 16 )
        goto LABEL_61;
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwEnumerateTraceGuids:
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpEnumerateTraceGuids(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwRegisterSecurityProv:
      if ( v20 || v19 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterSecurityProvider(CurrentSiloState);
      goto LABEL_139;
    case EtwReferenceTimeCode:
      if ( v20 != 4 || v19 != 16 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQueryReferenceTime(CurrentSiloState, *(unsigned int *)v9, v9);
      LODWORD(Size) = 16;
      goto LABEL_139;
    case EtwTrackBinaryCode:
      if ( v20 != 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpTrackProviderBinary(CurrentSiloState, v9);
      goto LABEL_139;
    case EtwAddNotificationEvent:
      if ( v20 != 4 )
        goto LABEL_61;
      v28 = *(unsigned int *)InputBuffer;
      v42 = v28;
      if ( !v28 )
        goto LABEL_61;
      LODWORD(v8) = EtwpAddNotificationEvent(v28, (unsigned __int8)v15);
      goto LABEL_139;
    case EtwUpdateDisallowList:
      if ( v20 < 8 )
        goto LABEL_61;
      v29 = *((_DWORD *)v9 + 1);
      if ( 16LL * v29 + 8 != v20 )
        goto LABEL_61;
      if ( v29 )
        v8 = v9 + 1;
      LODWORD(v8) = EtwpUpdateDisallowList(CurrentSiloState, *(unsigned int *)v9, v29, v8);
      goto LABEL_139;
    case EtwSetProviderTraitsCode:
      if ( v20 != 24 || v19 - 120 > 0xFF88 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderTraitsUm((_DWORD)v9, v19, (unsigned int)&Size);
      goto LABEL_139;
    case EtwUseDescriptorTypeCode:
      if ( v20 != 16 || v19 )
        goto LABEL_61;
      LODWORD(v8) = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_139;
    case EtwEnumTraceGroupList:
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGroupList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwGetTraceGroupInfo:
      if ( v20 != 16 )
        goto LABEL_61;
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwGetDisallowList:
      if ( v20 != 8 )
        goto LABEL_61;
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetDisallowList(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwSetCompressionSettings:
      if ( v20 != 16 || v19 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetCompressionSettings((unsigned int *)v9, v11);
      goto LABEL_139;
    case EtwGetCompressionSettings:
      if ( v20 != 8 || v19 != 16 )
        goto LABEL_61;
      LODWORD(Size) = 16;
      LODWORD(v8) = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      goto LABEL_139;
    case EtwUpdatePeriodicCaptureState:
      if ( v20 < 0xC )
        goto LABEL_61;
      v30 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v30 > 0x10 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      v31 = *((unsigned int *)v9 + 1);
      if ( (unsigned int)(v31 - 1) <= 3 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( (_WORD)v30 )
      {
        if ( !(_DWORD)v31 )
        {
          LODWORD(v8) = -1073741811;
          goto LABEL_139;
        }
      }
      else if ( (_DWORD)v31 )
      {
LABEL_61:
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( 16 * v30 + 12 != v20 )
        goto LABEL_61;
      if ( (_WORD)v30 )
        v8 = (_QWORD *)((char *)v9 + 12);
      LODWORD(v8) = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v31, v30, v8);
LABEL_139:
      v26 = OutputBuffer;
      v27 = (unsigned int)v37;
LABEL_140:
      if ( (int)v8 < 0 )
      {
        v33 = ReturnLength;
      }
      else
      {
        if ( (_DWORD)Size )
          memmove(v26, v9, (unsigned int)Size);
        v33 = ReturnLength;
        *ReturnLength = Size;
      }
      if ( (_DWORD)v8 == -1073741789 && ((unsigned int)(v27 - 15) <= 1 || (unsigned int)(v27 - 21) <= 1)
        || (unsigned int)v27 <= 0x28 && (v34 = 0x1D700880000LL, _bittest64(&v34, v27)) )
      {
        *v33 = Size;
      }
LABEL_151:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return (int)v8;
    case EtwGetPrivateSessionTraceHandle:
      if ( v20 < 8 || (v20 & 7) != 0 || v19 < 2 )
        goto LABEL_61;
      v36[0] = 0;
      LODWORD(v8) = EtwpGetPrivateSessionTraceHandle(v9, v20 >> 3, v36);
      if ( !(_DWORD)v8 )
      {
        LODWORD(Size) = 2;
        *(_WORD *)v9 = v36[0];
      }
      goto LABEL_139;
    case EtwRegisterPrivateSession:
      if ( v20 < 2 || v19 < 8 )
        goto LABEL_61;
      v32 = EtwpGetCurrentSiloState((__int64)v12, v11);
      LODWORD(v8) = EtwpRegisterPrivateSession(v32, *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !(_DWORD)v8 )
        LODWORD(Size) = 8;
      goto LABEL_139;
    case EtwQuerySessionDemuxObject:
      if ( v20 < 8 || v19 < 2 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !(_DWORD)v8 )
        LODWORD(Size) = 2;
      goto LABEL_139;
    case EtwSetProviderBinaryTracking:
      if ( v20 < 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderBinaryTracking(CurrentSiloState, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_139;
    case EtwMaxLoggers:
      v27 = (unsigned int)v37;
      v26 = OutputBuffer;
      if ( v19 < 4 )
        goto LABEL_135;
      *(_DWORD *)v9 = *(_DWORD *)(CurrentSiloState + 16);
      LODWORD(Size) = 4;
      goto LABEL_140;
    case EtwMaxPmcCounter:
      v27 = (unsigned int)v37;
      v26 = OutputBuffer;
      if ( v19 < 4 )
      {
LABEL_135:
        LODWORD(v8) = -1073741811;
      }
      else
      {
        *(_DWORD *)v9 = EtwpMaxPmcCounter;
        LODWORD(Size) = 4;
      }
      goto LABEL_140;
    default:
      LODWORD(v8) = -1073741808;
      goto LABEL_139;
  }
}
