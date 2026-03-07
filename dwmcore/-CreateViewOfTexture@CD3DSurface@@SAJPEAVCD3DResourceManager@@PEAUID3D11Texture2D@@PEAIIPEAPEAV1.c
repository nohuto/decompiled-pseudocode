__int64 __fastcall CD3DSurface::CreateViewOfTexture(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        unsigned int *a3,
        __int64 a4,
        struct CD3DSurface **a5)
{
  CD3DSurface *v7; // rax
  __int64 v8; // rcx
  CD3DSurface *v9; // rax
  CD3DSurface *v10; // rbx
  char *v11; // rcx
  unsigned int *v12; // r8
  unsigned int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi

  *a5 = 0LL;
  v7 = (CD3DSurface *)operator new(0xF0uLL);
  if ( !v7 )
  {
    v10 = 0LL;
    goto LABEL_7;
  }
  v9 = CD3DSurface::CD3DSurface(v7, a2);
  v10 = v9;
  if ( !v9 )
  {
LABEL_7:
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x63u, 0LL);
    goto LABEL_8;
  }
  v11 = (char *)v9 + *(int *)(*((_QWORD *)v9 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
  v14 = CD3DSurface::Init(v10, a1, v12, v13);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x68u, 0LL);
  }
  else
  {
    *a5 = v10;
    v10 = 0LL;
  }
LABEL_8:
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v10);
  return v16;
}
