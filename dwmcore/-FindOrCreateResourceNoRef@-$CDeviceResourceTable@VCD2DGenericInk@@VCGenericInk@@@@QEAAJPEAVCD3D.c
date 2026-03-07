__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef(
        _QWORD *a1,
        struct CD3DDevice *a2,
        struct CD2DGenericInk **a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r11
  CD3DDevice *v6; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // rax
  CGenericInk *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct CD2DGenericInk *v14; // rsi
  const void **v15; // rcx
  _BYTE *v16; // rdx
  struct CD2DGenericInk *v17; // rax
  int DefaultDevice; // eax
  __int64 v19; // rcx
  CGenericInk *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  struct CD2DGenericInk *v25; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v26; // [rsp+70h] [rbp+40h] BYREF

  v3 = a1 + 2;
  v4 = a1[2];
  *a3 = 0LL;
  v6 = (CD3DDevice *)a1;
  v7 = 0;
  v8 = (a1[3] - v4) >> 3;
  v9 = 0;
  if ( !v8 )
    goto LABEL_9;
  while ( a2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8LL * v9) + 24LL) + 24LL);
    a1 = (_QWORD *)(v10 - 16);
    if ( a2 == (struct CD3DDevice *)((v10 - 16) & -(__int64)(v10 != 0)) )
      break;
    if ( ++v9 >= v8 )
      goto LABEL_5;
  }
  v17 = *(struct CD2DGenericInk **)(v4 + 8LL * v9);
  *a3 = v17;
  if ( !v17 )
  {
LABEL_9:
    if ( a2 )
    {
LABEL_5:
      v11 = (CGenericInk *)*((_QWORD *)v6 + 1);
      v25 = 0LL;
      v12 = CGenericInk::CreateResource(v11, a2, &v25);
      v7 = v12;
      if ( v12 >= 0 )
      {
LABEL_6:
        v14 = v25;
        v26 = v6;
        v15 = (const void **)((char *)v25 + 56);
        v16 = (_BYTE *)*((_QWORD *)v25 + 8);
        if ( v16 == *((_BYTE **)v25 + 9) )
        {
          std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v15, v16, &v26);
        }
        else
        {
          *(_QWORD *)v16 = v6;
          v15[1] = (char *)v15[1] + 8;
        }
        v23 = (__int64)(v3[1] - *v3) >> 3;
        *a3 = v14;
        *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                     v3,
                     v23) = v14;
        return v7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x52u, 0LL);
      goto LABEL_21;
    }
    v26 = 0LL;
    DefaultDevice = CDeviceManager::GetDefaultDevice((CDeviceManager *)a1, &v26);
    v7 = DefaultDevice;
    if ( DefaultDevice >= 0 )
    {
      v20 = (CGenericInk *)*((_QWORD *)v6 + 1);
      v25 = 0LL;
      v21 = CGenericInk::CreateResource(v20, v26, &v25);
      v7 = v21;
      if ( v21 >= 0 )
      {
        if ( v26 )
          CD3DDevice::Release(v26);
        goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4Eu, 0LL);
      if ( v26 )
        CD3DDevice::Release(v26);
LABEL_21:
      if ( v25 )
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v25);
      return v7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
    if ( v26 )
      CD3DDevice::Release(v26);
  }
  return v7;
}
