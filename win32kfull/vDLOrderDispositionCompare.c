/*
 * XREFs of vDLOrderDispositionCompare @ 0x1C00C5440
 * Callers:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxBroadcastMessageEx @ 0x1C0045EF0 (xxxBroadcastMessageEx.c)
 *     ??$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDisposition@@P6AHPEBX1@ZP6AXAEAU0@@Z@Z @ 0x1C004705C (--$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDispositi.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vDLOrderDispositionCompare(unsigned __int64 **a1, unsigned __int64 **a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = **a1;
  v3 = **a2;
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
