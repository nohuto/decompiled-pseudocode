/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0196C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCCC0 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCEEC (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187434 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(CTouchProcessor *this, __int64 a2, int *a3)
{
  unsigned int v6; // ebx
  _QWORD *FrameById; // rbp
  __int64 v8; // rax
  CPointerInfoNode *v9; // rdi
  CInpLockGuard *v11[5]; // [rsp+20h] [rbp-28h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v11, (CTouchProcessor *)((char *)this + 40), 1);
  v6 = 0;
  *a3 = 0;
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
    if ( FrameById )
    {
      v8 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v8 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13115);
        v8 = *(unsigned int *)(a2 + 32);
      }
      v9 = (CPointerInfoNode *)(FrameById[17] + 480 * v8);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v9) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13117);
      if ( *((_DWORD *)v9 + 43) != *(unsigned __int16 *)(a2 + 16) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13120);
      if ( (*((_DWORD *)v9 + 1) & 0x80u) != 0 )
        *a3 = 1;
      v6 = -__CFSHR__(*(_DWORD *)v9, 11);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v11);
  return v6;
}
