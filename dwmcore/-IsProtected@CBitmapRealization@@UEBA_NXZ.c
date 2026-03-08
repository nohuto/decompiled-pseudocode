/*
 * XREFs of ?IsProtected@CBitmapRealization@@UEBA_NXZ @ 0x1800E0804
 * Callers:
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011DB50 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ @ 0x18011E330 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ @ 0x18011E350 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ @ 0x18011E9B0 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ @ 0x18011EC30 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@FA@EBA_NXZ @ 0x18011F130 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@FA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsProtected(CBitmapRealization *this)
{
  return (*((_DWORD *)this - 36) & 2) != 0;
}
