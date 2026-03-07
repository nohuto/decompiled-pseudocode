__int64 __fastcall CDDisplayManager::GetDisplayDeviceAndTarget(
        CDDisplayManager *this,
        struct _LUID a2,
        void *a3,
        int a4,
        struct DDisplayTargetResources *a5)
{
  DWORD LowPart; // edi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  LONG HighPart; // r15d
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // rsi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  CDDisplayManager *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, void *, GUID *, __int128 *); // rbx
  unsigned int v34; // [rsp+28h] [rbp-91h]
  __int64 *v35; // [rsp+38h] [rbp-81h] BYREF
  struct Windows::Devices::Display::Core::IDisplayAdapter *v36; // [rsp+40h] [rbp-79h] BYREF
  __int64 v37; // [rsp+48h] [rbp-71h] BYREF
  __int64 v38; // [rsp+50h] [rbp-69h] BYREF
  struct Windows::Devices::Display::Core::IDisplayDevice *v39[2]; // [rsp+58h] [rbp-61h] BYREF
  __int128 v40; // [rsp+68h] [rbp-51h] BYREF
  __int64 v41[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v42; // [rsp+88h] [rbp-31h] BYREF
  __int128 v43; // [rsp+98h] [rbp-21h] BYREF
  int v44; // [rsp+A8h] [rbp-11h] BYREF
  int v45; // [rsp+ACh] [rbp-Dh]
  int v46; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v47; // [rsp+C0h] [rbp+7h] BYREF
  GUID v48; // [rsp+C8h] [rbp+Fh] BYREF
  CDDisplayManager *v49; // [rsp+118h] [rbp+5Fh] BYREF
  struct _LUID v50; // [rsp+120h] [rbp+67h] BYREF

  v50 = a2;
  v49 = this;
  LowPart = a2.LowPart;
  v8 = *(_QWORD *)g_DDisplayManager;
  v38 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v8 + 48))(g_DDisplayManager, &v38);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x102u, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, CDDisplayManager **))(*(_QWORD *)v38 + 56LL))(v38, &v49);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x103u, 0LL);
    }
    else
    {
      v14 = 0;
      if ( (_DWORD)v49 )
      {
        HighPart = v50.HighPart;
        while ( 1 )
        {
          v16 = v38;
          v35 = 0LL;
          v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v38 + 48LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v35);
          v18 = v17(v16, v14, (__int64 *)&v35);
          v11 = v18;
          if ( v18 < 0 )
            break;
          v20 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v35 + 64))(v35, &v46);
          v11 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x10Du, 0LL);
            goto LABEL_50;
          }
          if ( a4 == v46 )
          {
            v22 = *v35;
            v36 = 0LL;
            v23 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Devices::Display::Core::IDisplayAdapter **))(v22 + 48))(
                    v35,
                    &v36);
            v11 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x116u, 0LL);
              goto LABEL_47;
            }
            v25 = (*(__int64 (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayAdapter *, __int64 *))(*(_QWORD *)v36 + 48LL))(
                    v36,
                    &v47);
            v11 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x117u, 0LL);
              goto LABEL_47;
            }
            v37 = v47;
            *(_QWORD *)&v48.Data1 = __PAIR64__(HighPart, LowPart);
            if ( __PAIR64__(HighPart, LowPart) == v47 )
            {
              v41[0] = 0LL;
              *(_OWORD *)v39 = 0LL;
              v40 = 0LL;
              v42 = 0LL;
              v43 = 0LL;
              v44 = -1;
              v45 = -1;
              v41[1] = (__int64)v35;
              if ( v35 )
                (*(void (__fastcall **)(__int64 *))(*v35 + 8))(v35);
              wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v39);
              v28 = CDDisplayManager::EnsureDevice(v27, &v50, v36, v39);
              v11 = v28;
              if ( v28 < 0 )
              {
                v34 = 287;
              }
              else
              {
                wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v39[1]);
                v28 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, struct Windows::Devices::Display::Core::IDisplayDevice **))v39[0])(
                        v39[0],
                        &GUID_3fefe50c_0940_54bd_a02f_f9c7a536ad60,
                        &v39[1]);
                v11 = v28;
                if ( v28 < 0 )
                {
                  v34 = 288;
                }
                else
                {
                  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v40);
                  v28 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, __int128 *))v39[0])(
                          v39[0],
                          &GUID_54e1a93c_3c52_5efb_957e_4bf25c4bd20e,
                          &v40);
                  v11 = v28;
                  if ( v28 < 0 )
                  {
                    v34 = 289;
                  }
                  else
                  {
                    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v40 + 1);
                    v28 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, char *))v39[0])(
                            v39[0],
                            &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
                            (char *)&v40 + 8);
                    v11 = v28;
                    if ( v28 < 0 )
                    {
                      v34 = 290;
                    }
                    else
                    {
                      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v41);
                      v28 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, __int64 *))v39[0])(
                              v39[0],
                              &GUID_4824eb1d_6525_4522_bae1_f7bad7168a94,
                              v41);
                      v11 = v28;
                      if ( v28 < 0 )
                      {
                        v34 = 291;
                      }
                      else
                      {
                        v30 = *((_QWORD *)&v43 + 1);
                        *((_QWORD *)&v43 + 1) = 0LL;
                        if ( v30 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                        v28 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, char *))v39[0])(
                                v39[0],
                                &GUID_89887184_7ca9_4645_b0ce_5b51a741fc80,
                                (char *)&v43 + 8);
                        v11 = v28;
                        if ( v28 < 0 )
                        {
                          v34 = 292;
                        }
                        else
                        {
                          v31 = *((_QWORD *)&v40 + 1);
                          v32 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int128 *))(**((_QWORD **)&v40 + 1)
                                                                                              + 32LL);
                          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v42);
                          v48 = GUID_ecd15fc1_eadc_51bc_971d_3bc628db2dd4;
                          v28 = v32(v31, a3, &v48, &v42);
                          v11 = v28;
                          if ( v28 < 0 )
                          {
                            v34 = 303;
                          }
                          else
                          {
                            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v42 + 1);
                            v28 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v42)(
                                    v42,
                                    &GUID_71e18952_b321_5af4_bfe8_03fbea31e40d,
                                    (char *)&v42 + 8);
                            v11 = v28;
                            if ( v28 < 0 )
                            {
                              v34 = 306;
                            }
                            else
                            {
                              wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v43);
                              v28 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int128 *))v42)(
                                      v42,
                                      &GUID_c1696df6_9f38_5d52_ad5f_462a1d6926ed,
                                      &v43);
                              v11 = v28;
                              if ( v28 < 0 )
                              {
                                v34 = 309;
                              }
                              else
                              {
                                v28 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)&v42 + 1) + 48LL))(
                                        *((_QWORD *)&v42 + 1),
                                        &v37);
                                v11 = v28;
                                if ( v28 < 0 )
                                {
                                  v34 = 314;
                                }
                                else
                                {
                                  if ( (_DWORD)v37 )
                                  {
                                    v11 = -2003304309;
                                    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2003304309, 0x13Du, 0LL);
                                    goto LABEL_44;
                                  }
                                  v28 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v42 + 56LL))(v42, &v44);
                                  v11 = v28;
                                  if ( v28 >= 0 )
                                  {
                                    v45 = a4;
                                    DDisplayTargetResources::operator=((__int64)a5, (__int64)v39);
                                    goto LABEL_44;
                                  }
                                  v34 = 321;
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
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, v34, 0LL);
LABEL_44:
              DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v39);
LABEL_47:
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
              goto LABEL_50;
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
          if ( ++v14 >= (unsigned int)v49 )
            goto LABEL_53;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x10Cu, 0LL);
LABEL_50:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
      }
    }
  }
LABEL_53:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
  return v11;
}
