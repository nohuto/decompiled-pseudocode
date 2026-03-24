/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B7CC
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0199864 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0199ACC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A6E40 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C0030310 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C0121930 (EtwTraceBeginPointerFrameCommit.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0188298 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C018AB6C (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C018AD04 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C018B774 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018F530 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018F6E8 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     IsTouchpadDevice @ 0x1C01AEB20 (IsTouchpadDevice.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D0360 (ApiSetResetLastSeenFrameId.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // rsi
  CTouchProcessor *v6; // rbp
  _QWORD *v7; // r13
  int v8; // edx
  int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  char *v12; // rcx
  KPROCESSOR_MODE v13; // r8
  int v14; // eax
  int v15; // edx
  unsigned __int64 v16; // r15
  int v17; // r8d
  __int64 v18; // r12
  int v19; // edx
  int v20; // edx
  char *v21; // rdi
  struct CPointerQFrame *v22; // rax
  int v23; // edx
  unsigned __int64 v24; // rcx
  int v25; // edx
  struct A0xad387374::CFrameIdGenerator *v26; // rbx
  int v27; // r14d
  _DWORD *v28; // r14
  unsigned int v29; // ebp
  _DWORD *v30; // r13
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  CTouchProcessor *v34; // rcx
  _QWORD *v35; // r14
  void *v36; // rax
  int v37; // edx
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rbp
  CTouchProcessor *v41; // rcx
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  __int64 *v44[2]; // [rsp+40h] [rbp-B8h] BYREF
  CInpLockGuard *v45[7]; // [rsp+50h] [rbp-A8h] BYREF
  CInpLockGuard *v46[14]; // [rsp+88h] [rbp-70h] BYREF

  v5 = a2;
  v6 = this;
  v7 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      153,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v46,
    (CTouchProcessor *)((char *)v6 + 40),
    0LL);
  if ( *((struct _KTHREAD **)v6 + 6) != KeGetCurrentThread() )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5653);
  }
  if ( a4 )
  {
    if ( *((_DWORD *)v6 + 39) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v8, 7, 154, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_78;
      v11 = 155;
      goto LABEL_77;
    }
  }
  else if ( *((_DWORD *)v6 + 38) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    LOBYTE(v8) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v8, 7, 156, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_78;
    v11 = 157;
LABEL_77:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v10->DeviceExtension, v9, 7, v11, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    goto LABEL_78;
  }
  v12 = (char *)*((_QWORD *)v5 + 4);
  v13 = *((_DWORD *)v5 + 20) == 0;
  Object = 0LL;
  v14 = RawInputManagerDeviceObjectResolveHandle(v12, 3u, v13, &Object);
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d((_DWORD)gBaseLog, v15, 7, 158, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids, v14);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_78;
    v11 = 159;
    goto LABEL_77;
  }
  v16 = 0LL;
  if ( Object != (PVOID)-88LL )
    v16 = *((_QWORD *)Object + 11);
  ObfDereferenceObject(Object);
  v18 = HMValidateHandleNoSecure(v16, 19);
  if ( !v18 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5706);
  }
  v19 = *((_DWORD *)v5 + 6);
  if ( !v19 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5709);
    v19 = *((_DWORD *)v5 + 6);
  }
  EtwTraceBeginPointerFrameCommit(0, v19, v17);
  v21 = (char *)Win32AllocPoolZInit(0xA0uLL, 1718645589LL);
  if ( !v21 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v20, 7, 160, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_78;
    v11 = 161;
    goto LABEL_77;
  }
  v22 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)v6, *((_DWORD *)v5 + 6));
  *((_QWORD *)v21 + 18) = v22;
  if ( !v22 )
  {
    Win32FreePool((__int64)v21);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    LOBYTE(v23) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v23, 7, 162, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_78;
    v11 = 163;
    goto LABEL_77;
  }
  v24 = 480LL * *((unsigned int *)v5 + 6);
  if ( v24 <= 0xFFFFFFFF )
    *((_QWORD *)v21 + 17) = Win32AllocPoolZInit((unsigned int)v24, 1701868373LL);
  if ( !*((_QWORD *)v21 + 17) )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v24,
      *((struct CPointerQFrame **)v21 + 18),
      *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v21);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v25, 7, 164, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_78;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_78;
    v11 = 165;
    goto LABEL_77;
  }
  v26 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  *((_DWORD *)v21 + 30) = 1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v45,
    (struct A0xad387374::CFrameIdGenerator *)((char *)v26 + 8),
    0LL);
  v27 = (*(_DWORD *)v26)++;
  if ( v27 == -1 )
  {
    *(_DWORD *)v26 = 1;
    ApiSetResetLastSeenFrameId();
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v45);
  *((_DWORD *)v21 + 10) = v27;
  *((_DWORD *)v21 + 12) = *((_DWORD *)v5 + 6);
  *((_QWORD *)v21 + 8) = v16;
  *(_OWORD *)(v21 + 72) = *(_OWORD *)((char *)v5 + 40);
  *(_OWORD *)(v21 + 88) = *(_OWORD *)((char *)v5 + 56);
  *((_QWORD *)v21 + 13) = *((_QWORD *)v5 + 9);
  *((_QWORD *)v21 + 14) = *(_QWORD *)(*((_QWORD *)v5 + 15) + 96LL);
  InputTraceLogging::Pointer::CommitFrame((const struct RIMDEV *)v18, (const struct CPointerInputFrame *)v21);
  v28 = (_DWORD *)*((_QWORD *)v5 + 15);
  LODWORD(Object) = 0;
  if ( *((_DWORD *)v5 + 6) )
  {
    v29 = (unsigned int)Object;
    v30 = v28 + 2;
    do
    {
      v31 = 480LL * v29;
      *(_DWORD *)(*((_QWORD *)v21 + 17) + v31 + 156) = *v28;
      v32 = v31 + *((_QWORD *)v21 + 17) + 160LL;
      *(_OWORD *)v32 = *(_OWORD *)v30;
      *(_OWORD *)(v32 + 16) = *((_OWORD *)v30 + 1);
      *(_OWORD *)(v32 + 32) = *((_OWORD *)v30 + 2);
      *(_OWORD *)(v32 + 48) = *((_OWORD *)v30 + 3);
      *(_OWORD *)(v32 + 64) = *((_OWORD *)v30 + 4);
      *(_OWORD *)(v32 + 80) = *((_OWORD *)v30 + 5);
      *(_OWORD *)(v32 + 96) = *((_OWORD *)v30 + 6);
      *(_OWORD *)(v32 + 112) = *((_OWORD *)v30 + 7);
      *(_OWORD *)(v32 + 128) = *((_OWORD *)v30 + 8);
      *(_OWORD *)(v32 + 144) = *((_OWORD *)v30 + 9);
      *(_OWORD *)(v32 + 160) = *((_OWORD *)v30 + 10);
      *(_QWORD *)(v32 + 176) = *((_QWORD *)v30 + 22);
      *(_QWORD *)(*((_QWORD *)v21 + 17) + v31 + 184) = v16;
      CInputDest::SetEmpty((CInputDest *)(v31 + *((_QWORD *)v21 + 17) + 352LL));
      InputTraceLogging::Pointer::CommitFramePointer(
        (const struct RIMDEV *)v18,
        (const struct CPointerInputFrame *)v21,
        (const struct tagPOINTEREVENTINT *)(v31 + *((_QWORD *)v21 + 17) + 160LL));
      ++v29;
      v28 += 48;
      v30 += 48;
    }
    while ( v29 < *((_DWORD *)v5 + 6) );
    v6 = this;
    v7 = 0LL;
  }
  *((_DWORD *)v21 + 14) = *((_DWORD *)v5 + 7);
  *(_QWORD *)v21 = gpTouchProcessor;
  v33 = *((_QWORD *)v5 + 14);
  while ( 1 )
  {
    if ( !v33 )
    {
      v44[0] = (__int64 *)(v21 + 152);
      v44[1] = *(__int64 **)(v18 + 480);
      HMAssignmentLock(v44);
      if ( a3
        || (CTouchProcessor::CommitInputFrame(v6, (struct CPointerInputFrame *)v21),
            (unsigned __int8)IsTouchpadDevice(v16)) )
      {
        *((_DWORD *)v21 + 31) |= 0x80u;
      }
      else if ( a4 )
      {
        *((_DWORD *)v21 + 31) |= 0x40u;
        ++*((_DWORD *)v6 + 38);
      }
      else
      {
        ++*((_DWORD *)v6 + 39);
      }
      *((_QWORD *)v21 + 4) = v21 + 24;
      *((_QWORD *)v21 + 3) = v21 + 24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v37) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v37,
          7,
          169,
          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
      goto LABEL_79;
    }
    v35 = Win32AllocPoolZInit(0x20uLL, 1685222229LL);
    if ( !v35 )
      break;
    v36 = Win32AllocPoolZInit(*(unsigned int *)(v33 + 4), 1685222229LL);
    v35[2] = v36;
    *((_DWORD *)v35 + 1) = *(_DWORD *)v33;
    *((_DWORD *)v35 + 2) = *(_DWORD *)(v33 + 4);
    memmove(v36, *(const void **)(v33 + 8), *(unsigned int *)(v33 + 4));
    if ( v7 )
      v7[3] = v35;
    else
      *((_QWORD *)v21 + 16) = v35;
    v33 = *(_QWORD *)(v33 + 16);
    v7 = v35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 7, 167, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  v38 = *((_QWORD *)v21 + 16);
  while ( v38 )
  {
    v39 = *(_QWORD *)(v38 + 16);
    v40 = v38;
    if ( v39 )
      Win32FreePool(v39);
    v38 = *(_QWORD *)(v38 + 24);
    Win32FreePool(v40);
  }
  CTouchProcessor::FreePointerInfoList(v34, *((struct CPointerInfoNode **)v21 + 17), *((_DWORD *)v5 + 6));
  CTouchProcessor::FreePointerQFrameList(v41, *((struct CPointerQFrame **)v21 + 18), *((_DWORD *)v5 + 6));
  Win32FreePool((__int64)v21);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 168;
      goto LABEL_77;
    }
  }
LABEL_78:
  v21 = 0LL;
LABEL_79:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v46);
  return (struct CPointerInputFrame *)v21;
}
