/*
 * XREFs of unknown_libname_206 @ 0x180009E18
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_180076400 @ 0x180076400 (sub_180076400.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_6 @ 0x180076480 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_6.c)
 *     sub_180079D60 @ 0x180079D60 (sub_180079D60.c)
 *     sub_18007CAC0 @ 0x18007CAC0 (sub_18007CAC0.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_3 @ 0x1800F9B4E (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_3.c)
 *     sub_18013522D @ 0x18013522D (sub_18013522D.c)
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_206(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[3];
  if ( v1 >= 8 )
    sub_1800472E0(*a1, 2 * v1 + 2);
  result = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
