/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x140550A54
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14057A4BC (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x14057ABD8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *IoRevertFromDemotedDumpType())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_140C6AD50;
  if ( qword_140C6AD50 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C6AD50(8LL, 0LL);
  return result;
}
