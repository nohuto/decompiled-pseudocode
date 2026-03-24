/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C0198C90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCD8C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        CTouchProcessor *this,
        __int64 a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  _QWORD *FrameById; // rdi
  __int64 v11; // rax
  _DWORD *v12; // rsi
  _DWORD *v13; // rdi
  CInpLockGuard *v15[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v15,
    (CTouchProcessor *)((char *)this + 40),
    (void *)a2);
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28))) != 0LL )
  {
    v11 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v11 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12950);
      v11 = *(unsigned int *)(a2 + 32);
    }
    v12 = (_DWORD *)(FrameById[17] + 480 * v11);
    v13 = v12 + 42;
    if ( v12[43] != *(unsigned __int16 *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12955);
    *a3 = *(struct tagPOINT *)(v12 + 37);
    *a4 = v12[36];
    *a5 = -__CFSHR__(*v12, 18);
    *a6 = -__CFSHR__(*v12, 19);
  }
  else
  {
    v13 = 0LL;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v15);
  return (const struct tagPOINTER_INFO *)v13;
}
