/*
 * XREFs of ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C0071560
 * Callers:
 *     DxgkAllocateAdlCB @ 0x1C0051F70 (DxgkAllocateAdlCB.c)
 *     DxgkFreeAdlCB @ 0x1C00522F0 (DxgkFreeAdlCB.c)
 * Callees:
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D32D0 (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

void __fastcall SysMmUnlockObject(struct SYSMM_ADAPTER_OBJECT *a1)
{
  if ( (*((_DWORD *)a1 - 5) & 1) == 0 )
    SmmUnlockPagedObject((struct SYSMM_ADAPTER_OBJECT *)((char *)a1 - 64), a1);
}
