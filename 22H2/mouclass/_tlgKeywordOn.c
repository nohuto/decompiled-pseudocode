/*
 * XREFs of _tlgKeywordOn @ 0x1C0006B68
 * Callers:
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C00041C8 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C0004240 (MouClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C0009020 & 0x400000000000LL) != 0 && (qword_1C0009028 & 0x400000000000LL) == qword_1C0009028;
}
