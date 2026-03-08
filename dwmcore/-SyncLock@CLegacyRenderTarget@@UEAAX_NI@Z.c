/*
 * XREFs of ?SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z @ 0x1801E4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoesIntersect@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E8724 (-DoesIntersect@CDirtyRegion@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z @ 0x1801DB0B8 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z.c)
 */

void __fastcall CLegacyRenderTarget::SyncLock(CLegacyRenderTarget *this, char a2, unsigned int a3)
{
  char v4; // al

  if ( (!*((_BYTE *)this + 18558) || a2)
    && a3 > *((_DWORD *)this + 4587)
    && (a2
     || *((_BYTE *)this + 18557)
     || *((_BYTE *)this + 18556)
     || CDirtyRegion::DoesIntersect(*((_QWORD *)this + 3) + 104LL, (float *)this + 4507)) )
  {
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 240LL))((char *)this - 144);
    if ( (int)COverlayContext::SyncLock(
                (CLegacyRenderTarget *)((char *)this + 56),
                *((struct IOverlaySwapChain **)this + 5),
                *((_DWORD *)this + 4588) + 1 + *((_DWORD *)this + 4587),
                v4) >= 0 )
    {
      ++*((_DWORD *)this + 4586);
      ++*((_DWORD *)this + 4587);
    }
  }
}
