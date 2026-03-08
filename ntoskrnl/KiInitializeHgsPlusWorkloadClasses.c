/*
 * XREFs of KiInitializeHgsPlusWorkloadClasses @ 0x140A8AE74
 * Callers:
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KiInitializeHgsPlusWorkloadClasses(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // r10
  unsigned int v4; // r8d
  __int64 result; // rax

  _RAX = 0LL;
  v3 = a2;
  v4 = 1;
  __asm { cpuid }
  if ( (unsigned int)result >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    result = _RAX & 0x880000;
    if ( (_DWORD)result == 8912896 )
    {
      v4 = BYTE1(_RCX);
      if ( BYTE1(_RCX) > 8u )
        KeBugCheckEx(0x5Du, 0x48475350uLL, v3, 8uLL, BYTE1(_RCX));
    }
  }
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)KiHgsPlusConfiguration != v4 )
      KeBugCheckEx(0x5Du, 0x48475350uLL, v3, (unsigned int)KiHgsPlusConfiguration, v4);
  }
  else
  {
    LODWORD(KiHgsPlusConfiguration) = v4;
  }
  return result;
}
