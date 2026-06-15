/*
 * XREFs of sub_1800BEF90 @ 0x1800BEF90
 * Callers:
 *     sub_1800BF070 @ 0x1800BF070 (sub_1800BF070.c)
 *     sub_1800BF0E0 @ 0x1800BF0E0 (sub_1800BF0E0.c)
 *     sub_1800C2B3C @ 0x1800C2B3C (sub_1800C2B3C.c)
 * Callees:
 *     sub_1800B6DB8 @ 0x1800B6DB8 (sub_1800B6DB8.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BEF90(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)a1 = &off_180148A70;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0xBu, (__int64)&unk_18016DDC0, a1);
  }
  *(_QWORD *)(a1 + 144) = off_180147248;
  sub_1800B6DB8(a1 + 144);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
    _o_free(v2);
  v3 = *(void **)(a1 + 72);
  if ( v3 )
    CoTaskMemFree(v3);
  CoTaskMemFree(*(LPVOID *)(a1 + 64));
  *(_QWORD *)(a1 + 64) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
