void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // r14d
  unsigned int v1; // edi
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  unsigned __int8 v4; // si

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0LL;
    do
    {
      v3 = ACPIReadGpeStatusRegister(v1);
      v4 = v3 & *((_BYTE *)GpeCurEnable + v2);
      if ( (v3 & (unsigned __int8)~*((_BYTE *)GpeHandlerRegistered + v2)) != 0 )
      {
        AcpiDiagTraceUnexpectedGpe(v1, v3 & ~*((_BYTE *)GpeHandlerRegistered + v2));
        ACPIWriteGpeStatusRegister(v1);
      }
      *((_BYTE *)GpePending + v2) |= v4;
      *((_BYTE *)GpeRunMethod + v2) |= v4;
      if ( (AcpiOverrideAttributes & 0x2000000) != 0 )
        *((_BYTE *)GpeCurEnable + v2) &= ~(v4 & *((_BYTE *)GpeIsLevel + v2));
      else
        *((_BYTE *)GpeCurEnable + v2) &= ~v4;
      if ( (v4 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v2)) != 0 )
        ACPIWriteGpeStatusRegister(v1);
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  AcpiGpeWorkDone = 1;
  if ( !AcpiGpeDpcRunning && !AcpiGpeDpcScheduled )
  {
    AcpiGpeDpcScheduled = 1;
    KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
