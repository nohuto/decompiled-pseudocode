/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C01011B8
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00469D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     SetRedrawProp @ 0x1C0100E8C (SetRedrawProp.c)
 *     NtUserSetProp @ 0x1C0100EE0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
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
