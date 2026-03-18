/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003D410 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C0097140 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009771C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BC62C (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     PopW32ThreadLock @ 0x1C00DD608 (PopW32ThreadLock.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C00E7B66 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C00E7B9A (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E82B6 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E868C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E8782 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B8DD8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C4708 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C4B20 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01C562C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01CB830 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01CD644 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CDA24 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01CDFB0 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01CE1F4 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01CE784 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE82C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01CE88C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01CF2B8 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C01D3C18 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D57E0 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D6698 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6E88 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01D72C4 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D7DEC (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ApiSetEditionPointerActivate @ 0x1C0209DE4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned int a4,
        int *a5)
{
  void *v6; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  const struct CPointerMsgData *MsgData; // rax
  const struct CPointerMsgData *v13; // rdi
  PDEVICE_OBJECT v14; // rcx
  const int *v15; // r8
  const struct CPointerInputFrame *v16; // rax
  __int64 v17; // r14
  __int16 v18; // ax
  _DWORD *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  struct tagTHREADINFO *v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  CPointerInfoNode *v39; // rcx
  int IsTargetSetForRetrieval; // eax
  CTouchProcessor *v41; // rcx
  CInputDest *v42; // r9
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // ecx
  int IsAnyMessageNonDelegated; // eax
  CInputDest *Queue; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  HWND WindowHandle; // rax
  CTouchProcessor *v63; // rcx
  CTouchProcessor *v64; // rcx
  CTouchProcessor *v65; // rcx
  __int64 v66; // rdx
  CTouchProcessor *v67; // rcx
  struct CPointerInfoNode *v68; // rax
  __int64 v69; // r8
  __int64 v70; // r8
  __int128 v71; // xmm1
  __int64 v72; // rdx
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  CTouchProcessor *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r13
  int v84; // edx
  CPointerInfoNode *v85; // rcx
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rcx
  __int64 v89; // r8
  unsigned int v90; // edi
  struct CPointerInputFrame *v91; // rax
  const int *v92; // r8
  __int16 v94; // [rsp+30h] [rbp-D0h]
  unsigned int v95; // [rsp+50h] [rbp-B0h]
  int v96; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v97[4]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v98; // [rsp+5Ch] [rbp-A4h]
  struct tagTHREADINFO *v99; // [rsp+60h] [rbp-A0h]
  CInputDest *v100; // [rsp+68h] [rbp-98h] BYREF
  int v101; // [rsp+70h] [rbp-90h]
  int v102; // [rsp+74h] [rbp-8Ch]
  int IsMessageDelegated; // [rsp+78h] [rbp-88h]
  struct tagQ *QueueForCurrentNode; // [rsp+80h] [rbp-80h]
  int v105; // [rsp+88h] [rbp-78h] BYREF
  struct tagPOINT v106; // [rsp+90h] [rbp-70h] BYREF
  int *v107; // [rsp+98h] [rbp-68h]
  __int64 v108; // [rsp+A0h] [rbp-60h]
  __int128 v109; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-48h]
  __int128 v111; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-30h]
  _OWORD v113[7]; // [rsp+E0h] [rbp-20h] BYREF
  PERESOURCE *v114[8]; // [rsp+150h] [rbp+50h] BYREF
  CInpLockGuard *v115[6]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v116[112]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v117[128]; // [rsp+230h] [rbp+130h] BYREF

  v107 = a5;
  v6 = a3;
  v98 = a4;
  v99 = a2;
  v8 = 1;
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
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      88,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v115, (struct CInpLockGuard *)(this + 4), v6);
  v96 = 0;
  v110 = 0LL;
  v112 = 0LL;
  v106 = 0LL;
  v105 = 0;
  *a5 = 0;
  v109 = 0LL;
  v111 = 0LL;
  if ( a4 == 595 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v11 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v11,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        89,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    goto LABEL_197;
  }
  MsgData = CTouchProcessor::GetMsgData(v10, (__int64)v6, v11);
  v13 = MsgData;
  if ( !MsgData )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v9 && !(_BYTE)v8 )
      goto LABEL_68;
    v15 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    v94 = 90;
LABEL_67:
    LOBYTE(v15) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v9,
      (_DWORD)v15,
      v14->DeviceExtension,
      5,
      7,
      v94,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
LABEL_68:
    v8 = 0;
    goto LABEL_197;
  }
  v16 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)MsgData + 7), v11);
  v17 = (__int64)v16;
  if ( !v16 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v9 && !(_BYTE)v8 )
      goto LABEL_68;
    v18 = 91;
    goto LABEL_66;
  }
  if ( (*((_DWORD *)v16 + 57) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v16, v11);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v11 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v11,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        92,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    goto LABEL_197;
  }
  v19 = (_DWORD *)Win32AllocPoolZInit(0x78uLL, 1885958997);
  if ( !v19 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, v17, v20);
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v9 && !(_BYTE)v8 )
      goto LABEL_68;
    v18 = 93;
LABEL_66:
    v15 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    v94 = v18;
    goto LABEL_67;
  }
  *(_DWORD *)((char *)v19 + 113) = 0;
  *(_WORD *)((char *)v19 + 117) = 0;
  *((_BYTE *)v19 + 119) = 0;
  memset(v19, 0, 0x70uLL);
  *((_BYTE *)v19 + 112) = 0;
  PushW32ThreadLock(
    (__int64)v19,
    (__int64)&v111,
    (__int64)lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v24 = *((unsigned int *)v13 + 8);
  if ( (unsigned int)v24 >= *(_DWORD *)(v17 + 48) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    v24 = *((unsigned int *)v13 + 8);
  }
  v25 = *(_QWORD *)(v17 + 240) + 480 * v24;
  v108 = v25;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v25) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  if ( *(_WORD *)(v25 + 172) != *((_WORD *)v13 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  switch ( a4 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v25 & 0x800000) == 0 )
LABEL_86:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
      break;
    case 0x24Au:
      if ( (*(_DWORD *)v25 & 0x8000000) == 0 )
        goto LABEL_86;
      break;
    case 0x251u:
      if ( *(int *)v25 >= 0 )
        goto LABEL_86;
      break;
    default:
      if ( a4 == 594 && (*(_DWORD *)(v25 + 4) & 8) == 0 )
        goto LABEL_86;
      break;
  }
  if ( (*(_DWORD *)v25 & 0x100) == 0 && !*(_QWORD *)(v25 + 192) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  v30 = (*((_DWORD *)v99 + 314) >> 13) & 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v25, v98, v28, v29);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          this,
                          v99,
                          v30,
                          v98,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v25);
  if ( !QueueForCurrentNode )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
  PushW32ThreadLock(v17, (__int64)&v109, (__int64)CTouchProcessor::DereferencePointerInputFrame);
  v36 = *(unsigned int *)(v17 + 48);
  v95 = 0;
  v37 = *(_QWORD *)(v17 + 240);
  v101 = 1;
  v102 = 1;
  if ( (_DWORD)v36 )
  {
    do
    {
      v38 = *(_QWORD *)(v17 + 240) + 480 * v36;
      if ( v37 >= v38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v34, v35);
      CInputDest::SetEmpty((CInputDest *)v19);
      if ( v30 && (*((_DWORD *)v99 + 314) & 0x2000) == 0 )
        break;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v37) )
        goto LABEL_102;
      IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v39, v35);
      v42 = 0LL;
      if ( IsTargetSetForRetrieval )
      {
        v43 = CTouchProcessor::HandlePointerNodeWithTarget(this, (CPointerInfoNode *)v25, v98, v37);
        if ( v43 == 1 )
          goto LABEL_179;
        if ( (v43 & 0xFFFFFFFD) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v34, v35);
        goto LABEL_102;
      }
      if ( *(_DWORD *)(v37 + 8) == *(_DWORD *)(v25 + 8)
        && (v37 == v25
         || (v30
          || (IsAnyMessageNonDelegated = CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v37),
              LODWORD(v42) = 0,
              IsAnyMessageNonDelegated))
         && (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v37, &v105), v42 = 0LL, v100 = Queue, !v105)
         && (!Queue
          || (v48 = CInputDest::GetQueue((__int64)Queue, 2, (__int64)v35), v42 = 0LL, !v48)
          || CInputDest::UsesQueue(v100, QueueForCurrentNode))) )
      {
        if ( (*((_DWORD *)v99 + 314) & 0x2000) != 0 )
        {
          v49 = *(_QWORD *)(v37 + 16);
          v100 = v42;
          if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v49, v30, &v100, &v96) )
          {
            CInputDest::operator=((__int64)v19, (__int64)v100);
          }
          else
          {
            v96 = 1;
            if ( *(_DWORD *)(v37 + 24) )
            {
              if ( !CInputDest::IsEqualByWindowHandle(v37 + 24, *(_QWORD *)(v37 + 192), 0) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
              CInputDest::operator=((__int64)v19, v37 + 24);
            }
            if ( !*v19 )
            {
              CThreadLockInputDest::CThreadLockInputDest(
                (CThreadLockInputDest *)v114,
                (struct CInputDest *)(v37 + 352),
                v50);
              memset(v116, 0, sizeof(v116));
              if ( IsCurrentProcessDwm(v55, v54, v56, v57) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v60);
              v61 = (_QWORD *)CTouchProcessor::TouchHitTest(v117, v37 + 160, 0LL, 0LL, 0, 0LL, v116);
              CInputDest::operator=((__int64)v19, v61);
              CInputDest::SetEmpty((CInputDest *)v117);
              CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v114);
            }
          }
          if ( CInputDest::HasDelegationThread((CInputDest *)v19) )
          {
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              (const struct CPointerInputFrame *)v17,
              v95,
              (const struct CInputDest *)v19,
              v96,
              &v106,
              0,
              0,
              1,
              1);
            v101 = 0;
            if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v37) )
            {
              AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v97, v34, (__int64)v35);
              WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v19);
              CBaseProcessor::PostQEventWork(*(_QWORD *)(v37 + 16), (__int64)WindowHandle, 2);
              AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v97);
            }
            goto LABEL_102;
          }
        }
        v63 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                     v41,
                                                     (const struct CPointerInputFrame *)v17,
                                                     (const struct CPointerInfoNode *)v37)
                                 + 35);
        if ( ((unsigned __int8)v63 & 1) != 0 && (*((_DWORD *)v99 + 314) & 0x2000) == 0 )
          CTouchProcessor::SetQFrameNonCoalescable(
            v63,
            (const struct CPointerInputFrame *)v17,
            (const struct CPointerInfoNode *)v37);
        v96 = 1;
        if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37) )
        {
          CTouchProcessor::DetermineTouchpadPointerTargetWindow(
            this,
            v99,
            (const struct CPointerInputFrame *)v17,
            (struct CPointerInfoNode *)v37,
            QueueForCurrentNode,
            v95,
            v30,
            &v96,
            &v106,
            (struct CInputDest *)v19);
          if ( !*v19 )
            goto LABEL_102;
        }
        else
        {
          CTouchProcessor::DeterminePointerTargetWindow(
            this,
            v99,
            (struct CPointerInfoNode *)v37,
            QueueForCurrentNode,
            v30,
            &v96,
            &v106,
            (struct CInputDest *)v19);
        }
        QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                this,
                                v99,
                                v30,
                                v98,
                                IsMessageDelegated,
                                (const struct CPointerInfoNode *)v25);
        if ( !QueueForCurrentNode )
          goto LABEL_179;
        if ( CTouchProcessor::RevalidateFrameProcessing(v64, v99, v30, (const struct CPointerInfoNode *)v37, 0) )
        {
          if ( *v19 )
          {
            if ( (*(_DWORD *)(v37 + 180) & 0x10000) != 0
              && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37)
              && (*(_DWORD *)(v37 + 4) & 0x80u) == 0 )
            {
              CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v19, (void **)v37);
              QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                      this,
                                      v99,
                                      v30,
                                      v98,
                                      IsMessageDelegated,
                                      (const struct CPointerInfoNode *)v25);
              if ( !QueueForCurrentNode )
                goto LABEL_179;
              if ( !CTouchProcessor::RevalidateFrameProcessing(v65, v99, v30, (const struct CPointerInfoNode *)v37, 0) )
                goto LABEL_102;
              v66 = *(_QWORD *)(v37 + 16);
              v100 = 0LL;
              if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v66, v30, &v100, &v96) )
                CInputDest::operator=((__int64)v19, (__int64)v100);
            }
            if ( *v19 && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v37) )
            {
              v68 = CTouchProcessor::LookupNode(v67, (const struct CPointerInputFrame *)v17, v95);
              *((_DWORD *)v68 + 36) = v96;
              CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v116, (struct CInputDest *)v19, v69);
              CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
                (CInpUnlockGuardExclusive *)v114,
                this + 4,
                *(void **)(v37 + 16));
              v70 = *(_QWORD *)(v37 + 16);
              v71 = *((_OWORD *)v19 + 1);
              v72 = *(unsigned __int16 *)(v37 + 144);
              v113[0] = *(_OWORD *)v19;
              v73 = *((_OWORD *)v19 + 2);
              v113[1] = v71;
              v74 = *((_OWORD *)v19 + 3);
              v113[2] = v73;
              v75 = *((_OWORD *)v19 + 4);
              v113[3] = v74;
              v76 = *((_OWORD *)v19 + 5);
              v113[4] = v75;
              v77 = *((_OWORD *)v19 + 6);
              v113[5] = v76;
              v113[6] = v77;
              ApiSetEditionPointerActivate(v113, v72, v70, v37 + 160);
              CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v114);
              CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v116);
              QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                      this,
                                      v99,
                                      v30,
                                      v98,
                                      IsMessageDelegated,
                                      (const struct CPointerInfoNode *)v25);
              if ( !QueueForCurrentNode )
              {
LABEL_179:
                v102 = 0;
                *v107 = 1;
                break;
              }
              if ( !CTouchProcessor::RevalidateFrameProcessing(v78, v99, v30, (const struct CPointerInfoNode *)v37, 0) )
                goto LABEL_102;
              v79 = *(_QWORD *)(v37 + 16);
              v100 = 0LL;
              if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v79, v30, &v100, &v96) )
                CInputDest::operator=((__int64)v19, (__int64)v100);
            }
          }
          if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v37, v99) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v81, v80, v82);
          CTouchProcessor::SetPointerInfoNodeTarget(
            (CTouchProcessor *)this,
            (const struct CPointerInputFrame *)v17,
            v95,
            (const struct CInputDest *)v19,
            v96,
            &v106,
            0,
            0,
            1,
            0);
          if ( *v19 )
          {
            if ( (*(_DWORD *)(v37 + 180) & 0x10000) != 0 )
            {
              CTouchProcessor::SetPointerImplicitCapture(
                (CTouchProcessor *)this,
                *(_QWORD *)(v37 + 16),
                (const struct CInputDest *)v19,
                v96,
                v30);
            }
            else if ( v98 == 593 )
            {
              CTouchProcessor::SetPointerExplicitCapture(
                this,
                *(_QWORD *)(v37 + 16),
                (const struct CInputDest *)v19,
                v96,
                v30);
            }
          }
          if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37) )
          {
            v45 = v95;
            if ( (*(_DWORD *)(v37 + 180) & 0x2000) != 0 )
            {
              LODWORD(v100) = 0;
              if ( v95 )
              {
                v83 = 0LL;
                do
                {
                  if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(v83 + *(_QWORD *)(v17 + 240)))
                    && *(_DWORD *)(v37 + 8) == *((_DWORD *)v85 + 2) )
                  {
                    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                      || (LOBYTE(v84) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                    {
                      LOBYTE(v84) = v87;
                    }
                    if ( (_BYTE)v84 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v86) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      WPP_RECORDER_AND_TRACE_SF_(
                        WPP_GLOBAL_Control->AttachedDevice,
                        v84,
                        v86,
                        WPP_MAIN_CB.Queue.ListEntry.Flink,
                        4,
                        7,
                        94,
                        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
                      v87 = 0;
                    }
                    CTouchProcessor::SetPointerInfoNodeTarget(
                      (CTouchProcessor *)this,
                      (const struct CPointerInputFrame *)v17,
                      (unsigned int)v100,
                      (const struct CInputDest *)v19,
                      v96,
                      &v106,
                      v87,
                      v87,
                      1,
                      v87);
                    if ( *v19 )
                    {
                      v34 = *(_QWORD *)(v17 + 240);
                      if ( (*(_DWORD *)(v34 + v83 + 180) & 0x10000) != 0 )
                      {
                        CTouchProcessor::SetPointerImplicitCapture(
                          (CTouchProcessor *)this,
                          *(_QWORD *)(v34 + v83 + 16),
                          (const struct CInputDest *)v19,
                          v96,
                          v30);
                      }
                      else if ( v98 == 593 )
                      {
                        CTouchProcessor::SetPointerExplicitCapture(
                          this,
                          *(_QWORD *)(v37 + 16),
                          (const struct CInputDest *)v19,
                          v96,
                          v30);
                      }
                    }
                  }
                  else if ( (unsigned int)CPointerInfoNode::IsValid(v85) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, v34, v35);
                  }
                  v83 += 480LL;
                  v45 = v95;
                  LODWORD(v100) = (_DWORD)v100 + 1;
                }
                while ( (unsigned int)v100 < v95 );
                v25 = v108;
              }
            }
            goto LABEL_103;
          }
        }
      }
      else
      {
        v101 = (int)v42;
      }
LABEL_102:
      v45 = v95;
LABEL_103:
      v36 = *(unsigned int *)(v17 + 48);
      v37 += 480LL;
      v95 = v45 + 1;
    }
    while ( v45 + 1 < (unsigned int)v36 );
  }
  PopW32ThreadLock((__int64)&v109);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v111);
  v90 = v102;
  if ( v102 )
  {
    if ( (*(_DWORD *)(v17 + 228) & 0x10) == 0 )
    {
      if ( v101 )
      {
        if ( !v30 )
        {
          v91 = CTouchProcessor::FindAndReferenceFrameById(this, *(unsigned int *)(v17 + 40), v89);
          if ( v91 )
          {
            *((_DWORD *)v91 + 57) |= 0x10u;
            CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v91, v89);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, v17, v89);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v8) = 0;
  if ( (_BYTE)v9 || (_BYTE)v8 )
  {
    v92 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v92) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      (_DWORD)v92,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      95,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  v8 = v90;
LABEL_197:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v115, v9, v11);
  return v8;
}
