/*
 * XREFs of ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1802A5480
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x1802A4E38 (-AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802A5688 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessSetSwapChain(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN *a3)
{
  unsigned int v6; // edx
  struct CResource *v7; // rbx
  struct CResource *ResourceWithoutType; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx

  if ( *((_BYTE *)this + 83) )
    return 2147942487LL;
  v6 = *((_DWORD *)a3 + 2);
  v7 = 0LL;
  if ( v6
    && (ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v6), (v7 = ResourceWithoutType) != 0LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
          ResourceWithoutType,
          42LL) )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x82u, 0LL);
  }
  else
  {
    CHolographicExclusiveView::ReleaseSwapChain(this);
    v11 = CHolographicExclusiveView::AttachSwapChain((RTL_SRWLOCK *)this, v7);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x89u, 0LL);
  }
  return v10;
}
