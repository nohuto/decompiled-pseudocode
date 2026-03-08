/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801052E8
 * Callers:
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@BAA@EBA?AUPixelFormatInfo@@XZ @ 0x180118490 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@BAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUPixelFormatInfo@@XZ @ 0x1801184B0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HIA@EBA?AUPixelFormatInfo@@XZ @ 0x1801184D0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HIA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUPixelFormatInfo@@XZ @ 0x1801184F0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUPixelFormatInfo@@XZ @ 0x180119470 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUPixelFormatInfo@@XZ @ 0x180119590 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUPixelFormatInfo@@XZ @ 0x180119690 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUPixelFormatInfo@@XZ @ 0x1801197D0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUPixelFormatInfo@@XZ @ 0x18011A390 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 48);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 56);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
