/*
 * XREFs of DelegateReleasePointerMessage @ 0x1C01464D8
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0143E38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B722C (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     DelegateCoalescePointerMessage @ 0x1C01466D2 (DelegateCoalescePointerMessage.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a2 + 24) == 583 )
  {
    v4 = SGDGetUserSessionState(a1);
    CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(*(CTouchProcessor **)(v4 + 3424), *(_QWORD *)(a2 + 40));
  }
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
