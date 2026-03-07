bool HalpTscCheckAdjustMsrCapability()
{
  unsigned __int8 v11[24]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0;
  if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, v11) )
    return 0;
  if ( v11[0] != 2 )
    return 0;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 2) != 0;
}
