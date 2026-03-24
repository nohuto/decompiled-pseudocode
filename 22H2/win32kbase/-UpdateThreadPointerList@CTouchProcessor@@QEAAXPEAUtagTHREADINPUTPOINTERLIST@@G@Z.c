/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C007C9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC20 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C0196904 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01CB69C (ApiSetEditionFindThreadPointerData.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C01CE3CC (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  struct tagTHREADINPUTPOINTERLIST *v4; // rbx
  unsigned __int64 v6; // rdx
  int v7; // ebp
  struct tagTHREADINPUTPOINTERLIST *v8; // rdi
  PDEVICE_OBJECT v9; // rcx
  int v10; // r9d
  __int64 v11; // r15
  __int64 ThreadPointerData; // rdi
  struct tagTHREADINPUTPOINTERLIST *v13; // rax
  int v14; // r12d
  struct tagTHREADINPUTPOINTERLIST *v15; // rsi
  int v16; // ecx
  __int64 v18; // r14
  _BYTE v19[48]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      111,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v19,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v7 = 0;
  if ( a3 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 112;
        goto LABEL_37;
      }
    }
  }
  else
  {
    v8 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v9 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v10 = 113;
LABEL_37:
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_(v9->DeviceExtension, v6, 7, v10, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      goto LABEL_8;
    }
    v11 = 0LL;
    if ( a3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData(v4, a3, 2LL);
      if ( !ThreadPointerData )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4386LL);
      v11 = *(_QWORD *)(ThreadPointerData + 24);
      v8 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    }
    while ( v8 != v4 )
    {
      v13 = v8;
      v14 = v7++;
      v15 = v8;
      v8 = *(struct tagTHREADINPUTPOINTERLIST **)v8;
      v6 = *((_QWORD *)v13 + 3);
      v16 = *((_DWORD *)v13 + 12);
      if ( v11 == v6 )
      {
        *((_DWORD *)v13 + 12) = v16 | 2;
      }
      else if ( (v16 & 2) != 0 && (!v6 || !v11 || *(_DWORD *)(v6 + 28) != *(_DWORD *)(v11 + 28)) )
      {
        if ( (unsigned int)CTouchProcessor::IsLastMsgData(this, v6) )
          goto LABEL_30;
        v18 = *((_QWORD *)v15 + 3);
        if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11973LL);
        if ( (*(_DWORD *)(v18 + 36) & 0x20) != 0 )
        {
LABEL_30:
          ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v15);
          v7 = v14;
        }
      }
    }
    if ( v7 != *((_DWORD *)v4 + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4461LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 114;
        goto LABEL_37;
      }
    }
  }
LABEL_8:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v19);
}
