/*
 * XREFs of HalLeaveDmaDomain @ 0x14050FF10
 * Callers:
 *     <none>
 * Callees:
 *     HalpLeaveDmaDomain @ 0x1405108E4 (HalpLeaveDmaDomain.c)
 */

__int64 __fastcall HalLeaveDmaDomain(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(a1 + 512);
  if ( !v2 )
    return 3221225473LL;
  if ( *(_BYTE *)(v2 + 33) )
    return 3221225488LL;
  if ( *(_BYTE *)(a1 + 524) && *(_QWORD *)(v2 + 56) )
    return 3221225473LL;
  else
    return HalpLeaveDmaDomain(a1);
}
