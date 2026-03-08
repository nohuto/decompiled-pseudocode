/*
 * XREFs of ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x18004AB04
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004AB88 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F4560 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180098594 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18026ED14 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasWindowBackdropInputFlag(CVisual **this, unsigned __int8 a2)
{
  CVisual *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 != (((_BYTE)this[34] & 4) != 0) )
  {
    if ( dword_1803E0760 )
    {
      v5 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v7, "m_fHasWindowBackdropInput=%d", a2);
      v6 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v8, "Visual-HasWindowBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v6, this, v5);
    }
    v4 = this[11];
    if ( a2 )
    {
      if ( v4 )
        CVisual::PropagateBackdropUpdates(v4, 0, 1);
      *((_BYTE *)this + 272) |= 4u;
    }
    else
    {
      if ( v4 )
        CVisual::PropagateBackdropUpdates(v4, 0, -1);
      *((_BYTE *)this + 272) &= ~4u;
    }
  }
}
