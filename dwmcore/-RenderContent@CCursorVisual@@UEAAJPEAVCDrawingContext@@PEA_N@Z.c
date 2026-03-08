/*
 * XREFs of ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180225690
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000EFB4 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18000EFB4.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001ABD0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800C3320 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___ @ 0x180225394 (gsl--final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___--_final_action__lambda_f5980df7b8a.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x1802255C4 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802768A4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 */

__int64 __fastcall CCursorVisual::RenderContent(CCursorState **this, struct CDrawingContext *a2, bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CCursorState *v8; // rcx
  char v9; // r8
  __int64 **v10; // r15
  __int64 v11; // r12
  __int64 *v12; // rbx
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // rax
  __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+48h] [rbp-19h] BYREF
  char v23; // [rsp+58h] [rbp-9h]
  _DWORD v24[3]; // [rsp+60h] [rbp-1h] BYREF
  int v25; // [rsp+6Ch] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  char v27; // [rsp+E0h] [rbp+7Fh] BYREF

  v5 = CVisual::RenderContent((CVisual *)this, a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = this[90];
    v9 = 0;
    v22[0] = &v27;
    v27 = 0;
    v22[1] = a2;
    v23 = 1;
    if ( v8 )
    {
      v10 = (__int64 **)*((_QWORD *)v8 + 31);
      v11 = *((_QWORD *)this[2] + 76);
      v12 = *v10;
      while ( v12 != (__int64 *)v10 )
      {
        if ( *((_BYTE *)v12 + 32) )
        {
          if ( !v9 )
          {
            v24[0] = 4;
            v25 = 2;
            v13 = CDrawingContext::PushRenderOptionsInternal((__int64)a2, 0LL, (const struct MilRenderOptions *)v24, 1);
            v14 = v13;
            if ( v13 < 0 )
            {
              v20 = 149LL;
LABEL_34:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v20,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
                (const char *)(unsigned int)v13);
              gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___((__int64)v22);
              return v14;
            }
            v27 = 1;
          }
        }
        else if ( v9 )
        {
          CDrawingContext::PopRenderOptionsInternal(a2, 1);
          v27 = 0;
        }
        v15 = v11 - v12[2];
        if ( v15 < 0 )
        {
          v17 = v15 & 1 | ((unsigned __int64)(v11 - v12[2]) >> 1);
          v16 = (float)(int)v17 + (float)(int)v17;
        }
        else
        {
          v16 = (float)(int)v15;
        }
        v18 = *((_QWORD *)this[90] + 33);
        if ( ((5 * v18) & 0x4000000000000000LL) != 0 )
          v19 = (float)(int)((unsigned __int64)(10 * v18) >> 1) + (float)(int)((unsigned __int64)(10 * v18) >> 1);
        else
          v19 = (float)(10 * v18);
        v13 = CDrawingContext::DrawBitmapRealization(
                a2,
                (struct IBitmapRealization *)v12[3],
                (struct MilRectF *)((char *)v12 + 36),
                (struct MILMatrix3x2 *)((char *)v12 + 52),
                0,
                0,
                COERCE_INT(1.0 - (float)(v16 / v19)));
        v14 = v13;
        if ( v13 < 0 )
        {
          v20 = 167LL;
          goto LABEL_34;
        }
        v12 = (__int64 *)*v12;
        v9 = v27;
      }
      if ( CCursorVisual::IsVisible((CCursorVisual *)this) )
      {
        v21 = *((_QWORD *)a2 + 6);
        if ( !v21 || *(CCursorState ***)(v21 + 11032) != this )
        {
          if ( *((_BYTE *)this[90] + 72) )
          {
            if ( !v9 )
            {
              v24[0] = 4;
              v25 = 2;
              v13 = CDrawingContext::PushRenderOptionsInternal(
                      (__int64)a2,
                      0LL,
                      (const struct MilRenderOptions *)v24,
                      1);
              v14 = v13;
              if ( v13 < 0 )
              {
                v20 = 179LL;
                goto LABEL_34;
              }
              v27 = 1;
            }
          }
          else if ( v9 )
          {
            CDrawingContext::PopRenderOptionsInternal(a2, 1);
            v27 = 0;
          }
          CCursorState::EnsureCompositionResources(this[90]);
          v13 = CDrawingContext::DrawBitmapRealization(
                  a2,
                  *((struct IBitmapRealization **)this[90] + 14),
                  (CCursorState *)((char *)this[90] + 136),
                  (CCursorState *)((char *)this[90] + 152),
                  0,
                  0,
                  (int)FLOAT_1_0);
          v14 = v13;
          if ( v13 < 0 )
          {
            v20 = 195LL;
            goto LABEL_34;
          }
          v9 = v27;
          this[91] = (CCursorState *)*((_QWORD *)this[2] + 62);
        }
      }
    }
    if ( v9 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
