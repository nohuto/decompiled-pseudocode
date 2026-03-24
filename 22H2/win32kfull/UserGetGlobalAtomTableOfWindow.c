/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C0035238
 * Callers:
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0031D60 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     NtUserSetProp @ 0x1C0035050 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C0038408 (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 664LL);
  if ( result )
    return *(_QWORD *)(result + 168);
  return result;
}
