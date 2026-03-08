/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x14054E5B4
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x140577FAC (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405786C8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *IoRevertFromDemotedDumpType())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_140C6A8D0;
  if ( qword_140C6A8D0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C6A8D0(8LL, 0LL);
  return result;
}
