__int64 HalpProcGetFeatureBits()
{
  bool v0; // cf
  int v6; // r8d
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // r11d
  unsigned int v11; // r11d
  _BYTE v28[24]; // [rsp+20h] [rbp-20h] BYREF

  v28[0] = 0;
  if ( !KeGetCurrentPrcb()->CpuID )
    return 2LL;
  v0 = (unsigned __int8)HalpGetCpuInfo(0LL, 0LL, 0LL, v28) != 0;
  _RAX = 1LL;
  __asm { cpuid }
  v6 = _RDX;
  v7 = ((unsigned int)_RDX >> 12) & 4;
  v8 = v7 | 8;
  if ( (v6 & 0x80u) == 0 )
    v8 = v7;
  v9 = v8 | 0x10;
  if ( (v6 & 2) == 0 )
    v9 = v8;
  v10 = v9 | 0x20;
  if ( (v6 & 0x4000000) == 0 )
    v10 = v9;
  v11 = v10 | 1;
  if ( (v28[0] & (unsigned __int8)-v0) == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x14 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RBX & 0x2000000) != 0 || (unsigned __int8)HalpIsHvIptSupported(_RCX, _RDX) )
      {
        _RAX = 20LL;
        __asm { cpuid }
        if ( (_RCX & 1) != 0 )
          v11 |= 0x40u;
      }
    }
  }
  return v11;
}
