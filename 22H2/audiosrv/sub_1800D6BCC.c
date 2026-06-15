/*
 * XREFs of sub_1800D6BCC @ 0x1800D6BCC
 * Callers:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_1800D9990 @ 0x1800D9990 (sub_1800D9990.c)
 * Callees:
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     sub_1800D0EFC @ 0x1800D0EFC (sub_1800D0EFC.c)
 */

void __fastcall sub_1800D6BCC(unsigned int a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (int)sub_18002AEF8(&v2) >= 0 )
    sub_1800D0EFC(v2, a1);
  if ( v2 )
    sub_18002AD80(v2);
}
