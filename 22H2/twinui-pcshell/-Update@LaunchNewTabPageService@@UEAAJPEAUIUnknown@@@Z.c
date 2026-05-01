/*
 * XREFs of ?Update@LaunchNewTabPageService@@UEAAJPEAUIUnknown@@@Z @ 0x1802EF140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LaunchNewTabPageService::Update(LaunchNewTabPageService *this, struct IUnknown *a2)
{
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v14; // rdi
  HSTRING_HEADER *v15; // rax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING_HEADER *, __int64 *); // rdi
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v22; // rdi
  HSTRING_HEADER *v23; // rax
  _BYTE v25[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v26; // [rsp+40h] [rbp-11h] BYREF
  __int64 v27; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v28; // [rsp+50h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp+7h] BYREF
  __int64 v30; // [rsp+70h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v28 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  ActivationFactory = RoGetActivationFactory(v30, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v28);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v6 = *v28;
    v26 = 0LL;
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *((_OWORD *)this + 3);
    v7 = (*(__int64 (__fastcall **)(__int64 *, HSTRING_HEADER *, __int64 *))(v6 + 160))(v28, &hstringHeader, &v26);
    v5 = v7;
    if ( v7 >= 0 )
    {
      lpVtbl = a2->lpVtbl;
      v27 = 0LL;
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
             a2,
             &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
             &v27);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v12 = v27;
        v13 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v27 + 80LL);
        v14 = v26;
        v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_180540E78,
                v10);
        v9 = v13(v12, v15[1].Reserved.Reserved1, v14, v25);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v16 = (__int64)v28;
          v17 = *(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(*v28 + 160);
          v18 = v26;
          v26 = 0LL;
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0LL;
          v9 = v17(v16, &hstringHeader, &v26);
          v5 = v9;
          if ( v9 >= 0 )
          {
            v20 = v27;
            v21 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v27 + 80LL);
            v22 = v26;
            v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)off_180540E68,
                    v19);
            v9 = v21(v20, v23[1].Reserved.Reserved1, v22, v25);
            v5 = v9;
            if ( v9 >= 0 )
            {
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
              v5 = 0;
              goto LABEL_18;
            }
            v11 = 69LL;
          }
          else
          {
            v11 = 68LL;
          }
        }
        else
        {
          v11 = 65LL;
        }
      }
      else
      {
        v11 = 62LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)(unsigned int)ActivationFactory);
  }
LABEL_18:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
  return v5;
}
