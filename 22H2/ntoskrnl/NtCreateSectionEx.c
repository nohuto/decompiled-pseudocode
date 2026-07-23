/*
 * XREFs of NtCreateSectionEx @ 0x1408C7A40
 * Callers:
 *     <none>
 * Callees:
 *     MiCreateSectionCommon @ 0x140654AC0 (MiCreateSectionCommon.c)
 */

NTSTATUS __cdecl NtCreateSectionEx(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-18h]

  LODWORD(ullMultiplicand) = ExtendedParameterCount;
  return MiCreateSectionCommon(
           (unsigned __int64)SectionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (__int64 *)MaximumSize,
           SectionPageProtection,
           AllocationAttributes,
           (__int64)FileHandle,
           ExtendedParameters,
           ullMultiplicand);
}
