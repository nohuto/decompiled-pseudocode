/*
 * XREFs of ?AddDxBltRects@CGdiSpriteBitmap@@AEAAXPEBUtagRECT@@I@Z @ 0x18021A2F0
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18004523C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180041458 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18004591C (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180046020 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGdiSpriteBitmap::AddDxBltRects(CGdiSpriteBitmap *this, const struct tagRECT *a2, unsigned int a3)
{
  int v4; // eax
  int *v5; // [rsp+20h] [rbp-68h] BYREF
  int v6; // [rsp+28h] [rbp-60h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( a3 )
  {
    v6 = 0;
    v5 = &v6;
    v4 = CRegion::TryAddRectangles((struct FastRegion::Internal::CRgnData **)&v5, a2, a3);
    if ( v4 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
    CRegion::GetBoundingRect((CRegion *)&v5, (CGdiSpriteBitmap *)((char *)this + 336));
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v5, 1);
    FastRegion::CRegion::FreeMemory((void **)&v5);
  }
}
