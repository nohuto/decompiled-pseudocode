/*
 * XREFs of RtlpFcRemoveChangeRegistration @ 0x18007F89C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x18007F7E0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpFcRemoveChangeRegistration(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18016AC10, (unsigned __int64)a2, a3, a4);
  v5 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  return RtlReleaseSRWLockExclusive(&qword_18016AC10);
}
