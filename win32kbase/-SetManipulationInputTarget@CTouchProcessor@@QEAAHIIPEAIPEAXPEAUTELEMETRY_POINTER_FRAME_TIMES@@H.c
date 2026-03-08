/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C0202354
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00C9900 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0177090 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C000E224 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C007D3DC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2CB2 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x1C01EB530 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F14E0 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01F1B40 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F2C24 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1C01FB41C (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01FB918 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C01FBF14 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01FE0EC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01FE86C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0200228 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C02004C4 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0201654 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C02034BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0205B10 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C0205D38 (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0206D08 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C023E4B4 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C024675C (ApiSetSetManipulationInputTargetTransform.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5,
        struct TELEMETRY_POINTER_FRAME_TIMES *a6,
        int a7)
{
  unsigned int v7; // ebx
  struct _KTHREAD **v8; // r14
  unsigned int v9; // esi
  char v10; // r15
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // r13
  int v15; // edx
  int v16; // r8d
  int v17; // ebx
  CTouchProcessor *v18; // rcx
  struct CPointerQFrame *v19; // rax
  int v20; // r8d
  int v21; // ebx
  unsigned int v22; // ecx
  __int64 v23; // r14
  CPointerInfoNode *v24; // rcx
  int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edi
  CPointerInfoNode *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int16 *v31; // rdi
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v33; // rdx
  int *v34; // rbx
  int v35; // eax
  int v36; // ecx
  __int64 v37; // r8
  __int16 v38; // di
  unsigned __int64 v39; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  bool v41; // zf
  unsigned int v42; // ebx
  __int64 Queue; // rdi
  CInputDest *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  struct CPointerQFrame *v47; // rbx
  struct CPointerInfoNode *v48; // r9
  unsigned int MessagesCore; // edi
  unsigned int i; // ebx
  __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  int v55; // ecx
  int v56; // edx
  int v57; // r8d
  unsigned int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+48h] [rbp-B8h]
  __int16 v62; // [rsp+48h] [rbp-B8h]
  unsigned int v64; // [rsp+58h] [rbp-A8h]
  const struct CPointerInputFrame *v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+84h] [rbp-7Ch]
  int v67; // [rsp+9Ch] [rbp-64h]
  int v68; // [rsp+A0h] [rbp-60h]
  __int16 *v69; // [rsp+B0h] [rbp-50h]
  unsigned int v70; // [rsp+B8h] [rbp-48h]
  struct CInputPointerNode *v71; // [rsp+C0h] [rbp-40h]
  struct CPointerQFrame *v72; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v73; // [rsp+D8h] [rbp-28h]
  _OWORD v74[7]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v75[7]; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v76[14]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v77; // [rsp+230h] [rbp+130h]
  _BYTE v78[48]; // [rsp+240h] [rbp+140h] BYREF
  char v79[128]; // [rsp+270h] [rbp+170h] BYREF
  __int128 v80; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v81; // [rsp+300h] [rbp+200h]
  __int128 v82; // [rsp+310h] [rbp+210h]
  __int128 v83; // [rsp+320h] [rbp+220h]
  __int128 v84; // [rsp+330h] [rbp+230h]
  __int128 v85; // [rsp+340h] [rbp+240h]
  __int128 v86; // [rsp+350h] [rbp+250h]
  _DWORD v87[28]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v88[16]; // [rsp+3E0h] [rbp+2E0h] BYREF

  v7 = a2;
  v8 = this;
  v73 = a4;
  v70 = a3;
  v9 = 0;
  v10 = 1;
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
      84,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v78, (struct CInpLockGuard *)(v8 + 4), 0LL);
  v14 = CTouchProcessor::FindAndReferenceFrameById((__int64)v8, v7, 4u);
  if ( !v14 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        85,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    UserSetLastError(87);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v15 || v10 )
    {
      LOBYTE(v16) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        86,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    goto LABEL_156;
  }
  if ( a7 && a5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3287);
  *(_OWORD *)(v14 + 72) = *(_OWORD *)a6;
  *(_OWORD *)(v14 + 88) = *((_OWORD *)a6 + 1);
  *(_OWORD *)(v14 + 104) = *((_OWORD *)a6 + 2);
  *(_OWORD *)(v14 + 120) = *((_OWORD *)a6 + 3);
  *(_OWORD *)(v14 + 136) = *((_OWORD *)a6 + 4);
  *(_OWORD *)(v14 + 152) = *((_OWORD *)a6 + 5);
  *(_OWORD *)(v14 + 168) = *((_OWORD *)a6 + 6);
  *(_OWORD *)(v14 + 184) = *((_OWORD *)a6 + 7);
  *(_OWORD *)(v14 + 200) = *((_OWORD *)a6 + 8);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v12, v14) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3293);
  if ( !*(_QWORD *)(v14 + 256) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3294);
  v17 = *(_DWORD *)(*(_QWORD *)(v14 + 240) + 168LL);
  if ( v17 == 6 || !v17 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3297);
  v68 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v14 + 256) + 360LL), 4);
  v67 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v14 + 256) + 360LL), 5);
  memset(v76, 0, sizeof(v76));
  v77 = 0;
  memset(v87, 0, sizeof(v87));
  v66 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a5, v17, (struct tagINPUTDEST *)v87) )
  {
    v66 = -(v87[4] & 1);
    CInputDest::CInputDest((CInputDest *)v88, (const struct tagINPUTDEST *)v87);
    CInputDest::operator=((__int64)v76, v88);
    CInputDest::SetEmpty((CInputDest *)v88);
  }
  v65 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(v8, (const struct CPointerInputFrame *)v14);
  v19 = CTouchProcessor::SetupQFrame(
          v18,
          (struct CPointerInputFrame *)v14,
          0xFFFFFFFFFFFFFFFFuLL,
          (const struct CInputDest *)v76,
          0);
  v72 = v19;
  if ( v19 )
  {
    if ( *(_DWORD *)v19 != -1 )
      goto LABEL_46;
    v20 = 3341;
  }
  else
  {
    v20 = 3338;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v20);
LABEL_46:
  v21 = 0;
  v22 = 0;
  v60 = 0;
  v64 = 0;
  if ( !*(_DWORD *)(v14 + 48) )
    goto LABEL_130;
  do
  {
    v23 = *(_QWORD *)(v14 + 240) + 480LL * v22;
    CInputDest::CInputDest((CInputDest *)&v80, v76);
    v61 = 0;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23)
      && CPointerInfoNode::IsForManipulationThread(v24)
      && (*(_DWORD *)(v23 + 4) & 0x200) == 0
      && (v25 = 0, v70) )
    {
      v69 = (__int16 *)(v23 + 172);
      while ( v73[v25] != *(unsigned __int16 *)(v23 + 172) )
      {
        if ( ++v25 >= v70 )
          goto LABEL_54;
      }
      v31 = (__int16 *)(v23 + 172);
      NodeById = CTouchProcessor::FindNodeById(this, *(_WORD *)(v23 + 172), 0, 0);
      v71 = NodeById;
      v33 = NodeById;
      if ( NodeById )
      {
        _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
        if ( *((int *)NodeById + 9) < 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3370);
          v33 = v71;
        }
        v34 = (int *)((char *)v33 + 296);
        if ( (*(_DWORD *)v23 & 4) != 0 && *v34 == 2 )
        {
          if ( (_DWORD)v80 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3381);
          if ( a7 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3382);
          CInputDest::SetEmpty((CInputDest *)&v80);
        }
        else
        {
          if ( (*(_DWORD *)(v23 + 4) & 0x80u) != 0 || HIDWORD(v85) || (v69 = (__int16 *)(v23 + 172), a7) )
          {
            v31 = v69;
            v35 = 1;
          }
          else
          {
            v35 = 2;
          }
          *((_DWORD *)v33 + 74) = v35;
        }
        v36 = *v34;
        if ( HIDWORD(v85) )
        {
          if ( v36 != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3403);
          if ( !CInputDest::IsCompositionInput((CInputDest *)&v80) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3404);
          if ( (*(_DWORD *)v23 & 0x400) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3405);
          if ( (*(_DWORD *)v23 & 0x100) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3406);
          if ( *(_DWORD *)(v23 + 144) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3407);
          *(_DWORD *)(v23 + 4) |= 0x80u;
          v37 = *(_QWORD *)(v23 + 248);
          v74[0] = v80;
          v74[2] = v82;
          v74[1] = v81;
          v74[4] = v84;
          v74[3] = v83;
          v74[6] = v86;
          v74[5] = v85;
          v61 = ApiSetSetManipulationInputTargetTransform((unsigned int)v74, (_DWORD)a5, v37, (int)v23 + 160, v66);
        }
        else if ( v36 == 2 )
        {
          if ( (*(_DWORD *)(v23 + 4) & 0x80u) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3420);
          if ( (_DWORD)v80 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3421);
          CInputDest::operator=((__int64)&v80, v23 + 352);
          *(_DWORD *)v23 &= 0xFFFFFAFF;
          *(_DWORD *)(v23 + 144) = 0;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3364);
        CInputDest::SetEmpty((CInputDest *)&v80);
      }
      InputTraceLogging::Pointer::HandleResultFromUserMode(
        (const struct CPointerInputFrame *)v14,
        (const struct tagPOINTEREVENTINT *)(v23 + 160),
        (__int64)a5,
        a7 != 0,
        v71,
        (const struct CInputDest *)&v80);
      if ( (_DWORD)v80 )
      {
        Queue = CInputDest::GetQueue((__int64)&v80, 2);
        v44 = CInputDest::CInputDest((CInputDest *)v79, (__int64 **)&v80);
        v46 = CTouchProcessor::SetupQFramePostMT(v45, v14, &v72, Queue, v44, v65 != 0LL);
        if ( !v46 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3543);
        *(_DWORD *)(v23 + 4) |= 0x200u;
        v47 = v72;
        v60 = 1;
        if ( v72 )
        {
          if ( *(_DWORD *)(v23 + 8) != *(_DWORD *)v72 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3556);
          if ( !*((_DWORD *)v47 + 34) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3557);
          *(_DWORD *)(v23 + 8) = *(_DWORD *)v46;
          ++*(_DWORD *)(v46 + 136);
          --*((_DWORD *)v47 + 34);
        }
        *(_QWORD *)(v23 + 192) = CInputDest::GetWindowHandle((CInputDest *)&v80);
        CInputDest::operator=(v23 + 352, (__int64)&v80);
        if ( (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v23) && *(_DWORD *)(v23 + 24) )
          *(_DWORD *)(v23 + 456) = *(_DWORD *)(v23 + 128);
        if ( v61 )
          *(_DWORD *)(v23 + 180) |= 0x400000u;
        if ( HIDWORD(v85) )
        {
          v75[0] = v80;
          v75[2] = v82;
          v75[1] = v81;
          v75[4] = v84;
          v75[3] = v83;
          v75[6] = v86;
          v75[5] = v85;
          if ( ApiSetEditionGetInputDelegate(v75) )
            *(_DWORD *)v23 |= 0x100000u;
        }
        v48 = (struct CPointerInfoNode *)v23;
        v8 = this;
        CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v46, v65, v48);
        if ( *(_DWORD *)v46 == -1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3590);
      }
      else
      {
        v38 = *v31;
        v39 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v62 = v38;
        if ( v65 )
        {
          ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v65, v38, 0LL);
          if ( ValidNodeInFrame )
          {
            *(_QWORD *)(v23 + 192) = 0LL;
            CInputDest::SetEmpty((CInputDest *)(v23 + 352));
            *(_DWORD *)(v23 + 4) |= 0x200u;
            CTouchProcessor::ProcessEnterLeave(this, v65, (struct CPointerInfoNode *)v23);
            if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
              CTouchProcessor::ProcessAndUnreferencePreviousInput(
                this,
                (const struct CPointerInfoNode *)v23,
                *((_QWORD *)ValidNodeInFrame + 2),
                v39,
                v68,
                v67);
          }
          v38 = v62;
        }
        v41 = (*(_DWORD *)(v23 + 180) & 0x40000) == 0;
        v8 = this;
        if ( v41 )
        {
          v42 = v64;
        }
        else
        {
          v59 = v39;
          v42 = v64;
          CTouchProcessor::ProcessRoutedAwayList(this, v38, 1, (const struct CPointerInputFrame *)v14, v64, v59);
        }
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v14, v42);
        CTouchProcessor::CheckFreeOnDeparture(this, v38);
      }
    }
    else
    {
LABEL_54:
      v8 = this;
    }
    CInputDest::SetEmpty((CInputDest *)&v80);
    v26 = *(_DWORD *)(v14 + 48);
    v22 = v64 + 1;
    v64 = v22;
  }
  while ( v22 < v26 );
  v21 = v60;
  if ( v60 )
  {
    v27 = 0;
    if ( v26 )
    {
      do
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*(_QWORD *)(v14 + 240) + 480LL * v27)) )
        {
          if ( CPointerInfoNode::IsForManipulationThread(v28) && (*(_DWORD *)(v29 + 4) & 0x200) != 0 )
          {
            v30 = *(_QWORD *)(v14 + 248) + 160LL * *(unsigned int *)(v29 + 8);
            if ( *(_QWORD *)(v30 + 8) != -1LL && (*(_DWORD *)(v30 + 140) & 0x10) == 0 )
            {
              CTouchProcessor::TryCoalesceQFrame(
                (CTouchProcessor *)v8,
                (struct CPointerInputFrame *)v14,
                v65,
                (const struct CPointerQFrame *)v30);
              if ( (*(_DWORD *)(v30 + 140) & 0x10) == 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3618);
            }
          }
        }
        ++v27;
      }
      while ( v27 < *(_DWORD *)(v14 + 48) );
      v21 = v60;
    }
  }
  else
  {
LABEL_130:
    if ( LODWORD(v76[0]) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3594);
  }
  if ( v65 )
    CTouchProcessor::UnreferenceFrameInt(v8, v65);
  if ( v21 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(
                     (CTouchProcessor *)v8,
                     v68,
                     v67,
                     1,
                     (const struct CPointerInputFrame *)v14);
    for ( i = 0; i < *(_DWORD *)(v14 + 48); ++i )
    {
      v51 = *(_QWORD *)(v14 + 240) + 480LL * i;
      v52 = *(_DWORD *)(v51 + 4);
      if ( (v52 & 0x200) != 0 && (v52 & 0x400) == 0 )
      {
        v53 = *(_QWORD *)(v51 + 16);
        v54 = v52 | 0x400;
        *(_DWORD *)(v51 + 4) = v54;
        if ( v53 )
        {
          if ( (v54 & 0x80u) != 0 )
          {
            v55 = *(_DWORD *)(v51 + 180);
            if ( (v55 & 4) != 0 )
              CTouchProcessor::SetPointerCapture(
                v8,
                v53,
                v51 + 352,
                2 - (unsigned int)((v55 & 0x10000) != 0),
                1,
                -__CFSHR__(*(_DWORD *)v51, 21));
          }
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame(v8, v14);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v56) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v56) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v56 || v10 )
  {
    LOBYTE(v57) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v56,
      v57,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      87,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  v9 = MessagesCore;
  CInputDest::SetEmpty((CInputDest *)v76);
LABEL_156:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v78);
  return v9;
}
