/*
 * XREFs of RtlpFcRemoveChangeRegistration @ 0x18007F89C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x18007F7E0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcRemoveChangeRegistration(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax

  RtlAcquireSRWLockExclusive(&SRWLock);
  v3 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v4 = (_QWORD *)a2[1], (_QWORD *)*v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(&SRWLock);
}
