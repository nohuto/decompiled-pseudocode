__int64 __fastcall CD3DDevice::CopyTexture2D(
        struct CD3DDevice *a1,
        struct ID3D11Texture2D *a2,
        int a3,
        const struct PixelFormatInfo *a4,
        int *a5,
        __int64 a6,
        int a7,
        int a8)
{
  int v11; // edx
  enum DXGI_FORMAT v12; // ecx
  int v13; // edi
  int v14; // r15d
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 (__fastcall *v23)(__int64, _DWORD *, __int64, _QWORD **); // rbx
  int v24; // eax
  unsigned int v25; // ecx
  struct IBitmapSource *v26; // rbx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ebx
  int v35; // r9d
  int v36; // eax
  unsigned int v37; // ecx
  struct IUnknown *v38; // rbx
  unsigned int v39; // r9d
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rcx
  struct IBitmapSource *v43; // rsi
  int v44; // eax
  unsigned int v45; // ecx
  char *v46; // rcx
  struct IUnknown *v47; // rcx
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  struct IBitmapSource *v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v51; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v52; // [rsp+68h] [rbp-98h] BYREF
  int v53; // [rsp+70h] [rbp-90h]
  struct IUnknown *v54; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int8 *v57[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v59[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  int v61; // [rsp+B8h] [rbp-48h]
  enum DXGI_FORMAT v62; // [rsp+BCh] [rbp-44h]
  _DWORD v63[6]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v64[24]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v65[4]; // [rsp+F0h] [rbp-10h] BYREF
  enum DXGI_FORMAT v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+10Ch] [rbp+Ch]
  __int64 v68; // [rsp+114h] [rbp+14h]
  __int128 v69; // [rsp+120h] [rbp+20h]

  v59[0] = a7;
  v11 = a5[2] - *a5;
  v12 = a5[3] - a5[1];
  v13 = *((_DWORD *)a1 + 272);
  v59[1] = a8;
  v57[0] = "DWM Temp Readback (bitmap1)";
  LODWORD(v57[1]) = 27;
  LODWORD(v49) = a3;
  v52 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v60 = 0LL;
  v61 = v11;
  v62 = v12;
  v59[2] = v11;
  v59[3] = v12;
  LOBYTE(v53) = 0;
  v69 = *(_OWORD *)v57;
  if ( v13 < 0 )
  {
    v48 = 2646;
    goto LABEL_40;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a2->lpVtbl->GetDesc)(a2, v65);
  v12 = v66;
  if ( *(_DWORD *)a4 != v66 )
  {
    v13 = -2147024809;
    v48 = 2651;
LABEL_40:
    v35 = v13;
    goto LABEL_41;
  }
  v14 = GetPixelFormatSize(v66) >> 3;
  if ( *((_QWORD *)a1 + 71) )
  {
    v54 = 0LL;
    v36 = CWarpLockSubresource::Create(a1, a2, (unsigned int)v49, (struct CWarpLockSubresource **)&v54);
    v13 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_180355880, 0xAu, v36, 0xAAEu, 0LL);
      v47 = v54;
      if ( !v54 )
        goto LABEL_18;
    }
    else
    {
      v38 = v54;
      v39 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v54[5].lpVtbl, 8));
      v40 = HrCreateBitmapFromMemoryEx(
              a5[2] - *a5,
              a5[3] - a5[1],
              a4,
              v39,
              v39 * (a5[3] - a5[1]) + v14 * (a5[2] - *a5),
              (unsigned __int8 *)v54[5].lpVtbl + v39 * a5[1] + v14 * *a5,
              v54,
              &v52);
      v13 = v40;
      if ( v40 >= 0 )
      {
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v38);
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v41, &dword_180355880, 0xAu, v40, 0xAC0u, 0LL);
      v47 = v38;
    }
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v47);
    goto LABEL_18;
  }
  v15 = *((_QWORD *)a1 + 69);
  v65[0] = a5[2] - *a5;
  v65[1] = a5[3] - a5[1];
  v67 = 3LL;
  v68 = 0x20000LL;
  v54 = *(struct IUnknown **)(*(_QWORD *)v15 + 40LL);
  v16 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *))v54)(v15, v65, 0LL, &v50);
  v13 = v16;
  if ( v16 < 0 )
  {
    v48 = 2685;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v50 + 40LL))(
    v50,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v69),
    v69);
  v17 = *a5;
  v18 = (__int64 *)*((_QWORD *)a1 + 70);
  v63[2] = 0;
  v63[0] = v17;
  v63[1] = a5[1];
  v63[3] = a5[2];
  v63[4] = a5[3];
  v63[5] = 1;
  v19 = *v18;
  v53 = 1;
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _DWORD, _DWORD, struct ID3D11Texture2D *, _DWORD, _DWORD *))(v19 + 368))(
    v18,
    v50,
    0LL,
    0LL,
    0,
    0,
    a2,
    (_DWORD)v49,
    v63);
  v20 = *((_QWORD *)a1 + 70);
  *(_OWORD *)v57 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(*(_QWORD *)v20 + 112LL))(
          v20,
          v50,
          0LL,
          1LL,
          0,
          v57);
  v13 = v16;
  if ( v16 < 0 )
  {
    v48 = 2712;
LABEL_23:
    v35 = v16;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180355880, 0xAu, v35, v48, 0LL);
    goto LABEL_18;
  }
  v21 = HrCreateBitmapFromMemoryEx(
          a5[2] - *a5,
          a5[3] - a5[1],
          a4,
          (unsigned int)v57[1],
          v14 * (a5[2] - *a5) + LODWORD(v57[1]) * (a5[3] - a5[1]),
          v57[0],
          0LL,
          &v52);
  v13 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180355880, 0xAu, v21, 0xAA6u, 0LL);
    goto LABEL_17;
  }
LABEL_7:
  v23 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD **))(*(_QWORD *)a6 + 24LL);
  if ( v51 )
  {
    v42 = (__int64)v51 + *(int *)(v51[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v24 = v23(a6, v59, 2LL, &v51);
  v13 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_180355880, 0xAu, v24, 0xAC6u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _BYTE *))*v51)(v51, v64);
    if ( IsEqualPixelFormatInfo(a4, (const struct PixelFormatInfo *)v64) )
    {
      v26 = v52;
    }
    else
    {
      v43 = v52;
      v49 = 0LL;
      v44 = CFormatConverter::HrConvertBitmap(v52, (const struct PixelFormatInfo *)v64, &v49);
      v13 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, &dword_180355880, 0xAu, v44, 0xAD1u, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v49);
        goto LABEL_16;
      }
      v26 = v49;
      v52 = v49;
      v49 = 0LL;
      if ( v43 )
      {
        v46 = (char *)v43 + *(int *)(*((_QWORD *)v43 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v46 + 16LL))(v46);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v49);
    }
    v27 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, __int64 *))(*v51 + 24LL))(v51, &v55, &v58);
    v13 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_180355880, 0xAu, v27, 0xAD8u, 0LL);
    }
    else
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(*v51 + 16LL))(v51, &v56);
      v13 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, &dword_180355880, 0xAu, v29, 0xADBu, 0LL);
      }
      else
      {
        v31 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v26 + 24LL))(
                v26,
                &v60,
                v56,
                v55,
                v58);
        v13 = v31;
        if ( v31 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_180355880, 0xAu, v31, 0xAEAu, 0LL);
      }
    }
  }
LABEL_16:
  if ( (_BYTE)v53 )
LABEL_17:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 70) + 120LL))(*((_QWORD *)a1 + 70), v50, 0LL);
LABEL_18:
  v33 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)a1, v13, 0);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v51);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v50);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v52);
  return v33;
}
