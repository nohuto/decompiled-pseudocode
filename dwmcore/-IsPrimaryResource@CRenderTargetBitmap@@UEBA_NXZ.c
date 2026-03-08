/*
 * XREFs of ?IsPrimaryResource@CRenderTargetBitmap@@UEBA_NXZ @ 0x1802ADF74
 * Callers:
 *     ?IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011E710 (-IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ @ 0x18011F3D0 (-IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18011F8D0 (-IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18011FC10 (-IsPrimaryResource@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::IsPrimaryResource(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v3; // rcx

  v1 = *((_QWORD *)this - 7);
  v2 = 0;
  if ( v1 )
  {
    v3 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL);
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) != 0;
  }
  return v2;
}
