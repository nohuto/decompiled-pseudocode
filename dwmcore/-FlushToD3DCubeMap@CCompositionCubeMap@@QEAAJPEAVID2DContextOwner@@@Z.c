__int64 __fastcall CCompositionCubeMap::FlushToD3DCubeMap(CCompositionCubeMap *this, struct ID2DContextOwner *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  CDeviceManager *v5; // rcx
  int ExistingDevice; // eax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  struct CD3DDevice *v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // r15
  int CurrentRenderingRealization; // eax
  __int64 v13; // rcx
  struct _LUID v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _LUID v20; // [rsp+A0h] [rbp+48h] BYREF
  struct ID2DContextOwner *v21; // [rsp+A8h] [rbp+50h]
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+B0h] [rbp+58h] BYREF
  struct CD3DDevice *v23; // [rsp+B8h] [rbp+60h] BYREF

  v21 = a2;
  LOBYTE(v2) = 0;
  v4 = 0;
  v23 = 0LL;
  if ( *((int *)this + 30) < 0 )
    goto LABEL_20;
  CCompositionSurfaceBitmap::GetAdapterLuid(*(CCompositionSurfaceBitmap **)(32LL * *((unsigned int *)this + 30)
                                                                          + *((_QWORD *)this + 11)
                                                                          + 8));
  if ( !*((_BYTE *)this + 152) )
    goto LABEL_20;
  ExistingDevice = CDeviceManager::GetExistingDevice(v5, v20, &v23);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ExistingDevice, 0x162u, 0LL);
    goto LABEL_20;
  }
  v8 = 0;
  v9 = v23;
  if ( *((_BYTE *)this + 168) )
  {
    v10 = 6;
  }
  else
  {
    v10 = *((_DWORD *)this + 28);
    if ( !v10 )
    {
LABEL_13:
      if ( *((_BYTE *)this + 168) != (_BYTE)v2 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v9 + 70) + 432LL))(
          *((_QWORD *)v9 + 70),
          *((_QWORD *)this + 18));
      *((_BYTE *)this + 152) = v2;
      goto LABEL_20;
    }
  }
  v11 = 0LL;
  while ( 1 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 11) + v11 + 8);
    if ( !v2 )
      goto LABEL_12;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                    (CCompositionSurfaceBitmap *)(v2 + 72),
                                    (struct IBitmapRealization **)&v20);
    v4 = CurrentRenderingRealization;
    if ( CurrentRenderingRealization < 0 )
      break;
    v22 = 0LL;
    v14 = v20;
    v2 = *(_QWORD *)(**(_QWORD **)&v20 + 48LL);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v22);
    v15 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v21 + 40LL))(v21);
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v2)(v14, v15, &v22);
    LOBYTE(v2) = 0;
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x16Eu, 0LL);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v22);
      goto LABEL_18;
    }
    v18 = (**v22)(v22);
    CD3DDevice::CopySubresourceRegion(
      (__int64)v9,
      v18,
      0,
      (int *)(32LL * v8 + *((_QWORD *)this + 11) + 16LL),
      *((_QWORD *)this + 17),
      v8,
      0,
      0,
      0);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
LABEL_12:
    ++v8;
    v11 += 32LL;
    if ( v8 >= v10 )
      goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CurrentRenderingRealization, 0x16Au, 0LL);
LABEL_18:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
LABEL_20:
  ReleaseInterface<CD3DDevice>(&v23);
  return v4;
}
