/*
 * XREFs of KiSetCacheInformationIntel @ 0x140A899A0
 * Callers:
 *     KiSetCacheInformation @ 0x140A898B0 (KiSetCacheInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x140A8A138 (KiSetStandardizedCacheInformation.c)
 */

__int64 KiSetCacheInformationIntel()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  __asm { cpuid }
  result = (unsigned int)(_RAX - 3);
  CurrentPrcb->CacheCount = 0;
  if ( (unsigned int)result <= 0x7FFFFFFC )
    return KiSetStandardizedCacheInformation(CurrentPrcb, 4LL);
  return result;
}
