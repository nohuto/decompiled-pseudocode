__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::FindOrCreateResourceNoRef(
        _QWORD *a1,
        struct CD3DDevice *a2,
        struct CD3DConstantBuffer **a3)
{
  detail::liberal_expansion_policy *v3; // r14
  __int64 v4; // r11
  CD3DDevice *v6; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  unsigned int v9; // r9d
  struct CD3DConstantBuffer *v10; // rax
  CRenderingTechnique *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  struct CD3DConstantBuffer *v15; // rsi
  char *v16; // rcx
  CD3DDevice **v17; // rdx
  __int64 v18; // rdx
  int DefaultDevice; // eax
  unsigned int v20; // ecx
  CRenderingTechnique *v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  struct CD3DConstantBuffer *v24; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v25; // [rsp+70h] [rbp+40h] BYREF

  v3 = (detail::liberal_expansion_policy *)(a1 + 2);
  v4 = a1[2];
  *a3 = 0LL;
  v6 = (CD3DDevice *)a1;
  v7 = 0;
  v8 = (a1[3] - v4) >> 3;
  v9 = 0;
  if ( !v8 )
    goto LABEL_6;
  while ( a2 )
  {
    a1 = *(_QWORD **)(*(_QWORD *)(v4 + 8LL * v9) + 24LL);
    if ( a2 == (struct CD3DDevice *)a1[10] )
      break;
    if ( ++v9 >= v8 )
      goto LABEL_7;
  }
  v10 = *(struct CD3DConstantBuffer **)(v4 + 8LL * v9);
  *a3 = v10;
  if ( !v10 )
  {
LABEL_6:
    if ( a2 )
    {
LABEL_7:
      v12 = (CRenderingTechnique *)*((_QWORD *)v6 + 1);
      v24 = 0LL;
      v13 = CRenderingTechnique::CreateResource(v12, a2, &v24);
      v7 = v13;
      if ( v13 >= 0 )
      {
LABEL_8:
        v15 = v24;
        v25 = v6;
        v16 = (char *)v24 + 72;
        v17 = (CD3DDevice **)*((_QWORD *)v24 + 10);
        if ( v17 == *((CD3DDevice ***)v24 + 11) )
        {
          std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v16, v17, &v25);
        }
        else
        {
          *v17 = v6;
          *((_QWORD *)v16 + 1) += 8LL;
        }
        v18 = (__int64)(*((_QWORD *)v3 + 1) - *(_QWORD *)v3) >> 3;
        *a3 = v15;
        *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                     v3,
                     v18) = v15;
        return v7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x52u, 0LL);
    }
    else
    {
      v25 = 0LL;
      DefaultDevice = CDeviceManager::GetDefaultDevice((CDeviceManager *)a1, &v25);
      v7 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
        if ( v25 )
          CD3DDevice::Release(v25);
        return v7;
      }
      v21 = (CRenderingTechnique *)*((_QWORD *)v6 + 1);
      v24 = 0LL;
      v22 = CRenderingTechnique::CreateResource(v21, v25, &v24);
      v7 = v22;
      if ( v22 >= 0 )
      {
        if ( v25 )
          CD3DDevice::Release(v25);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x4Eu, 0LL);
      if ( v25 )
        CD3DDevice::Release(v25);
    }
    if ( v24 )
      CMILRefCountBaseT<IDeviceResource>::InternalRelease();
  }
  return v7;
}
