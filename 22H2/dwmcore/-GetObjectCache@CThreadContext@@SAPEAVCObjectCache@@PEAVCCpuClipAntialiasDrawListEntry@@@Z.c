/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasDrawListEntry@@@Z @ 0x18007C3E8
 * Callers:
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x18007C1A8 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180078B70 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CCpuClipAntialiasDrawListEntry *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 144);
}
