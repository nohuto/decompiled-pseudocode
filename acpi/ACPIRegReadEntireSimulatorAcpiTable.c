/*
 * XREFs of ACPIRegReadEntireSimulatorAcpiTable @ 0x1C008D920
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C008D15C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x1C000B5D8 (RtlStringCchPrintfA.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 */

__int64 ACPIRegReadEntireSimulatorAcpiTable()
{
  void *Pool2; // rbx
  int v1; // eax
  int v2; // edx
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  Pool2 = 0LL;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
  while ( 1 )
  {
    v1 = OSReadRegValue(pszDest);
    if ( v1 >= 0 )
      break;
    if ( v1 != -2147483643 )
    {
      ExFreePoolWithTag(Pool2, 0);
      return 0LL;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(256LL, 0LL, 1114661697LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      40,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      0);
  }
  ExFreePoolWithTag(Pool2, 0);
  return 3221225473LL;
}
