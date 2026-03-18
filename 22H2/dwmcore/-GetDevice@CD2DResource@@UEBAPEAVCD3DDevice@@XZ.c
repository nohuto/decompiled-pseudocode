/*
 * XREFs of ?GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ @ 0x1800D4A34
 * Callers:
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011EDC0 (-GetDevice@CD2DResource@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@BA@EBAPEAVCD3DDevice@@XZ @ 0x18011FD80 (-GetDevice@CD2DResource@@$4PPPPPPPM@BA@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ @ 0x18011FE80 (-GetDevice@CD2DResource@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@KI@EBAPEAVCD3DDevice@@XZ @ 0x180120180 (-GetDevice@CD2DResource@@$4PPPPPPPM@KI@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@NA@EBAPEAVCD3DDevice@@XZ @ 0x180120400 (-GetDevice@CD2DResource@@$4PPPPPPPM@NA@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@BAA@EBAPEAVCD3DDevice@@XZ @ 0x1801236E0 (-GetDevice@CD2DResource@@$4PPPPPPPM@BAA@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CD2DResource::GetDevice(CD2DResource *this)
{
  return (struct CD3DDevice *)((*(_QWORD *)(*((_QWORD *)this - 10) + 24LL) - 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this - 10) + 24LL) != 0LL));
}
