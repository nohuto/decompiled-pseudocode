__int64 __fastcall CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(CLinearGradientLegacyMilBrush *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // r15d
  CLinearGradientBrush *v4; // rax
  struct CComposition **v5; // r14
  CLinearGradientBrush *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  _DWORD *v9; // rdx
  struct CComposition *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  struct CComposition *v13; // rax
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rdi
  struct CResource ***v24; // rsi
  gsl::details *v25; // rcx
  unsigned int v26; // [rsp+20h] [rbp-30h]
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]
  __int64 v29; // [rsp+80h] [rbp+30h] BYREF

  v1 = (__int64 *)((char *)this + 192);
  v3 = 0;
  if ( *((_QWORD *)this + 24) )
    return v3;
  v4 = (CLinearGradientBrush *)DefaultHeap::AllocClear(0x120uLL);
  v5 = (struct CComposition **)((char *)this + 16);
  if ( v4 )
    v6 = CLinearGradientBrush::CLinearGradientBrush(v4, *v5);
  else
    v6 = 0LL;
  wil::com_ptr_t<CLinearGradientBrush,wil::err_returncode_policy>::operator=(v1, (__int64)v6);
  if ( !*v1 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x71u, 0LL);
    v8 = (__int64 *)((char *)this + 200);
LABEL_18:
    v15 = *v1;
    *v1 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = *v8;
    *v8 = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v3;
  }
  v9 = DefaultHeap::AllocClear(0x58uLL);
  if ( v9 )
  {
    v10 = *v5;
    v9[2] = 0;
    *((_QWORD *)v9 + 2) = v10;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    v9[8] = 0;
    *(_QWORD *)v9 = &CColorGradientStop::`vftable';
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    v9[20] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v8 = (__int64 *)((char *)this + 200);
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 25, (__int64)v9);
  if ( !*((_QWORD *)this + 25) )
  {
    v26 = 115;
LABEL_17:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, v26, 0LL);
    goto LABEL_18;
  }
  v12 = DefaultHeap::AllocClear(0x58uLL);
  if ( v12 )
  {
    v13 = *v5;
    v12[2] = 0;
    *((_QWORD *)v12 + 2) = v13;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 5) = 0LL;
    v12[8] = 0;
    *(_QWORD *)v12 = &CColorGradientStop::`vftable';
    *((_QWORD *)v12 + 8) = 0LL;
    *((_QWORD *)v12 + 9) = 0LL;
    v12[20] = 0;
  }
  else
  {
    v12 = 0LL;
  }
  v14 = (__int64 *)((char *)this + 208);
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 26, (__int64)v12);
  if ( !*((_QWORD *)this + 26) )
  {
    v26 = 117;
    goto LABEL_17;
  }
  v29 = *v8;
  v28 = 0LL;
  v27 = 0LL;
  std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v27, 0LL, &v29);
  v19 = *((_QWORD *)&v27 + 1);
  v20 = v28;
  v21 = *v14;
  v29 = *v14;
  if ( *((_QWORD *)&v27 + 1) == v28 )
  {
    std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v27, *((_BYTE **)&v27 + 1), &v29);
    v22 = *((_QWORD *)&v27 + 1);
    v20 = v28;
  }
  else
  {
    **((_QWORD **)&v27 + 1) = v21;
    v22 = v19 + 8;
  }
  v23 = (void *)v27;
  v24 = (struct CResource ***)*v1;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v27, (int)((v22 - (__int64)v27) >> 3));
  *((_QWORD *)&v27 + 1) = v23;
  if ( (_QWORD)v27 == -1LL || !v23 && (_QWORD)v27 )
  {
    gsl::details::terminate(v25);
    JUMPOUT(0x18021B81ELL);
  }
  CGradientBrush::SetStops(v24, (__int64 *)&v27, 0);
  if ( v23 )
    std::_Deallocate<16,0>(v23, (v20 - (_QWORD)v23) & 0xFFFFFFFFFFFFFFF8uLL);
  return v3;
}
