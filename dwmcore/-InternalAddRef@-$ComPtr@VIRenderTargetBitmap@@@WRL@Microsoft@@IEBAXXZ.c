/*
 * XREFs of ?InternalAddRef@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEBAXXZ @ 0x180103494
 * Callers:
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180024234 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A6564 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalAddRef(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_QWORD *)a1 + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return result;
}
