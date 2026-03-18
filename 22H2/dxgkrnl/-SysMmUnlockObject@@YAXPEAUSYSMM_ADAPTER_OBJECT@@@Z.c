/*
 * XREFs of ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C0072190
 * Callers:
 *     DxgkAllocateAdlCB @ 0x1C0052E10 (DxgkAllocateAdlCB.c)
 *     DxgkFreeAdlCB @ 0x1C0053190 (DxgkFreeAdlCB.c)
 * Callees:
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D7B10 (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

void __fastcall SysMmUnlockObject(struct SYSMM_ADAPTER_OBJECT *a1)
{
  if ( (*((_DWORD *)a1 - 5) & 1) == 0 )
    SmmUnlockPagedObject((struct SYSMM_ADAPTER_OBJECT *)((char *)a1 - 64), a1);
}
