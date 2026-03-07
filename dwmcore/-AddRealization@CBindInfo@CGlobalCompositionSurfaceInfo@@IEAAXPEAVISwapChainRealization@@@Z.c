void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct ISwapChainRealization *a2)
{
  __int64 v3; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v5 = (_QWORD *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*v5 + 40LL))(
    v5,
    (v3 + 16) & -(__int64)(v3 != 0),
    *v5,
    -v3);
  wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>(
    &v9,
    a2);
  v6 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v6 == *((_QWORD **)this + 11) )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(
      (char *)this + 72,
      v6,
      &v9);
  }
  else
  {
    v8 = v9;
    v9 = 0LL;
    *v6 = v8;
    *((_QWORD *)this + 10) += 8LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
  if ( ((*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
  {
    v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
    *(_QWORD *)((char *)this + 36) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v7 + 32LL))(
                                                  v7,
                                                  &v9);
  }
}
