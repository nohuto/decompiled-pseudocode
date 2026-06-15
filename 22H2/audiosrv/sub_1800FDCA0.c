/*
 * XREFs of sub_1800FDCA0 @ 0x1800FDCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 */

__int64 __fastcall sub_1800FDCA0(PVOID pv, const wchar_t *a2)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEA04(*((_QWORD *)off_18019C348 + 2), 0x18u, (__int64)&unk_180172650, a2);
  }
  return sub_1800FE8AC(pv);
}
