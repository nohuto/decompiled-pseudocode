/*
 * XREFs of sub_1800FE0A0 @ 0x1800FE0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1801024B0 @ 0x1801024B0 (sub_1801024B0.c)
 */

__int64 __fastcall sub_1800FE0A0(__int64 a1, __int64 a2)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x5Cu, (__int64)&unk_180172650, *(_DWORD *)(a2 + 16));
  }
  sub_1801024B0(*(_QWORD *)(a1 + 200), *(unsigned int *)(a2 + 16));
  return 0LL;
}
