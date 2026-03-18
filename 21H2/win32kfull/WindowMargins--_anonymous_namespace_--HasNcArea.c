/*
 * XREFs of WindowMargins::_anonymous_namespace_::HasNcArea @ 0x1C015C430
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     WindowMargins::_anonymous_namespace_::CalculateWindowMargins @ 0x1C00B2B24 (WindowMargins--_anonymous_namespace_--CalculateWindowMargins.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowMargins::_anonymous_namespace_::HasNcArea(__int64 a1, char a2)
{
  int v2; // r8d
  _QWORD *v3; // rcx
  __int64 v4; // rdx

  if ( a2 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 )
  {
    v3 = *(_QWORD **)(a1 + 40);
    v4 = v3[11] - v3[13];
    if ( !v4 )
      v4 = v3[12] - v3[14];
    LOBYTE(v2) = v4 != 0;
  }
  else
  {
    return (*(_DWORD *)(a1 + 320) >> 28) & 1;
  }
  return v2;
}
