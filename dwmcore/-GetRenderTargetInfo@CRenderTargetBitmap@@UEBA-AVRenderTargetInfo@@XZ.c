/*
 * XREFs of ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800F3120
 * Callers:
 *     ?GetRenderTargetInfo@CStereoRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1802B2740 (-GetRenderTargetInfo@CStereoRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v2 )
  {
    (**v2)(v2, a2);
  }
  else
  {
    *(struct _LUID *)a2 = g_luidZero;
    *(_DWORD *)(a2 + 8) = DisplayId::Invalid;
    *(_QWORD *)(a2 + 12) = 0LL;
    *(_BYTE *)(a2 + 20) = 0;
  }
  return a2;
}
