/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x1800304E8
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18002E120 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x180030460 (--_GCPolygonBuilder@@MEAAPEAXI@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ??2CPolygonBuilder@@SAPEAX_K@Z @ 0x1800B2050 (--2CPolygonBuilder@@SAPEAX_K@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CPolygonBuilder *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 96);
}
