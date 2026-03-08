/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C0006DD8
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C0006D64 (IsShellFrameHangResilient.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     EditionMouseMoveShellResilience @ 0x1C00E51A0 (EditionMouseMoveShellResilience.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0024014 (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x1C00967E0 (IsIAMThread.c)
 */

__int64 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 1432);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  v4 = *(_QWORD *)(v1 + 112);
  if ( v4 )
  {
    if ( (unsigned int)IsIAMThread(*(_QWORD *)(v4 + 16)) )
      return 1LL;
  }
  if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 424)) )
    return 1LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 112LL);
  if ( !v5 )
    return 0LL;
  LOBYTE(v2) = (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL)) != 0;
  return v2;
}
