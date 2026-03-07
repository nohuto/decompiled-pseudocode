__int64 ACPIProcessorBuildHiddenApicIds()
{
  __int64 (__fastcall *v0)(__int64); // rax
  unsigned int v1; // eax
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rbx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v0 = (__int64 (__fastcall *)(__int64))HalPrivateDispatchTable[145];
  if ( !v0 )
    return 0LL;
  if ( !HalPrivateDispatchTable[146] )
    return 0LL;
  if ( AcpiHiddenProcessorApicIds )
    return 0LL;
  v1 = v0(0xFFFFFFFFLL);
  AcpiHiddenProcessorCount = v1;
  if ( !v1 )
    return 0LL;
  AcpiHiddenProcessorApicIds = ExAllocatePool2(64LL, 4LL * v1, 1299211073LL);
  if ( !AcpiHiddenProcessorApicIds )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        21,
        11,
        (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids);
    }
    return 3221225626LL;
  }
  v4 = 0LL;
  if ( !AcpiHiddenProcessorCount )
    return 0LL;
  while ( 1 )
  {
    result = HalPrivateDispatchTable[146]((unsigned int)v4, (__int64)&v5);
    if ( (int)result < 0 )
      break;
    *(_DWORD *)(AcpiHiddenProcessorApicIds + 4 * v4) = v5;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= AcpiHiddenProcessorCount )
      return 0LL;
  }
  return result;
}
