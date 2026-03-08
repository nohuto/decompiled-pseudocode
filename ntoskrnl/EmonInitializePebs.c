/*
 * XREFs of EmonInitializePebs @ 0x140A8ECE8
 * Callers:
 *     EmonInitializeProfiling @ 0x140A868F0 (EmonInitializeProfiling.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void EmonInitializePebs()
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // eax
  int v9; // eax

  EmonPebsAvailable = 0;
  if ( (unsigned int)EmonVersion >= 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RDX & 0x200000) != 0 )
    {
      v5 = __readmsr(0x1A0u);
      if ( (v5 & 0x1000) == 0 )
      {
        EmonPebs64Bit = 1;
        v6 = __readmsr(0x345u);
        v7 = ((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 8) & 0xF;
        if ( (_DWORD)v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 == 1 )
                EmonPebsEntrySize = 200;
              else
                EmonPebsEntrySize = 0;
            }
            else
            {
              EmonPebsEntrySize = 192;
            }
          }
          else
          {
            EmonPebsEntrySize = 176;
          }
        }
        else
        {
          EmonPebsEntrySize = 144;
        }
        EmonPebsAvailable = 1;
        EmonPebsInUse = 0;
      }
    }
  }
}
