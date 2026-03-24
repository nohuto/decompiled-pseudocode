/*
 * XREFs of sub_1406A5FDC @ 0x1406A5FDC
 * Callers:
 *     WbGetWarbirdThread @ 0x1406C7890 (WbGetWarbirdThread.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     WbAlloc @ 0x1406C69C4 (WbAlloc.c)
 *     sub_1406C7A80 @ 0x1406C7A80 (sub_1406C7A80.c)
 */

__int64 __fastcall sub_1406A5FDC(__int64 a1, __int64 a2, _QWORD *a3)
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
  sub_1406C7A80(a1, 0LL);
  return (unsigned int)v6;
}
