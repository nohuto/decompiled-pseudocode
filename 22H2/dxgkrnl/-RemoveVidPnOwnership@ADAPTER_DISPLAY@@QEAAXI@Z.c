/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E944C
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C004993C (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016A4FC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0195BF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BEA4C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02BEC54 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BEF88 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01727C4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C0194A88 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01A1EB0 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C02BC2F8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03D3808 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  DXGADAPTER **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  BLTQUEUE *v12; // rbx

  v4 = 4000LL * a2;
  v5 = a2;
  if ( !*(_QWORD *)(*((_QWORD *)this + 16) + v4 + 728) )
  {
    WdLogSingleEntry1(1LL, 202LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NULL != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwner",
      202LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 16) + v4 + 736) )
  {
    WdLogSingleEntry1(1LL, 203LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwnerType",
      203LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = (DXGADAPTER **)((char *)this + 16);
  v7 = *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 728);
  if ( *(_QWORD *)(v7 + 1880) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) && *((_DWORD *)*v6 + 50) == 1 )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*v6) )
    {
      v10 = *(_QWORD *)(v8 + v4 + 728);
      v11 = *(_QWORD *)(v10 + 1880);
      if ( v11 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v11 + 2920), a2);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v8 + v4 + 728) + 16LL),
        1 << a2,
        0LL,
        1 << a2,
        0);
    }
  }
  v9 = *((_QWORD *)this + 56);
  if ( v9 )
  {
    v12 = (BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 2920 * v5);
    BLTQUEUE::Flush(v12);
    BLTQUEUE::Reset(v12, 1u);
  }
  *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 728) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 752) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 16) + v4 + 736) = 0;
  *(_DWORD *)(*((_QWORD *)this + 16) + v4 + 740) = 0;
  *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 744) = 0LL;
  if ( *((_DWORD *)*v6 + 50) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 15), a2, 0LL, 0, 0, 1);
}
