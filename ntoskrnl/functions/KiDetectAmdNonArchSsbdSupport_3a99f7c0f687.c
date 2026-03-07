void __fastcall KiDetectAmdNonArchSsbdSupport(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v15; // rax

  v2 = *a2;
  if ( (*a2 & 0x80u) == 0LL )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x2000000) != 0 )
    {
      *((_DWORD *)a2 + 2) = -1073676001;
      KiSsbdMsr = -1073676001;
      *a2 = v2 | 0x80;
      return;
    }
    if ( !HviIsAnyHypervisorPresent() )
    {
      switch ( *(_BYTE *)(a1 + 64) )
      {
        case 0x15:
          v15 = 0x40000000000000LL;
          break;
        case 0x16:
          v15 = 0x200000000LL;
          break;
        case 0x17:
          v15 = 1024LL;
          break;
        default:
          return;
      }
      *a2 |= 0x80uLL;
      *((_DWORD *)a2 + 2) = -1073672160;
      KiSsbdMsr = -1073672160;
      a2[2] = v15;
      KiSsbdBit = v15;
    }
  }
}
