/*
 * XREFs of ?DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x1C000D730
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D828 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DxgkReferenceCompositionObject(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  __int64 v6; // r9
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v8[0] = 0LL;
  v6 = (unsigned int)a3;
  LOBYTE(a3) = a4;
  result = DxgkCompositionObject::ResolveHandle(a1, a2, a3, v6, v8);
  if ( (int)result >= 0 )
    *a5 = v8[0];
  return result;
}
