/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801053C0
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@BAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1801185F0 (-GetSize@CRenderTarget@@$4PPPPPPPM@BAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIGA@EBA?AUD2D_SIZE_U@@XZ @ 0x180118610 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIGA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIIA@EBA?AUD2D_SIZE_U@@XZ @ 0x180118630 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIIA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIJA@EBA?AUD2D_SIZE_U@@XZ @ 0x180118650 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIJA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUD2D_SIZE_U@@XZ @ 0x180118670 (-GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HIA@EBA?AUD2D_SIZE_U@@XZ @ 0x180118690 (-GetSize@CRenderTarget@@$4PPPPPPPM@HIA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1801194B0 (-GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x1801195B0 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1801196D0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUD2D_SIZE_U@@XZ @ 0x180119810 (-GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011A3D0 (-GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 11);
  return (struct D2D_SIZE_U)a2;
}
