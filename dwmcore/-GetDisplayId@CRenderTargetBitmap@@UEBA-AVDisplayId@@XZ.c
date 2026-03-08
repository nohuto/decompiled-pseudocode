/*
 * XREFs of ?GetDisplayId@CRenderTargetBitmap@@UEBA?AVDisplayId@@XZ @ 0x1800DF318
 * Callers:
 *     ?GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA?AVDisplayId@@XZ @ 0x18011E670 (-GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AVDisplayId@@XZ @ 0x18011F330 (-GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@7EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA?AVDisplayId@@XZ @ 0x18011F810 (-GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AVDisplayId@@XZ @ 0x18011FB70 (-GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CRenderTargetBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a1 - 104);
  if ( v3 )
  {
    v4 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 16LL);
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 8LL))(v4, a2);
  }
  else
  {
    *a2 = DisplayId::Invalid;
  }
  return a2;
}
