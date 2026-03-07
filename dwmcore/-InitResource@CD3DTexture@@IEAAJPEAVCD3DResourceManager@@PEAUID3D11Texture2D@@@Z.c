__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // edi
  int v4; // r14d
  unsigned int v5; // ebp
  int v9; // edx
  __int64 v10; // rcx
  _DWORD v12[12]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 40) )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a3->lpVtbl->GetDesc)(a3, v12);
      v9 = GetPixelFormatSize(v12[4]) >> 3;
      if ( !v9 )
        break;
      ++v5;
      v4 += v9 * v12[0] * v12[1];
      if ( v5 >= *((_DWORD *)this + 40) )
        goto LABEL_4;
    }
    v3 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003292288, 0x85u, 0LL);
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 16) = v4;
    *((_BYTE *)this + 70) = 1;
    *((_QWORD *)this + 3) = a2;
    CD3DResourceManager::RegisterResource(a2, this);
    *((_QWORD *)this + 12) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  }
  return v3;
}
