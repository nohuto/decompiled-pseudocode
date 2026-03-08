/*
 * XREFs of ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18026E538
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?Destroy@CObjectCache@@QEAAXXZ @ 0x18026E4F8 (-Destroy@CObjectCache@@QEAAXXZ.c)
 */

void CThreadContext::DestroyObjectCaches(void)
{
  int Current; // eax
  struct CThreadContext *v1; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v3; // [rsp+30h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v3);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  v1 = v3;
  CObjectCache::Destroy((struct CThreadContext *)((char *)v3 + 32));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 48));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 64));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 96));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 112));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 128));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 144));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 160));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 176));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 192));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 208));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 224));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 240));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 256));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 272));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 288));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 304));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 320));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 336));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 352));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 368));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 384));
}
