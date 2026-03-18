/*
 * XREFs of ?GetAdapterLuid@CRenderTargetBitmap@@UEBA?AU_LUID@@XZ @ 0x1800E90DC
 * Callers:
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1801227A0 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AU_LUID@@XZ @ 0x180123460 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@7EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA?AU_LUID@@XZ @ 0x1801238E0 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AU_LUID@@XZ @ 0x180123CA0 (-GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
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
