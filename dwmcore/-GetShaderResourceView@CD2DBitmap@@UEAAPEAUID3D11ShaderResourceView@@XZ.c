struct ID3D11ShaderResourceView *__fastcall CD2DBitmap::GetShaderResourceView(CD2DBitmap *this)
{
  struct ID3D11ShaderResourceView **v1; // rdi
  bool v4; // cc
  char *v5; // rcx
  __int64 v6; // rax
  struct ID3D11ShaderResourceView *v7; // rcx
  CD3DDevice *v8; // rsi
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v9; // r8
  int ShaderResourceView; // eax
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v1 = (struct ID3D11ShaderResourceView **)((char *)this - 216);
  if ( !*((_QWORD *)this - 27) )
  {
    if ( *((_QWORD *)this - 28) )
    {
      if ( (*((_BYTE *)this - 160) & 8) != 0 )
      {
        v4 = *((_DWORD *)this - 45) <= 1u;
        v12 = 0LL;
        v13 = 0LL;
        if ( !v4 )
        {
          LODWORD(v12) = *((_DWORD *)this - 44);
          HIDWORD(v12) = *((_DWORD *)this - 46);
          LODWORD(v13) = *((_DWORD *)this - 26);
          *(_QWORD *)((char *)&v12 + 4) = 5LL;
          HIDWORD(v13) = 1;
        }
        v5 = (char *)this + *(int *)(*((_QWORD *)this - 41) + 8LL) - 328;
        v6 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
        v7 = *v1;
        v8 = (CD3DDevice *)v6;
        *v1 = 0LL;
        if ( v7 )
          ((void (__fastcall *)(struct ID3D11ShaderResourceView *))v7->lpVtbl->Release)(v7);
        v9 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v12;
        if ( *((_DWORD *)this - 45) <= 1u )
          v9 = 0LL;
        ShaderResourceView = CD3DDevice::CreateShaderResourceView(v8, *((struct ID3D11Resource **)this - 28), v9, v1);
        if ( ShaderResourceView < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ShaderResourceView, 0x1FFu, 0LL);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292287, 0x203u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x208u, 0LL);
    }
  }
  return *v1;
}
