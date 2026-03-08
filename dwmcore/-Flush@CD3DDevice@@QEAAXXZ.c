/*
 * XREFs of ?Flush@CD3DDevice@@QEAAXXZ @ 0x1801027C0
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x180109C00 (-Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801F6AF0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A0540 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::Flush(CD3DDevice *this)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 71);
  if ( v2 )
  {
    v3 = 29;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 70) + 888LL))(*((_QWORD *)this + 70));
  }
  *((_BYTE *)this + 1507) = 0;
}
