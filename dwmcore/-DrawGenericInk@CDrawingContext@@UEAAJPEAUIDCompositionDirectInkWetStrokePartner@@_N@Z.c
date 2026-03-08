/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x1801D0D00
 * Callers:
 *     <none>
 * Callees:
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x180013018 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18001303C (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x1802830C0 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        bool a3)
{
  unsigned __int64 v3; // r15
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  char *v11; // rsi
  int v12; // eax
  float v13; // xmm0_4
  int v14; // ecx
  enum D2D1_PRIMITIVE_BLEND v15; // r8d
  int v16; // ecx
  enum D2D1_PRIMITIVE_BLEND v18; // [rsp+20h] [rbp-60h]
  CDrawingContext *v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+58h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]

  v19 = 0LL;
  v3 = (unsigned __int64)this + 8;
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 1))((char *)this + 8) )
  {
    v8 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147467263, 0x2FAu, 0LL);
    goto LABEL_22;
  }
  if ( CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 880)) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(*(_QWORD *)a2 + 32LL))(
           a2,
           &v20);
    v8 = v9;
    if ( v9 < 0 )
    {
      v18 = 770;
      goto LABEL_21;
    }
    v22 = 0;
    v11 = (char *)this - 16;
    v23 = 0;
    v21 = v20;
    v9 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter((__int64 *)&v19, (__int64)this - 16, (__int64)&v21, 0LL);
    v8 = v9;
    if ( v9 < 0 )
    {
      v18 = 772;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v18, 0LL);
      goto LABEL_22;
    }
  }
  else
  {
    v11 = (char *)this - 16;
  }
  v9 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 112LL))(this);
  v8 = v9;
  if ( v9 < 0 )
  {
    v18 = D2D1_PRIMITIVE_BLEND_MAX|D2D1_PRIMITIVE_BLEND_ADD|0x300;
    goto LABEL_21;
  }
  v12 = *((_DWORD *)this + 808);
  if ( v12 )
    v13 = *(float *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v12 - 1));
  else
    v13 = *(float *)&FLOAT_1_0;
  v14 = *((_DWORD *)this + 81);
  v15 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  if ( v14 )
  {
    v16 = v14 - 1;
    if ( v16 )
    {
      if ( v16 == 3 )
        v15 = D2D1_PRIMITIVE_BLEND_MIN;
    }
    else
    {
      v15 = D2D1_PRIMITIVE_BLEND_COPY;
    }
  }
  v9 = CD2DContext::DrawGenericInk(
         (CD2DContext *)(*((_QWORD *)this + 3) + 16LL),
         (const struct ID2DContextOwner *)(v3 & -(__int64)(v11 != 0LL)),
         a2,
         (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 80) != 0),
         v15,
         v13,
         a3);
  v8 = v9;
  if ( v9 < 0 )
  {
    v18 = 782;
    goto LABEL_21;
  }
LABEL_22:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v19);
  return v8;
}
