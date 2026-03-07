bool HvlIsSingleGroupRequired()
{
  char v0; // bl
  __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rbp
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v5 = 0LL;
  if ( !HvlHypervisorConnected )
    return 0;
  v2 = (unsigned int)KeRootProcSpecified;
  if ( !KeRootProcSpecified && KeRootProcNumaNodeLpsSpecified )
  {
    v3 = &KeRootProcNumaNodeLps;
    v4 = (unsigned int)(KeRootProcSpecified + 64);
    do
    {
      v2 += RtlNumberOfSetBitsEx(v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  if ( (HvlpRootFlags & 1) != 0 && (unsigned __int64)(v2 - 1) <= 0x3F && !KeDynamicPartitioningSupported )
    return 1;
  if ( (HvlpFlags & 0x80u) == 0 )
  {
    HviGetImplementationLimits(&v5);
    v0 = 1;
    if ( (_DWORD)v5 == -1 )
      return (HvlEnlightenments & 0x4004) != 0;
  }
  return v0;
}
