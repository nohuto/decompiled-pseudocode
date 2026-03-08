/*
 * XREFs of ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078D88
 * Callers:
 *     ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEAAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18001BBF0 (-Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEAAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV.c)
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8670 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180117910 (-Draw@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801180D0 (-Draw@CBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801180F0 (-Draw@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119BF0 (-Draw@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@FI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119D70 (-Draw@CBrush@@$4PPPPPPPM@FI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119E70 (-Draw@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119F90 (-Draw@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180222590 (-Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::Draw(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  char *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // [rsp+60h] [rbp+18h] BYREF

  width = a3->width;
  v16 = 0;
  if ( width > 0.0 && a3->height > 0.0 )
  {
    v9 = (char *)this - 112;
    if ( (*(unsigned __int8 (__fastcall **)(char *, struct CDrawingContext *, char *))(*((_QWORD *)this - 14) + 288LL))(
           (char *)this - 112,
           a2,
           &v16) )
    {
      if ( !v16 )
      {
        if ( *((_BYTE *)this - 32) )
        {
          if ( !*((_QWORD *)this - 5) )
          {
            v14 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v9 + 320LL))(v9, 0LL);
            v12 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180338CB8, 3u, v14, 0x6Bu, 0LL);
              return v12;
            }
          }
        }
        v10 = CContent::Draw((CBrush *)((char *)this - 16), a2, a3, a4);
        v12 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180338CB8, 3u, v10, 0x6Eu, 0LL);
          return v12;
        }
      }
    }
  }
  return 0;
}
