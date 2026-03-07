__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef(
        _QWORD *a1,
        struct CD3DDevice *a2,
        struct CD3DPixelShader **a3)
{
  _QWORD *v4; // r15
  __int64 v5; // r11
  unsigned int v6; // ebx
  __int64 v7; // r9
  CLinkedShader **v8; // rdi
  unsigned __int64 v9; // r8
  struct CD3DPixelShader *v10; // rax
  CLinkedShader *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  struct CD3DPixelShader *v15; // rsi
  char *v16; // rcx
  CLinkedShader ***v17; // rdx
  __int64 v18; // rdx
  int DefaultDevice; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  struct CD3DPixelShader *v23; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v24; // [rsp+70h] [rbp+40h] BYREF
  __int64 v25; // [rsp+78h] [rbp+48h] BYREF

  v4 = a1 + 2;
  v5 = a1[2];
  v6 = 0;
  *a3 = 0LL;
  v7 = 0LL;
  v8 = (CLinkedShader **)a1;
  v9 = (a1[3] - v5) >> 3;
  if ( !v9 )
    goto LABEL_6;
  while ( a2 )
  {
    a1 = *(_QWORD **)(*(_QWORD *)(v5 + 8 * v7) + 24LL);
    if ( a2 == (struct CD3DDevice *)a1[10] )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v9 )
      goto LABEL_7;
  }
  v10 = *(struct CD3DPixelShader **)(v5 + 8 * v7);
  *a3 = v10;
  if ( !v10 )
  {
LABEL_6:
    v23 = 0LL;
    if ( a2 )
    {
LABEL_7:
      v12 = v8[1];
      v23 = 0LL;
      v13 = CLinkedShader::CreateResource(v12, a2, &v23);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x52u, 0LL);
LABEL_11:
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v23);
        return v6;
      }
LABEL_8:
      v15 = v23;
      v24 = (CD3DDevice *)v8;
      v16 = (char *)v23 + 72;
      v17 = (CLinkedShader ***)*((_QWORD *)v23 + 10);
      if ( v17 == *((CLinkedShader ****)v23 + 11) )
      {
        std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v16, v17, &v24);
      }
      else
      {
        *v17 = v8;
        *((_QWORD *)v16 + 1) += 8LL;
      }
      v18 = v4[1] - *v4;
      v23 = 0LL;
      v25 = 0LL;
      v24 = 0LL;
      *a3 = v15;
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   v4,
                   v18 >> 3) = v15;
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v24);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v25);
      goto LABEL_11;
    }
    v24 = 0LL;
    DefaultDevice = CDeviceManager::GetDefaultDevice((CDeviceManager *)a1, &v24);
    v6 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
    }
    else
    {
      v21 = CLinkedShader::CreateResource(v8[1], v24, &v23);
      v6 = v21;
      if ( v21 >= 0 )
      {
        if ( v24 )
          CD3DDevice::Release(v24);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4Eu, 0LL);
    }
    if ( v24 )
      CD3DDevice::Release(v24);
    goto LABEL_11;
  }
  return v6;
}
