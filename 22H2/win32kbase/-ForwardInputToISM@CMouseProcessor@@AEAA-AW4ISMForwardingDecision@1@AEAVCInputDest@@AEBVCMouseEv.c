/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C004CD08
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0040034 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C16DC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00455C8 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004597C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004DFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0070008 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     IsMiPActive @ 0x1C0096998 (IsMiPActive.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C00AC130 (RIMGetVirtualDesktopPhysicalSize.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ConvertPointCoordinates @ 0x1C01B3830 (ConvertPointCoordinates.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01BEB2C (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BF58C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01C206C (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_RO.c)
 *     ApiSetEditionGetInputTransform @ 0x1C01CBA88 (ApiSetEditionGetInputTransform.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D0290 (ApiSetResetLastSeenFrameId.c)
 */

__int64 __fastcall CMouseProcessor::ForwardInputToISM(
        __int64 a1,
        __int128 *a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4,
        struct tagPOINT *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  __int64 v11; // r13
  unsigned __int8 v12; // r15
  __int64 v14; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int v16; // ebx
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int128 v26; // xmm0
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // ecx
  struct A0xad387374::CFrameIdGenerator *v31; // rbx
  int v32; // r13d
  struct tagTHREADINFO *ThreadInfo; // rax
  int v34; // edx
  __int64 v35; // rcx
  _QWORD v38[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+58h] [rbp-B0h]
  __int128 v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v42[64]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v43[38]; // [rsp+C8h] [rbp-40h] BYREF

  v8 = *((_DWORD *)a2 + 1);
  v11 = a1;
  if ( v8 - 2 <= 1 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( v8 != 1 )
      return 1LL;
  }
  memset(v43, 0, sizeof(v43));
  v14 = *((_QWORD *)a3 + 1);
  v43[0] = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v14 + 80) )
  {
    v43[4] = *(_QWORD *)(v14 + 80);
  }
  else
  {
    v14 = *((_QWORD *)a3 + 1);
    v43[4] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  }
  PerformanceCounter = *(LARGE_INTEGER *)(v14 + 88);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = *((_QWORD *)a3 + 1);
  }
  v43[5] = PerformanceCounter.QuadPart;
  LOWORD(v43[1]) = *(_WORD *)(v14 + 24);
  WORD1(v43[1]) = *(_WORD *)(v14 + 36);
  LODWORD(v43[2]) = *(_DWORD *)(v14 + 32);
  HIDWORD(v43[3]) = *(_DWORD *)(v14 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 8LL))(a3, &v43[1]);
  v43[7] = *a5;
  v16 = v43[7];
  v40 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v39 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(&v41);
  ConvertPointCoordinates(v16);
  v17 = *a2;
  v18 = a8 | 1;
  v19 = a2[1];
  LODWORD(v43[23]) = a6;
  LODWORD(v43[24]) = a7;
  *(_OWORD *)&v43[9] = v17;
  if ( (gafAsyncKeyState & 4) == 0 )
    v18 = a8;
  v20 = a2[2];
  v21 = v18 | 2;
  if ( (gafAsyncKeyState & 0x10) == 0 )
    v21 = v18;
  v22 = v21 | 0x10;
  if ( (BYTE1(gafAsyncKeyState) & 1) == 0 )
    v22 = v21;
  v23 = v22 | 0x20;
  *(_OWORD *)&v43[11] = v19;
  if ( (BYTE1(gafAsyncKeyState) & 4) == 0 )
    v23 = v22;
  v24 = a2[3];
  v25 = v23 | 0x40;
  *(_OWORD *)&v43[13] = v20;
  if ( (BYTE1(gafAsyncKeyState) & 0x10) == 0 )
    v25 = v23;
  v26 = a2[4];
  v43[25] = v25;
  v27 = v43[35];
  *(_OWORD *)&v43[15] = v24;
  v28 = a2[5];
  *(_OWORD *)&v43[17] = v26;
  v29 = a2[6];
  v43[20] = *((_QWORD *)&v28 + 1);
  v43[19] = 0LL;
  *(_OWORD *)&v43[21] = v29;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0 )
  {
    v27 = LODWORD(v43[35]) | 8;
    LODWORD(v43[35]) |= 8u;
  }
  if ( (BYTE4(gafAsyncKeyState) & 1) != 0 )
    LODWORD(v43[35]) = v27 | 4;
  v30 = *((_DWORD *)a3 + 4);
  if ( v30 != 1 )
    goto LABEL_27;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 148LL) == 1 )
  {
    LODWORD(v43[34]) |= 1u;
LABEL_27:
    if ( v30 == 3 )
    {
      v31 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v42,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
        0LL);
      v32 = (*(_DWORD *)v31)++;
      if ( v32 == -1 )
      {
        *(_DWORD *)v31 = 1;
        ApiSetResetLastSeenFrameId();
      }
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v42);
      HIDWORD(v43[34]) = v32;
      v11 = a1;
    }
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v43[23]) = IsMiPActive(ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v43[26]);
  if ( v8 != 2 )
    goto LABEL_40;
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8363LL);
  if ( CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(v11 + 3840),
         a3,
         (struct CInputDest *)a2,
         a4,
         &v43[6]) )
  {
LABEL_40:
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v38);
    InputConfig::Mouse::RegionFromPoint(*a5, (struct CLockedInputSpaceRegion *)v38);
    if ( v38[0] )
      *(_OWORD *)((char *)&v43[35] + 4) = *(_OWORD *)v38[0];
    ExReleaseResourceLite(*(PERESOURCE *)v38[1]);
    KeLeaveCriticalRegion();
    InputExtensibilityCallout::CoreMsgSendMessage(v35, 16LL, v43);
    InputTraceLogging::Mouse::SendToUserMode(v43, v8);
    if ( v8 == 2 && *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8401LL);
    return v12 ^ 1u;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v34,
        6,
        52,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 88LL), 21LL);
    return 2LL;
  }
}
