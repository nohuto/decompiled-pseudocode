/*
 * XREFs of PspGetProcessInJobHierarchyCallback @ 0x1409AF590
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspGetProcessInJobHierarchyCallback(void *a1, _QWORD *a2)
{
  ObfReferenceObjectWithTag(a1, 0x624A7350u);
  *a2 = a1;
  return 3221226048LL;
}
