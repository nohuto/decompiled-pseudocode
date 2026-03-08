/*
 * XREFs of TouchTargetingDownrank @ 0x1C014ADB2
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0148932 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     _TTHmToPixels @ 0x1C014AE1A (_TTHmToPixels.c)
 */

__int64 __fastcall TouchTargetingDownrank(__int64 a1, int a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 184);
  v3 = *(_DWORD *)(a1 + 188);
  if ( a2 == 1 )
  {
    if ( (int)v2 >= v3 )
      v2 = *(_DWORD *)(a1 + 188);
    v4 = TTHmToPixels(600LL, v2);
    v5 = 40;
    if ( v4 > 40 )
      return (unsigned int)v4;
    return v5;
  }
  else
  {
    if ( (int)v2 >= v3 )
      v2 = *(_DWORD *)(a1 + 188);
    LODWORD(result) = abs32(TTHmToPixels(200LL, v2));
    if ( (int)result > 20 )
      LOWORD(result) = 20;
    return (unsigned __int16)result;
  }
}
