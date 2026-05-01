/*
 * XREFs of _lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator() @ 0x1802DAD3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad1c2e3ff12b6fb3c427626c13364f68___::Run @ 0x1802E6A90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ad1c2e3ff12b6fb3c427626c13364f68___--Run.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020B078 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLaunchOptionSite@@YA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DF8CC (-GetLaunchOptionSite@@YA-AV-$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUSh.c)
 *     ?IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z @ 0x1804EDE38 (-IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  const unsigned __int16 *v3; // rdx
  bool v4; // al
  const WCHAR *lpVerb; // rcx
  SHELLEXECUTEINFOW *p_pExecInfo; // rcx
  const char *v7; // r9
  __int64 result; // rax
  LPITEMIDLIST ppidl; // [rsp+28h] [rbp-90h] BYREF
  char v10; // [rsp+30h] [rbp-88h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+40h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  LPITEMIDLIST pv; // [rsp+C0h] [rbp+8h]
  HINSTANCE v14; // [rsp+C8h] [rbp+10h] BYREF

  pv = 0LL;
  ppidl = 0LL;
  v10 = 1;
  v2 = SHGetIDListFromObject(*(IUnknown **)(a1 + 32), &ppidl);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        135LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
    if ( v10 )
      pv = ppidl;
    pExecInfo.cbSize = 112;
    memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.fMask = 67109900;
    pExecInfo.lpIDList = pv;
    pExecInfo.lpParameters = *(LPCWSTR *)(a1 + 8);
    if ( *(_BYTE *)a1 )
    {
      v4 = IsVerbRegistered(*(struct IShellItem **)(a1 + 32), v3);
      lpVerb = L"OpenNewWindow";
      if ( !v4 )
        lpVerb = pExecInfo.lpVerb;
      pExecInfo.lpVerb = lpVerb;
    }
    GetLaunchOptionSite(&v14, a1 + 16);
    p_pExecInfo = &pExecInfo;
    if ( v14 )
    {
      pExecInfo.fMask |= 0x8000000u;
      pExecInfo.hInstApp = v14;
      if ( ShellExecuteExW(&pExecInfo) )
      {
LABEL_15:
        if ( v14 )
          (*(void (__fastcall **)(HINSTANCE))(*(_QWORD *)v14 + 16LL))(v14);
        if ( pv )
          CoTaskMemFree(pv);
        return 0LL;
      }
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x98,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        v7);
    }
    if ( !ShellExecuteExW(p_pExecInfo) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x9C,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        v7);
    goto LABEL_15;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v7);
  }
  return result;
}
