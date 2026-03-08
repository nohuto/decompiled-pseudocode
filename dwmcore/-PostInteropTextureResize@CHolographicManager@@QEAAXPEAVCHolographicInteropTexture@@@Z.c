/*
 * XREFs of ?PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A2528
 * Callers:
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802A74D0 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::PostInteropTextureResize(
        CHolographicInteropTaskQueue **this,
        struct CHolographicInteropTexture *a2)
{
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(
        this[6],
        4u,
        (struct IUnknown *)(((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
