/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180028C34
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180028880 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x18006DBF0 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x18008C408 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1801A76EC (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BED68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1802B0FA0 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  HSTRING v8; // r15
  int v9; // edi
  int v10; // r14d
  int v11; // eax
  int v12; // eax
  HWND v13; // rcx
  char v14; // al
  HRESULT v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  HSTRING v18; // r14
  int v19; // eax
  int v20; // eax
  HWND v21; // rcx
  char v22; // al
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  char v26; // al
  int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rax
  int UInt32; // eax
  __int64 v31; // rcx
  __int64 v32; // rsi
  _QWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v37; // [rsp+20h] [rbp-50h] BYREF
  HWND v38; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+30h] [rbp-40h] BYREF
  int v40; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v41; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v42; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = 0;
  LODWORD(v38) = 0;
  v41 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    __debugbreak();
  }
  v8 = string;
  v38 = 0LL;
  v9 = -2147467261;
  if ( !a2 )
  {
    v10 = -2147467261;
LABEL_10:
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v38);
    goto LABEL_16;
  }
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))a2)(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v38);
  v10 = v11;
  if ( v11 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v11,
      v37);
  if ( v10 < 0 )
    goto LABEL_10;
  v12 = (*(__int64 (__fastcall **)(HWND, HSTRING, int *))(*(_QWORD *)v38 + 64LL))(v38, v8, &v37);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v12,
      v37);
    goto LABEL_10;
  }
  v13 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v10 = 0;
LABEL_16:
  if ( v10 < 0 || (v14 = 1, !(_BYTE)v37) )
    v14 = 0;
  if ( v14 )
    goto LABEL_59;
  string = 0LL;
  v15 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15, v16, v17);
    JUMPOUT(0x18002905FLL);
  }
  v18 = string;
  v38 = 0LL;
  if ( !a2 )
    goto LABEL_26;
  v19 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))a2)(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v38);
  v9 = v19;
  if ( v19 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v19,
      v37);
  if ( v9 < 0 )
    goto LABEL_26;
  v20 = (*(__int64 (__fastcall **)(HWND, HSTRING, int *))(*(_QWORD *)v38 + 64LL))(v38, v18, &v37);
  v9 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v20,
      v37);
LABEL_26:
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v38);
    goto LABEL_32;
  }
  v21 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v9 = 0;
LABEL_32:
  if ( v9 < 0 || (v22 = 1, !(_BYTE)v37) )
    v22 = 0;
  if ( v22 )
    goto LABEL_59;
  string = 0LL;
  v23 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
  if ( v23 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
    __debugbreak();
  }
  LODWORD(v38) = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v41,
              string,
              &v42) < 0
    || (v26 = 1, v42 != 1) )
  {
    v26 = 0;
  }
  if ( v26 )
  {
    string = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v41,
                string,
                (unsigned int *)&v38) >= 0 )
    {
      v40 = 0;
      if ( HolographicPositioner::IsWindowManaged((HolographicPositioner *)(a1 + 136), (HWND)(unsigned int)v38, &v40) >= 0 )
      {
        v27 = (v40 != 0) + 1;
LABEL_60:
        v4 = v27;
        goto LABEL_61;
      }
    }
  }
  v39 = 0;
  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180509B38);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v41,
              *(HSTRING *)(v28 + 24),
              &v39) >= 0 )
  {
    v31 = v39;
  }
  else
  {
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180509B30);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v41,
               *(HSTRING *)(v29 + 24),
               &v39);
    v31 = v39;
    if ( UInt32 < 0 )
      v31 = 0LL;
    v39 = v31;
  }
  if ( (_DWORD)v31 )
  {
    v32 = (unsigned int)v31;
    v27 = 0;
    v40 = 0;
    if ( (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v31, 1LL, &v40) < 0 )
      goto LABEL_53;
    if ( v40 != 1 )
    {
      v27 = 1;
LABEL_53:
      if ( (unsigned __int8)Microsoft::WRL::operator!=<IApplicationViewCollection>(a1 + 248) )
      {
        LODWORD(v38) = 0;
        v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND *))(*(_QWORD *)*v33 + 40LL))(*v33, v32, &v38);
        if ( v34 >= 0 )
        {
          v35 = v27;
          if ( (_DWORD)v38 )
            v35 = 2;
          v27 = v35;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x555,
            (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v34,
            v37);
        }
      }
      goto LABEL_60;
    }
LABEL_59:
    v27 = 2;
    goto LABEL_60;
  }
LABEL_61:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v41);
  return v4;
}
