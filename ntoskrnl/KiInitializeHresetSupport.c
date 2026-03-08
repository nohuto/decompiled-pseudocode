/*
 * XREFs of KiInitializeHresetSupport @ 0x140A8AEEC
 * Callers:
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KiInitializeHresetSupport(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r10
  unsigned int v3; // r8d
  __int64 result; // rax
  int v13; // r9d

  v1 = (unsigned int)BugCheckParameter2;
  _RAX = 0LL;
  v3 = 0;
  __asm { cpuid }
  if ( (unsigned int)result >= 0x20 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v13 = _RAX;
    _RAX = 32LL;
    __asm { cpuid }
    if ( (v13 & 0x400000) != 0 )
      v3 = (_RBX & 1) != 0;
  }
  if ( (_DWORD)v1 )
  {
    result = (unsigned int)KiHresetMask;
    if ( (_DWORD)KiHresetMask != v3 )
      KeBugCheckEx(0x5Du, 0x48524553uLL, v1, (unsigned int)KiHresetMask, v3);
  }
  else
  {
    LODWORD(KiHresetMask) = v3;
  }
  if ( v3 )
  {
    result = v3;
    __writemsr(0x17DAu, v3);
  }
  return result;
}
