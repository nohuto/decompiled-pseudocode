/*
 * XREFs of MiFreeNextAffinityWalker @ 0x1405B559C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     MiFreeImageLoadConfig @ 0x140A47684 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeNextAffinityWalker(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
