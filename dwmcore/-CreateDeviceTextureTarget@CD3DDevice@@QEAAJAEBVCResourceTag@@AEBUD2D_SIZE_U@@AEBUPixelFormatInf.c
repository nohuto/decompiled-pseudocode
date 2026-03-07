__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct IDeviceTextureTarget **a6)
{
  __int128 v8; // xmm0
  bool v9; // cf
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  int v19; // [rsp+28h] [rbp-81h]
  int v20; // [rsp+30h] [rbp-79h]
  struct ID3D11Texture2D *v21; // [rsp+50h] [rbp-59h] BYREF
  _DWORD v22[5]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v23; // [rsp+6Ch] [rbp-3Dh]
  int v24; // [rsp+74h] [rbp-35h]
  struct D2D_SIZE_U pSysMem; // [rsp+80h] [rbp-29h] BYREF
  int v26; // [rsp+88h] [rbp-21h]
  int v27; // [rsp+8Ch] [rbp-1Dh]
  int v28; // [rsp+90h] [rbp-19h]
  int v29; // [rsp+94h] [rbp-15h]
  int v30; // [rsp+98h] [rbp-11h]
  int v31; // [rsp+9Ch] [rbp-Dh]
  int v32; // [rsp+A0h] [rbp-9h]
  int v33; // [rsp+A4h] [rbp-5h]
  int v34; // [rsp+A8h] [rbp-1h]
  __int128 v35; // [rsp+B0h] [rbp+7h]

  v30 = 0;
  v31 = 0;
  v33 = 0;
  v23 = 0LL;
  v24 = 0;
  *a6 = 0LL;
  v8 = *(_OWORD *)a2;
  pSysMem = (struct D2D_SIZE_U)a3->pSysMem;
  v28 = *(_DWORD *)a4;
  v9 = *((_BYTE *)a5 + 20) != 0;
  v26 = 1;
  v35 = v8;
  v27 = 1;
  v21 = 0LL;
  v34 = v9 ? 0x80000 : 0;
  v29 = 1;
  v32 = 40;
  v10 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&pSysMem, a3, &v21);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802EB290, 2u, v10, 0x4B1u, 0LL);
  }
  else
  {
    v13 = *((_DWORD *)a4 + 1);
    v14 = *((_DWORD *)a4 + 2);
    v20 = *((_DWORD *)a5 + 4);
    v22[0] = v28;
    v19 = *((_DWORD *)a5 + 2);
    v22[1] = v13;
    v15 = *((_QWORD *)this + 23);
    v22[2] = 1119879168;
    v22[3] = 1119879168;
    v22[4] = 1;
    v16 = CDeviceTextureTarget::Create(v15, v21, &pSysMem, v22, v14, v19, v20, 0, a6);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802EB290, 2u, v16, 0x4C2u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return v12;
}
