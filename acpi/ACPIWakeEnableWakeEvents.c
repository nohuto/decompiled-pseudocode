void ACPIWakeEnableWakeEvents()
{
  __int64 v0; // rdi
  unsigned int v1; // r9d
  __int64 v2; // r8

  v0 = 0LL;
  AcpiPowerLeavingS0 = 0;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    v1 = 0;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      do
      {
        v2 = v1++;
        *((_BYTE *)GpeCurEnable + v2) |= *((_BYTE *)GpeWakeEnable + v2) & (unsigned __int8)~*((_BYTE *)GpePending + v2);
      }
      while ( v1 < *((unsigned __int16 *)AcpiInformation + 51) );
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        do
        {
          ACPIWriteGpeEnableRegister(v0, *((_BYTE *)GpeWakeEnable + v0));
          *((_BYTE *)GpeSavedWakeMask + v0) = *((_BYTE *)GpeWakeEnable + v0);
          v0 = (unsigned int)(v0 + 1);
        }
        while ( (unsigned int)v0 < *((unsigned __int16 *)AcpiInformation + 51) );
      }
    }
    *((_WORD *)AcpiInformation + 57) = READ_PM1_ENABLE();
  }
}
