bool __fastcall HalpPciCheckAmdK8(__int16 a1, char a2, char a3)
{
  bool result; // al

  if ( HalpPciAmdK8SpecialLocationHack == -1 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX != 1752462657 )
      goto LABEL_5;
    if ( (_DWORD)_RDX != 1769238117 )
      goto LABEL_5;
    if ( (_DWORD)_RCX != 1145913699 )
      goto LABEL_5;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (((unsigned int)_RAX >> 8) & 0xF) != 0xF || (_RAX & 0xFF00000) != 0 )
    {
LABEL_5:
      result = 0;
      HalpPciAmdK8SpecialLocationHack = 0;
      return result;
    }
    HalpPciAmdK8SpecialLocationHack = 1;
  }
  else if ( HalpPciAmdK8SpecialLocationHack != 1 )
  {
    return 0;
  }
  if ( a1 || a2 )
    return 0;
  return (a3 & 0x1Fu) >= 0x18;
}
