/*
 * XREFs of wcsnlen @ 0x1403D5F60
 * Callers:
 *     _wcslwr_s @ 0x1403D3F90 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x14051A480 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405263A0 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14082F354 (BiGetObjectReferenceFromEfiEntry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x14085F190 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA84C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E183C (EtwpLoadMicroarchitecturalProfileSource.c)
 *     SiIsValidWindowsBootEntry @ 0x140A5D620 (SiIsValidWindowsBootEntry.c)
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
