/*
 * XREFs of WbCreateWarbirdProcess @ 0x1406A559C
 * Callers:
 *     WbGetWarbirdProcess @ 0x1406C7E04 (WbGetWarbirdProcess.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     WbAlloc @ 0x1406C69C4 (WbAlloc.c)
 *     sub_1406C7DCC @ 0x1406C7DCC (sub_1406C7DCC.c)
 */

__int64 __fastcall WbCreateWarbirdProcess(__int64 a1, _QWORD *a2)
{
  int v4; // esi

  v4 = WbAlloc(0xF0uLL);
  if ( v4 >= 0 )
  {
    memset(0LL, 0, 0xF0uLL);
    ++MEMORY[0xE8];
    MEMORY[0] = a1;
    MEMORY[0x38] = 60;
    v4 = 0;
    MEMORY[0x28] = sub_1406826D0;
    MEMORY[8] = 8LL;
    MEMORY[0x10] = 0;
    MEMORY[0x18] = 0LL;
    MEMORY[0x20] = 10;
    MEMORY[0x30] = 0LL;
    MEMORY[0x50] = 0LL;
    MEMORY[0x48] = 64LL;
    MEMORY[0x40] = 64LL;
    MEMORY[0xD8] = sub_14069CA40;
    MEMORY[0xB8] = 8LL;
    MEMORY[0xC0] = 0;
    MEMORY[0xC8] = 0LL;
    MEMORY[0xD0] = 10;
    MEMORY[0xE0] = 0LL;
    MEMORY[0x78] = sub_140688F30;
    MEMORY[0x58] = 8LL;
    MEMORY[0x60] = 0;
    MEMORY[0x68] = 0LL;
    MEMORY[0x70] = 10;
    MEMORY[0x80] = 0LL;
    MEMORY[0xA8] = sub_1405D89C0;
    MEMORY[0x88] = 8LL;
    MEMORY[0x90] = 0;
    MEMORY[0x98] = 0LL;
    MEMORY[0xA0] = 10;
    MEMORY[0xB0] = 0LL;
    *a2 = 0LL;
  }
  sub_1406C7DCC(0LL);
  return (unsigned int)v4;
}
