/*
 * XREFs of ?SetStateOnDevice@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801FD390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@AEBVRenderTargetInfo@@PEAUPixelFormatInfo@@@Z @ 0x1801F8F30 (-GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@AEBVRenderTargetInfo@@.c)
 */

__int64 __fastcall CWARPDrawListEntry::SetStateOnDevice(
        CWARPDrawListEntry *this,
        const struct RenderTargetInfo **a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 7) )
  {
    v9[0] = CDrawListBitmap::GetShaderResourceView((CWARPDrawListEntry *)((char *)this + 48), a2[14], 0LL);
    v3 = 1;
  }
  if ( *((_QWORD *)this + 17) )
  {
    ShaderResourceView = CDrawListBitmap::GetShaderResourceView((CWARPDrawListEntry *)((char *)this + 128), a2[14], 0LL);
    v7 = v3++;
    v9[v7] = ShaderResourceView;
  }
  if ( v3 )
    (*(void (__fastcall **)(const struct RenderTargetInfo *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)a2[2] + 64LL))(
      a2[2],
      0LL,
      v3,
      v9);
  return 0LL;
}
