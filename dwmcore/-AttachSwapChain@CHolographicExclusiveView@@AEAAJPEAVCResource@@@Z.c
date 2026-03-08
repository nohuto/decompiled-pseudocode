/*
 * XREFs of ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x1802A4E38
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1802A5480 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802A1774 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::AttachSwapChain(RTL_SRWLOCK *this, struct CResource *a2)
{
  unsigned int v2; // esi
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  CHolographicInteropTaskQueue **Ptr; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = this + 51;
    AcquireSRWLockExclusive(this + 51);
    this[11].Ptr = a2;
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x185u, 0LL);
      ReleaseSRWLockExclusive(v5);
      this[11].Ptr = 0LL;
    }
    else
    {
      Ptr = (CHolographicInteropTaskQueue **)this[8].Ptr;
      if ( Ptr )
        CHolographicManager::AttachExclusiveSwapChain(Ptr, (struct IUnknown *)this);
      ReleaseSRWLockExclusive(v5);
    }
  }
  return v2;
}
