/*
 * XREFs of sub_180038B58 @ 0x180038B58
 * Callers:
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_1800E280C @ 0x1800E280C (sub_1800E280C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180038B58(_QWORD *a1)
{
  a1[4] = 1LL;
  *a1 = off_1801481F0;
  a1[1] = off_180148228;
  a1[2] = off_180148268;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  return a1;
}
