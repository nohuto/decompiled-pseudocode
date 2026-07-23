/*
 * XREFs of sub_1405D6E10 @ 0x1405D6E10
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     sub_1405D72F4 @ 0x1405D72F4 (sub_1405D72F4.c)
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 */

__int64 __fastcall sub_1405D6E10(__int64 a1, _QWORD *a2)
{
  int v4; // esi

  v4 = WbAlloc(0x50uLL);
  if ( v4 >= 0 )
  {
    memset(0LL, 0, 0x50uLL);
    MEMORY[0] = 1LL;
    MEMORY[8] = 0LL;
    MEMORY[0x10] = 0LL;
    MEMORY[0x18] = *(_DWORD *)(a1 + 8);
    MEMORY[0x20] = *(_QWORD *)a1;
    *a2 = 0LL;
  }
  sub_1405D72F4(0LL);
  return (unsigned int)v4;
}
