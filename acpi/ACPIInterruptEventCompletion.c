void __fastcall ACPIInterruptEventCompletion(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  KIRQL v6; // si

  v6 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  if ( a2 >= 0 )
  {
    AcpiGpeWorkDone = 1;
    *((_BYTE *)GpeComplete + (unsigned __int8)a4) |= HIBYTE(a4);
    if ( !AcpiGpeDpcRunning )
      KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  else
  {
    *((_BYTE *)GpeRunMethod + (unsigned __int8)a4) |= HIBYTE(a4);
    if ( !AcpiGpeDpcScheduled )
    {
      AcpiGpeDpcScheduled = 1;
      KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
    }
  }
  KeReleaseSpinLock(&GpeTableLock, v6);
}
