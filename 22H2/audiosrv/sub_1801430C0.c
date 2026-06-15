/*
 * XREFs of sub_1801430C0 @ 0x1801430C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180143224 @ 0x180143224 (sub_180143224.c)
 *     sub_1801436B4 @ 0x1801436B4 (sub_1801436B4.c)
 */

__int64 __fastcall sub_1801430C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10

  if ( !a2 )
    return 2147500035LL;
  result = sub_1801436B4();
  if ( (int)result >= 0 )
    return sub_180143224(v3, *(unsigned int *)(v3 + 40));
  return result;
}
