__int64 __fastcall COffScreenRenderingLayer::Create(
        __int64 a1,
        __int64 a2,
        const struct MilPointAndSizeL *a3,
        int a4,
        int a5,
        CExternalLayer **a6)
{
  void (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  void (__fastcall **v11)(__int64, char *); // rax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  CExternalLayer *v15; // rax
  unsigned int v16; // ecx
  CExternalLayer *v17; // rbx
  struct IRenderTargetBitmap *v19; // [rsp+30h] [rbp-40h] BYREF
  char v20[8]; // [rsp+38h] [rbp-38h] BYREF
  int v21; // [rsp+40h] [rbp-30h]
  _BYTE v22[4]; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+54h] [rbp-1Ch]

  *a6 = 0LL;
  v10 = (void (__fastcall ***)(_QWORD, _BYTE *))(a2 + 8 + *(int *)(*(_QWORD *)(a2 + 8) + 12LL));
  (**v10)(v10, v22);
  v11 = *(void (__fastcall ***)(__int64, char *))a2;
  v23 = 1;
  (*v11)(a2, v20);
  v19 = 0LL;
  v21 = a4;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v19);
  v12 = CExternalLayer::CreateBitmap(a1, a3, v22, v20, a5, &v19);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x25u, 0LL);
  }
  else
  {
    v15 = (CExternalLayer *)operator new(0x78uLL);
    v17 = v15;
    if ( v15 )
    {
      CExternalLayer::CExternalLayer(v15, a3, v19);
      *(_QWORD *)v17 = &COffScreenRenderingLayer::`vftable';
      *a6 = v17;
    }
    else
    {
      *a6 = 0LL;
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  return v14;
}
