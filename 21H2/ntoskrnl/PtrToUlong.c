/*
 * XREFs of PtrToUlong @ 0x140251BD0
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7AD4 (EtwTimLogRedirectionTrustPolicy.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall PtrToUlong(const void *p)
{
  return (unsigned int)p;
}
