/*
 * XREFs of SysMmTestLockObject @ 0x1C0071990
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x1C0071508 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 */

__int64 __fastcall SysMmTestLockObject(struct SYSMM_ADAPTER_OBJECT *a1)
{
  return SysMmLockObject(a1);
}
