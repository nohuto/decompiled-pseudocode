/*
 * XREFs of ?GetDevice@CDxHandleBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x1802ADA50
 * Callers:
 *     ?GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011E130 (-GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ @ 0x18011E150 (-GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBAPEAVCD3DDevice@@XZ @ 0x18011E8B0 (-GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBAPEAVCD3DDevice@@XZ @ 0x18011EB30 (-GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDxHandleBitmapRealization::GetDevice(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *((_QWORD *)this - 14);
  if ( !v1 )
    return 0LL;
  v2 = v1 + 16 + *(int *)(*(_QWORD *)(v1 + 16) + 8LL);
  return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
