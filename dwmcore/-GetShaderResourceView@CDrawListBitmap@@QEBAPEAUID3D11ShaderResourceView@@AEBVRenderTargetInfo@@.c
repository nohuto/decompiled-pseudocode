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
