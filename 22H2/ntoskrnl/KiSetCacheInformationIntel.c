/*
 * XREFs of KiSetCacheInformationIntel @ 0x140A8CFB0
 * Callers:
 *     KiSetCacheInformation @ 0x140A8CEC0 (KiSetCacheInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x140A8D748 (KiSetStandardizedCacheInformation.c)
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
