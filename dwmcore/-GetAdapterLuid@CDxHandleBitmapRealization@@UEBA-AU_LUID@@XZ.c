/*
 * XREFs of ?GetAdapterLuid@CDxHandleBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1800F45E4
 * Callers:
 *     ?GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011E0B0 (-GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA?AU_LUID@@XZ @ 0x18011E0D0 (-GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA?AU_LUID@@XZ @ 0x18011E870 (-GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA?AU_LUID@@XZ @ 0x18011EAF0 (-GetAdapterLuid@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CDxHandleBitmapRealization::GetAdapterLuid(CDxHandleBitmapRealization *this, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *((_QWORD *)this - 14);
  if ( v3 )
  {
    v4 = v3 + 16 + *(int *)(*(_QWORD *)(v3 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 32LL))(v4, a2);
  }
  else
  {
    *a2 = *((_QWORD *)this - 29);
  }
  return (struct _LUID)a2;
}
