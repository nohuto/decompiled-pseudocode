/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9BD0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00C9C40 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00CBFF8 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C00F1E86 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C00F1ECC (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00F295E (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00F2FF2 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00F30E4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01E3524 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01E35FC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01E388C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01F03F8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01F0870 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F14E0 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01F8C28 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01FAD6C (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01FB1D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01FB784 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01FBA30 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01FBF9C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01FC070 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01FC0C4 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01FCB8C (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C02018D0 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0203824 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0204A10 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0205484 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C02059F4 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C0206804 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C0240FB0 (ApiSetEditionPointerActivate.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned int a4,
        int *a5)
{
  void *v6; // rdi
  int v8; // ebx
  int v9; // edx
  CTouchProcessor *v10; // rcx
  int v11; // r8d
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // ax
  struct CPointerMsgData *NonConstMsgData; // rax
  int v15; // edx
  struct CPointerMsgData *v16; // r12
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // r14
  NSInstrumentation::CLeakTrackingAllocator *v21; // rsi
  int v22; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned int v25; // r10d
  __int64 v26; // r11
  void *v27; // r8
  unsigned int v28; // edi
  CPointerInfoNode *v30; // r13
  int v31; // r8d
  CTouchProcessor *v32; // rsi
  BOOL v33; // r12d
  struct tagQ *QueueForCurrentNode; // rax
  CInputDest *v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  CPointerInfoNode *v38; // rcx
  struct tagTHREADINFO *v39; // r8
  int IsTargetSetForRetrieval; // eax
  int v41; // eax
  __int64 v42; // rax
  int IsAnyMessageNonDelegated; // eax
  CInputDest *Queue; // rax
  __int64 v45; // rax
  CTouchProcessor *v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 CurrentProcess; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  char HasDelegationThread; // al
  int ShouldForegroundActivate; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  HWND WindowHandle; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  struct tagQ *v67; // rax
  CTouchProcessor *v68; // rcx
  int v69; // eax
  struct tagQ *v70; // rax
  CTouchProcessor *v71; // rcx
  int v72; // eax
  unsigned __int64 v73; // rdx
  CTouchProcessor *v74; // rcx
  struct CPointerInfoNode *v75; // rax
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r9
  __int64 v79; // r8
  __int128 v80; // xmm1
  __int64 v81; // rdx
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  struct tagQ *v93; // rax
  CTouchProcessor *v94; // rcx
  int v95; // eax
  unsigned __int64 v96; // rdx
  int IsTouchpad; // eax
  __int64 v98; // r13
  int v99; // edx
  __int64 v100; // rcx
  int v101; // r8d
  __int64 v102; // rdx
  int v103; // edx
  void *v104; // r8
  int v105; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v106; // [rsp+58h] [rbp-A8h]
  unsigned int v107; // [rsp+5Ch] [rbp-A4h]
  CInputDest *v108; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v109[8]; // [rsp+68h] [rbp-98h] BYREF
  CTouchProcessor *v110; // [rsp+70h] [rbp-90h]
  int v111; // [rsp+78h] [rbp-88h]
  unsigned int v112; // [rsp+80h] [rbp-80h]
  struct tagQ *v113; // [rsp+88h] [rbp-78h] BYREF
  int IsMessageDelegated; // [rsp+90h] [rbp-70h]
  _DWORD v115[4]; // [rsp+98h] [rbp-68h] BYREF
  int v116[6]; // [rsp+A8h] [rbp-58h] BYREF
  struct tagPOINT v117; // [rsp+C0h] [rbp-40h] BYREF
  int *v118; // [rsp+C8h] [rbp-38h]
  __int64 v119; // [rsp+D0h] [rbp-30h] BYREF
  CPointerInfoNode *v120[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v121; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v122; // [rsp+100h] [rbp+0h]
  __int128 v123; // [rsp+108h] [rbp+8h] BYREF
  __int64 v124; // [rsp+118h] [rbp+18h]
  _BYTE v125[40]; // [rsp+120h] [rbp+20h] BYREF
  CInpLockGuard *v126; // [rsp+148h] [rbp+48h]
  _OWORD v127[7]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v128[48]; // [rsp+1D0h] [rbp+D0h] BYREF
  PVOID BackTrace[20]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v130[112]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v131[128]; // [rsp+310h] [rbp+210h] BYREF

  v118 = a5;
  v6 = a3;
  v106 = a4;
  v110 = a2;
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
      95,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v128, (struct CInpLockGuard *)(this + 4), v6);
  v105 = 0;
  v122 = 0LL;
  v124 = 0LL;
  v117 = 0LL;
  v116[0] = 0;
  *a5 = 0;
  v121 = 0LL;
  v123 = 0LL;
  if ( a4 == 595 )
  {
    v12 = WPP_GLOBAL_Control;
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
    if ( !(_BYTE)v9 && !(_BYTE)v11 )
      goto LABEL_83;
    v13 = 96;
    goto LABEL_55;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (__int64)v6);
  v16 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v15 && !(_BYTE)v8 )
      goto LABEL_82;
    v18 = 97;
LABEL_81:
    v27 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v27) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v17->AttachedDevice,
      v15,
      (_DWORD)v27,
      v17->DeviceExtension,
      5,
      7,
      v18,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_82:
    v8 = 0;
    goto LABEL_83;
  }
  v19 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
  v20 = v19;
  if ( !v19 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v15 && !(_BYTE)v8 )
      goto LABEL_82;
    v18 = 98;
    goto LABEL_81;
  }
  if ( (*(_DWORD *)(v19 + 228) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame(this, v19);
    v12 = WPP_GLOBAL_Control;
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
    if ( !(_BYTE)v9 && !(_BYTE)v11 )
      goto LABEL_83;
    v13 = 99;
LABEL_55:
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v9,
      v11,
      v12->DeviceExtension,
      5,
      7,
      v13,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_83:
    v28 = v8;
    goto LABEL_84;
  }
  v21 = gpLeakTrackingAllocator;
  v108 = (CInputDest *)120;
  v115[0] = 1885958997;
  v119 = 260LL;
  v22 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v22 != 1 )
    {
      if ( v22 != 2 )
        goto LABEL_71;
      v113 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              1885958997,
              (unsigned __int64 *)&v113) )
      {
        v120[0] = (CPointerInfoNode *)&v119;
        v120[1] = (CPointerInfoNode *)v115;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v21,
                                                                                           (__int64)v120,
                                                                                           &v108);
        goto LABEL_87;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v26, 136LL, v25);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_71;
      _InterlockedAdd64((volatile signed __int64 *)v21 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v21,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               (__int64)v113,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_87;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v21,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  (__int64)v113,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_88;
      }
      _InterlockedAdd64((volatile signed __int64 *)v21 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_71;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70697355u) )
      goto LABEL_71;
    Pool2 = (_QWORD *)ExAllocatePool2(v119 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v115[0]);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL),
          *Pool2 = 1885958997LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v21 + 1),
        0x70697355uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       120LL,
                                                                                       1885958997LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL);
  }
LABEL_87:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_71:
    CTouchProcessor::UnreferenceFrame(this, v20);
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v15 && !(_BYTE)v8 )
      goto LABEL_82;
    v18 = 100;
    goto LABEL_81;
  }
LABEL_88:
  memset((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, 0, 0x78uLL);
  *(_BYTE *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = 0;
  if ( qword_1C02D65C8 )
    qword_1C02D65C8(
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
      &v123,
      lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  if ( *((_DWORD *)v16 + 8) >= *(_DWORD *)(v20 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4003);
  v120[0] = (CPointerInfoNode *)(*(_QWORD *)(v20 + 240) + 480LL * *((unsigned int *)v16 + 8));
  v30 = v120[0];
  if ( !(unsigned int)CPointerInfoNode::IsValid(v120[0]) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4006);
  if ( *((_WORD *)v30 + 86) != *((_WORD *)v16 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4007);
  switch ( v106 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v30 & 0x800000) == 0 )
      {
        v31 = 4008;
LABEL_108:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v31);
      }
      break;
    case 0x24Au:
      if ( (*(_DWORD *)v30 & 0x8000000) == 0 )
      {
        v31 = 4009;
        goto LABEL_108;
      }
      break;
    case 0x251u:
      if ( *(int *)v30 >= 0 )
      {
        v31 = 4010;
        goto LABEL_108;
      }
      break;
    default:
      if ( v106 == 594 && (*((_DWORD *)v30 + 1) & 8) == 0 )
      {
        v31 = 4011;
        goto LABEL_108;
      }
      break;
  }
  if ( (*(_DWORD *)v30 & 0x100) == 0 && !*((_QWORD *)v30 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4019);
  v32 = v110;
  v33 = (*((_DWORD *)v110 + 318) & 0x2000) != 0 || (*((_DWORD *)v110 + 319) & 0x40) != 0;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated(v30, v106);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v32, v33, v106, IsMessageDelegated, v30);
  LODWORD(v35) = 0;
  v113 = QueueForCurrentNode;
  if ( !QueueForCurrentNode )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4042);
    LODWORD(v35) = 0;
  }
  if ( qword_1C02D65C8 )
  {
    qword_1C02D65C8(v20, &v121, CTouchProcessor::DereferencePointerInputFrame);
    LODWORD(v35) = 0;
  }
  v36 = *(unsigned int *)(v20 + 48);
  v37 = *(_QWORD *)(v20 + 240);
  v111 = 1;
  v107 = 0;
  if ( !(_DWORD)v36 )
  {
LABEL_133:
    v28 = 1;
    goto LABEL_134;
  }
  while ( 1 )
  {
    if ( v37 >= *(_QWORD *)(v20 + 240) + 480 * v36 )
    {
      v115[2] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4062);
    }
    CInputDest::SetEmpty((CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    LODWORD(v35) = 0;
    if ( v33 && (*((_DWORD *)v110 + 318) & 0x2000) == 0 && (*((_DWORD *)v110 + 319) & 0x40) == 0 )
      goto LABEL_133;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v37) )
      goto LABEL_132;
    IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v38, v39);
    v35 = 0LL;
    if ( IsTargetSetForRetrieval )
      break;
    if ( *(_DWORD *)(v37 + 8) != *((_DWORD *)v30 + 2)
      || (CPointerInfoNode *)v37 != v30
      && (!v33
       && (IsAnyMessageNonDelegated = CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v37),
           LODWORD(v35) = 0,
           !IsAnyMessageNonDelegated)
       || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v37, v116), v35 = 0LL, v108 = Queue, v116[0])
       || Queue && (v45 = CInputDest::GetQueue((__int64)Queue, 2), v35 = 0LL, v45) && !CInputDest::UsesQueue(v108, v113)) )
    {
      v111 = (int)v35;
      goto LABEL_132;
    }
    v46 = v110;
    if ( (*((_DWORD *)v110 + 318) & 0x2000) != 0 || (*((_DWORD *)v110 + 319) & 0x40) != 0 )
    {
      v47 = *(_QWORD *)(v37 + 16);
      v108 = v35;
      if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v47, v33, &v108, &v105) )
      {
        CInputDest::operator=(
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          (__int64)v108);
      }
      else
      {
        v105 = 1;
        if ( *(_DWORD *)(v37 + 24) )
        {
          if ( !CInputDest::IsEqualByWindowHandle(v37 + 24, *(_QWORD *)(v37 + 192), 0) )
          {
            v116[1] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4152);
          }
          CInputDest::operator=(
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            v37 + 24);
        }
        if ( !*(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
          CThreadLockInputDest::CThreadLockInputDest(
            (CThreadLockInputDest *)v125,
            (struct CInputDest *)(v37 + 352),
            v48,
            v49);
          memset(v130, 0, sizeof(v130));
          CurrentProcess = PsGetCurrentProcess(v51, v50, v52, v53);
          if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
          {
            v116[2] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4161);
          }
          v55 = (_QWORD *)CTouchProcessor::TouchHitTest(v131, v37 + 160, 0LL, 0LL, 0, 0LL, v130);
          CInputDest::operator=(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v55);
          CInputDest::SetEmpty((CInputDest *)v131);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v125, v56, v57, v58);
        }
      }
      HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      v46 = 0LL;
      if ( HasDelegationThread )
      {
        CTouchProcessor::SetPointerInfoNodeTarget(
          (CTouchProcessor *)this,
          (const struct CPointerInputFrame *)v20,
          v107,
          (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v105,
          &v117,
          0,
          0,
          1,
          1);
        v111 = 0;
        ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v37);
        LODWORD(v35) = 0;
        if ( !ShouldForegroundActivate )
          goto LABEL_132;
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v109, v61, v62, 0LL);
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        CBaseProcessor::PostQEventWork(0LL, (__int64)WindowHandle, 2LL, 0LL, 0LL, *(_QWORD *)(v37 + 16));
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v109, v64, v65, v66);
LABEL_131:
        LODWORD(v35) = 0;
        goto LABEL_132;
      }
    }
    if ( (*((_DWORD *)CTouchProcessor::GetPointerInfoNodeQFrame(
                        v46,
                        (const struct CPointerInputFrame *)v20,
                        (const struct CPointerInfoNode *)v37)
          + 35) & 1) != 0
      && (*((_DWORD *)v110 + 318) & 0x2000) == 0
      && (*((_DWORD *)v110 + 319) & 0x40) == 0 )
    {
      CTouchProcessor::SetQFrameNonCoalescable(
        v110,
        (const struct CPointerInputFrame *)v20,
        (const struct CPointerInfoNode *)v37);
    }
    v105 = 1;
    if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37) )
    {
      CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        (CTouchProcessor *)this,
        v110,
        (const struct CPointerInputFrame *)v20,
        (struct CPointerInfoNode *)v37,
        v113,
        v107,
        v33,
        &v105,
        &v117,
        (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      LODWORD(v35) = 0;
      if ( !*(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_132;
    }
    else
    {
      CTouchProcessor::DeterminePointerTargetWindow(
        (CTouchProcessor *)this,
        v110,
        (struct CPointerInfoNode *)v37,
        v113,
        v33,
        &v105,
        &v117,
        (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    }
    v67 = CTouchProcessor::GetQueueForCurrentNode(this, v110, v33, v106, IsMessageDelegated, v30);
    LODWORD(v35) = 0;
    v113 = v67;
    if ( !v67 )
      goto LABEL_222;
    v69 = CTouchProcessor::RevalidateFrameProcessing(v68, v110, v33, (const struct CPointerInfoNode *)v37, 0);
    LODWORD(v35) = 0;
    if ( !v69 )
      goto LABEL_132;
    if ( *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
      if ( (*(_DWORD *)(v37 + 180) & 0x10000) != 0
        && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37)
        && (*(_DWORD *)(v37 + 4) & 0x80u) == 0 )
      {
        CTouchProcessor::PointerParentNotify(
          this,
          (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          (void **)v37);
        v70 = CTouchProcessor::GetQueueForCurrentNode(this, v110, v33, v106, IsMessageDelegated, v30);
        LODWORD(v35) = 0;
        v113 = v70;
        if ( !v70 )
          goto LABEL_222;
        v72 = CTouchProcessor::RevalidateFrameProcessing(v71, v110, v33, (const struct CPointerInfoNode *)v37, 0);
        LODWORD(v35) = 0;
        if ( !v72 )
          goto LABEL_132;
        v73 = *(_QWORD *)(v37 + 16);
        v108 = 0LL;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v73, v33, &v108, &v105) )
          CInputDest::operator=(
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            (__int64)v108);
      }
      if ( *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
        && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v37) )
      {
        v75 = CTouchProcessor::LookupNode(v74, (const struct CPointerInputFrame *)v20, v107);
        *((_DWORD *)v75 + 36) = v105;
        CThreadLockInputDest::CThreadLockInputDest(
          (CThreadLockInputDest *)v130,
          (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v76,
          v77);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v125,
          (struct CInpLockGuard *)(this + 4),
          *(void **)(v37 + 16),
          v78);
        v79 = *(_QWORD *)(v37 + 16);
        v80 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16);
        v81 = *(unsigned __int16 *)(v37 + 144);
        v127[0] = *(_OWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        v82 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32);
        v127[1] = v80;
        v83 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 48);
        v127[2] = v82;
        v84 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 64);
        v127[3] = v83;
        v85 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 80);
        v127[4] = v84;
        v86 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 96);
        v127[5] = v85;
        v127[6] = v86;
        ApiSetEditionPointerActivate(v127, v81, v79, v37 + 160);
        CInpLockGuard::LockExclusive(v126);
        CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v125, v87, v88, v89);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v130, v90, v91, v92);
        v93 = CTouchProcessor::GetQueueForCurrentNode(this, v110, v33, v106, IsMessageDelegated, v30);
        LODWORD(v35) = 0;
        v113 = v93;
        if ( !v93 )
          goto LABEL_222;
        v95 = CTouchProcessor::RevalidateFrameProcessing(v94, v110, v33, (const struct CPointerInfoNode *)v37, 0);
        LODWORD(v35) = 0;
        if ( !v95 )
          goto LABEL_132;
        v96 = *(_QWORD *)(v37 + 16);
        v108 = 0LL;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v96, v33, &v108, &v105) )
          CInputDest::operator=(
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            (__int64)v108);
      }
    }
    if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v37, v110) )
    {
      v116[3] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4346);
    }
    CTouchProcessor::SetPointerInfoNodeTarget(
      (CTouchProcessor *)this,
      (const struct CPointerInputFrame *)v20,
      v107,
      (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
      v105,
      &v117,
      0,
      0,
      1,
      0);
    if ( *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
      if ( (*(_DWORD *)(v37 + 180) & 0x10000) != 0 )
      {
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *(_QWORD *)(v37 + 16),
          (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v105,
          v33);
      }
      else if ( v106 == 593 )
      {
        CTouchProcessor::SetPointerExplicitCapture(
          this,
          *(_QWORD *)(v37 + 16),
          (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v105,
          v33);
      }
    }
    IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37);
    LODWORD(v35) = 0;
    if ( IsTouchpad )
    {
      if ( (*(_DWORD *)(v37 + 180) & 0x2000) != 0 )
      {
        v112 = 0;
        if ( v107 )
        {
          v98 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(v98 + *(_QWORD *)(v20 + 240))) )
            {
              if ( *(_DWORD *)(v37 + 8) != *(_DWORD *)(v100 + 8) )
              {
                v116[4] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4416);
                goto LABEL_218;
              }
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                || (LOBYTE(v99) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v99) = (_BYTE)v35;
              }
              if ( (_BYTE)v99 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v101) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v99,
                  v101,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  7,
                  101,
                  (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
                LODWORD(v35) = 0;
              }
              CTouchProcessor::SetPointerInfoNodeTarget(
                (CTouchProcessor *)this,
                (const struct CPointerInputFrame *)v20,
                v112,
                (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                v105,
                &v117,
                (int)v35,
                (int)v35,
                1,
                (int)v35);
              LODWORD(v35) = 0;
              if ( !*(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                goto LABEL_219;
              v102 = *(_QWORD *)(v20 + 240);
              if ( (*(_DWORD *)(v102 + v98 + 180) & 0x10000) != 0 )
              {
                CTouchProcessor::SetPointerImplicitCapture(
                  (CTouchProcessor *)this,
                  *(_QWORD *)(v102 + v98 + 16),
                  (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v105,
                  v33);
LABEL_218:
                LODWORD(v35) = 0;
                goto LABEL_219;
              }
              if ( v106 == 593 )
              {
                CTouchProcessor::SetPointerExplicitCapture(
                  this,
                  *(_QWORD *)(v37 + 16),
                  (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v105,
                  v33);
                goto LABEL_218;
              }
            }
LABEL_219:
            v98 += 480LL;
            if ( ++v112 >= v107 )
            {
              v30 = v120[0];
              break;
            }
          }
        }
      }
    }
LABEL_132:
    ++v107;
    v37 += 480LL;
    v36 = *(unsigned int *)(v20 + 48);
    if ( v107 >= (unsigned int)v36 )
      goto LABEL_133;
  }
  v41 = CTouchProcessor::HandlePointerNodeWithTarget(this, v30, v106, v37);
  if ( v41 != 1 )
  {
    if ( (v41 & 0xFFFFFFFD) != 0 )
    {
      v115[3] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4097);
    }
    goto LABEL_131;
  }
  LODWORD(v35) = 0;
LABEL_222:
  v28 = 0;
  *v118 = 1;
LABEL_134:
  if ( qword_1C02D65D8 )
  {
    qword_1C02D65D8(&v121);
    LODWORD(v35) = 0;
  }
  if ( qword_1C02D66D0 )
  {
    qword_1C02D66D0(&v123);
    LODWORD(v35) = 0;
  }
  if ( v28 )
  {
    if ( (*(_DWORD *)(v20 + 228) & 0x10) == 0 && v111 != (_DWORD)v35 && !v33 )
    {
      v42 = CTouchProcessor::FindAndReferenceFrameById((__int64)this, *(_DWORD *)(v20 + 40), 4u);
      if ( v42 )
      {
        *(_DWORD *)(v42 + 228) |= 0x10u;
        CTouchProcessor::UnreferenceFrameInt(this, v42);
      }
    }
  }
  CTouchProcessor::UnreferenceFrame(this, v20);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v103) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v103) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v8) = 0;
  if ( (_BYTE)v103 || (_BYTE)v8 )
  {
    v104 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v104) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v103,
      (_DWORD)v104,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      102,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
LABEL_84:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v128);
  return v28;
}
