/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003C040 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003C1A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ApiSetEditionGetInputTransform @ 0x1C003C1EC (ApiSetEditionGetInputTransform.c)
 *     IsMiPActive @ 0x1C003C2F4 (IsMiPActive.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ConvertPointCoordinates @ 0x1C003C35C (ConvertPointCoordinates.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C003C470 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C003C4E0 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01D3C70 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01DDDC4 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01F8994 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01F9394 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C020F0D4 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ForwardInputToISM(
        _DWORD *a1,
        __int128 *a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        struct CMouseProcessor::InputDeliveryContext *a4,
        struct tagPOINT *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  struct tagPOINT *v10; // r15
  char v11; // bl
  unsigned __int8 v14; // r12
  __int64 v15; // rcx
  unsigned __int128 v16; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  bool v18; // zf
  int v19; // eax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm0
  int v30; // eax
  int v31; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _DWORD *v41; // r15
  int v42; // r8d
  int v43; // edx
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  struct CMouseProcessor::InputDeliveryContext *v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h]
  __int128 v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v51[64]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v52[128]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = *((_DWORD *)a2 + 1);
  v10 = a5;
  v11 = 1;
  v46 = a4;
  v45 = (__int64)a5;
  if ( v8 - 2 <= 1 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    if ( v8 != 1 )
      return 1LL;
  }
  memset(&v52[90], 0, 0x130uLL);
  v15 = *((_QWORD *)a3 + 1);
  v52[90] = *(_QWORD *)(v15 + 8);
  *((_QWORD *)&v16 + 1) = *(_QWORD *)(v15 + 80);
  if ( !*((_QWORD *)&v16 + 1) )
  {
    v16 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v15 = *((_QWORD *)a3 + 1);
  }
  v52[94] = *((_QWORD *)&v16 + 1);
  PerformanceCounter = *(LARGE_INTEGER *)(v15 + 88);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = *((_QWORD *)a3 + 1);
  }
  v18 = *((_DWORD *)a3 + 4) == 3;
  v52[95] = PerformanceCounter.QuadPart;
  if ( v18 )
    v19 = a1[859];
  else
    v19 = a1[858];
  HIDWORD(v52[127]) = v19;
  LOWORD(v52[91]) = *(_WORD *)(v15 + 24);
  WORD1(v52[91]) = *(_WORD *)(v15 + 36);
  LODWORD(v52[92]) = *(_DWORD *)(v15 + 32);
  HIDWORD(v52[93]) = *(_DWORD *)(v15 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 16LL))(a3, &v52[91]);
  v52[97] = *a5;
  v48 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v50);
  v49 = *(_OWORD *)InputConfig::Mouse::GetUnionRegion(v52);
  ConvertPointCoordinates(v52[97]);
  v20 = a2[1];
  v21 = a8 | 1;
  v22 = *a2;
  LODWORD(v52[113]) = a6;
  LODWORD(v52[114]) = a7;
  *(_OWORD *)&v52[99] = v22;
  if ( (gafAsyncKeyState & 4) == 0 )
    v21 = a8;
  v23 = a2[2];
  v24 = v21 | 2;
  if ( (gafAsyncKeyState & 0x10) == 0 )
    v24 = v21;
  v25 = v24 | 0x10;
  if ( (BYTE1(gafAsyncKeyState) & 1) == 0 )
    v25 = v24;
  v26 = v25 | 0x20;
  *(_OWORD *)&v52[101] = v20;
  if ( (BYTE1(gafAsyncKeyState) & 4) == 0 )
    v26 = v25;
  v27 = a2[3];
  v28 = v26 | 0x40;
  *(_OWORD *)&v52[103] = v23;
  if ( (BYTE1(gafAsyncKeyState) & 0x10) == 0 )
    v28 = v26;
  v29 = a2[4];
  *(_OWORD *)&v52[105] = v27;
  v52[115] = v28;
  v30 = v52[125];
  v52[110] = *((_QWORD *)a2 + 11);
  v52[109] = 0LL;
  *(_OWORD *)&v52[107] = v29;
  *(_OWORD *)&v52[111] = a2[6];
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0 )
  {
    v30 = LODWORD(v52[125]) | 8;
    LODWORD(v52[125]) |= 8u;
  }
  if ( (BYTE4(gafAsyncKeyState) & 1) != 0 )
    LODWORD(v52[125]) = v30 | 4;
  v31 = *((_DWORD *)a3 + 4);
  if ( v31 == 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 148LL) == 1 )
      LODWORD(v52[124]) |= 1u;
  }
  else if ( v31 == 3 )
  {
    v41 = qword_1C0296BE0;
    CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
      (CInpLockGuardExclusiveIfNeeded *)v51,
      (struct CInpLockGuard *)((char *)qword_1C0296BE0 + 8),
      0LL);
    LODWORD(v44) = *v41;
    v18 = (_DWORD)v44 == -1;
    *v41 = v44 + 1;
    if ( v18 )
    {
      *v41 = 1;
      ApiSetResetLastSeenFrameId();
    }
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v51);
    v10 = (struct tagPOINT *)v45;
    HIDWORD(v52[124]) = v44;
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v52[113]) = IsMiPActive(ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v52[116]);
  if ( v8 != 2 )
    goto LABEL_29;
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
  if ( CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 962),
         a3,
         (struct CInputDest *)a2,
         v46,
         &v52[96]) )
  {
LABEL_29:
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v47);
    InputConfig::Mouse::RegionFromPoint(*v10, (struct CLockedInputSpaceRegion *)v47);
    if ( v47[0] )
      *(_OWORD *)((char *)&v52[125] + 4) = *(_OWORD *)v47[0];
    ExReleaseResourceLite(*(PERESOURCE *)v47[1]);
    KeLeaveCriticalRegion();
    InputExtensibilityCallout::CoreMsgSendMessage(v36, 16);
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
    {
      v46 = (struct CMouseProcessor::InputDeliveryContext *)InputTraceLogging::RoutingModeToString(v8);
      v45 = v52[102];
      LODWORD(v44) = v52[114];
      v47[0] = v52[95];
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        (int)&dword_1C028EE70,
        (__int64)v47,
        (__int64)&v44,
        (__int64)&v45,
        (__int64)&v46);
    }
    if ( v8 == 2 )
    {
      if ( *(_DWORD *)a2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
    }
    return v14 ^ 1u;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = 56;
      LOBYTE(v43) = v11;
      LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v43,
        v42,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        6,
        56,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 88LL), 21LL);
    return 2LL;
  }
}
