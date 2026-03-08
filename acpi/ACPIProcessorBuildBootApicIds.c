/*
 * XREFs of ACPIProcessorBuildBootApicIds @ 0x1C008C380
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1C003A1C0 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 */

__int64 ACPIProcessorBuildBootApicIds()
{
  int v0; // edx
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( AcpiBootProcessorApicIds )
    return 0LL;
  AcpiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  AcpiBootProcessorApicIds = ExAllocatePool2(64LL, 4LL * (unsigned int)AcpiBootProcessorCount, 1299211073LL);
  if ( !AcpiBootProcessorApicIds )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        21,
        10,
        (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids);
    }
    return 3221225626LL;
  }
  v2 = 0LL;
  if ( !AcpiBootProcessorCount )
    return 0LL;
  while ( 1 )
  {
    result = HalGetProcessorIdByNtNumber((unsigned int)v2, &v3);
    if ( (int)result < 0 )
      break;
    *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v2) = v3;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= AcpiBootProcessorCount )
      return 0LL;
  }
  return result;
}
