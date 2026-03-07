__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(
        CIndirectSwapchainRenderTarget *this)
{
  _QWORD *v1; // r14
  __int64 *v3; // r15
  __int64 v4; // rcx
  CD3DDevice *v5; // rdi
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct _LUID v10; // rdx
  int Device; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // xmm0_4
  CD3DDevice *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  char *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // ebx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  CD3DDevice *v25; // rcx
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]
  CD3DDevice *v30; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF
  CD3DDevice *v32; // [rsp+C0h] [rbp+50h] BYREF

  v1 = (_QWORD *)((char *)this + 1944);
  v3 = (__int64 *)((char *)this + 1880);
  v31 = 0LL;
  v30 = 0LL;
  std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<IDXGIResource *>(
    (__int64 *)this + 235,
    (__int64)v28,
    (unsigned __int64 *)this + 243);
  if ( !*(_BYTE *)(v29 + 25) && *v1 >= *(_QWORD *)(v29 + 32) && v29 != *v3 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=((__int64 *)&v30, *(_QWORD *)(v29 + 40));
    v5 = v30;
    goto LABEL_13;
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v1;
  v31 = 0LL;
  v7 = (**v6)(v6, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v31);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x128u, 0LL);
    goto LABEL_26;
  }
  v10 = (struct _LUID)*((_QWORD *)this + 244);
  v32 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v10, &v32);
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Device, 0x12Bu, 0LL);
    v25 = v32;
    if ( !v32 )
      goto LABEL_26;
    goto LABEL_24;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v30);
  if ( IsDXGIColorSpaceHDR(*((_DWORD *)this + 30)) )
    v14 = (int)FLOAT_1_0;
  else
    v14 = 0;
  v15 = v32;
  v16 = CD3DDevice::CreateRenderTargetBitmap(v32, v31, *((unsigned int *)this + 29), v13, DisplayId::All, v14, &v30);
  v9 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x132u, 0LL);
    if ( !v15 )
      goto LABEL_26;
    v25 = v15;
LABEL_24:
    CD3DDevice::Release(v25);
    goto LABEL_26;
  }
  v5 = v30;
  v18 = (char *)v30 + *(int *)(*((_QWORD *)v30 + 1) + 8LL) + 8;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v18 + 40LL))(
    v18,
    ((unsigned __int64)this + 1872) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    &v27,
    (__int64)v5);
  std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::_Emplace<std::pair<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>(
    v3,
    (__int64)v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
  if ( v15 )
    CD3DDevice::Release(v15);
LABEL_13:
  v30 = 0LL;
  v19 = *((unsigned int *)this + 446);
  v32 = v5;
  v20 = v19 + 1;
  if ( (int)v19 + 1 < (unsigned int)v19 )
  {
    v9 = -2147024362;
    v21 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x13Eu, 0LL);
    goto LABEL_26;
  }
  v21 = 0;
  if ( v20 > *((_DWORD *)this + 445) )
  {
    v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1760, 8, 1, &v32);
    v21 = v23;
    v9 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xC0u, 0LL);
      goto LABEL_20;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 220) + 8 * v19) = v5;
    *((_DWORD *)this + 446) = v20;
  }
  v9 = v21;
LABEL_26:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
  return v9;
}
