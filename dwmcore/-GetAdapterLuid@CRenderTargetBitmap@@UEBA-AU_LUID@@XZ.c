/*
 * XREFs of ?GetAdapterLuid@CRenderTargetBitmap@@UEBA?AU_LUID@@XZ @ 0x1800E850C
 * Callers:
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011E5F0 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AU_LUID@@XZ @ 0x18011F2B0 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@7EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA?AU_LUID@@XZ @ 0x18011F730 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AU_LUID@@XZ @ 0x18011FAF0 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CRenderTargetBitmap::GetAdapterLuid(CRenderTargetBitmap *this, struct _LUID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *((_QWORD *)this - 7);
  if ( v3 )
  {
    v4 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)v4 + 32LL))(v4, a2);
  }
  else
  {
    *a2 = g_luidZero;
  }
  return (struct _LUID)a2;
}
