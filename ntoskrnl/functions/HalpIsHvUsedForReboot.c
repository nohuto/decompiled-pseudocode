bool __fastcall HalpIsHvUsedForReboot(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
