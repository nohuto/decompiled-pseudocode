/*
 * XREFs of ?GetAdapterLuid@CD2DResource@@UEBA?AU_LUID@@XZ @ 0x1800D7698
 * Callers:
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011ABF0 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BA@EBA?AU_LUID@@XZ @ 0x18011BBB0 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BA@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@7EBA?AU_LUID@@XZ @ 0x18011BCB0 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@7EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@KI@EBA?AU_LUID@@XZ @ 0x18011BF90 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@KI@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@NA@EBA?AU_LUID@@XZ @ 0x18011C210 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@NA@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BAA@EBA?AU_LUID@@XZ @ 0x18011F4F0 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BAA@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CD2DResource::GetAdapterLuid(CD2DResource *this, _QWORD *a2)
{
  char *v3; // rcx
  __int64 v4; // rcx
  struct _LUID result; // rax

  v3 = (char *)this + *(int *)(*((_QWORD *)this - 11) + 8LL) - 88;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3) + 896);
  result = (struct _LUID)a2;
  *a2 = v4;
  return result;
}
