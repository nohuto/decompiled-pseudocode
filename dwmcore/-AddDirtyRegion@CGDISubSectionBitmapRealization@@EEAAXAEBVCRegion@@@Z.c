/*
 * XREFs of ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AD49C
 * Callers:
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@$0PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x18011DE50 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@$0PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180045FE0 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800462A8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1800E19B0 (-AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x1801AF32C (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGDISubSectionBitmapRealization::AddDirtyRegion(struct tagRECT *this, int **a2)
{
  int v3; // eax
  int v4; // eax
  FastRegion::Internal::CRgnData *v5; // [rsp+20h] [rbp-59h] BYREF
  int v6; // [rsp+28h] [rbp-51h] BYREF
  void *v7[10]; // [rsp+70h] [rbp-9h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v6 = 0;
  v5 = (FastRegion::Internal::CRgnData *)&v6;
  v3 = FastRegion::CRegion::Copy((int **)&v5, a2);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT(v3, retaddr);
  CRegion::CRegion((CRegion *)v7, this - 6);
  v4 = FastRegion::CRegion::Intersect(&v5, (const struct FastRegion::Internal::CRgnData **)v7);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT(v4, retaddr);
  if ( *(_DWORD *)v5 )
  {
    FastRegion::Internal::CRgnData::Offset(v5, -this[-6].left, -this[-6].top);
    if ( *(_DWORD *)v5 )
      CBitmapRealization::AddDirtyRegion((CBitmapRealization *)&this[-9], (const struct CRegion *)&v5);
  }
  FastRegion::CRegion::FreeMemory(v7);
  FastRegion::CRegion::FreeMemory((void **)&v5);
}
