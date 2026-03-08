/*
 * XREFs of ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019D38C
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18019BD9C (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019D9FC (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  int v4; // ecx
  unsigned int v5; // esi
  _QWORD *i; // rax
  int v8; // edx

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 <= 0 )
    return 0LL;
  v5 = 1;
  for ( i = *(_QWORD **)a1; *i != *a2; ++i )
  {
    if ( ++v3 >= v4 )
      return 0LL;
  }
  if ( v3 == -1 )
    return 0LL;
  if ( v3 < 0 || v3 + 1 > v4 )
  {
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8LL * v3));
    v8 = *(_DWORD *)(a1 + 8);
    if ( v3 + 1 != v8 )
      memmove_0((void *)(*(_QWORD *)a1 + 8LL * v3), (const void *)(*(_QWORD *)a1 + 8LL * v3 + 8), 8LL * (v8 - v3 - 1));
    --*(_DWORD *)(a1 + 8);
  }
  return v5;
}
