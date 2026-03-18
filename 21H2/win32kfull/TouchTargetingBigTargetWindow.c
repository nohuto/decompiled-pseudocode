/*
 * XREFs of TouchTargetingBigTargetWindow @ 0x1C025C3A8
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C016D29E (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     _TTPixelsToHm @ 0x1C016E64A (_TTPixelsToHm.c)
 */

_BOOL8 __fastcall TouchTargetingBigTargetWindow(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11

  return (int)TTPixelsToHm(a1[2] - *a1, *(_DWORD *)(a2 + 184)) >= 1400
      && (int)TTPixelsToHm(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 4), *(_DWORD *)(v3 + 188)) >= 1400;
}
