/*
 * XREFs of PopSuspendResumePdc @ 0x14077A4D8
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSuspendResumePdc(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_140C543E0;
  if ( qword_140C543E0 )
    return (__int64 (__fastcall *)(_QWORD))qword_140C543E0(a1);
  return result;
}
