__int64 __fastcall CColorTransformLayer::Create(
        struct IDeviceTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CColorTransformResource *a3,
        struct CColorTransformLayer **a4)
{
  char *v8; // rcx
  struct _LUID *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CExternalLayer *v13; // rax
  __int64 v14; // rcx
  CExternalLayer *v15; // rbx
  struct IRenderTargetBitmap *v17; // [rsp+30h] [rbp-50h] BYREF
  const char *v18; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  _BYTE v20[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v21[4]; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+64h] [rbp-1Ch]

  *a4 = 0LL;
  v8 = (char *)a1 + *(int *)(*((_QWORD *)a1 + 1) + 12LL) + 8;
  (**(void (__fastcall ***)(char *, _BYTE *))v8)(v8, v21);
  v17 = 0LL;
  v22 = 1;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v17);
  v9 = (struct _LUID *)(**(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a1)(a1, v20);
  v19 = 48;
  v18 = "DWM Scratch Rendertarget (color transform layer)";
  v10 = CExternalLayer::CreateBitmap((CDeviceManager *)&v18, a2, (__int64)v21, v9, 1, &v17);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Eu, 0LL);
  }
  else
  {
    v13 = (CExternalLayer *)operator new(0x80uLL);
    v15 = v13;
    if ( v13 )
    {
      CExternalLayer::CExternalLayer(v13, a2, v17);
      *((_QWORD *)v15 + 15) = a3;
      *(_QWORD *)v15 = &CColorTransformLayer::`vftable';
      *a4 = v15;
    }
    else
    {
      *a4 = 0LL;
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x23u, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  return v12;
}
