/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180105EC0
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@BAA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C7A0 (-GetSize@CRenderTarget@@$4PPPPPPPM@BAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIGA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C7C0 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIGA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIIA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C7E0 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIIA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIJA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C800 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIJA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C820 (-GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HIA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C840 (-GetSize@CRenderTarget@@$4PPPPPPPM@HIA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D660 (-GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D760 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D880 (-GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D9C0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011E580 (-GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 11);
  return (struct D2D_SIZE_U)a2;
}
