/*
 * XREFs of sub_180120B90 @ 0x180120B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006EBD8 @ 0x18006EBD8 (sub_18006EBD8.c)
 *     sub_18012022C @ 0x18012022C (sub_18012022C.c)
 */

__int64 __fastcall sub_180120B90(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // r10

  v1 = sub_18006EBD8((volatile signed __int32 *)(a1 + 8));
  if ( !v1 && v2 )
    sub_18012022C(v2);
  return v1;
}
