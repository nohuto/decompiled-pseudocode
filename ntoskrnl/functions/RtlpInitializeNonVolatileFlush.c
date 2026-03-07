__int64 RtlpInitializeNonVolatileFlush()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  result = ZwQuerySystemInformation(192LL, v1, 32LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (BYTE8(v1[0]) & 1) != 0 )
      RtlpIsFlushRequired = 0;
    if ( (v1[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (v1[0] & 2) == 0 )
      {
LABEL_8:
        result = DWORD1(v1[0]);
        RtlpClFlushSize = DWORD1(v1[0]);
        return result;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_8;
  }
  return result;
}
