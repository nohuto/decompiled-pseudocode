__int64 __fastcall CDDisplayManager::CreateDDisplayDeviceAndTarget(
        CDDisplayManager *this,
        struct IDXGIOutputDWM *a2,
        struct Windows::Devices::Display::Core::IDisplayDevice **a3,
        struct Windows::Devices::Display::Core::IDisplayTarget **a4)
{
  HRESULT v5; // ebx
  __int64 v6; // rdx
  int ActivationFactory; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r12
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned int v17; // r15d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64 **); // rsi
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 *v28; // rbx
  __int64 (__fastcall *v29)(__int64 *, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **); // rsi
  int v30; // eax
  struct Windows::Devices::Display::Core::IDisplayDevice *v31; // rax
  int v32[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  struct Windows::Devices::Display::Core::IDisplayDevice *v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 **); // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v43[3]; // [rsp+78h] [rbp-88h] BYREF
  HSTRING string; // [rsp+90h] [rbp-70h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget **v45; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-40h] BYREF
  int v48; // [rsp+CCh] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v45 = a4;
  *a3 = 0LL;
  *a4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v47);
  if ( v5 < 0 )
  {
    v6 = 134LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v48 == -1 )
  {
    v5 = -2147024809;
    v6 = 140LL;
    goto LABEL_3;
  }
  v5 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    v6 = 148LL;
    goto LABEL_3;
  }
  v41 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v41);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_43;
  }
  v33 = 0LL;
  v8 = (**v41)(v41, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v33);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_42;
  }
  v9 = *v33;
  *(_QWORD *)v32 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, int *))(v9 + 48))(v33, 0LL, v32);
  v5 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_41;
  }
  v11 = **(_QWORD **)v32;
  v34 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v11 + 48))(*(_QWORD *)v32, &v34);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 161LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_40;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 56LL))(v34, &v39);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 164LL;
    goto LABEL_16;
  }
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v37 = 0LL;
  v17 = 0;
  v36 = 0LL;
  if ( !v39 )
  {
LABEL_38:
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_39;
  }
  do
  {
    if ( v14 )
      goto LABEL_52;
    v18 = v34;
    v35 = 0LL;
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v34 + 48LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v35);
    v20 = v19(v18, v17, &v35);
    v5 = v20;
    if ( v20 < 0 )
    {
      v27 = 173LL;
      goto LABEL_50;
    }
    v20 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v35 + 64))(v35, &v42);
    v5 = v20;
    if ( v20 < 0 )
    {
      v27 = 176LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_47;
    }
    if ( v42 != v48 )
      goto LABEL_36;
    v21 = *v35;
    v38 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v21 + 48))(v35, &v38);
    v5 = v22;
    if ( v22 < 0 )
    {
      v26 = 181LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
        (const char *)(unsigned int)v22);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
LABEL_47:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
      goto LABEL_39;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v38 + 48LL))(v38, v43);
    v5 = v22;
    if ( v22 < 0 )
    {
      v26 = 184LL;
      goto LABEL_46;
    }
    v43[2] = v47;
    v43[1] = v43[0];
    if ( v47 == v43[0] )
    {
      v23 = v15;
      v14 = 1;
      v15 = v38;
      v37 = v38;
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v24 = v16;
      v16 = (__int64)v35;
      v36 = v35;
      if ( v35 )
        (*(void (__fastcall **)(__int64 *))(*v35 + 8))(v35);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
LABEL_36:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
    ++v17;
  }
  while ( v17 < v39 );
  if ( !v14 )
    goto LABEL_38;
LABEL_52:
  v28 = *(__int64 **)v32;
  v40 = 0LL;
  v29 = *(__int64 (__fastcall **)(__int64 *, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **))(**(_QWORD **)v32 + 112LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v40);
  v30 = v29(v28, v15, &v40);
  v5 = v30;
  if ( v30 >= 0 )
  {
    v31 = v40;
    v40 = 0LL;
    v36 = 0LL;
    *a3 = v31;
    *v45 = (struct Windows::Devices::Display::Core::IDisplayTarget *)v16;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v32);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v30);
    if ( v40 )
      (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayDevice *))(*(_QWORD *)v40 + 16LL))(v40);
LABEL_39:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
LABEL_40:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
LABEL_41:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v32);
LABEL_42:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
LABEL_43:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
    return (unsigned int)v5;
  }
}
