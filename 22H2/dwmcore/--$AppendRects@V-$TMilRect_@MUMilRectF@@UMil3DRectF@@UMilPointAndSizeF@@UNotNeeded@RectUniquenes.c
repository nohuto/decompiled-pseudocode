/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009BAEC
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180068150 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180084280 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180269300 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003A850 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B594 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B858 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        void **this,
        float *a2)
{
  int v2; // r11d
  int v3; // edi
  int v4; // r9d
  int v5; // r10d
  int v6; // eax
  void *lpMem; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v8[18]; // [rsp+38h] [rbp-71h] BYREF
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v8[0] = 0;
  lpMem = v8;
  v2 = (int)*a2;
  v3 = (int)a2[2];
  v4 = (int)a2[1];
  v5 = (int)a2[3];
  if ( v2 >= v3 || v4 >= v5 )
  {
    v8[0] = 0;
  }
  else
  {
    v8[0] = 2;
    v8[7] = v2;
    v8[8] = v3;
    v8[1] = v2;
    v8[4] = 16;
    v8[2] = v3;
    v8[3] = v4;
    v8[6] = 16;
    v8[5] = v5;
  }
  v6 = FastRegion::CRegion::Union(this, (const struct FastRegion::Internal::CRgnData **)&lpMem);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
  if ( v8 != lpMem )
    operator delete(lpMem);
}
