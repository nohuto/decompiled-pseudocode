/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x1C0007360
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0007430 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1C00074B0 (AcpiDiagThermalPollingTraceControlCallback.c)
 *     AcpiDiagInitialize @ 0x1C00A71E8 (AcpiDiagInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // al
  __int64 Reserved; // rdx
  KIRQL v2; // bl
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  Reserved = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v2 = v0;
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
    && (!WPP_MAIN_CB.Reserved || (__int64)WPP_MAIN_CB.Reserved >= *((__int64 *)&WPP_MAIN_CB.Reserved + 1))
    || (Reserved = (__int64)WPP_MAIN_CB.Reserved) != 0 )
  {
    *((_QWORD *)&v3 + 1) = -1LL;
    KeSetTimer2(&AcpiDiagThermalPollingTimer, -Reserved, 0LL, &v3);
  }
  else
  {
    KeCancelTimer2(&AcpiDiagThermalPollingTimer, 0LL);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
