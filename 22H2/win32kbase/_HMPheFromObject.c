/*
 * XREFs of _HMPheFromObject @ 0x1C002E230
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00A66E4 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1)
{
  GetDomainLockRef(14LL);
  return (char *)qword_1C024FA38 + dword_1C024FA40 * (unsigned int)(unsigned __int16)*a1;
}
