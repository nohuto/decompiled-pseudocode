/*
 * XREFs of vDLOrderDispositionCompare @ 0x1C00E0C80
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vDLOrderDispositionCompare(unsigned __int64 **a1, unsigned __int64 **a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = **a1;
  v3 = **a2;
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
