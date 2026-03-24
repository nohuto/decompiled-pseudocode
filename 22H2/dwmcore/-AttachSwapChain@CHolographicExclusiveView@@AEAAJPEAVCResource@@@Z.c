/*
 * XREFs of ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x180256BC8
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x180257190 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D9B0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x180252D74 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::AttachSwapChain(RTL_SRWLOCK *this, struct CResource *a2)
{
  int v2; // edi
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  CHolographicInteropTaskQueue **Ptr; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = this + 50;
    AcquireSRWLockExclusive(this + 50);
    this[10].Ptr = a2;
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x185u, 0LL);
    }
    else
    {
      Ptr = (CHolographicInteropTaskQueue **)this[7].Ptr;
      if ( Ptr )
        CHolographicManager::AttachExclusiveSwapChain(Ptr, (struct IUnknown *)this);
    }
    ReleaseSRWLockExclusive(v5);
    if ( v2 < 0 )
      this[10].Ptr = 0LL;
  }
  return (unsigned int)v2;
}
