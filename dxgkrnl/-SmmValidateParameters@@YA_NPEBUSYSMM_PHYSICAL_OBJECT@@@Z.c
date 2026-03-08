/*
 * XREFs of ?SmmValidateParameters@@YA_NPEBUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C00714C0
 * Callers:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x1C0071508 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SmmValidateParameters(const struct SYSMM_PHYSICAL_OBJECT *a1)
{
  if ( (*((_DWORD *)a1 + 11) & 1) != 0 || KeGetCurrentIrql() <= 1u )
    return 1;
  WdLogSingleEntry1(3LL, a1);
  return 0;
}
