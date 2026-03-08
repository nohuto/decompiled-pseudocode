/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801D0F00
 * Callers:
 *     <none>
 * Callees:
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x180013018 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18001303C (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180283280 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // r13
  unsigned __int8 (__fastcall **v5)(char *); // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // rsi
  int v15; // eax
  float v16; // xmm1_4
  enum D2D1_PRIMITIVE_BLEND v17; // r8d
  int v18; // ecx
  __int64 v19; // r10
  int v20; // ecx
  unsigned int v22; // [rsp+20h] [rbp-59h]
  CDrawingContext *v23; // [rsp+40h] [rbp-39h] BYREF
  __int128 v24; // [rsp+48h] [rbp-31h] BYREF
  __int128 v25; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+68h] [rbp-11h]
  int v27; // [rsp+6Ch] [rbp-Dh]
  struct _D3DCOLORVALUE v28; // [rsp+70h] [rbp-9h] BYREF

  v4 = (unsigned __int64)this + 8;
  v5 = (unsigned __int8 (__fastcall **)(char *))*((_QWORD *)this + 1);
  v23 = 0LL;
  if ( (*v5)((char *)this + 8) )
  {
    v11 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467263, 0x2D1u, 0LL);
    goto LABEL_22;
  }
  if ( CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 880)) )
  {
    v12 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)a2 + 104LL))(
            a2,
            a4,
            0LL,
            &v24);
    v11 = v12;
    if ( v12 < 0 )
    {
      v22 = 729;
      goto LABEL_21;
    }
    v26 = 0;
    v27 = 0;
    v14 = (char *)this - 16;
    v25 = v24;
    v12 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter((__int64 *)&v23, (__int64)this - 16, (__int64)&v25, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      v22 = 731;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v22, 0LL);
      goto LABEL_22;
    }
  }
  else
  {
    v14 = (char *)this - 16;
  }
  v12 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 112LL))(this);
  v11 = v12;
  if ( v12 < 0 )
  {
    v22 = 734;
    goto LABEL_21;
  }
  v15 = *((_DWORD *)this + 808);
  *(struct _D3DCOLORVALUE *)&v28.r = *(struct _D3DCOLORVALUE *)&a3->r;
  if ( v15 )
    v16 = *(float *)(*((_QWORD *)this + 406) + 4LL * (unsigned int)(v15 - 1));
  else
    v16 = *(float *)&FLOAT_1_0;
  v17 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  v18 = *((_DWORD *)this + 81);
  v19 = *((_QWORD *)this + 3);
  v28.a = v28.a * v16;
  if ( v18 )
  {
    v20 = v18 - 1;
    if ( v20 )
    {
      if ( v20 == 3 )
        v17 = D2D1_PRIMITIVE_BLEND_MIN;
    }
    else
    {
      v17 = D2D1_PRIMITIVE_BLEND_COPY;
    }
  }
  v12 = CD2DContext::DrawInk(
          (CD2DContext *)(v19 + 16),
          (const struct ID2DContextOwner *)(v4 & -(__int64)(v14 != 0LL)),
          a2,
          &v28,
          a4,
          (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 80) != 0),
          v17);
  v11 = v12;
  if ( v12 < 0 )
  {
    v22 = 745;
    goto LABEL_21;
  }
LABEL_22:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v23);
  return v11;
}
