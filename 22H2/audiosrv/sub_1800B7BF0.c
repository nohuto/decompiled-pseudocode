/*
 * XREFs of sub_1800B7BF0 @ 0x1800B7BF0
 * Callers:
 *     sub_18007C754 @ 0x18007C754 (sub_18007C754.c)
 *     sub_1800FF620 @ 0x1800FF620 (sub_1800FF620.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_35 @ 0x1800FF6E3 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_35.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B7BF0(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
