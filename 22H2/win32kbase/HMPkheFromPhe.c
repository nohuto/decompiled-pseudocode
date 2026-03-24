/*
 * XREFs of HMPkheFromPhe @ 0x1C00314E0
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C011BAE0 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPkheFromPhe(__int64 a1)
{
  GetDomainLockRef(14LL);
  return (char *)gpKernelHandleTable + 24 * (unsigned int)((a1 - (__int64)qword_1C024FA38) >> 5);
}
