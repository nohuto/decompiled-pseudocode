/*
 * XREFs of ?InternalRelease@?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1802228EC
 * Callers:
 *     ??4?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@Z @ 0x180221D7C (--4-$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::InternalRelease(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 result; // rax
  volatile signed __int32 *v3; // rsi
  unsigned __int32 v4; // ebx

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    v3 = v1 + 2;
    v4 = _InterlockedDecrement(v1 + 2);
    if ( !v4 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 96LL))(v1);
      v4 = _InterlockedDecrement(v3);
      if ( !v4 )
      {
        --*v3;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 88LL))(v1, 1LL);
      }
    }
    return v4;
  }
  return result;
}
