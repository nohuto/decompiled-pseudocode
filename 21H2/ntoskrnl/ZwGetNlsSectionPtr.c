/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1403FC4C0
 * Callers:
 *     RtlpGetNormalization @ 0x14091B980 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SectionType);
}
