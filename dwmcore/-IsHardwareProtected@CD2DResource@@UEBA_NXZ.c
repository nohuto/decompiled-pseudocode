/*
 * XREFs of ?IsHardwareProtected@CD2DResource@@UEBA_NXZ @ 0x18010774C
 * Callers:
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011AC30 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x18011BBF0 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x18011BCF0 (-IsHardwareProtected@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsHardwareProtected(CD2DResource *this)
{
  return *((_BYTE *)this - 70);
}
