/*
 * XREFs of wcsnlen @ 0x1403DB480
 * Callers:
 *     _wcslwr_s @ 0x1403D94B0 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x14051C9B0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405288D0 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408081F8 (BiGetObjectReferenceFromEfiEntry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x140863150 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD87C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E46DC (EtwpLoadMicroarchitecturalProfileSource.c)
 *     SiIsValidWindowsBootEntry @ 0x140A60320 (SiIsValidWindowsBootEntry.c)
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
