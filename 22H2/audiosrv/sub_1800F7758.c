/*
 * XREFs of sub_1800F7758 @ 0x1800F7758
 * Callers:
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 * Callees:
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800F7634 @ 0x1800F7634 (sub_1800F7634.c)
 */

void sub_1800F7758()
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x20u, (__int64)&unk_180171E90);
  }
  sub_1800F7634();
  if ( hMem )
    LocalFree(hMem);
  if ( SidToCheck )
    LocalFree(SidToCheck);
  hMem = 0LL;
  SidToCheck = 0LL;
}
