/*
 * XREFs of ?GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x18003E260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180012208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18003E57C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Fou.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::GetLogo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdi
  HRESULT v15; // eax
  HSTRING v16; // rbx
  int ActivationFactory; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+38h] [rbp-29h] BYREF
  __int64 v26; // [rsp+40h] [rbp-21h] BYREF
  __int64 v27; // [rsp+48h] [rbp-19h] BYREF
  __int64 v28; // [rsp+50h] [rbp-11h] BYREF
  __int64 v29; // [rsp+58h] [rbp-9h] BYREF
  __int64 v30; // [rsp+60h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v25 = a2;
  v30 = a2;
  if ( !a3 )
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return (unsigned int)v4;
  }
  v5 = *(_QWORD *)(a1 + 64);
  v25 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v25);
  v4 = v6;
  if ( v6 >= 0 )
  {
    if ( !v25 )
    {
      v4 = -2147467261;
      v8 = 64LL;
      v7 = 2147500035LL;
      goto LABEL_7;
    }
    v29 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v29);
    v4 = v9;
    if ( v9 < 0 )
    {
      v11 = (unsigned int)v9;
      v12 = 67LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)v11);
LABEL_33:
      v22 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      goto LABEL_35;
    }
    if ( !v29 )
    {
      v4 = -2147467261;
      v12 = 68LL;
      v11 = 2147500035LL;
      goto LABEL_12;
    }
    v28 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v29 + 72LL))(v29, v10, v30, &v28);
    v4 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)(unsigned int)v13);
LABEL_31:
      v21 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_33;
    }
    v14 = v28;
    v27 = 0LL;
    v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *> *>(v28);
    if ( v4 >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 64LL))(v14, &v27);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)(unsigned int)v4);
LABEL_29:
      v20 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_31;
    }
    v26 = 0LL;
    string = 0LL;
    v15 = WindowsCreateStringReference(
            L"Windows.Storage.Streams.RandomAccessStreamReference",
            0x33u,
            &hstringHeader,
            &string);
    if ( v15 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
      JUMPOUT(0x18003E574LL);
    }
    v16 = string;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    ActivationFactory = RoGetActivationFactory(v16, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v26);
    v4 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 64LL))(v26, v27, a3);
      v4 = ActivationFactory;
      if ( ActivationFactory >= 0 )
        goto LABEL_27;
      v18 = 88LL;
    }
    else
    {
      v18 = 86LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_27:
    v19 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_29;
  }
  v7 = (unsigned int)v6;
  v8 = 63LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
    (const char *)v7);
LABEL_35:
  v23 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v4;
}
