/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166EB8
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C00488DC (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164F3C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0166DF0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02B9B2C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02B9D34 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BA068 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002CE8 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0176558 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C01C7244 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C02B73F8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03CEFC0 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  DXGADAPTER **v6; // rsi
  __int64 v7; // rdx
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  BLTQUEUE *v13; // rbx

  v4 = 4000LL * a2;
  v5 = a2;
  if ( !*(_QWORD *)(*((_QWORD *)this + 16) + v4 + 728) )
  {
    WdLogSingleEntry1(1LL, 201LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NULL != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwner",
      201LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 16) + v4 + 736) )
  {
    WdLogSingleEntry1(1LL, 202LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwnerType",
      202LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = (DXGADAPTER **)((char *)this + 16);
  v7 = *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 728);
  if ( *(_QWORD *)(v7 + 1880) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) && *((_DWORD *)*v6 + 50) == 1 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*v6);
    v9 = *((_QWORD *)this + 16);
    if ( IsLegacyDisplayStateSynchronization )
    {
      v11 = *(_QWORD *)(v9 + v4 + 728);
      v12 = *(_QWORD *)(v11 + 1880);
      if ( v12 == *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v12 + 2920), a2);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v9 + v4 + 728) + 16LL),
        1 << a2,
        0,
        1 << a2,
        0);
    }
  }
  v10 = *((_QWORD *)this + 56);
  if ( v10 )
  {
    v13 = (BLTQUEUE *)(*(_QWORD *)(v10 + 8) + 2920 * v5);
    BLTQUEUE::Flush(v13);
    BLTQUEUE::Reset(v13, 1u);
  }
  *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 728) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 752) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 16) + v4 + 736) = 0;
  *(_DWORD *)(*((_QWORD *)this + 16) + v4 + 740) = 0;
  *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 744) = 0LL;
  if ( *((_DWORD *)*v6 + 50) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 15), a2, 0LL, 0LL, 0, 1);
}
