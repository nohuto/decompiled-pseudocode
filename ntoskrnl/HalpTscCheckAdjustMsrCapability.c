/*
 * XREFs of HalpTscCheckAdjustMsrCapability @ 0x1403ACA80
 * Callers:
 *     HalpTscReserveResources @ 0x1403AC968 (HalpTscReserveResources.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14037D1F0 (HalpGetCpuInfo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool HalpTscCheckAdjustMsrCapability()
{
  unsigned __int8 v11[24]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0;
  if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, v11) )
    return 0;
  if ( v11[0] != 2 )
    return 0;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 2) != 0;
}
