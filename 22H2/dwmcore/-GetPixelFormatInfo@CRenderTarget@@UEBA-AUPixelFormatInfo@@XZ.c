/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180105DE8
 * Callers:
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@BAA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C640 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@BAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C660 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HIA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C680 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HIA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C6A0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D620 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D740 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D840 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D980 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUPixelFormatInfo@@XZ @ 0x18011E540 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUPixelFormatInfo@@XZ.c)
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
