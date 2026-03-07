char __fastcall HalpIsPartitionCpuManager(__int64 a1, __int64 a2)
{
  char v2; // r10

  if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v2;
}
