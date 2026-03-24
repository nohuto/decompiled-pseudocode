/*
 * XREFs of ?IsProtected@CBitmapRealization@@UEBA_NXZ @ 0x1800C5590
 * Callers:
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F7FD0 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ @ 0x1800F8410 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ @ 0x1800F8420 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ @ 0x1800F8690 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ @ 0x1800F8850 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsProtected(CBitmapRealization *this)
{
  return (*((_DWORD *)this - 33) & 2) != 0;
}
