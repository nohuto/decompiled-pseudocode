/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x180054E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800561B8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

CDrawListPolygonBuilder *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(
        CDrawListPolygonBuilder *lpMem,
        char a2,
        unsigned int a3)
{
  int Current; // eax
  struct CThreadContext *v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v8; // [rsp+40h] [rbp+18h] BYREF

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(lpMem, (const struct D2D1_BEZIER_SEGMENT *)0x1A8, a3);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v8);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v5 = v8;
      if ( *((_DWORD *)v8 + 27) >= *((_DWORD *)v8 + 26) )
      {
        operator delete(lpMem);
      }
      else
      {
        *(_QWORD *)lpMem = *((_QWORD *)v8 + 14);
        ++*((_DWORD *)v5 + 27);
        *((_QWORD *)v5 + 14) = lpMem;
      }
    }
  }
  return lpMem;
}
