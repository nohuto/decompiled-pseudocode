__int64 __fastcall CD3DDevice::GatherSupportedTextureFormats(CD3DDevice *this)
{
  unsigned int v1; // ebp
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool v5; // di
  int *v6; // rdi
  int *v7; // rsi
  int v8; // r14d
  int v9; // edi
  int v11; // eax
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8_UNORM) )
    *((_DWORD *)this + 260) = 61;
  *((_DWORD *)this + 261) = CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_A8_UNORM) ? 65 : 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8G8B8A8_UNORM) )
  {
    v12 = 651;
    goto LABEL_29;
  }
  *((_DWORD *)this + 262) = 28;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8A8_UNORM) )
  {
    v12 = 661;
    goto LABEL_29;
  }
  *((_DWORD *)this + 264) = 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8X8_UNORM) )
  {
    v12 = 680;
LABEL_29:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, v12, 0LL);
    return v1;
  }
  v4 = *((_QWORD *)this + 69);
  *((_DWORD *)this + 265) = 88;
  v5 = (*(int (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v4 + 264LL))(v4, 7LL, &v13, 4LL) >= 0 && v13;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R32G32B32A32_FLOAT) && v5 )
    *((_DWORD *)this + 269) = 2;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_FLOAT) && v5 )
  {
    v6 = (int *)((char *)this + 1076);
    v7 = (int *)((char *)this + 1068);
    *((_DWORD *)this + 267) = 10;
    if ( !*((_DWORD *)this + 269) )
      *v6 = 10;
  }
  else
  {
    v6 = (int *)((char *)this + 1076);
    v11 = *((_DWORD *)this + 269);
    v7 = (int *)((char *)this + 1068);
    if ( v11 )
    {
      *v7 = v11;
    }
    else
    {
      *v6 = 87;
      *v7 = 87;
    }
  }
  v8 = 11;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_UNORM) )
    v8 = *v6;
  v9 = 24;
  *((_DWORD *)this + 268) = v8;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R10G10B10A2_UNORM) )
    v9 = *v7;
  *((_DWORD *)this + 266) = v9;
  return v1;
}
