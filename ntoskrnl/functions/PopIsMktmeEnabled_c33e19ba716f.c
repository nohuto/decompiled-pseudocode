bool PopIsMktmeEnabled()
{
  char v0; // di
  unsigned __int64 v11; // rax

  v0 = 0;
  if ( (unsigned int)KiGetCpuVendor() == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RCX & 0x2000) != 0 )
      {
        v11 = __readmsr(0x982u);
        if ( (v11 & 2) != 0 )
          return (v11 & 0xF00000000LL) != 0;
      }
    }
  }
  return v0;
}
