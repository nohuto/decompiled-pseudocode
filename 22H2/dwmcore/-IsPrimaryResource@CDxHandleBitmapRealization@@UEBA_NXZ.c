/*
 * XREFs of ?IsPrimaryResource@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802B1264
 * Callers:
 *     ?IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801224A0 (-IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA_NXZ @ 0x1801224C0 (-IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NXZ @ 0x180122B40 (-IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NXZ @ 0x180122DC0 (-IsPrimaryResource@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsPrimaryResource(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this - 14);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 33) != 0;
  return result;
}
