/*
 * XREFs of ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800B7014
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000D640 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180097240 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1800975E0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020250 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A9A8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::Update(
        CDesktopThumbnailCVIVisual *this,
        const struct tagRECT *a2,
        double a3)
{
  LONG v5; // edx
  LONG v6; // eax
  int v7; // r8d
  __int64 v8; // rax
  struct tagPOINT v9; // [rsp+30h] [rbp+8h] BYREF

  CVisual::SetOpacity(this, a3);
  v9.x = a2->left;
  v9.y = a2->top;
  CVisual::SetOffset((struct tagPOINT *)this, &v9);
  v5 = 0;
  v6 = 0;
  v7 = a2->bottom - a2->top;
  if ( a2->right - a2->left >= 0 )
    v6 = a2->right - a2->left;
  v9.x = v6;
  v8 = *(_QWORD *)this;
  if ( v7 >= 0 )
    v5 = v7;
  v9.y = v5;
  (*(void (__fastcall **)(CDesktopThumbnailCVIVisual *, struct tagPOINT *))(v8 + 96))(this, &v9);
  *((_BYTE *)this + 336) = 1;
  CDesktopThumbnailCVIVisual::SetDirtyFlags(this, 4096);
}
