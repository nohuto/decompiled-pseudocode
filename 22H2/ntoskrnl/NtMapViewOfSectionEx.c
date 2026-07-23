/*
 * XREFs of NtMapViewOfSectionEx @ 0x1406FB970
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1406FCBD8 (MiMapViewOfSectionExCommon.c)
 */

NTSTATUS __cdecl NtMapViewOfSectionEx(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-30h]

  LODWORD(ullMultiplicand) = ExtendedParameterCount;
  return MiMapViewOfSectionExCommon(
           (int)SectionHandle,
           (int)ProcessHandle,
           0,
           (int)BaseAddress,
           (__int64)SectionOffset,
           (__int64)ViewSize,
           AllocationType,
           PageProtection,
           ExtendedParameters,
           ullMultiplicand,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
