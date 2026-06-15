/*
 * XREFs of sub_1800C43A4 @ 0x1800C43A4
 * Callers:
 *     sub_18007CC9A @ 0x18007CC9A (sub_18007CC9A.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 */

__int64 __fastcall sub_1800C43A4(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = sub_18000F708(v4++);
    while ( v4 != a3 );
  }
  return result;
}
