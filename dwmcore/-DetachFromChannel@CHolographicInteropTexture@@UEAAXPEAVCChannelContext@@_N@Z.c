/*
 * XREFs of ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A7340
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A2AE8 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ??$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z @ 0x1802A699C (--$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7F3C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1802A80EC (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

void __fastcall CHolographicInteropTexture::DetachFromChannel(
        CHolographicInteropTexture *this,
        CAnimationLoggingManager **a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 11);
  if ( v3 )
    CHolographicManager::RemoveInteropTexture(v3, this);
  CHolographicInteropTexture::ReleaseVisualTree(this);
  CHolographicInteropTexture::ReleaseResources(this);
  ReleaseInterface<CVisual>((__int64 *)this + 13);
  CResource::DetachFromChannel(this, a2);
}
