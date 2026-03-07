__int64 ViPtInitCircularPoolTrace()
{
  unsigned int v0; // ebx
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v2; // edx
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx

  v0 = 0;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  v2 = 0x10000;
  v3 = NumberOfPhysicalPages >> 18;
  if ( (VfOptionFlags & 2) != 0 )
    goto LABEL_18;
  v4 = VfPoolTracesLength;
  if ( (unsigned int)VfPoolTracesLength <= 0x10000 )
  {
    if ( (unsigned int)v3 > 4 )
    {
      if ( (unsigned int)v3 > 0x10 )
      {
        v4 = 0x80000;
        goto LABEL_15;
      }
      v5 = (unsigned __int64)(unsigned int)v3 >> 2;
      do
      {
        v2 *= 2;
        --v5;
      }
      while ( v5 );
    }
    v4 = v2;
    goto LABEL_15;
  }
  v6 = 0x800000;
  if ( (unsigned int)VfPoolTracesLength > 0x800000 )
  {
    v4 = 0x800000;
    VfPoolTracesLength = 0x800000;
    goto LABEL_16;
  }
  while ( (VfPoolTracesLength & v6) == 0 )
  {
    v6 >>= 1;
    if ( v6 < 0x10000 )
      goto LABEL_16;
  }
  v4 = VfPoolTracesLength & v6;
LABEL_15:
  VfPoolTracesLength = v4;
LABEL_16:
  VfPoolTraces = (PVOID)ExAllocatePool3(64LL, (unsigned int)(424 * v4), 0x6E496956u, (__int64)&VfExtendedParameters, 1u);
  if ( VfPoolTraces )
  {
LABEL_18:
    ExSetPoolFlags(0x10u);
    return v0;
  }
  return (unsigned int)-1073741801;
}
