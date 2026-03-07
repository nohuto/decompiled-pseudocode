__int64 __fastcall CResampleLayer::Create(__int64 a1, __int64 a2, float a3, float a4, int a5, __int64 *a6)
{
  __int64 v7; // rbx
  void (__fastcall ***v9)(_QWORD, _DWORD *); // rcx
  int v10; // eax
  float v11; // xmm0_4
  int v12; // edi
  int v13; // eax
  struct _LUID *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // r8d
  struct _LUID *v19; // rax
  LPVOID v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v24; // [rsp+28h] [rbp-89h]
  __int64 v25; // [rsp+48h] [rbp-69h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+50h] [rbp-61h] BYREF
  _DWORD v27[4]; // [rsp+58h] [rbp-59h] BYREF
  const char *v28; // [rsp+68h] [rbp-49h] BYREF
  int v29; // [rsp+70h] [rbp-41h]
  _BYTE v30[24]; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v31[4]; // [rsp+90h] [rbp-21h] BYREF

  v26 = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  *a6 = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, _DWORD *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v9)(v9, v31);
  v10 = v31[0];
  v11 = (float)*(int *)(a2 + 8);
  if ( CCommonRegistryData::m_fResampleInLinearSpace )
    v10 = 91;
  v31[1] = 1;
  v31[0] = v10;
  v27[0] = *(_DWORD *)a2;
  v27[1] = *(_DWORD *)(a2 + 4);
  v12 = (int)floorf_0((float)(v11 / a3) + 0.5);
  v13 = (int)floorf_0((float)((float)*(int *)(a2 + 12) / a4) + 0.5);
  if ( v12 < 1 )
    v12 = 1;
  v27[2] = v12;
  if ( v13 < 1 )
    v13 = 1;
  v27[3] = v13;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v26);
  v14 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))a1)(a1, v30);
  v29 = 40;
  v28 = "DWM Scratch Rendertarget (ResampleLayer)";
  v15 = CExternalLayer::CreateBitmap((CDeviceManager *)&v28, v27, (__int64)v31, v14, 2, &v26);
  v17 = v15;
  if ( v15 < 0 )
  {
    v24 = 186;
    goto LABEL_20;
  }
  v18 = a5;
  if ( CCommonRegistryData::m_dwResampleModeOverride )
    v18 = CCommonRegistryData::m_dwResampleModeOverride;
  if ( v18 == 2 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v25);
    v19 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))a1)(a1, v30);
    v29 = 47;
    v28 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    v15 = CExternalLayer::CreateBitmap((CDeviceManager *)&v28, v27, (__int64)v31, v19, 2, &v25);
    v17 = v15;
    if ( v15 < 0 )
    {
      v24 = 202;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v24, 0LL);
      goto LABEL_21;
    }
    v7 = v25;
  }
  v20 = DefaultHeap::Alloc(0xA0uLL);
  if ( !v20 )
  {
    *a6 = 0LL;
LABEL_18:
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0xD4u, 0LL);
    goto LABEL_21;
  }
  v22 = CResampleLayer::CResampleLayer(
          (__int64)v20,
          (__int128 *)a2,
          (const struct MilPointAndSizeL *)v27,
          a3,
          a4,
          a5,
          v26,
          v7);
  *a6 = v22;
  if ( !v22 )
    goto LABEL_18;
LABEL_21:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
  return v17;
}
