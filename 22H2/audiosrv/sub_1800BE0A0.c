/*
 * XREFs of sub_1800BE0A0 @ 0x1800BE0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

void __fastcall sub_1800BE0A0(__int64 a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x20u, (__int64)&unk_18016DA10, a1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  sub_180071C14((_QWORD *)(a1 + 48));
  if ( a1 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
}
