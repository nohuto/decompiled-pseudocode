/*
 * XREFs of ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D36A0
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AC10 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18007EBC8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1801CFF70 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1801F14D8 (-Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV-$TMilRect_@M.c)
 */

__int64 __fastcall CDrawingContext::PushLinearInterpolationLayer(CDrawingContext *this, __int128 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  int v6; // r9d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  CLinearInterpolationLayer *v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 5);
  v16 = 0LL;
  v5 = *((_QWORD *)this + 4);
  v6 = *(_DWORD *)(v3 + 928);
  v7 = *((_DWORD *)a2 + 2);
  v15 = *a2;
  if ( v6 < v7 )
    v7 = v6;
  DWORD2(v15) = v7;
  v8 = *((_DWORD *)a2 + 3);
  if ( v6 < v8 )
    v8 = v6;
  HIDWORD(v15) = v8;
  v9 = CLinearInterpolationLayer::Create(v5, &v15, a3, &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF22u, 0LL);
  }
  else
  {
    v12 = CDrawingContext::PushLayer(this, 0LL, v16, 1, 0);
    v11 = v12;
    if ( v12 >= 0 )
      return v11;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xF28u, 0LL);
  }
  if ( v16 )
    CLinearInterpolationLayer::`scalar deleting destructor'(v16, 1);
  return v11;
}
