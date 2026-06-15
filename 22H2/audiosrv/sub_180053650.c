/*
 * XREFs of sub_180053650 @ 0x180053650
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_180053650(__int64 a1, int a2)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 22LL, &unk_18016DE00, a1 - 8, a2);
  }
  return sub_18005369C((LPCRITICAL_SECTION)(a1 + 16));
}
