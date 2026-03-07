__int64 __fastcall CDDisplayManager::EnsureDDisplayManager(CDDisplayManager *this)
{
  unsigned int v1; // ebx
  HRESULT v2; // eax
  __int64 v3; // rcx
  int ActivationFactory; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD *, __int64, __int128 *); // rdi
  int v10; // eax
  __int64 v11; // rcx
  HRESULT v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  HRESULT v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  HSTRING v23; // [rsp+38h] [rbp-19h] BYREF
  HSTRING v24; // [rsp+40h] [rbp-11h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-9h] BYREF
  HSTRING string; // [rsp+50h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp+7h] BYREF
  HSTRING_HEADER v28; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING_HEADER v29; // [rsp+88h] [rbp+37h] BYREF

  v1 = 0;
  if ( !(_QWORD)g_DDisplayManager )
  {
    v25 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    string = 0LL;
    v2 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
    v1 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x5Eu, 0LL);
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v25);
      v1 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ActivationFactory, 0x5Fu, 0LL);
      }
      else
      {
        v6 = g_DDisplayManager;
        v7 = v25;
        v8 = *v25;
        *(_QWORD *)&g_DDisplayManager = 0LL;
        v9 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int128 *))(v8 + 48);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v10 = v9(v7, 2LL, &g_DDisplayManager);
        v1 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x60u, 0LL);
        }
        else
        {
          v24 = 0LL;
          v12 = WindowsCreateStringReference(
                  L"Windows.Devices.Display.Core.DisplayPrimaryDescription",
                  0x36u,
                  &v28,
                  &v24);
          v1 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x66u, 0LL);
          }
          else
          {
            v14 = *((_QWORD *)&g_DDisplayManager + 1);
            *((_QWORD *)&g_DDisplayManager + 1) = 0LL;
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            v15 = RoGetActivationFactory(
                    v24,
                    &GUID_e60e4cfb_36c9_56dd_8fa1_6ff8c4e0ff07,
                    (char *)&g_DDisplayManager + 8);
            v1 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x67u, 0LL);
            }
            else
            {
              v23 = 0LL;
              v17 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayHdrMetadata", 0x2Fu, &v29, &v23);
              v1 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x6Du, 0LL);
              }
              else
              {
                v19 = xmmword_1803E32C0;
                *(_QWORD *)&xmmword_1803E32C0 = 0LL;
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                v20 = RoGetActivationFactory(v23, &GUID_028d1ebd_933a_5cba_97d8_fe808844d45d, &xmmword_1803E32C0);
                v1 = v20;
                if ( v20 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x6Eu, 0LL);
              }
            }
          }
        }
      }
    }
    if ( v23 )
      WindowsDeleteString(v23);
    if ( v24 )
      WindowsDeleteString(v24);
    if ( string )
      WindowsDeleteString(string);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  }
  return v1;
}
