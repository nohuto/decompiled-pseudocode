/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001B6C0
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001B2E0 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180012208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800125A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeListeners@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18001BBB4 (-_InitializeListeners@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18001E678 (--$MakeAndInitialize@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@V12345.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18002013C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInter.c)
 *     ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003C860 (-LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003D730 (-PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // ebx
  int v6; // eax
  HRESULT v7; // eax
  PVOID Reserved1; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  HRESULT v14; // eax
  HSTRING v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  unsigned __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  PVOID v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  PVOID v30; // [rsp+38h] [rbp-39h] BYREF
  __int64 v31; // [rsp+40h] [rbp-31h] BYREF
  __int64 v32; // [rsp+48h] [rbp-29h] BYREF
  int v33[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v34; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-9h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER v37; // [rsp+88h] [rbp+17h] BYREF
  HSTRING v38; // [rsp+A0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglAsync();
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync();
  v2 = 1;
  RtlGetDeviceFamilyInfoEnum(0LL, &hstringHeader, 0LL);
  if ( LODWORD(hstringHeader.Reserved.Reserved1) == 3 || LODWORD(hstringHeader.Reserved.Reserved1) == 9 )
    v2 = 3;
  v32 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"WindowsInternal.Shell.CDSProperties.CDSTilePropertiesBatched",
         0x3Cu,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
    goto LABEL_56;
  ActivationFactory = RoGetActivationFactory(string, &GUID_3055f2cd_a89f_43f3_be60_867e2644b283, &v32);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_52;
  }
  v34 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v32 + 48LL))(v32, 0LL, 7LL, &v34);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v30 = 0LL;
    v38 = 0LL;
    v7 = WindowsCreateStringReference(L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManagerOptions", 0x3Bu, &v37, &v38);
    if ( v7 < 0 )
    {
LABEL_57:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      JUMPOUT(0x18001BBACLL);
    }
    v30 = 0LL;
    v5 = RoActivateInstance(v38, &hstringHeader);
    if ( v5 < 0
      || (*(_QWORD *)&GUID_a1b4cf69_bd07_4669_9639_e9234c455794.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
       || *(_QWORD *)GUID_a1b4cf69_bd07_4669_9639_e9234c455794.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        ? (v5 = (**(__int64 (__fastcall ***)(PVOID, GUID *, PVOID *))hstringHeader.Reserved.Reserved1)(
                  hstringHeader.Reserved.Reserved1,
                  &GUID_a1b4cf69_bd07_4669_9639_e9234c455794,
                  &v30),
           (*(void (__fastcall **)(PVOID))(*(_QWORD *)hstringHeader.Reserved.Reserved1 + 16LL))(hstringHeader.Reserved.Reserved1),
           Reserved1 = v30)
        : (Reserved1 = hstringHeader.Reserved.Reserved1, v30 = hstringHeader.Reserved.Reserved1),
          v5 < 0) )
    {
      v12 = (unsigned int)v5;
      v13 = 191LL;
      goto LABEL_47;
    }
    v9 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)Reserved1 + 160LL))(Reserved1, 1LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC0,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v30 + 176LL))(v30, 0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC1,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v10);
    *(GUID *)&hstringHeader.Reserved.Reserved1 = WindowsInternal::Shell::CDSProperties::c_batchedTilePropertiesTransformerId;
    v11 = (*(__int64 (__fastcall **)(PVOID, HSTRING_HEADER *, __int64))(*(_QWORD *)v30 + 48LL))(
            v30,
            &hstringHeader,
            v34);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 195LL;
LABEL_47:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)v12);
LABEL_48:
      v26 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v26 + 16LL))(v26);
      }
      goto LABEL_50;
    }
    v31 = 0LL;
    v38 = 0LL;
    v14 = WindowsCreateStringReference(L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManager", 0x34u, &v37, &v38);
    if ( v14 >= 0 )
    {
      v15 = v38;
      v16 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v17 = RoGetActivationFactory(v15, &GUID_3747c20e_e7a2_4eb1_afec_7d4383bb2cb2, &v31);
      v5 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v17);
LABEL_44:
        v25 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        goto LABEL_48;
      }
      *(_QWORD *)v33 = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, PVOID, int *))(*(_QWORD *)v31 + 56LL))(
                  v31,
                  55LL,
                  v2,
                  v30,
                  v33);
      v5 = updated;
      if ( updated >= 0 )
      {
        v20 = *((_QWORD *)this + 7);
        if ( v20 )
        {
          *((_QWORD *)this + 7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        v21 = *(_QWORD *)v33;
        v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *> *>(*(_QWORD *)v33);
        if ( v5 >= 0 )
          v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 64LL))(v21, (char *)this + 56);
        if ( v5 < 0 )
        {
          v22 = (unsigned int)v5;
          v19 = 207LL;
LABEL_38:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)v22);
LABEL_42:
          v24 = *(_QWORD *)v33;
          if ( *(_QWORD *)v33 )
          {
            *(_QWORD *)v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          goto LABEL_44;
        }
        updated = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler,Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler,>((char *)this + 128);
        v5 = updated;
        if ( updated >= 0 )
        {
          v23 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_InitializeListeners(this);
          if ( v23 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xD3,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
              (const char *)(unsigned int)v23);
          v5 = 0;
          goto LABEL_42;
        }
        v19 = 209LL;
      }
      else
      {
        v19 = 205LL;
      }
      v22 = (unsigned int)updated;
      goto LABEL_38;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
LABEL_56:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB9,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v6);
LABEL_50:
  v27 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
LABEL_52:
  v28 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return (unsigned int)v5;
}
