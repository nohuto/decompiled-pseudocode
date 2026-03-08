/*
 * XREFs of PopInitHiberPersistedRegValues @ 0x14080FC80
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x14082ABAC (PopInitializeHibernateGlobals.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 *     PopQueryHiberPersistedRegValue @ 0x14080FD60 (PopQueryHiberPersistedRegValue.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PopInitHiberPersistedRegValues()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  void *Pool2; // rsi
  int PersistedStateLocation; // edi
  int **v4; // rsi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  LODWORD(v6) = 0;
  if ( (unsigned int)RtlGetPersistedStateLocation(
                       L"Power",
                       0LL,
                       L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
                       0,
                       0LL,
                       0,
                       (unsigned int *)&v6) == -2147483643 )
  {
    v1 = v6;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v6, 1919052136LL);
    if ( Pool2 )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"Power",
                                 0LL,
                                 L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
                                 0,
                                 Pool2,
                                 v1,
                                 (unsigned int *)&v6);
      if ( PersistedStateLocation < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x72626968u);
      }
      else
      {
        PopHibernatePersistedRegLocation = (PCWSTR)Pool2;
        v4 = &off_140C07328;
        do
        {
          PopQueryHiberPersistedRegValue(v0++, *v4);
          v4 += 3;
        }
        while ( v0 < 4 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)PersistedStateLocation;
}
