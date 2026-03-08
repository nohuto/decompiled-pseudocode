/*
 * XREFs of ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@AEBVRenderTargetInfo@@PEAUPixelFormatInfo@@@Z @ 0x1801F8F30
 * Callers:
 *     ?SetStateOnDevice@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801FD390 (-SetStateOnDevice@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802B5050 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct ID3D11ShaderResourceView *__fastcall CDrawListBitmap::GetShaderResourceView(
        CDrawListBitmap *this,
        const struct RenderTargetInfo *a2,
        struct PixelFormatInfo *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-20h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 1);
  if ( !v3 )
    return 0LL;
  v5 = *v3;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, const struct RenderTargetInfo *, _QWORD **))(v5 + 48))(v3, a2, &v10) < 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
    return 0LL;
  }
  if ( a3 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)v10 + *(int *)(v10[1] + 12LL) + 8);
    v7 = (**v6)(v6, v11);
    *(_QWORD *)a3 = *(_QWORD *)v7;
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v7 + 8);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
  return (struct ID3D11ShaderResourceView *)v8;
}
