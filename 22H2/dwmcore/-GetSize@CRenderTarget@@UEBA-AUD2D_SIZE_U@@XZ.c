/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800E2060
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F4860 (-GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F4870 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F4890 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F48B0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F48D0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F48F0 (-GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5140 (-GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5210 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F52D0 (-GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F53B0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5610 (-GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F63B0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 13);
  return (struct D2D_SIZE_U)a2;
}
