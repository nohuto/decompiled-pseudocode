/*
 * XREFs of DelegateChainingResetAndCoalescePointerMessage @ 0x1C01C7A18
 * Callers:
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B7674 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DelegateChainingResetAndCoalescePointerMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // ebx
  __int64 v7; // rax

  v4 = -__CFSHR__(*(_DWORD *)(a3 + 100), 6);
  v5 = -__CFSHR__(*(_DWORD *)(a3 + 100), 7);
  if ( *(_DWORD *)(a3 + 24) == 595 )
    return 0;
  v7 = SGDGetUserSessionState(a1);
  return CTouchProcessor::DelegateChainingResetAndCoalescePointerMessage(
           *(CTouchProcessor **)(v7 + 3424),
           *(_QWORD *)(a3 + 40),
           0,
           v4,
           v5,
           *(_DWORD *)(a3 + 24));
}
