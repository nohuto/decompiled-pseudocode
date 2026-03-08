/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x1800DE8B0
 * Callers:
 *     ?IsHardwareProtected@CD2DBitmap@@$4PPPPPPPM@LA@EBA_NXZ @ 0x18011C090 (-IsHardwareProtected@CD2DBitmap@@$4PPPPPPPM@LA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@$4PPPPPPPM@BAI@EBA_NXZ @ 0x18011F5F0 (-IsHardwareProtected@CD2DBitmap@@$4PPPPPPPM@BAI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DBitmap::IsHardwareProtected(CD2DBitmap *this)
{
  return (*((_DWORD *)this + 24) & 0x80000) != 0;
}
