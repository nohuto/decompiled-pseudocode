/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CB20
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00435A0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00444AC (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C0084AF4 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0084DFC (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0094BC8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009C24C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009EBB4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00A9560 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCAC0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCBA8 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD17C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD1DC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C0182DA4 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0182DF0 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C0183138 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187524 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018D368 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018D7C8 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018E304 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C019413C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0195A58 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0195CE8 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0196258 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C019681C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0196AE8 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01970A4 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C0197160 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01971D8 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0197AA8 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019AB7C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ACA8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C019B468 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C019CAA0 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C019D938 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019E288 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C019E7E4 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C019ECB4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerActivate @ 0x1C01CCB50 (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01CCDBC (ApiSetEditionPointerSpeedHitTest.c)
 *     PopW32ThreadLock @ 0x1C01FC6B0 (PopW32ThreadLock.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  struct tagTHREADINFO *v7; // r12
  int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  const struct CPointerInputFrame *v14; // rax
  __int64 v15; // r14
  unsigned int v16; // ebx
  _DWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r12d
  unsigned __int64 v23; // r15
  unsigned int v24; // ecx
  CPointerInfoNode *v25; // rcx
  struct tagTHREADINFO *v26; // r8
  int IsTargetSetForRetrieval; // eax
  CInputDest *v28; // r9
  int v29; // eax
  CTouchProcessor *v30; // rcx
  CInputDest *Queue; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  CTouchProcessor *v34; // rax
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  char HasDelegationThread; // al
  int WindowHandle; // eax
  CTouchProcessor *v44; // rcx
  CTouchProcessor *v45; // rcx
  struct CPointerInfoNode *v46; // rax
  __int128 v47; // xmm1
  __int64 v48; // r8
  __int64 v49; // rdx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  int v55; // r15d
  __int64 v56; // r13
  int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // rdx
  struct CPointerInputFrame *v62; // rax
  int v63; // edx
  CInputDest *v65; // [rsp+50h] [rbp-B0h] BYREF
  int v66; // [rsp+58h] [rbp-A8h] BYREF
  CTouchProcessor *v67; // [rsp+60h] [rbp-A0h]
  unsigned int v68; // [rsp+68h] [rbp-98h]
  struct tagTHREADINFO *v69; // [rsp+70h] [rbp-90h]
  unsigned int v70; // [rsp+78h] [rbp-88h]
  int v71; // [rsp+7Ch] [rbp-84h]
  int IsMessageDelegated; // [rsp+80h] [rbp-80h]
  struct tagQ *QueueForCurrentNode; // [rsp+88h] [rbp-78h]
  int v74; // [rsp+90h] [rbp-70h]
  int v75; // [rsp+94h] [rbp-6Ch]
  int v76[4]; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v77; // [rsp+A8h] [rbp-58h] BYREF
  int *v78; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-48h]
  _BYTE v80[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-38h]
  __int128 v82; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v83; // [rsp+E0h] [rbp-20h]
  __int128 v84; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-8h]
  _OWORD v86[7]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v87[7]; // [rsp+170h] [rbp+70h] BYREF
  PERESOURCE *v88[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  CInpLockGuard *v89[6]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v90[112]; // [rsp+250h] [rbp+150h] BYREF
  _QWORD v91[16]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v78 = a5;
  v70 = a4;
  v7 = a2;
  v69 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      90,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v66 = 0;
  v83 = 0LL;
  v85 = 0LL;
  v77 = 0LL;
  v76[0] = 0;
  v82 = 0LL;
  v84 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v89,
    (struct CInpLockGuard *)(this + 5),
    (void *)a3);
  *a5 = 0;
  if ( a4 == 595 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v11 = 91;
LABEL_20:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v10->DeviceExtension, v9, 7, v11, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
LABEL_21:
    v16 = 1;
    goto LABEL_140;
  }
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v13 = 92;
LABEL_26:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v9, 7, v13, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
LABEL_27:
    v16 = 0;
    goto LABEL_140;
  }
  v14 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a3 + 28));
  v15 = (__int64)v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v13 = 93;
    goto LABEL_26;
  }
  if ( (*((_DWORD *)v14 + 31) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v14);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v11 = 94;
    goto LABEL_20;
  }
  v17 = (_DWORD *)Win32AllocPool(120LL, 0x70697355u);
  if ( !v17 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, v15);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v13 = 95;
    goto LABEL_26;
  }
  *(_DWORD *)((char *)v17 + 113) = 0;
  *(_WORD *)((char *)v17 + 117) = 0;
  *((_BYTE *)v17 + 119) = 0;
  memset(v17, 0, 0x70uLL);
  *((_BYTE *)v17 + 112) = 0;
  PushW32ThreadLock(
    (__int64)v17,
    (__int64)&v84,
    (__int64)lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v18 = *(unsigned int *)(a3 + 32);
  if ( (unsigned int)v18 >= *(_DWORD *)(v15 + 48) )
  {
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3493);
    v18 = *(unsigned int *)(a3 + 32);
  }
  v19 = *(_QWORD *)(v15 + 136) + 480 * v18;
  v81 = v19;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v19) )
  {
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3496);
  }
  if ( *(_WORD *)(v19 + 172) != *(_WORD *)(a3 + 16) )
  {
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3497);
  }
  if ( a4 == 585 )
  {
    if ( (*(_DWORD *)v19 & 0x800000) != 0 )
      goto LABEL_46;
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3498);
  }
  if ( a4 == 586 )
  {
    if ( (*(_DWORD *)v19 & 0x8000000) != 0 )
      goto LABEL_46;
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3499);
  }
  if ( a4 == 593 )
  {
    if ( *(int *)v19 < 0 )
      goto LABEL_46;
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3500);
  }
  if ( a4 == 594 && (*(_DWORD *)(v19 + 4) & 8) == 0 )
  {
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3501);
  }
LABEL_46:
  if ( (*(_DWORD *)v19 & 0x100) == 0 && !*(_QWORD *)(v19 + 192) )
  {
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3509);
  }
  v16 = 1;
  v22 = (*((_DWORD *)v7 + 308) >> 13) & 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v19, a4, v20, v21);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          this,
                          v69,
                          v22,
                          a4,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v19);
  if ( !QueueForCurrentNode )
  {
    LODWORD(v65) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3532);
  }
  PushW32ThreadLock(v15, (__int64)&v82, (__int64)CTouchProcessor::DereferencePointerInputFrame);
  v23 = *(_QWORD *)(v15 + 136);
  v24 = *(_DWORD *)(v15 + 48);
  v79 = v23;
  v71 = 1;
  v68 = 0;
  if ( v24 )
  {
    v67 = (CTouchProcessor *)(v23 + 24);
    do
    {
      if ( v23 >= *(_QWORD *)(v15 + 136) + 480 * (unsigned __int64)v24 )
      {
        v74 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3552);
      }
      CInputDest::SetEmpty((CInputDest *)v17);
      if ( v22 && (*((_DWORD *)v69 + 308) & 0x2000) == 0 )
        break;
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
      {
        IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v25, v26);
        v28 = 0LL;
        if ( IsTargetSetForRetrieval )
        {
          v29 = CTouchProcessor::HandlePointerNodeWithTarget(this, (CPointerInfoNode *)v19, v70, v23);
          if ( v29 == 1 )
            goto LABEL_130;
          if ( (v29 & 0xFFFFFFFD) != 0 )
          {
            v75 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3587);
          }
          goto LABEL_128;
        }
        v30 = v67;
        if ( *((_DWORD *)v67 - 4) != *(_DWORD *)(v19 + 8) )
          goto LABEL_63;
        if ( v23 != v19 )
        {
          if ( !v22 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v23)
            || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v23, v76), v28 = 0LL, v65 = Queue, v76[0])
            || Queue
            && (v32 = CInputDest::GetQueue(Queue, 2), v28 = 0LL, v32)
            && !CInputDest::UsesQueue(v65, QueueForCurrentNode) )
          {
LABEL_63:
            v71 = (int)v28;
            goto LABEL_128;
          }
          v30 = v67;
        }
        if ( (*((_DWORD *)v69 + 308) & 0x2000) != 0 )
        {
          v33 = *((_QWORD *)v30 - 1);
          v65 = v28;
          if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v33, v22, &v65, &v66) )
          {
            CInputDest::operator=((__int64)v17, (__int64)v65);
          }
          else
          {
            v34 = v67;
            v66 = 1;
            if ( *(_DWORD *)v67 )
            {
              if ( !CInputDest::IsEqualByWindowHandle((__int64)v67, *((_QWORD *)v67 + 21), 0) )
              {
                v76[1] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3642);
              }
              CInputDest::operator=((__int64)v17, (__int64)v67);
              v34 = v67;
            }
            if ( !*v17 )
            {
              CThreadLockInputDest::CThreadLockInputDest(
                (CThreadLockInputDest *)v88,
                (CTouchProcessor *)((char *)v34 + 328));
              v35 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)v90, (int)v67 + 136, 0, 0, 0LL, 0LL);
              v36 = v35[1];
              v86[0] = *v35;
              v37 = v35[2];
              v86[1] = v36;
              v38 = v35[3];
              v86[2] = v37;
              v39 = v35[4];
              v86[3] = v38;
              v40 = v35[5];
              v86[4] = v39;
              v41 = v35[6];
              v86[5] = v40;
              v86[6] = v41;
              CInputDest::CInputDest((CInputDest *)v91, (const struct tagINPUTDEST *)v86);
              CInputDest::operator=((__int64)v17, v91);
              CInputDest::SetEmpty((CInputDest *)v91);
              CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v88);
            }
          }
          HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)v17);
          v30 = 0LL;
          if ( HasDelegationThread )
          {
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              (const struct CPointerInputFrame *)v15,
              v68,
              (const struct CInputDest *)v17,
              v66,
              &v77,
              0,
              0,
              1,
              1);
            v71 = 0;
            if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v23) )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v80);
              WindowHandle = (unsigned int)CInputDest::GetWindowHandle((CInputDest *)v17);
              CBaseProcessor::PostQEventWork((__int64)this, WindowHandle, 2, 0, 0LL, *((_QWORD *)v67 - 1));
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v80);
            }
            goto LABEL_128;
          }
        }
        v44 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                     v30,
                                                     (const struct CPointerInputFrame *)v15,
                                                     (const struct CPointerInfoNode *)v23)
                                 + 35);
        if ( ((unsigned __int8)v44 & 1) != 0 && (*((_DWORD *)v69 + 308) & 0x2000) == 0 )
          CTouchProcessor::SetQFrameNonCoalescable(
            v44,
            (const struct CPointerInputFrame *)v15,
            (const struct CPointerInfoNode *)v23);
        v66 = 1;
        if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v23) )
        {
          CTouchProcessor::DetermineTouchpadPointerTargetWindow(
            (CTouchProcessor *)this,
            v69,
            (const struct CPointerInputFrame *)v15,
            (struct CPointerInfoNode *)v23,
            QueueForCurrentNode,
            v68,
            v22,
            &v66,
            &v77,
            (struct CInputDest *)v17);
          if ( !*v17 )
            goto LABEL_128;
        }
        else
        {
          CTouchProcessor::DeterminePointerTargetWindow(
            (CTouchProcessor *)this,
            v69,
            (struct CPointerInfoNode *)v23,
            QueueForCurrentNode,
            v22,
            &v66,
            &v77,
            (struct CInputDest *)v17);
        }
        QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                this,
                                v69,
                                v22,
                                v70,
                                IsMessageDelegated,
                                (const struct CPointerInfoNode *)v19);
        if ( !QueueForCurrentNode )
          goto LABEL_130;
        if ( CTouchProcessor::RevalidateFrameProcessing(0LL, v69, v22, (const struct CPointerInfoNode *)v23, 0) )
        {
          if ( !*v17 )
            goto LABEL_106;
          if ( (*((_DWORD *)v67 + 39) & 0x10000) != 0
            && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v23)
            && (*((_DWORD *)v67 - 5) & 0x80u) == 0 )
          {
            CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v17, (void **)v23);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                    this,
                                    v69,
                                    v22,
                                    v70,
                                    IsMessageDelegated,
                                    (const struct CPointerInfoNode *)v19);
            if ( !QueueForCurrentNode )
              goto LABEL_130;
            if ( !CTouchProcessor::RevalidateFrameProcessing(0LL, v69, v22, (const struct CPointerInfoNode *)v23, 0) )
              goto LABEL_128;
            v65 = 0LL;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v67 - 1), v22, &v65, &v66) )
              CInputDest::operator=((__int64)v17, (__int64)v65);
          }
          if ( !*v17 || !(unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v23) )
            goto LABEL_106;
          v46 = CTouchProcessor::LookupNode(v45, (const struct CPointerInputFrame *)v15, v68);
          *((_DWORD *)v46 + 36) = v66;
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v90, (struct CInputDest *)v17);
          CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
            (CInpUnlockGuardExclusive *)v88,
            (struct CInpLockGuard *)(this + 5),
            *((void **)v67 - 1));
          v47 = *((_OWORD *)v17 + 1);
          v48 = *((_QWORD *)v67 - 1);
          v49 = *((unsigned __int16 *)v67 + 60);
          v87[0] = *(_OWORD *)v17;
          v50 = *((_OWORD *)v17 + 2);
          v87[1] = v47;
          v51 = *((_OWORD *)v17 + 3);
          v87[2] = v50;
          v52 = *((_OWORD *)v17 + 4);
          v87[3] = v51;
          v53 = *((_OWORD *)v17 + 5);
          v87[4] = v52;
          v54 = *((_OWORD *)v17 + 6);
          v87[5] = v53;
          v87[6] = v54;
          ApiSetEditionPointerActivate(v87, v49, v48, (char *)v67 + 136);
          CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v88);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v90);
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                  this,
                                  v69,
                                  v22,
                                  v70,
                                  IsMessageDelegated,
                                  (const struct CPointerInfoNode *)v19);
          if ( !QueueForCurrentNode )
          {
LABEL_130:
            *v78 = 1;
            v16 = 0;
            break;
          }
          if ( CTouchProcessor::RevalidateFrameProcessing(0LL, v69, v22, (const struct CPointerInfoNode *)v23, 0) )
          {
            v65 = 0LL;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v67 - 1), v22, &v65, &v66) )
              CInputDest::operator=((__int64)v17, (__int64)v65);
LABEL_106:
            if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v23, v69) )
            {
              v76[2] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3833);
            }
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              (const struct CPointerInputFrame *)v15,
              v68,
              (const struct CInputDest *)v17,
              v66,
              &v77,
              0,
              0,
              1,
              0);
            if ( *v17 )
            {
              if ( (*((_DWORD *)v67 + 39) & 0x10000) != 0 )
              {
                CTouchProcessor::SetPointerImplicitCapture(
                  (CTouchProcessor *)this,
                  *((_QWORD *)v67 - 1),
                  (const struct CInputDest *)v17,
                  v66,
                  v22);
              }
              else if ( v70 == 593 )
              {
                CTouchProcessor::SetPointerExplicitCapture(
                  this,
                  *((_QWORD *)v67 - 1),
                  (const struct CInputDest *)v17,
                  v66,
                  v22);
              }
            }
            if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v23) )
            {
              if ( (*((_DWORD *)v67 + 39) & 0x2000) != 0 )
              {
                LODWORD(v65) = 0;
                if ( v68 )
                {
                  v55 = v66;
                  v56 = 0LL;
                  do
                  {
                    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(v56 + *(_QWORD *)(v15 + 136)))
                      && *(_DWORD *)(v59 - 16) == *(_DWORD *)(v58 + 8) )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v57) = 4;
                        WPP_RECORDER_SF_(
                          (_DWORD)gBaseLog,
                          v57,
                          7,
                          96,
                          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
                        v60 = 0;
                      }
                      CTouchProcessor::SetPointerInfoNodeTarget(
                        (CTouchProcessor *)this,
                        (const struct CPointerInputFrame *)v15,
                        (unsigned int)v65,
                        (const struct CInputDest *)v17,
                        v55,
                        &v77,
                        v60,
                        v60,
                        1,
                        v60);
                      if ( *v17 )
                      {
                        v61 = *(_QWORD *)(v15 + 136);
                        if ( (*(_DWORD *)(v61 + v56 + 180) & 0x10000) != 0 )
                        {
                          CTouchProcessor::SetPointerImplicitCapture(
                            (CTouchProcessor *)this,
                            *(_QWORD *)(v61 + v56 + 16),
                            (const struct CInputDest *)v17,
                            v55,
                            v22);
                        }
                        else if ( v70 == 593 )
                        {
                          CTouchProcessor::SetPointerExplicitCapture(
                            this,
                            *((_QWORD *)v67 - 1),
                            (const struct CInputDest *)v17,
                            v55,
                            v22);
                        }
                      }
                    }
                    v56 += 480LL;
                    LODWORD(v65) = (_DWORD)v65 + 1;
                  }
                  while ( (unsigned int)v65 < v68 );
                  v23 = v79;
                  v19 = v81;
                }
              }
            }
          }
        }
      }
LABEL_128:
      v67 = (CTouchProcessor *)((char *)v67 + 480);
      v24 = *(_DWORD *)(v15 + 48);
      v23 += 480LL;
      ++v68;
      v79 = v23;
    }
    while ( v68 < v24 );
  }
  PopW32ThreadLock(&v82);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v84);
  if ( v16 )
  {
    if ( (*(_DWORD *)(v15 + 124) & 0x10) == 0 )
    {
      if ( v71 )
      {
        if ( !v22 )
        {
          v62 = CTouchProcessor::FindAndReferenceFrameById(this, *(_DWORD *)(v15 + 40));
          if ( v62 )
          {
            *((_DWORD *)v62 + 31) |= 0x10u;
            CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v62);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v63) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v63,
      7,
      97,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
LABEL_140:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v89);
  return v16;
}
