/*
 * XREFs of AslFree @ 0x140A51598
 * Callers:
 *     SdbpFreeAppAttributes @ 0x140A4E0CC (SdbpFreeAppAttributes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
