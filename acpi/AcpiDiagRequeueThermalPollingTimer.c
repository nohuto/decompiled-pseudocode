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
