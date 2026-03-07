__int64 __fastcall CBitmapRenderStrategy::GetSwapChain(
        const struct CSurfaceBrush *a1,
        struct ISwapChainRealization **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 **); // rcx
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct ISwapChainRealization **); // rcx
  unsigned int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)a1 + 13);
  v11 = 0LL;
  (**v2)(v2, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v11);
  v4 = *v11;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 64))(v11, &v10) < 0 )
  {
    if ( v10 )
    {
      v8 = *(int *)(*(_QWORD *)(v10 + 8) + 4LL) + v10 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v11 )
    {
      v9 = (__int64)v11 + *(int *)(v11[1] + 4) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return 2147500034LL;
  }
  else
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct ISwapChainRealization **))(*(int *)(*(_QWORD *)(v10 + 8) + 4LL)
                                                                                   + v10
                                                                                   + 8);
    v6 = (**v5)(v5, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, a2);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
    return v6;
  }
}
