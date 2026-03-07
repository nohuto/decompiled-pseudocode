__int64 __fastcall CD3DDevice::EnsureVideoProcessor(
        CD3DDevice *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  __int64 *v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  __int64 *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _DWORD *, char *); // rbx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v28; // eax
  __int64 v29; // rcx
  _DWORD v31[10]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+28h]

  v5 = a5;
  v6 = (__int64 *)((char *)this + 1008);
  v7 = 0;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( !*((_QWORD *)this + 126)
    || a2 > *((_DWORD *)this + 254)
    || a3 > *((_DWORD *)this + 255)
    || a4 > *((_DWORD *)this + 256)
    || a5 > *((_DWORD *)this + 257) )
  {
    v12 = (__int64 *)((char *)this + 984);
    if ( !*((_QWORD *)this + 123) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 123);
      v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 69))(
              *((_QWORD *)this + 69),
              &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
              v12);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x7FFu, 0LL);
LABEL_27:
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 125);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 124);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v12);
        *((_DWORD *)this + 254) = 0;
        *((_DWORD *)this + 255) = 0;
        *((_DWORD *)this + 256) = 0;
        *((_DWORD *)this + 257) = 0;
        return v7;
      }
    }
    if ( !*((_QWORD *)this + 124) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 124);
      v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 70))(
              *((_QWORD *)this + 70),
              &GUID_a7f026da_a5f8_4487_a564_15e34357651e,
              (char *)this + 992);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x804u, 0LL);
        goto LABEL_27;
      }
    }
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 125);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
    if ( v10 <= *((_DWORD *)this + 254) )
      v10 = *((_DWORD *)this + 254);
    v17 = *((_DWORD *)this + 255);
    v31[3] = v10;
    if ( v9 <= v17 )
      v9 = v17;
    v18 = *((_DWORD *)this + 256);
    v31[4] = v9;
    if ( v8 <= v18 )
      v8 = v18;
    v19 = *((_DWORD *)this + 257);
    v31[7] = v8;
    if ( a5 <= v19 )
      v5 = v19;
    v31[0] = 0;
    v31[9] = 0;
    v31[8] = v5;
    v31[1] = 1;
    v31[2] = 1;
    v31[5] = 1;
    v31[6] = 1;
    v32 = v5;
    v20 = *v12;
    v21 = *(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)*v12 + 80LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 125);
    v22 = v21(v20, v31, (char *)this + 1000);
    v7 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x81Bu, 0LL);
      goto LABEL_27;
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 125) + 72LL))(
            *((_QWORD *)this + 125),
            (char *)this + 944);
    v7 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x81Du, 0LL);
      goto LABEL_27;
    }
    v26 = *v12;
    v27 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)*v12 + 32LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
    v28 = v27(v26, *((_QWORD *)this + 125), 0LL, v6);
    v7 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x821u, 0LL);
      goto LABEL_27;
    }
    *((_DWORD *)this + 257) = v32;
    *((_DWORD *)this + 254) = v10;
    *((_DWORD *)this + 255) = v9;
    *((_DWORD *)this + 256) = v8;
  }
  return v7;
}
