/*
 * XREFs of ?IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802ADAA0
 * Callers:
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011E2B0 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18011E2D0 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NXZ @ 0x18011E970 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NXZ @ 0x18011EBF0 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::IsHardwareProtected(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this - 14);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 96) + 16LL))(v1 + 96) != 0;
  return v2;
}
