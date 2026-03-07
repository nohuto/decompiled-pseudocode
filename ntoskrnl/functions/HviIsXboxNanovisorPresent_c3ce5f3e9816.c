char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C097E4;
  if ( byte_140C097E4 == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C097E4 = v0;
  }
  return v0;
}
