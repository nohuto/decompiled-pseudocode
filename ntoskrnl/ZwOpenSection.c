/*
 * XREFs of ZwOpenSection @ 0x1404129F0
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x1405F0140 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x14069E7D0 (NtGetNlsSectionPtr.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B520BC (CmpInitializeMachineDependentConfiguration.c)
 *     EmpMapPhysicalAddress @ 0x140B8FC4C (EmpMapPhysicalAddress.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
