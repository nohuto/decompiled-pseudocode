/*
 * XREFs of ?IsPrimaryResource@CD2DResource@@UEBA_NXZ @ 0x180107758
 * Callers:
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011AC50 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x18011BC10 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x18011BD10 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ @ 0x18011C0B0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ @ 0x18011C390 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ @ 0x18011F610 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsPrimaryResource(CD2DResource *this)
{
  return *((_BYTE *)this - 71);
}
