/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800E25A4
 * Callers:
 *     ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z @ 0x1800E256C (-AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1800E2580 (-AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1801358F0 (-AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CWICBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802B1310 (-AddDirtyRegion@CWICBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802B31DC (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1802B4BE4 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047C6C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CD2DBitmapCache::AddInvalidRegion(
        CD2DBitmapCache *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v8 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)(v4 + 48), a2);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
  }
  v5 = *((_QWORD *)this + 6);
  v6 = *((_QWORD *)this + 7);
  while ( v5 != v6 )
  {
    v7 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) + 264LL),
           a2);
    if ( v7 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v7, retaddr);
    v5 += 8LL;
  }
}
