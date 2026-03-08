/*
 * XREFs of DxgkFreeAdlCB @ 0x1C00522F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x1C006FBD0 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C0071560 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

void __fastcall DxgkFreeAdlCB(struct SYSMM_ADAPTER_OBJECT **a1)
{
  struct SYSMM_ADAPTER_OBJECT *v1; // rbx

  v1 = *a1;
  SysMmFreeAdl(*a1, a1[1]);
  SysMmUnlockObject(v1);
}
