/*
 * XREFs of MsixvcUpdatePolicyInternal @ 0x180004100
 * Callers:
 *     MsixvcUpdatePolicyString @ 0x180004700 (MsixvcUpdatePolicyString.c)
 *     MsixvcUpdatePolicyUInt64 @ 0x180004750 (MsixvcUpdatePolicyUInt64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002864 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180004D20 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004DA0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004DBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800062A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180006B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MsixvcUpdatePolicyInternal(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int ActivationFactory; // eax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  HRESULT v14; // eax
  void *v15; // rdx
  unsigned int v16; // r8d
  IUnknown *v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  HSTRING v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  HRESULT v29; // eax
  int v30; // edx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  HSTRING v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  IUnknown *v45; // rcx
  int dwAuthnLevel; // [rsp+20h] [rbp-61h]
  int v48[2]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v49[8]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v50; // [rsp+50h] [rbp-31h] BYREF
  __int64 v51; // [rsp+58h] [rbp-29h] BYREF
  IUnknown *pProxy; // [rsp+60h] [rbp-21h] BYREF
  __int64 v53; // [rsp+68h] [rbp-19h] BYREF
  int v54; // [rsp+70h] [rbp-11h] BYREF
  __int64 v55; // [rsp+78h] [rbp-9h] BYREF
  __int64 v56; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v53 = a1;
  v55 = a2;
  v56 = a4;
  pProxy = 0LL;
  v51 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &pProxy);
  v11 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v12 = (unsigned int)ActivationFactory;
    v13 = 51LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)v12);
    goto LABEL_64;
  }
  v14 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, (OLECHAR *)0xFFFFFFFFFFFFFFFFLL, 0, 3u, 0LL, 0x40u);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(retaddr, v15, v16, (const char *)(unsigned int)v14, dwAuthnLevel);
  v17 = pProxy;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v53);
  v19 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, _QWORD, __int64 *))v17->lpVtbl[17].AddRef)(
          v17,
          0LL,
          *(_QWORD *)(v18 + 24),
          &v51);
  v11 = v19;
  if ( v19 < 0 )
  {
    v12 = (unsigned int)v19;
    v13 = 53LL;
    goto LABEL_14;
  }
  if ( (int)IsDeveloperModeEnabled(&v54) < 0 || !v54 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v51 + 416LL))(v51, v49);
    v11 = v20;
    if ( v20 < 0 )
    {
      v12 = (unsigned int)v20;
      v13 = 62LL;
      goto LABEL_14;
    }
    if ( !v49[0] )
    {
      v11 = -2147024809;
      v13 = 63LL;
      v12 = 2147942487LL;
      goto LABEL_14;
    }
  }
  v50 = 0LL;
  *(_QWORD *)v48 = 0LL;
  string = 0LL;
  v21 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v21 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
    JUMPOUT(0x1800046F3LL);
  }
  v24 = string;
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  v25 = RoGetActivationFactory(v24, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &v50);
  v11 = v25;
  if ( v25 < 0 )
  {
    v26 = 68LL;
LABEL_57:
    v39 = (unsigned int)v25;
    goto LABEL_58;
  }
  v27 = v50;
  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v55);
  v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v27 + 304LL))(
          v27,
          v51,
          *(_QWORD *)(v28 + 24),
          a3,
          v48);
  v11 = v25;
  if ( v25 < 0 )
  {
    v26 = 69LL;
    goto LABEL_57;
  }
  if ( *(_QWORD *)v48 )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v48 + 216LL))(*(_QWORD *)v48, a5);
    v11 = v25;
    if ( v25 < 0 )
    {
      v26 = 92LL;
      goto LABEL_57;
    }
    if ( a4 )
    {
      v40 = *(_QWORD *)v48;
      v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v56);
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 200LL))(v40, *(_QWORD *)(v41 + 24));
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 96LL;
        goto LABEL_57;
      }
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v48 + 184LL))(*(_QWORD *)v48);
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 100LL;
        goto LABEL_57;
      }
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v50 + 56LL))(v50, *(_QWORD *)v48);
    v11 = v25;
    if ( v25 < 0 )
    {
      v26 = 103LL;
      goto LABEL_57;
    }
    goto LABEL_59;
  }
  string = 0LL;
  v29 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v29 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v29, v30, v31);
    __debugbreak();
  }
  v32 = *(_QWORD *)v48;
  v33 = string;
  if ( *(_QWORD *)v48 )
  {
    *(_QWORD *)v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  *(_QWORD *)v48 = 0LL;
  v11 = RoActivateInstance(v33, &v53);
  if ( v11 >= 0 )
  {
    if ( *(_QWORD *)&GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v34 = v53;
      *(_QWORD *)v48 = v53;
    }
    else
    {
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v53)(
              v53,
              &GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04,
              v48);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      v34 = *(_QWORD *)v48;
    }
    if ( v11 >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 136LL))(v34, v51);
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 74LL;
        goto LABEL_57;
      }
      v35 = *(_QWORD *)v48;
      v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v55);
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 152LL))(v35, *(_QWORD *)(v36 + 24));
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 75LL;
        goto LABEL_57;
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v48 + 168LL))(*(_QWORD *)v48, a3);
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 76LL;
        goto LABEL_57;
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v48 + 216LL))(*(_QWORD *)v48, a5);
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 77LL;
        goto LABEL_57;
      }
      if ( a4 )
      {
        v37 = *(_QWORD *)v48;
        v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v56);
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 200LL))(v37, *(_QWORD *)(v38 + 24));
        v11 = v25;
        if ( v25 < 0 )
        {
          v26 = 81LL;
          goto LABEL_57;
        }
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v48 + 184LL))(*(_QWORD *)v48);
        v11 = v25;
        if ( v25 < 0 )
        {
          v26 = 85LL;
          goto LABEL_57;
        }
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v50 + 48LL))(v50, *(_QWORD *)v48);
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 88LL;
        goto LABEL_57;
      }
LABEL_59:
      v11 = 0;
      goto LABEL_60;
    }
  }
  v39 = (unsigned int)v11;
  v26 = 73LL;
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    (const char *)v39);
LABEL_60:
  v42 = *(_QWORD *)v48;
  if ( *(_QWORD *)v48 )
  {
    *(_QWORD *)v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v43 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
LABEL_64:
  v44 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  v45 = pProxy;
  if ( pProxy )
  {
    pProxy = 0LL;
    ((void (__fastcall *)(IUnknown *))v45->lpVtbl->Release)(v45);
  }
  return (unsigned int)v11;
}
