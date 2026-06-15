/*
 * XREFs of sub_180044488 @ 0x180044488
 * Callers:
 *     sub_180044364 @ 0x180044364 (sub_180044364.c)
 * Callees:
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_180044488(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = off_1801467B0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 8) = off_180146918;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 32), 0, 0);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 84) = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_18015DF00, 0LL);
  }
  return a1;
}
