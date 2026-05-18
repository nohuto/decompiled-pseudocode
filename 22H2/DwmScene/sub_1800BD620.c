/*
 * XREFs of sub_1800BD620 @ 0x1800BD620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_180076870 @ 0x180076870 (sub_180076870.c)
 *     sub_1800BE21C @ 0x1800BE21C (sub_1800BE21C.c)
 *     sub_1800BE2B4 @ 0x1800BE2B4 (sub_1800BE2B4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BD620(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_180076870((__int64)a1, a2);
  v3 = sub_1800752B4((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_180208848, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_180209008, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_180208808, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1802087A8, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1802087C8, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1802087E8, v7, 1LL);
  }
  sub_1800BE2B4(a1);
  sub_1800BE21C(a1);
  return sub_1800BE268(a1);
}
