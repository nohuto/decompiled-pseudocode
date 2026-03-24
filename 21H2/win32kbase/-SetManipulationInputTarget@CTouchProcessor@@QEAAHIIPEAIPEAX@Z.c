/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BC9C
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x1C0133DC0 (NtUserSetManipulationInputTarget.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0189B80 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0002358 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00435A0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0094BC8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCAC0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCE40 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CCF60 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD17C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD1DC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01829F0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018E304 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E374 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E998 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018F2A8 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C0196498 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0196890 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0198DC0 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0199310 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019A464 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019A67C (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019B180 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C019C84C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C019E908 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C019EB0C (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019F42C (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01CBA2C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C01D0E5C (ApiSetSetManipulationInputTargetTransform.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        struct _KTHREAD **this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5)
{
  int v5; // ebx
  unsigned int v7; // edi
  struct CPointerInputFrame *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // edx
  int v13; // ebx
  CSpatialProcessor *v14; // rcx
  const struct CPointerInputFrame *v15; // rsi
  CTouchProcessor *v16; // rcx
  struct CPointerQFrame *v17; // rax
  struct CPointerQFrame *v18; // rbx
  int v19; // r8d
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rsi
  CPointerInfoNode *v23; // rcx
  int v24; // ecx
  int v25; // ebx
  __int64 v26; // r8
  __m128i *v27; // rax
  __int16 v28; // r13
  unsigned __int64 v29; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // r13
  unsigned int v31; // ebx
  struct CInputPointerNode *NodeById; // rax
  __int64 v33; // rcx
  struct CPointerInfoNode *v34; // r9
  unsigned int MessagesCore; // esi
  unsigned int i; // ebx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // edx
  unsigned int v43; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+34h] [rbp-CCh]
  __int16 v46; // [rsp+34h] [rbp-CCh]
  const struct CPointerInputFrame *v47; // [rsp+40h] [rbp-C0h]
  unsigned int v48; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+4Ch] [rbp-B4h]
  int v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+64h] [rbp-9Ch]
  struct CPointerQFrame *v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  void *v55; // [rsp+80h] [rbp-80h]
  unsigned int *v56; // [rsp+88h] [rbp-78h]
  _OWORD v57[7]; // [rsp+90h] [rbp-70h] BYREF
  char v58; // [rsp+100h] [rbp+0h]
  _OWORD v59[7]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v60[7]; // [rsp+180h] [rbp+80h] BYREF
  CInpLockGuard *v61[6]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v62[28]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v63[128]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v64[16]; // [rsp+310h] [rbp+210h] BYREF
  __m128i v65[8]; // [rsp+390h] [rbp+290h] BYREF

  v5 = a2;
  v55 = a5;
  v56 = a4;
  v53 = a3;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      79,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v61, (struct CInpLockGuard *)(this + 5), 0LL);
  v8 = CTouchProcessor::FindAndReferenceFrameById(this, v5);
  v11 = (__int64)v8;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 7, 80, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    UserSetLastError(87LL, v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        7,
        81,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
    goto LABEL_94;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, (__int64)v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2949);
  if ( !*(_QWORD *)(v11 + 152) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2950);
  v13 = *(_DWORD *)(*(_QWORD *)(v11 + 136) + 168LL);
  if ( v13 == 6 || !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2953);
  v51 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v11 + 152) + 312LL), 4);
  v50 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v11 + 152) + 312LL), 5);
  memset(v57, 0, sizeof(v57));
  v58 = 0;
  memset(v62, 0, sizeof(v62));
  v49 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(v14, a5, v13, 0LL, (struct tagINPUTDEST *)v62) )
  {
    v49 = -(v62[4] & 1);
    CInputDest::CInputDest((CInputDest *)v64, (const struct tagINPUTDEST *)v62);
    CInputDest::operator=((__int64)v57, v64);
    CInputDest::SetEmpty((CInputDest *)v64);
  }
  v47 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, (const struct CPointerInputFrame *)v11);
  v15 = v47;
  v17 = CTouchProcessor::SetupQFrame(
          v16,
          (struct CPointerInputFrame *)v11,
          0xFFFFFFFFFFFFFFFFuLL,
          (const struct CInputDest *)v57,
          0);
  v52 = v17;
  v18 = v17;
  if ( v17 )
  {
    if ( *(_DWORD *)v17 != -1 )
      goto LABEL_24;
    v19 = 2997;
  }
  else
  {
    v19 = 2994;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v19);
LABEL_24:
  v20 = 0LL;
  v21 = 0LL;
  v48 = 0;
  v44 = 0;
  v54 = 0LL;
  if ( !*(_DWORD *)(v11 + 48) )
  {
    v25 = 0;
    goto LABEL_76;
  }
  do
  {
    v22 = *(_QWORD *)(v11 + 136) + 480 * v21;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v22) )
      goto LABEL_31;
    if ( !CPointerInfoNode::IsForManipulationThread(v23) )
      goto LABEL_31;
    if ( (*(_DWORD *)(v22 + 4) & 0x200) != 0 )
      goto LABEL_31;
    v24 = 0;
    if ( !v53 )
      goto LABEL_31;
    while ( v56[v24] != *(unsigned __int16 *)(v22 + 172) )
    {
      if ( ++v24 >= v53 )
        goto LABEL_31;
    }
    v45 = 0;
    if ( HIDWORD(v57[5]) )
    {
      v26 = *(_QWORD *)(v22 + 248);
      v59[0] = v57[0];
      v59[2] = v57[2];
      v59[1] = v57[1];
      v59[4] = v57[4];
      v59[3] = v57[3];
      v59[6] = v57[6];
      v59[5] = v57[5];
      v45 = ApiSetSetManipulationInputTargetTransform((unsigned int)v59, (_DWORD)v55, v26, (int)v22 + 160, v49);
    }
    if ( (*(_DWORD *)(v22 + 4) & 0x80u) == 0 )
    {
      v27 = CInputDest::CInputDest(v65, *(_QWORD *)(v22 + 192), *(_DWORD *)(v22 + 444), 1);
      CInputDest::operator=((__int64)v57, v27);
      CInputDest::SetEmpty((CInputDest *)v65);
    }
    InputTraceLogging::Pointer::HandleResultFromUserMode(
      (const struct CPointerInputFrame *)v11,
      (const struct tagPOINTEREVENTINT *)(v22 + 160),
      (__int64)v55,
      (const struct CInputDest *)v57);
    if ( !LODWORD(v57[0]) )
    {
      v28 = *(_WORD *)(v22 + 172);
      v29 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v46 = v28;
      if ( v47 )
      {
        ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v47, v28, 0LL);
        if ( ValidNodeInFrame )
        {
          *(_QWORD *)(v22 + 192) = 0LL;
          CInputDest::SetEmpty((CInputDest *)(v22 + 352));
          *(_DWORD *)(v22 + 4) |= 0x200u;
          CTouchProcessor::ProcessEnterLeave(this, v47, (struct CPointerInfoNode *)v22);
          if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v22,
              *((unsigned int **)ValidNodeInFrame + 2),
              v29,
              v51,
              v50);
        }
        v28 = v46;
      }
      if ( (*(_DWORD *)(v22 + 180) & 0x40000) != 0 )
      {
        v43 = v29;
        v31 = v48;
        CTouchProcessor::ProcessRoutedAwayList(this, v28, 1, (const struct CPointerInputFrame *)v11, v48, v43);
      }
      else
      {
        v31 = v48;
      }
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v11, v31);
      NodeById = CTouchProcessor::FindNodeById(this, v28, 0, 0);
      if ( NodeById
        && *((_DWORD *)NodeById + 13) == 3
        && *((struct CInputPointerNode **)NodeById + 30) == (struct CInputPointerNode *)((char *)NodeById + 240) )
      {
        CTouchProcessor::FreeNode(this, NodeById);
      }
      v18 = v52;
      v20 = v54;
LABEL_31:
      v15 = v47;
      goto LABEL_32;
    }
    if ( !v20 )
    {
      CInputDest::CInputDest((CInputDest *)v63, (__int64 **)v57);
      v54 = CTouchProcessor::SetupNewQFrame(v33, v11, &v52);
      v20 = v54;
      if ( !v54 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3140);
      v18 = v52;
    }
    *(_DWORD *)(v22 + 4) |= 0x200u;
    v44 = 1;
    if ( v18 )
    {
      if ( *(_DWORD *)(v22 + 8) != *(_DWORD *)v18 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3154);
      if ( !*((_DWORD *)v18 + 34) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3155);
      *(_DWORD *)(v22 + 8) = *(_DWORD *)v20;
      ++*(_DWORD *)(v20 + 136);
      --*((_DWORD *)v18 + 34);
    }
    *(_QWORD *)(v22 + 192) = CInputDest::GetWindowHandle((CInputDest *)v57);
    if ( HIDWORD(v57[5]) )
      CInputDest::operator=(v22 + 352, (__int64)v57);
    if ( (*(_DWORD *)v22 & 0x100) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3173);
    if ( v45 )
      *(_DWORD *)(v22 + 180) |= 0x400000u;
    if ( HIDWORD(v57[5]) )
    {
      v60[0] = v57[0];
      v60[2] = v57[2];
      v60[1] = v57[1];
      v60[4] = v57[4];
      v60[3] = v57[3];
      v60[6] = v57[6];
      v60[5] = v57[5];
      if ( ApiSetEditionGetInputDelegate(v60) )
        *(_DWORD *)v22 |= 0x100000u;
    }
    v34 = (struct CPointerInfoNode *)v22;
    v15 = v47;
    CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v20, v47, v34);
    if ( *(_DWORD *)v20 == -1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3191);
    *(_DWORD *)(v20 + 140) |= 0x10u;
LABEL_32:
    v21 = v48 + 1;
    v48 = v21;
  }
  while ( (unsigned int)v21 < *(_DWORD *)(v11 + 48) );
  v25 = v44;
  if ( v44 )
  {
    CTouchProcessor::TryCoalesceQFrame(
      (CTouchProcessor *)this,
      (struct CPointerInputFrame *)v11,
      v15,
      (const struct CPointerQFrame *)v20);
    goto LABEL_78;
  }
LABEL_76:
  if ( LODWORD(v57[0]) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3196);
LABEL_78:
  if ( v15 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v15);
  if ( v25 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, v51, v50, 1, (const struct CPointerInputFrame *)v11);
    for ( i = 0; i < *(_DWORD *)(v11 + 48); ++i )
    {
      v37 = *(_QWORD *)(v11 + 136) + 480LL * i;
      v38 = *(_DWORD *)(v37 + 4);
      if ( (v38 & 0x200) != 0 && (v38 & 0x400) == 0 )
      {
        v39 = *(_QWORD *)(v37 + 16);
        *(_DWORD *)(v37 + 4) = v38 | 0x400;
        if ( v39 )
        {
          v40 = *(_DWORD *)(v37 + 180);
          if ( (v40 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              this,
              v39,
              v57,
              2 - (unsigned int)((v40 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v37, 21));
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v41) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v41,
      7,
      82,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v7 = MessagesCore;
  CInputDest::SetEmpty((CInputDest *)v57);
LABEL_94:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v61);
  return v7;
}
