/*
 * XREFs of sub_180107B00 @ 0x180107B00
 * Callers:
 *     sub_18012A41A @ 0x18012A41A (sub_18012A41A.c)
 * Callees:
 *     sub_1800A5908 @ 0x1800A5908 (sub_1800A5908.c)
 */

__int64 __fastcall sub_180107B00(__int64 ***a1)
{
  __int64 **v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800A5908(v1);
  return result;
}
