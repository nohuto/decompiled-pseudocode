/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01466D2
 * Callers:
 *     DelegateReleasePointerMessage @ 0x1C01464D8 (DelegateReleasePointerMessage.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B68A8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B7674 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // esi
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx

  v6 = -__CFSHR__(*(_DWORD *)(a3 + 100), 6);
  v7 = -__CFSHR__(*(_DWORD *)(a3 + 100), 7);
  if ( __CFSHR__(*(_DWORD *)(a3 + 100), 7) )
  {
    if ( !__CFSHR__(*(_DWORD *)(a3 + 100), 6) )
      goto LABEL_6;
  }
  else if ( __CFSHR__(*(_DWORD *)(a3 + 100), 6) )
  {
    goto LABEL_6;
  }
  if ( !a2 )
    return 0LL;
LABEL_6:
  if ( *(_DWORD *)(a3 + 24) == 595 )
    return 0LL;
  v9 = SGDGetUserSessionState(a1);
  v10 = CTouchProcessor::DelegateCoalescePointerMessage(
          *(CTouchProcessor **)(v9 + 3424),
          *(_QWORD *)(a3 + 40),
          a2,
          v6,
          v7,
          *(_DWORD *)(a3 + 24));
  v11 = v10;
  if ( a2 && v10 )
  {
    v12 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v12 + 88) == a3 )
      *(_QWORD *)(v12 + 88) = 0LL;
    DelQEntry(*(_QWORD *)(a1 + 432) + 24LL, a3, 1);
  }
  return v11;
}
