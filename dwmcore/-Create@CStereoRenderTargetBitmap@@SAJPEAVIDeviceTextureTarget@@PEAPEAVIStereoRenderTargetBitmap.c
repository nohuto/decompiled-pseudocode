__int64 __fastcall CStereoRenderTargetBitmap::Create(
        struct IDeviceTextureTarget *a1,
        struct IStereoRenderTargetBitmap **a2)
{
  __int64 (__fastcall **v3)(struct IDeviceTextureTarget *, __int64, _QWORD **); // rax
  __int64 (__fastcall *v5)(struct IDeviceTextureTarget *, __int64, _QWORD **); // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct IDeviceTarget *v10; // rcx
  CStereoRenderTargetBitmap *v11; // rax
  __int64 v12; // rcx
  CRenderTargetBitmap *v13; // rbx
  unsigned int v15; // [rsp+20h] [rbp-10h]
  _QWORD *v16; // [rsp+60h] [rbp+30h] BYREF
  CRenderTargetBitmap *v17; // [rsp+68h] [rbp+38h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  v3 = *(__int64 (__fastcall ***)(struct IDeviceTextureTarget *, __int64, _QWORD **))a1;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  ((void (__fastcall *)(struct IDeviceTextureTarget *, __int64))v3[1])(a1, 1LL);
  v5 = **(__int64 (__fastcall ***)(struct IDeviceTextureTarget *, __int64, _QWORD **))a1;
  if ( v16 )
  {
    v6 = (__int64)v16 + *(int *)(v16[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v5(a1, 1LL, &v16);
  v9 = v7;
  if ( v7 < 0 )
  {
    v15 = 22;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*v16 + 8LL))(v16, 2LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v18);
  if ( v16 )
    v10 = (struct IDeviceTarget *)((char *)v16 + *(int *)(v16[1] + 24LL) + 8);
  else
    v10 = 0LL;
  v7 = CRenderTargetBitmap::Create(v10, &v18);
  v9 = v7;
  if ( v7 < 0 )
  {
    v15 = 26;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v15, 0LL);
    goto LABEL_16;
  }
  v11 = (CStereoRenderTargetBitmap *)DefaultHeap::Alloc(0x130uLL);
  if ( v11 )
    v11 = CStereoRenderTargetBitmap::CStereoRenderTargetBitmap(v11, v18);
  wil::com_ptr_t<CStereoRenderTargetBitmap,wil::err_returncode_policy>::operator=((__int64 *)&v17, (__int64)v11);
  v13 = v17;
  if ( v17 )
  {
    CRenderTargetBitmap::Initialize(
      v17,
      (struct IDeviceTextureTarget *)((char *)a1 + *(int *)(*((_QWORD *)a1 + 1) + 24LL) + 8));
    v17 = 0LL;
    *a2 = (struct IStereoRenderTargetBitmap *)(((unsigned __int64)v13 + 152) & -(__int64)(v13 != 0LL));
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
LABEL_16:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
  return v9;
}
