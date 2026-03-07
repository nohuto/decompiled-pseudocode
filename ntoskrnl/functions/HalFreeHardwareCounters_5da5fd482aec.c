NTSTATUS __stdcall HalFreeHardwareCounters(HANDLE CounterSetHandle)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  __int64 (*v4)(void); // rax

  if ( CounterSetHandle != (HANDLE)HalpFullPmuHandle )
  {
    if ( (char *)CounterSetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v4 = HalpProfileInterface[15];
      if ( v4 )
        return v4();
    }
    return -1073741811;
  }
  if ( (KeGetCurrentPrcb()->HalReserved[2] & 1) == 0 )
    return -1073741811;
  v1 = 0;
  while ( v1 < (unsigned __int8)KeNumberProcessors_0 )
  {
    v2 = v1++;
    _InterlockedDecrement((volatile signed __int32 *)(KiProcessorBlock[v2] + 88));
  }
  return 0;
}
