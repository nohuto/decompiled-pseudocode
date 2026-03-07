void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Reset(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rbp
  _QWORD *i; // r14
  unsigned int v8; // edi
  __int64 v9; // r8
  struct CComposition *v10; // rbx
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 197) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(this, 0);
  if ( *((_BYTE *)this + 198) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay(this);
  *((_BYTE *)this + 194) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  if ( (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3 )
    CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, 0);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v4 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v4);
  v5 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(struct _LUID *)((char *)this + 36) = g_luidZero;
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  *((_BYTE *)this + 199) = 1;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 11) = 0;
  v6 = (_QWORD *)*((_QWORD *)this + 10);
  for ( i = (_QWORD *)*((_QWORD *)this + 9); i != v6; ++i )
  {
    wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>(
      &v17,
      *i);
    v12 = (_QWORD *)(*(int *)(*(_QWORD *)(v17 + 8) + 8LL) + v17 + 8);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*v12 + 48LL))(
      v12,
      (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL),
      *v12,
      -*(_QWORD *)this);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  }
  if ( !a2 )
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear((char *)this + 72);
  *((_BYTE *)this + 96) = a2;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 34) = 0;
  v8 = 0;
  *(_OWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  v9 = *(_QWORD *)this;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 195) = 0;
  v10 = g_pComposition;
  v11 = *((_DWORD *)g_pComposition + 196);
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)g_pComposition + 95) + 8LL * v8);
      if ( v9 == v13 )
        break;
      if ( ++v8 >= v11 )
        return;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v15 = *((_DWORD *)v10 + 196);
    if ( v8 >= v15 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x21Fu, 0LL);
    }
    else
    {
      v16 = v15 - 1;
      if ( v8 < (unsigned int)v16 )
        *(_QWORD *)(*((_QWORD *)v10 + 95) + 8LL * v8) = *(_QWORD *)(*((_QWORD *)v10 + 95) + 8 * v16);
      --*((_DWORD *)v10 + 196);
    }
  }
}
