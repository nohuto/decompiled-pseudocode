/*
 * XREFs of sub_180067E5C @ 0x180067E5C
 * Callers:
 *     sub_180055130 @ 0x180055130 (sub_180055130.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180067E5C(_QWORD *a1)
{
  _QWORD *v2; // rax

  a1[5] = 1LL;
  *a1 = off_1801498F0;
  a1[1] = off_180149898;
  a1[2] = off_1801497C8;
  a1[3] = off_180149878;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *a1 = off_180149840;
  a1[6] = 0LL;
  a1[1] = off_1801497E8;
  a1[2] = off_1801497C8;
  a1[3] = off_1801497A8;
  a1[7] = 0LL;
  a1[8] = 0LL;
  v2 = sub_180008EAC(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  a1[7] = v2;
  return a1;
}
