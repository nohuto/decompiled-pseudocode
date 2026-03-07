char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C0995E;
  if ( byte_140C0995E == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C0995E = v0;
  }
  return v0;
}
