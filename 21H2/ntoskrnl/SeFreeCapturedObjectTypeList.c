/*
 * XREFs of SeFreeCapturedObjectTypeList @ 0x1405F4024
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeFreeCapturedObjectTypeList(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
