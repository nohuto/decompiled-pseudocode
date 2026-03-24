/*
 * XREFs of HalpMcSetUpdateInfoInvalid @ 0x1403AF564
 * Callers:
 *     HalpMcRecordProcessorInfo @ 0x1403A5EB4 (HalpMcRecordProcessorInfo.c)
 *     HalMcFinishMicrocode @ 0x1403AF500 (HalMcFinishMicrocode.c)
 *     HalpUnloadMicrocode @ 0x140866220 (HalpUnloadMicrocode.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A44AC4 (HalpMcInitializeMicrocodeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void HalpMcSetUpdateInfoInvalid()
{
  PVOID *v0; // rbx
  PVOID *v1; // rcx

  v0 = (PVOID *)HalpMcUpdateInfoHead;
  qword_140C497A8 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  HalpMcUpdateInfoValid = 0;
  while ( v0 != &HalpMcUpdateInfoHead )
  {
    v1 = v0;
    v0 = (PVOID *)*v0;
    ExFreePoolWithTag(v1, 0);
  }
}
