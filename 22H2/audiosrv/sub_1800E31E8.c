/*
 * XREFs of sub_1800E31E8 @ 0x1800E31E8
 * Callers:
 *     sub_1800E3308 @ 0x1800E3308 (sub_1800E3308.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3268 @ 0x1800E3268 (sub_1800E3268.c)
 */

_QWORD *__fastcall sub_1800E31E8(_QWORD *a1)
{
  __int64 v2; // rcx

  sub_1800E3268(a1 + 1);
  v2 = qword_18019E418;
  *a1 = off_18014A418;
  a1[1] = off_18014A288;
  a1[31] = off_18014A268;
  a1[32] = off_18014A238;
  a1[34] = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
