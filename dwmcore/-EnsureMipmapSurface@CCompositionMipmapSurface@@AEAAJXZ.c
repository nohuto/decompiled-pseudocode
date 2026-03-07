__int64 __fastcall CCompositionMipmapSurface::EnsureMipmapSurface(struct _LUID *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  CDeviceManager *v4; // rcx
  int ExistingDevice; // eax
  __int64 v6; // rcx
  LONG HighPart; // eax
  struct D3D11_SUBRESOURCE_DATA *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE *v12; // rdx
  struct CD3DDevice *v14; // [rsp+38h] [rbp-19h] BYREF
  __int128 v15; // [rsp+40h] [rbp-11h] BYREF
  _DWORD v16[12]; // [rsp+58h] [rbp+7h] BYREF
  __int128 v17; // [rsp+88h] [rbp+37h]

  v1 = 0;
  v2 = (__int64 *)&this[21];
  if ( !*(_QWORD *)&this[21] )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v14);
    ExistingDevice = CDeviceManager::GetExistingDevice(v4, this[15], &v14);
    v1 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ExistingDevice, 0x144u, 0LL);
    }
    else
    {
      v16[6] = 0;
      v16[7] = 0;
      v16[9] = 0;
      v16[10] = 0;
      *(_QWORD *)&v15 = "DWM Composition Mipmap Surface";
      v16[0] = this[16].LowPart;
      v16[1] = this[16].HighPart;
      v16[2] = this[17].LowPart;
      HighPart = this[17].HighPart;
      DWORD2(v15) = 30;
      v16[4] = HighPart;
      v16[3] = 1;
      v17 = v15;
      v16[5] = 1;
      v16[8] = 8;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v2);
      v9 = CD3DSurface::Create(
             (struct CD3DDevice *)((char *)v14 + 1104),
             (const struct DWM_TEXTURE2D_DESC *)v16,
             v8,
             (struct CD3DSurface **)v2);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x156u, 0LL);
      }
      else
      {
        v11 = *v2;
        *(_QWORD *)&v15 = this + 10;
        v12 = *(_BYTE **)(v11 + 80);
        if ( v12 == *(_BYTE **)(v11 + 88) )
        {
          std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
            (const void **)(v11 + 72),
            v12,
            &v15);
        }
        else
        {
          *(_QWORD *)v12 = this + 10;
          *(_QWORD *)(v11 + 80) += 8LL;
        }
        LOBYTE(this[20].LowPart) = 1;
      }
    }
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v14);
  }
  return v1;
}
