/*
 * XREFs of _IsDescendant @ 0x1C00D3E60
 * Callers:
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00D3D3C (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDescendant(__int64 a1, __int64 a2)
{
  while ( a1 != a2 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(a2 + 40) + 42LL) & 0x2FFF) == 0x29D )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 104);
  }
  return 1LL;
}
