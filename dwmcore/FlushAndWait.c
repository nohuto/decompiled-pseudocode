/*
 * XREFs of FlushAndWait @ 0x18026F9A4
 * Callers:
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18026F1E8 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CB324 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FF340 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180194800 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18019559C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180196B80 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall FlushAndWait(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v3)(__int64 *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rdx
  HANDLE v10; // rbx
  __int64 v11; // rdx
  wil::details *v12; // rcx
  wil::details *Event; // rdi
  __int64 v14; // r8
  const char *v15; // r9
  signed int LastErrorFailHr; // edi
  __int64 v17; // rdx
  void *v18; // rdx
  DWORD v19; // eax
  void *v20; // rdx
  const char *v21; // r9
  void *v23; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v25; // [rsp+50h] [rbp+20h] BYREF
  HANDLE hHandle; // [rsp+58h] [rbp+28h] BYREF
  __int64 v27; // [rsp+60h] [rbp+30h] BYREF

  v1 = *a1;
  v27 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v1 + 56);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
  v4 = v3(a1, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v27);
  LastError = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v4);
LABEL_23:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
    return LastError;
  }
  v6 = v27;
  v25 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v27 + 288LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v25);
  v8 = v7(v6, 0LL, 0LL, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, &v25);
  LastError = v8;
  if ( v8 < 0 )
  {
    v9 = 250LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v8);
LABEL_22:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
    goto LABEL_23;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 112))(a1, v25, 1LL);
  LastError = v8;
  if ( v8 < 0 )
  {
    v9 = 251LL;
    goto LABEL_5;
  }
  v10 = 0LL;
  hHandle = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)&hHandle,
      Event);
    v10 = hHandle;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v12, v11, v14, v15);
    if ( LastErrorFailHr < 0 )
    {
      v17 = 255LL;
      goto LABEL_14;
    }
  }
  LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, __int64, HANDLE))(*(_QWORD *)v25 + 72LL))(v25, 1LL, v10);
  if ( LastErrorFailHr < 0 )
  {
    v17 = 256LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
      (wil::details **)&hHandle,
      v18);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
    LastError = LastErrorFailHr;
    goto LABEL_23;
  }
  v19 = WaitForSingleObjectEx(v10, 0xFFFFFFFF, 0);
  if ( v19 == 258 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x101,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
                  v21);
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
      (wil::details **)&hHandle,
      v23);
    goto LABEL_22;
  }
  if ( v19 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2602LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v21);
  if ( v10 )
    wil::details::CloseHandle((wil::details *)v10, v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  return 0LL;
}
