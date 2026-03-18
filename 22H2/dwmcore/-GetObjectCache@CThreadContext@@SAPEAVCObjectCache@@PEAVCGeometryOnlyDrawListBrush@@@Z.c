/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007B77C
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FBC0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007F180 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180078B70 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CGeometryOnlyDrawListBrush *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 304);
}
