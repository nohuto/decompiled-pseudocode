/*
 * XREFs of sub_180060928 @ 0x180060928
 * Callers:
 *     sub_1800608DC @ 0x1800608DC (sub_1800608DC.c)
 *     sub_1800BD0D0 @ 0x1800BD0D0 (sub_1800BD0D0.c)
 *     sub_1800C2A74 @ 0x1800C2A74 (sub_1800C2A74.c)
 * Callees:
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

void __fastcall sub_180060928(_QWORD *a1)
{
  void *v2; // rcx

  *a1 = &off_180148828;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 11LL, &unk_18016D858, a1);
  }
  v2 = (void *)a1[2];
  if ( v2 )
  {
    CoTaskMemFree(v2);
    a1[2] = 0LL;
  }
}
