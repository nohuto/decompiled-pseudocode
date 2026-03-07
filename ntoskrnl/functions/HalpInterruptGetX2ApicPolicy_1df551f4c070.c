bool HalpInterruptGetX2ApicPolicy()
{
  char v0; // r11
  char v1; // r10

  v0 = 0;
  v1 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x200000) != 0 && (HalpIommuX2ApicSupport || (unsigned __int8)HalpHvIsX2ApicRecommended(_RCX, _RDX)) )
    v1 = 1;
  return HalpInterruptX2ApicPolicy != v0 && HalpHvCpuManager == v0 && v1 != 0;
}
