/*
 * XREFs of sub_180142F80 @ 0x180142F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180143224 @ 0x180143224 (sub_180143224.c)
 *     sub_1801436B4 @ 0x1801436B4 (sub_1801436B4.c)
 */

__int64 __fastcall sub_180142F80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // [rsp+38h] [rbp+10h]

  if ( !a2 )
    return 2147500035LL;
  result = sub_1801436B4();
  if ( (int)result >= 0 )
  {
    LODWORD(v4) = *(_DWORD *)(v3 + 40);
    HIDWORD(v4) = 1;
    return sub_180143224(v3, v4);
  }
  return result;
}
