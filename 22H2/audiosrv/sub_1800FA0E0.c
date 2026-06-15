/*
 * XREFs of sub_1800FA0E0 @ 0x1800FA0E0
 * Callers:
 *     unknown_libname_314 @ 0x1800F9B8C (unknown_libname_314.c)
 *     sub_1800FBE30 @ 0x1800FBE30 (sub_1800FBE30.c)
 *     sub_1800FE540 @ 0x1800FE540 (sub_1800FE540.c)
 *     sub_1800FE8AC @ 0x1800FE8AC (sub_1800FE8AC.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_1800FA0E0(_QWORD *a1)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)a1[2];
  if ( v2 )
    CloseThreadpoolWork(v2);
  sub_180006A30((volatile signed __int32 *)(*a1 - 24LL));
  sub_18006A148(a1);
  return a1;
}
