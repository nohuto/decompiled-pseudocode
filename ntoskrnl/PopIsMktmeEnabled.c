/*
 * XREFs of PopIsMktmeEnabled @ 0x140AA040C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x140A85800 (KiGetCpuVendor.c)
 */

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
