/*
 * XREFs of AslFree @ 0x140A54268
 * Callers:
 *     SdbpFreeAppAttributes @ 0x140A50D9C (SdbpFreeAppAttributes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
