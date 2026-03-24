/*
 * XREFs of HalpHvCpuid @ 0x1404C1D9C
 * Callers:
 *     HalpInterruptGetIrtInfo @ 0x1407B9C34 (HalpInterruptGetIrtInfo.c)
 *     HalpInitializeProfiling @ 0x14099E74C (HalpInitializeProfiling.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall HalpHvCpuid(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
