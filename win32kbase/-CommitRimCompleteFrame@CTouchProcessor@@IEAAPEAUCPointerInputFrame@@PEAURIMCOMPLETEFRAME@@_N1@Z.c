/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00E0308 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00E0830 (-ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01FF048 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0077C80 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage @ 0x1C00DF2DC (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00EDCA0 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C00F2002 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C00F22F0 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C00F2428 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     GetNextFrameId @ 0x1C00F4130 (GetNextFrameId.c)
 *     IsTouchpadDevice @ 0x1C00F422E (IsTouchpadDevice.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C01ECA10 (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01ECBAC (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01F2D44 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        struct _KTHREAD **this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // rbp
  unsigned int v7; // r13d
  char v8; // di
  char v9; // r8
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  __int16 v12; // ax
  char *v13; // rcx
  KPROCESSOR_MODE v14; // r8
  int v15; // eax
  int v16; // r8d
  __int64 v17; // r12
  int v18; // r8d
  __int64 v19; // rsi
  struct CPointerQFrame *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rbx
  _OWORD *v31; // rcx
  int v32; // ebx
  __int64 v33; // r13
  __int64 v34; // rbx
  int v35; // edx
  __int64 v36; // r15
  void *v37; // rax
  int v38; // edx
  CTouchProcessor *v39; // rcx
  __int64 v40; // rbx
  char *v41; // rcx
  char *v42; // r14
  CTouchProcessor *v43; // rcx
  struct RIMDEV *v45; // [rsp+50h] [rbp-98h]
  __int64 *v46[2]; // [rsp+60h] [rbp-88h] BYREF
  CInpLockGuard *v47[15]; // [rsp+70h] [rbp-78h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+8h] BYREF
  char v49; // [rsp+100h] [rbp+18h]
  char v50; // [rsp+108h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  v5 = a2;
  v7 = 0;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( (_BYTE)a2 || v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      159,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v47,
    (struct CInpLockGuard *)(this + 4),
    0LL);
  if ( this[5] != KeGetCurrentThread() )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6296);
  }
  if ( a4 )
  {
    if ( *((_DWORD *)this + 39) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          7,
          160,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v8 = 0;
      if ( !(_BYTE)v10 && !v8 )
        goto LABEL_184;
      v12 = 161;
      goto LABEL_183;
    }
  }
  else if ( *((_DWORD *)this + 38) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        162,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 163;
LABEL_183:
    WPP_RECORDER_AND_TRACE_SF_(
      v11->AttachedDevice,
      v10,
      v8,
      v11->DeviceExtension,
      5,
      7,
      v12,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    goto LABEL_184;
  }
  v13 = (char *)*((_QWORD *)v5 + 4);
  v14 = *((_DWORD *)v5 + 48) == 0;
  Object = 0LL;
  v15 = RawInputManagerDeviceObjectResolveHandle(v13, 3u, v14, &Object);
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v16,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        164,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
        v15);
    }
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 165;
    goto LABEL_183;
  }
  if ( Object == (PVOID)-72LL )
    v17 = 0LL;
  else
    v17 = *((_QWORD *)Object + 9);
  ObfDereferenceObject(Object);
  v45 = (struct RIMDEV *)HMValidateHandleNoSecure(v17, 19);
  if ( !v45 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6349);
  }
  if ( !*((_DWORD *)v5 + 6) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6352);
  }
  EtwTraceBeginPointerFrameCommit(0, *((_DWORD *)v5 + 6), v18);
  v19 = Win32AllocPoolZInit(0x108uLL, 0x66707355u);
  if ( !v19 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        166,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 167;
    goto LABEL_183;
  }
  v20 = CTouchProcessor::AllocPointerQFrameList(this, *((_DWORD *)v5 + 6));
  *(_QWORD *)(v19 + 248) = v20;
  if ( !v20 )
  {
    Win32FreePool((char *)v19);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        168,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 169;
    goto LABEL_183;
  }
  v24 = 480LL * *((unsigned int *)v5 + 6);
  if ( v24 <= 0xFFFFFFFF )
    *(_QWORD *)(v19 + 240) = Win32AllocPoolZInit((unsigned int)v24, 0x65707355u);
  if ( !*(_QWORD *)(v19 + 240) )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v24,
      *(struct CPointerQFrame **)(v19 + 248),
      *((_DWORD *)v5 + 6));
    Win32FreePool((char *)v19);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        170,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 171;
    goto LABEL_183;
  }
  *(_DWORD *)(v19 + 224) = 1;
  *(_DWORD *)(v19 + 40) = GetNextFrameId(v24, v21, v22, v23);
  *(_DWORD *)(v19 + 48) = *((_DWORD *)v5 + 6);
  *(_QWORD *)(v19 + 64) = v17;
  *(_OWORD *)(v19 + 72) = *((_OWORD *)v5 + 3);
  *(_OWORD *)(v19 + 88) = *((_OWORD *)v5 + 4);
  *(_OWORD *)(v19 + 104) = *((_OWORD *)v5 + 5);
  *(_OWORD *)(v19 + 120) = *((_OWORD *)v5 + 6);
  *(_OWORD *)(v19 + 136) = *((_OWORD *)v5 + 7);
  *(_OWORD *)(v19 + 152) = *((_OWORD *)v5 + 8);
  *(_OWORD *)(v19 + 168) = *((_OWORD *)v5 + 9);
  *(_OWORD *)(v19 + 184) = *((_OWORD *)v5 + 10);
  *(_OWORD *)(v19 + 200) = *((_OWORD *)v5 + 11);
  *(_QWORD *)(v19 + 216) = *(_QWORD *)(*((_QWORD *)v5 + 29) + 96LL);
  InputTraceLogging::Pointer::CommitFrame(v45, (const struct CPointerInputFrame *)v19);
  v29 = *((_QWORD *)v5 + 29);
  if ( *((_DWORD *)v5 + 6) )
  {
    do
    {
      v30 = 480LL * v7;
      *(_DWORD *)(v30 + *(_QWORD *)(v19 + 240) + 156) = *(_DWORD *)v29;
      v31 = (_OWORD *)(v30 + *(_QWORD *)(v19 + 240) + 160LL);
      *v31 = *(_OWORD *)(v29 + 8);
      v31[1] = *(_OWORD *)(v29 + 24);
      v31[2] = *(_OWORD *)(v29 + 40);
      v31[3] = *(_OWORD *)(v29 + 56);
      v31[4] = *(_OWORD *)(v29 + 72);
      v31[5] = *(_OWORD *)(v29 + 88);
      v31[6] = *(_OWORD *)(v29 + 104);
      v31 += 8;
      *(v31 - 1) = *(_OWORD *)(v29 + 120);
      *v31 = *(_OWORD *)(v29 + 136);
      v31[1] = *(_OWORD *)(v29 + 152);
      v31[2] = *(_OWORD *)(v29 + 168);
      *((_QWORD *)v31 + 6) = *(_QWORD *)(v29 + 184);
      *(_QWORD *)(*(_QWORD *)(v19 + 240) + v30 + 184) = v17;
      CInputDest::SetEmpty((CInputDest *)(v30 + *(_QWORD *)(v19 + 240) + 352LL));
      InputTraceLogging::Pointer::CommitFramePointer(
        v45,
        (const struct CPointerInputFrame *)v19,
        (const struct tagPOINTEREVENTINT *)(v30 + *(_QWORD *)(v19 + 240) + 160LL));
      if ( (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage() )
      {
        v32 = *(_DWORD *)(v29 + 28);
        if ( (v32 & 0x10000) != 0 || IsTouchpadDevice(v17) && (v32 & 0x10070) != 0 )
          *((_BYTE *)this + 48) = 1;
      }
      ++v7;
      v29 += 192LL;
    }
    while ( v7 < *((_DWORD *)v5 + 6) );
  }
  *(_DWORD *)(v19 + 56) = *((_DWORD *)v5 + 7);
  v33 = 0LL;
  *(_QWORD *)v19 = *(_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 3424);
  v34 = *((_QWORD *)v5 + 28);
  while ( 1 )
  {
    if ( !v34 )
    {
      v46[0] = (__int64 *)(v19 + 256);
      v46[1] = *((__int64 **)v45 + 59);
      HMAssignmentLock(v46, 0);
      if ( v49
        || (CTouchProcessor::CommitInputFrame((CTouchProcessor *)this, (struct CPointerInputFrame *)v19),
            IsTouchpadDevice(v17)) )
      {
        *(_DWORD *)(v19 + 228) |= 0x80u;
      }
      else if ( v50 )
      {
        *(_DWORD *)(v19 + 228) |= 0x40u;
        ++*((_DWORD *)this + 38);
      }
      else
      {
        ++*((_DWORD *)this + 39);
      }
      *(_QWORD *)(v19 + 32) = v19 + 24;
      *(_QWORD *)(v19 + 24) = v19 + 24;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v38) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v8 = 0;
      if ( (_BYTE)v38 || v8 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v38,
          v8,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          175,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      goto LABEL_185;
    }
    v36 = Win32AllocPoolZInit(0x20uLL, 0x64727355u);
    if ( !v36 )
      break;
    v37 = (void *)Win32AllocPoolZInit(*(unsigned int *)(v34 + 4), 0x64727355u);
    *(_QWORD *)(v36 + 16) = v37;
    *(_DWORD *)(v36 + 4) = *(_DWORD *)v34;
    *(_DWORD *)(v36 + 8) = *(_DWORD *)(v34 + 4);
    memmove(v37, *(const void **)(v34 + 8), *(unsigned int *)(v34 + 4));
    if ( v33 )
      *(_QWORD *)(v33 + 24) = v36;
    else
      *(_QWORD *)(v19 + 232) = v36;
    v34 = *(_QWORD *)(v34 + 16);
    v33 = v36;
  }
  v39 = (CTouchProcessor *)WPP_GLOBAL_Control;
  LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v35,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      7,
      173,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v40 = *(_QWORD *)(v19 + 232);
  while ( v40 )
  {
    v41 = *(char **)(v40 + 16);
    v42 = (char *)v40;
    if ( v41 )
      Win32FreePool(v41);
    v40 = *(_QWORD *)(v40 + 24);
    Win32FreePool(v42);
  }
  CTouchProcessor::FreePointerInfoList(v39, *(struct CPointerInfoNode **)(v19 + 240), *((_DWORD *)v5 + 6));
  CTouchProcessor::FreePointerQFrameList(v43, *(struct CPointerQFrame **)(v19 + 248), *((_DWORD *)v5 + 6));
  Win32FreePool((char *)v19);
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)v10 || v8 )
  {
    v12 = 174;
    goto LABEL_183;
  }
LABEL_184:
  v19 = 0LL;
LABEL_185:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v47);
  return (struct CPointerInputFrame *)v19;
}
