/*
 * XREFs of MiFreeNextAffinityWalker @ 0x1405B7A4C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     MiFreeImageLoadConfig @ 0x140A4A354 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeNextAffinityWalker(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
