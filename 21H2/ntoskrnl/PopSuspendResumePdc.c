/*
 * XREFs of PopSuspendResumePdc @ 0x14077A798
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PopSuspendResumePdc(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_140C54420;
  if ( qword_140C54420 )
    return (__int64 (__fastcall *)(_QWORD))qword_140C54420(a1);
  return result;
}
