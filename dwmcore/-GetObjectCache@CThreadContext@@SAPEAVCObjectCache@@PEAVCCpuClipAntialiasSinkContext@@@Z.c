/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z @ 0x18007BFA4
 * Callers:
 *     ??_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z @ 0x1800305B0 (--_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z.c)
 *     ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z @ 0x180092098 (-Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CCpuClipAntialiasSinkContext *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 160);
}
