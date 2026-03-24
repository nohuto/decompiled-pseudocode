/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C0191940
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD2DC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ABD8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        unsigned int *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  __int64 v8; // rbx
  const struct CPointerInputFrame *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // eax
  CInpLockGuard *v14[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v14,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  v8 = 0LL;
  if ( a2 )
  {
    v9 = CTouchProcessor::ReferenceFrame(this, a2[7]);
    if ( v9 )
    {
      v10 = a2[8];
      if ( (unsigned int)v10 >= *((_DWORD *)v9 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12992);
        v10 = a2[8];
      }
      v11 = *((_QWORD *)v9 + 17) + 480 * v10;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12994);
      v12 = *((unsigned __int16 *)a2 + 8);
      if ( *(_DWORD *)(v11 + 172) != v12 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12997);
        LOWORD(v12) = *((_WORD *)a2 + 8);
      }
      *a3 = v12;
      *a4 = *((_DWORD *)v9 + 12);
      v8 = *(_QWORD *)(v11 + 192);
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v9);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v14);
  return v8;
}
