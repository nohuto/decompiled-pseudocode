/*
 * XREFs of ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18022C4F0
 * Callers:
 *     ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18022BE34 (-CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z.c)
 *     ?GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022C29C (-GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18022C3F4 (-GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x18022C568 (-ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_BASICSTATEUPDATE@@@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x18022C738 (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTCOUNTUPDATE@@.c)
 *     ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x18022C90C (-ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTUPDATE@@@Z.c)
 *     ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x18022CB84 (-ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_STARTPOINTUPDATE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DInk::GetID2D1InkAndInkStyle(CD2DInk *this, struct ID2D1Ink **a2, struct ID2D1InkStyle **a3)
{
  __int64 v6; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 8LL))(*((_QWORD *)this + 10));
  v6 = *((_QWORD *)this + 11);
  *a2 = (struct ID2D1Ink *)*((_QWORD *)this + 10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *a3 = (struct ID2D1InkStyle *)*((_QWORD *)this + 11);
  return 0LL;
}
