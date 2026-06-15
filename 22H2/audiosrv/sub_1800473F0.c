/*
 * XREFs of sub_1800473F0 @ 0x1800473F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

__int64 sub_1800473F0()
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 23LL, &unk_18015DFC8);
  }
  return 0LL;
}
