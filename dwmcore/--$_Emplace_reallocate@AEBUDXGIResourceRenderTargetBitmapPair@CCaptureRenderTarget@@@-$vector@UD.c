_QWORD *__fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + 24 * v7);
  *v14 = *a3;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    v14 + 1,
    a3[1]);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    v14 + 2,
    a3[2]);
  v15 = a1[1];
  v16 = (_QWORD *)v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(v17, a2, v13);
    v15 = a1[1];
    v16 = v14 + 3;
    v17 = a2;
  }
  std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(v17, v15, v16);
  std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(a1, v13, v9, v4);
  return v14;
}
