/*
 * XREFs of ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x180272444
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A5B4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18004AC44 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 *     ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x18004ACD4 (-UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004AD58 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C96C (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A550 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093240 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x180088A0C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800895E0 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1802720D4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall DwmDbg::Backdrops::LogBrushEtwEvent(const char **a1, const void *a2, void **a3)
{
  char *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 CurrentFrameId; // [rsp+48h] [rbp-20h] BYREF
  const char *v11; // [rsp+50h] [rbp-18h] BYREF
  void *lpMem; // [rsp+58h] [rbp-10h] BYREF
  const char *v13; // [rsp+88h] [rbp+20h] BYREF

  if ( dword_1803E3760 )
  {
    if ( (unsigned int)dword_1803E3760 > 5 )
    {
      v13 = (const char *)*a3;
      v9 = *(const char **)DwmDbg::DbgString::DbgString((char **)&lpMem, "0x%p", a2);
      CurrentFrameId = GetCurrentFrameId();
      v11 = *a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v6,
        byte_18038210B,
        v7,
        v8,
        &v11,
        (__int64)&CurrentFrameId,
        &v9,
        &v13);
      if ( lpMem )
        operator delete(lpMem);
    }
    v5 = (char *)*a1;
  }
  else
  {
    v5 = (char *)*a1;
  }
  if ( v5 )
    operator delete(v5);
  if ( *a3 )
    operator delete(*a3);
}
