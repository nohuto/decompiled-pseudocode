/*
 * XREFs of ?GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ @ 0x1800D3F84
 * Callers:
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011AC10 (-GetDevice@CD2DResource@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@BA@EBAPEAVCD3DDevice@@XZ @ 0x18011BBD0 (-GetDevice@CD2DResource@@$4PPPPPPPM@BA@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ @ 0x18011BCD0 (-GetDevice@CD2DResource@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@KI@EBAPEAVCD3DDevice@@XZ @ 0x18011BFD0 (-GetDevice@CD2DResource@@$4PPPPPPPM@KI@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@NA@EBAPEAVCD3DDevice@@XZ @ 0x18011C250 (-GetDevice@CD2DResource@@$4PPPPPPPM@NA@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CD2DResource@@$4PPPPPPPM@BAA@EBAPEAVCD3DDevice@@XZ @ 0x18011F530 (-GetDevice@CD2DResource@@$4PPPPPPPM@BAA@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CD2DResource::GetDevice(CD2DResource *this)
{
  return (struct CD3DDevice *)((*(_QWORD *)(*((_QWORD *)this - 10) + 24LL) - 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this - 10) + 24LL) != 0LL));
}
