/*
 * XREFs of _IsDescendant @ 0x1C002C4D0
 * Callers:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002C3AC (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
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
