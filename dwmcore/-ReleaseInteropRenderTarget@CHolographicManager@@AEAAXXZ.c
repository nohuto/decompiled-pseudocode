/*
 * XREFs of ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802A2630
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802A0B2C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802A0EE4 (--1CHolographicManager@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  struct CRenderTarget *v1; // rdx
  CHolographicInteropTaskQueue *v3; // rcx
  CResource *v4; // rcx

  v1 = (struct CRenderTarget *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 3) + 216LL), v1);
    v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v3 )
      CHolographicInteropTaskQueue::PostMessageW(v3, 0x15u, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (CResource *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      CResource::InternalRelease(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
}
