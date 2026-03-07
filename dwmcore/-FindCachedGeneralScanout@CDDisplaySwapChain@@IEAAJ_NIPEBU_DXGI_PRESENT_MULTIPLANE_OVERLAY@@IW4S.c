__int64 __fastcall CDDisplaySwapChain::FindCachedGeneralScanout(
        CDDisplaySwapChain *a1,
        bool a2,
        unsigned int a3,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a4,
        unsigned int a5,
        void *a6,
        struct Windows::Devices::Display::Core::IDisplayScanout **a7)
{
  struct Windows::Devices::Display::Core::IDisplayScanout *v7; // rsi
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // rax
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v10; // r12
  __int64 v11; // r15
  unsigned int v12; // r14d
  _QWORD *i; // rbx
  CDDisplayCachedScanout *v14; // r13
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rdx
  CDDisplaySwapChain *v19; // r12
  unsigned int v20; // r14d
  CDDisplayAgedCachedScanout *v21; // rax
  __int64 v22; // rcx
  CDDisplayAgedCachedScanout *v23; // rbx
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v24; // rdi
  unsigned int v25; // r13d
  int v26; // eax
  __int64 v27; // rcx
  __int64 *v28; // rdx
  void *v29; // rbx
  _QWORD *v30; // rdx
  CDDisplayAgedCachedScanout *v31; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v33; // [rsp+48h] [rbp-30h] BYREF
  struct Windows::Devices::Display::Core::IDisplaySurface *v34; // [rsp+50h] [rbp-28h]
  __int64 v35; // [rsp+58h] [rbp-20h] BYREF
  _BYTE v36[8]; // [rsp+60h] [rbp-18h] BYREF
  _BYTE v37[16]; // [rsp+68h] [rbp-10h] BYREF
  CDDisplaySwapChain *v38; // [rsp+C0h] [rbp+48h] BYREF
  bool v39; // [rsp+C8h] [rbp+50h]
  unsigned int v40; // [rsp+D0h] [rbp+58h]
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v41; // [rsp+D8h] [rbp+60h]

  v41 = a4;
  v40 = a3;
  v39 = a2;
  v38 = a1;
  v7 = 0LL;
  v33 = 0LL;
  DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(a1, a2);
  v10 = v41;
  v11 = (__int64)a1 + 256;
  v12 = v40;
  v34 = DesktopPrimary;
  for ( i = **(_QWORD ***)v11; i != *(_QWORD **)v11; i = v15 )
  {
    v14 = (CDDisplayCachedScanout *)i[2];
    v15 = (_QWORD *)*i;
    if ( !v7 )
    {
      v33 = 0LL;
      if ( CDDisplayCachedScanout::Matches(v14, v12, v10, a5, DesktopPrimary, &v33) )
      {
        *((_DWORD *)v14 + 10) = 600;
        v16 = i[2];
        i[2] = 0LL;
        v17 = *(__int64 **)v11;
        v35 = v16;
        std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::_Emplace<CDDisplayAgedCachedScanout *>(v11, *v17, &v35);
        std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v11, v36, i);
        v7 = v33;
        goto LABEL_9;
      }
      v7 = v33;
    }
    if ( (*((_DWORD *)v14 + 10))-- == 1 )
      std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v11, v37, i);
LABEL_9:
    DesktopPrimary = v34;
  }
  v19 = v38;
  v20 = 0;
  if ( v7 )
    goto LABEL_17;
  v21 = (CDDisplayAgedCachedScanout *)operator new(0x30uLL);
  v23 = v21;
  if ( v21 )
  {
    *(_QWORD *)v21 = 0LL;
    *((_QWORD *)v21 + 1) = 0LL;
    *((_QWORD *)v21 + 2) = 0LL;
    *((_QWORD *)v21 + 3) = 0LL;
    *((_DWORD *)v21 + 10) = 600;
    *((_DWORD *)v21 + 8) = 1;
    v33 = 0LL;
    v24 = v41;
    v25 = v40;
    v26 = CDDisplaySwapChain::CreateScanout(v19, v39, v40, v41, a5, (int)a6, &v33);
    v20 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1D5u, 0LL);
      CDDisplayAgedCachedScanout::`scalar deleting destructor'(v23);
    }
    else
    {
      v7 = v33;
      CDDisplayCachedScanout::Set(v23, v25, v24, a5, v34, v33);
      v28 = *(__int64 **)v11;
      v38 = v23;
      std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::_Emplace<CDDisplayAgedCachedScanout *>(
        v11,
        *v28,
        (__int64 *)&v38);
      if ( *((_QWORD *)v19 + 33) > 0x15uLL )
      {
        v29 = *(void **)(*(_QWORD *)v11 + 8LL);
        v30 = *(_QWORD **)v29;
        --*(_QWORD *)(v11 + 8);
        **((_QWORD **)v29 + 1) = v30;
        v30[1] = *((_QWORD *)v29 + 1);
        v31 = (CDDisplayAgedCachedScanout *)*((_QWORD *)v29 + 2);
        if ( v31 )
          CDDisplayAgedCachedScanout::`scalar deleting destructor'(v31);
        std::_Deallocate<16,0>(v29, 0x18uLL);
      }
LABEL_17:
      v33 = 0LL;
      *a7 = v7;
    }
  }
  else
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0x1CEu, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
  return v20;
}
