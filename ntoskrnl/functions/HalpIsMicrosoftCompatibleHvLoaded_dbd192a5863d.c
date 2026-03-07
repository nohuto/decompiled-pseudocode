bool __fastcall HalpIsMicrosoftCompatibleHvLoaded(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( (unsigned __int8)HalpIsHvPresent(a1, a2) )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v2;
}
