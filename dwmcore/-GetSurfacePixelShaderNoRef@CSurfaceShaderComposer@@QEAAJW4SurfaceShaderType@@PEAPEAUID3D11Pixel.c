__int64 __fastcall CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(
        __int64 a1,
        unsigned int a2,
        struct ID3D11PixelShader **a3)
{
  int v3; // ebx
  struct ID3D11PixelShader **v5; // rsi
  __int64 v6; // rdx
  int PixelShader; // eax
  unsigned int v8; // edi

  v3 = 0;
  v5 = (struct ID3D11PixelShader **)(a1 + 8LL * a2);
  v6 = 3LL * a2;
  if ( !*v5 )
  {
    a1 = *(_QWORD *)(a1 + 96);
    if ( *(_DWORD *)(a1 + 584) >= *((_DWORD *)&stru_1802D4F90 + 2 * v6 + 5) )
    {
      PixelShader = CD3DDevice::CreatePixelShader(
                      (CD3DDevice *)a1,
                      *((const void **)&stru_1802D4F90 + v6 + 1),
                      *((_QWORD *)&stru_1802D4F90.lpVtbl + v6),
                      (struct ID3D11ClassLinkage *)&stru_1802D4F90,
                      v5);
      v3 = PixelShader;
      if ( PixelShader < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, PixelShader, 0x206u, 0LL);
        v8 = v3;
LABEL_5:
        MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v3, 0x1A4u, 0LL);
        return v8;
      }
    }
  }
  v8 = v3;
  if ( v3 < 0 )
    goto LABEL_5;
  if ( *v5 )
  {
    *a3 = *v5;
  }
  else
  {
    v8 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2005270524, 0x1AAu, 0LL);
  }
  return v8;
}
