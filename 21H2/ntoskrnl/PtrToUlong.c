/*
 * XREFs of PtrToUlong @ 0x140246520
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall PtrToUlong(const void *p)
{
  return (unsigned int)p;
}
