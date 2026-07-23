/*
 * XREFs of sub_1406222AC @ 0x1406222AC
 * Callers:
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 *     sub_140643AE0 @ 0x140643AE0 (sub_140643AE0.c)
 */

__int64 __fastcall sub_1406222AC(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // esi

  v6 = WbAlloc(0x500uLL);
  if ( v6 >= 0 )
  {
    memset(0LL, 0, 0x500uLL);
    ++MEMORY[8];
    MEMORY[0] = a2;
    MEMORY[0x10] = 0LL;
    MEMORY[0x18] = 0LL;
    MEMORY[0x20] = 10;
    *a3 = 0LL;
  }
  sub_140643AE0(a1, 0LL);
  return (unsigned int)v6;
}
