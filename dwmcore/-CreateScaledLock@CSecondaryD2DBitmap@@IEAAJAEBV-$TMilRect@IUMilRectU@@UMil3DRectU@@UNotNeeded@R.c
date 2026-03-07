__int64 __fastcall CSecondaryD2DBitmap::CreateScaledLock(
        __int64 a1,
        int *a2,
        void (__fastcall ***a3)(_QWORD, _DWORD *),
        _QWORD *a4)
{
  void (__fastcall **v6)(_QWORD, _DWORD *); // rax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  void (__fastcall **v13)(_QWORD, _DWORD *); // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int8 *v21; // rbx
  unsigned int v22; // edi
  unsigned int v23; // esi
  const struct PixelFormatInfo *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  char *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int ImagingFactory; // eax
  __int64 v31; // rcx
  struct IWICImagingFactory *v32; // rbx
  HRESULT (__stdcall *CreateBitmapScaler)(IWICImagingFactory *, IWICBitmapScaler **); // rdi
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  char *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  char *v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v47; // [rsp+40h] [rbp-69h] BYREF
  struct IWICBitmapSource *v48; // [rsp+48h] [rbp-61h] BYREF
  __int64 v49; // [rsp+50h] [rbp-59h] BYREF
  struct IBitmapSource *v50; // [rsp+58h] [rbp-51h] BYREF
  __int64 v51; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-3Dh] BYREF
  struct IWICImagingFactory *v54; // [rsp+70h] [rbp-39h] BYREF
  struct IBitmapSource *v55; // [rsp+78h] [rbp-31h] BYREF
  _DWORD v56[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int8 *v57; // [rsp+88h] [rbp-21h] BYREF
  __int64 v58; // [rsp+90h] [rbp-19h] BYREF
  int v59; // [rsp+98h] [rbp-11h]
  int v60; // [rsp+9Ch] [rbp-Dh]
  _DWORD v61[4]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v62[16]; // [rsp+B0h] [rbp+7h] BYREF

  *a4 = 0LL;
  v6 = *a3;
  v47 = 0LL;
  v55 = 0LL;
  v51 = 0LL;
  v54 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  (*v6)(a3, v56);
  v9 = a2[1];
  v10 = *a2;
  v59 = v56[0];
  v60 = v56[1];
  v11 = a2[2] - v10;
  v61[1] = v9;
  v61[2] = v11;
  v12 = a2[3] - v9;
  v58 = 0LL;
  v61[3] = v12;
  v13 = *a3;
  v61[0] = v10;
  v14 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _DWORD *), __int64 *, __int64 *))v13[4])(a3, &v58, &v47);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x90u, 0LL);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v47 + 16LL))(v47, &v53);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x93u, 0LL);
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v47 + 24LL))(
              v47,
              &v52,
              &v57);
      v16 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x97u, 0LL);
      }
      else
      {
        v21 = v57;
        v22 = v52;
        v23 = v53;
        v24 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))v47)(v47, v62);
        v25 = HrCreateBitmapFromMemoryEx(v59 - (int)v58, v60 - HIDWORD(v58), v24, v23, v22, v21, 0LL, &v55);
        v16 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xA1u, 0LL);
        }
        else
        {
          if ( v51 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
          v27 = (char *)v55 + *(int *)(*((_QWORD *)v55 + 1) + 4LL) + 8;
          v28 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v27)(
                  v27,
                  &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                  &v51);
          v16 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xA3u, 0LL);
          }
          else
          {
            ImagingFactory = CComposition::GetImagingFactory(g_pComposition, &v54);
            v16 = ImagingFactory;
            if ( ImagingFactory < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, ImagingFactory, 0xA5u, 0LL);
            }
            else
            {
              v32 = v54;
              CreateBitmapScaler = v54->lpVtbl->CreateBitmapScaler;
              if ( v48 )
                ((void (__fastcall *)(struct IWICBitmapSource *))v48->lpVtbl->Release)(v48);
              v34 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))CreateBitmapScaler)(
                      v32,
                      &v48);
              v16 = v34;
              if ( v34 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xA7u, 0LL);
              }
              else
              {
                v36 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v48->lpVtbl[1].QueryInterface)(
                        v48,
                        v51,
                        *(unsigned int *)(a1 + 152),
                        *(unsigned int *)(a1 + 156),
                        3);
                v16 = v36;
                if ( v36 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xADu, 0LL);
                }
                else
                {
                  if ( v50 )
                  {
                    v38 = (char *)v50 + *(int *)(*((_QWORD *)v50 + 1) + 4LL) + 8;
                    (*(void (__fastcall **)(char *))(*(_QWORD *)v38 + 16LL))(v38);
                  }
                  v39 = HrCreateBitmapFromWICBitmapSource(v48, &v50);
                  v16 = v39;
                  if ( v39 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xB1u, 0LL);
                  }
                  else
                  {
                    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v49);
                    v41 = (char *)v50 + *(int *)(*((_QWORD *)v50 + 1) + 4LL) + 8;
                    v42 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v41)(
                            v41,
                            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                            &v49);
                    v16 = v42;
                    if ( v42 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xB3u, 0LL);
                    }
                    else
                    {
                      v44 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v49 + 24LL))(
                              v49,
                              v61,
                              1LL,
                              a4);
                      v16 = v44;
                      if ( v44 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xB7u, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v49);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v50);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v48);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v54);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v51);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
  return v16;
}
