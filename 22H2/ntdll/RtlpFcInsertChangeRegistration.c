/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x180009438
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&SRWLock);
  v3 = (_QWORD *)qword_18016AC20;
  if ( *(__int64 **)qword_18016AC20 != &qword_18016AC18 )
    __fastfail(3u);
  *a2 = &qword_18016AC18;
  a2[1] = v3;
  *v3 = a2;
  qword_18016AC20 = (__int64)a2;
  RtlReleaseSRWLockExclusive(&SRWLock);
}
