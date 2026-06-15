/*
 * XREFs of sub_1800BDAD4 @ 0x1800BDAD4
 * Callers:
 *     sub_1800BDB5C @ 0x1800BDB5C (sub_1800BDB5C.c)
 *     sub_1800BDBD0 @ 0x1800BDBD0 (sub_1800BDBD0.c)
 *     sub_1800C2AC4 @ 0x1800C2AC4 (sub_1800C2AC4.c)
 * Callees:
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

void __fastcall sub_1800BDAD4(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *a1 = &off_180148910;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0xBu, (__int64)&unk_18016DA10, a1);
  }
  v2 = (void *)a1[5];
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)a1[4];
  if ( v3 )
    CoTaskMemFree(v3);
}
