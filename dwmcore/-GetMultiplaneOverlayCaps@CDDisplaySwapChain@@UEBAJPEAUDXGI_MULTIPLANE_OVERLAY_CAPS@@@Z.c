__int64 __fastcall CDDisplaySwapChain::GetMultiplaneOverlayCaps(
        CDDisplaySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // edx
  bool v30; // cc
  double v31; // xmm0_8
  float v32; // xmm1_4
  __int64 v33; // rdi
  void **v34; // r14
  void **i; // rsi
  __int64 v37; // [rsp+30h] [rbp-39h] BYREF
  double v38; // [rsp+38h] [rbp-31h] BYREF
  double v39; // [rsp+40h] [rbp-29h] BYREF
  double v40; // [rsp+48h] [rbp-21h] BYREF
  double v41[5]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v42; // [rsp+78h] [rbp+Fh]
  char v43; // [rsp+D0h] [rbp+67h] BYREF
  char v44; // [rsp+D8h] [rbp+6Fh] BYREF
  char v45; // [rsp+E0h] [rbp+77h] BYREF
  char v46; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_OWORD *)a2 = 0LL;
  v42 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = v42;
  *((_DWORD *)a2 + 10) = 0;
  v37 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v37);
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 45))(
    *((_QWORD *)this + 45),
    &GUID_c1696df6_9f38_5d52_ad5f_462a1d6926ed,
    &v37);
  v38 = 0.0;
  v39 = 0.0;
  v4 = (*(__int64 (__fastcall **)(__int64, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(*(_QWORD *)v37 + 56LL))(v37, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x2EDu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v37 + 64LL))(v37, (char *)a2 + 4);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2EEu, 0LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v37 + 72LL))(v37, (char *)a2 + 8);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2EFu, 0LL);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v37 + 80LL))(v37, &v40);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2F0u, 0LL);
        }
        else
        {
          v13 = v37;
          *((float *)a2 + 4) = v40;
          v14 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v13 + 88LL))(v13, v41);
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2F2u, 0LL);
          }
          else
          {
            v16 = v37;
            v43 = 0;
            v44 = 0;
            v45 = 0;
            v46 = 0;
            *((float *)a2 + 5) = v41[0];
            v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v16 + 96LL))(v16, 0LL, &v43);
            v6 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2FAu, 0LL);
            }
            else
            {
              v19 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v37 + 96LL))(v37, 2LL, &v45);
              v6 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2FBu, 0LL);
              }
              else
              {
                v21 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v37 + 96LL))(v37, 1LL, &v44);
                v6 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2FCu, 0LL);
                }
                else
                {
                  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 41) + 56LL))(
                          *((_QWORD *)this + 41),
                          2LL,
                          &v46);
                  v6 = v23;
                  if ( v23 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x2FDu, 0LL);
                  }
                  else
                  {
                    v25 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v37 + 104LL))(v37, &v38);
                    v6 = v25;
                    if ( v25 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x2FFu, 0LL);
                    }
                    else
                    {
                      v27 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v37 + 112LL))(v37, &v39);
                      v6 = v27;
                      if ( v27 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x300u, 0LL);
                      }
                      else
                      {
                        v29 = (v46 != 0 ? 0x40000 : 0) | (v45 != 0 ? 4 : 0) | *((_DWORD *)a2 + 3) | (v43 != 0) | (v44 != 0 ? 2 : 0);
                        v30 = *((_DWORD *)a2 + 1) <= 1u;
                        *((_DWORD *)a2 + 3) = v29;
                        if ( !v30 )
                        {
                          v29 |= 0x20u;
                          *((_DWORD *)a2 + 3) = v29;
                        }
                        if ( *((_DWORD *)a2 + 2) )
                          *((_DWORD *)a2 + 3) = v29 | 0x40;
                        v31 = v38;
                        if ( v38 > 1.0 )
                        {
                          v32 = v39;
                          *((_DWORD *)a2 + 6) = 1;
                          *((_DWORD *)a2 + 8) = 1024;
                          *((float *)a2 + 10) = v32;
                          *((float *)a2 + 9) = v31;
                        }
                        v33 = *((_QWORD *)this + 10);
                        if ( v33 )
                        {
                          v34 = *(void ***)(v33 + 1456);
                          for ( i = *(void ***)(v33 + 1448); i != v34; ++i )
                          {
                            if ( *i )
                              operator delete(*i);
                          }
                          *(_QWORD *)(v33 + 1456) = *(_QWORD *)(v33 + 1448);
                        }
                        *((_DWORD *)this + 52) = 2;
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
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
  return v6;
}
