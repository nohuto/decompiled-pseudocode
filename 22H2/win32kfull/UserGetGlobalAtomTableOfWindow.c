/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C00C66F4
 * Callers:
 *     SetRedrawProp @ 0x1C00C638C (SetRedrawProp.c)
 *     NtUserSetProp @ 0x1C00C63E0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00F0584 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 656LL);
  if ( result )
    return *(_QWORD *)(result + 168);
  return result;
}
