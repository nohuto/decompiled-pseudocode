/*
 * XREFs of ZwOpenSection @ 0x1403FAA80
 * Callers:
 *     NtGetNlsSectionPtr @ 0x1406B9930 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140A477DC (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
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
