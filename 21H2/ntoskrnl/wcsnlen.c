/*
 * XREFs of wcsnlen @ 0x1403E3480
 * Callers:
 *     _wcslwr_s @ 0x1403E1550 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x14051FB70 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x14052AF40 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x140862C90 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA71C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E1514 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140A202A4 (BiGetObjectReferenceFromEfiEntry.c)
 *     SiIsValidWindowsBootEntry @ 0x140A224B0 (SiIsValidWindowsBootEntry.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
