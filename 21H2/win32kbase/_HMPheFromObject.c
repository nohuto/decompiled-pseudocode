/*
 * XREFs of _HMPheFromObject @ 0x1C002CDC0
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00A5924 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1)
{
  GetDomainLockRef(14LL);
  return (char *)qword_1C024FD58 + dword_1C024FD60 * (unsigned int)(unsigned __int16)*a1;
}
