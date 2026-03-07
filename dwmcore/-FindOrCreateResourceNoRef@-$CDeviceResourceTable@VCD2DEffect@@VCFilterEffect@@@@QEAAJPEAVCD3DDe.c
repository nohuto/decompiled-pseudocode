__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::FindOrCreateResourceNoRef(
        unsigned __int64 a1,
        struct CD3DDevice *a2,
        struct CD2DEffect **a3)
{
  __int64 *v3; // rsi
  __int64 v5; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned int v9; // edi
  unsigned int v10; // r14d
  __int64 v11; // rcx
  int DefaultDevice; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct CD2DEffect *v18; // rbx
  char *v19; // rcx
  __int64 v20; // rdx
  struct CD2DEffect *v22; // [rsp+70h] [rbp+40h] BYREF
  CD3DDevice *v23; // [rsp+80h] [rbp+50h] BYREF
  __int64 v24; // [rsp+88h] [rbp+58h] BYREF

  v3 = (__int64 *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24) - v5;
  *a3 = 0LL;
  v8 = a1;
  v9 = 0;
  v10 = 0;
  if ( v7 >> 3 )
  {
    while ( a2 )
    {
      v11 = *(_QWORD *)(v5 + 8LL * v10) + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v5 + 8LL * v10) + 16LL) + 8LL);
      if ( a2 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
        break;
      v5 = *v3;
      a1 = ++v10;
      if ( v10 >= (unsigned __int64)((v3[1] - *v3) >> 3) )
        goto LABEL_7;
    }
    a1 = *(_QWORD *)(*v3 + 8LL * v10);
    *a3 = (struct CD2DEffect *)a1;
  }
LABEL_7:
  if ( !*a3 )
  {
    v22 = 0LL;
    if ( !a2 )
    {
      v23 = 0LL;
      DefaultDevice = CDeviceManager::GetDefaultDevice((CDeviceManager *)a1, &v23);
      v9 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      }
      else
      {
        v14 = CFilterEffect::CreateResource(*(CFilterEffect **)(v8 + 8), v23, &v22);
        v9 = v14;
        if ( v14 >= 0 )
        {
          if ( v23 )
            CD3DDevice::Release(v23);
          goto LABEL_18;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4Eu, 0LL);
      }
      if ( v23 )
        CD3DDevice::Release(v23);
      goto LABEL_20;
    }
    v16 = CFilterEffect::CreateResource(*(CFilterEffect **)(v8 + 8), a2, &v22);
    v9 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x52u, 0LL);
      goto LABEL_20;
    }
LABEL_18:
    v18 = v22;
    v19 = (char *)v22 + *(int *)(*((_QWORD *)v22 + 2) + 8LL) + 16;
    (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v19 + 40LL))(v19, v8);
    v20 = (v3[1] - *v3) >> 3;
    *a3 = v18;
    v22 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 v3,
                 v20) = v18;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
LABEL_20:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  }
  return v9;
}
