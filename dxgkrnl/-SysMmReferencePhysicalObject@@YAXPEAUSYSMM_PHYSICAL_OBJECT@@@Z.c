/*
 * XREFs of ?SysMmReferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C0019DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SysMmReferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
}
