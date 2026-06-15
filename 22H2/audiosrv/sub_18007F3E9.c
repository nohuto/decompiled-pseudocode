/*
 * XREFs of sub_18007F3E9 @ 0x18007F3E9
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5474 @ 0x1800D5474 (sub_1800D5474.c)
 */

void __fastcall sub_18007F3E9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12)
{
  if ( a9 )
  {
    sub_1800D5474(a12 + 24, &a9);
    JUMPOUT(0x18000752DLL);
  }
  sub_1800B8610(2147942414LL);
}
