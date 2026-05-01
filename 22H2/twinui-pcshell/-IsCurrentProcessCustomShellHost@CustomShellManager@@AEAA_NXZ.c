/*
 * XREFs of ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18020AA9C
 * Callers:
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18020AD50 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x18020A64C (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020AEC8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18020AEEC (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CustomShellManager::IsCurrentProcessCustomShellHost(CustomShellManager *this)
{
  DWORD v1; // eax
  DWORD v2; // eax
  HANDLE CurrentProcess; // rax
  BOOL FullProcessImageNameW; // ebx
  const char *v5; // r9
  bool v7; // bl
  LPWSTR lpExeName[3]; // [rsp+30h] [rbp-30h] BYREF
  LPWSTR lpDst[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  CustomShellManager *nSize; // [rsp+70h] [rbp+10h] BYREF

  nSize = this;
  v1 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", 0LL, 0);
  LODWORD(nSize) = v1;
  if ( !v1 )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x5F,
      (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  std::vector<unsigned short>::vector<unsigned short>(lpDst, v1);
  v2 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", lpDst[0], (DWORD)nSize);
  if ( v2 > (unsigned int)nSize )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      100LL,
      (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)0x8007007ALL);
    __debugbreak();
  }
  std::vector<unsigned short>::vector<unsigned short>(lpExeName, (unsigned int)nSize);
  CurrentProcess = GetCurrentProcess();
  FullProcessImageNameW = QueryFullProcessImageNameW(CurrentProcess, 0, lpExeName[0], (PDWORD)&nSize);
  if ( FullProcessImageNameW || GetLastError() != 122 )
  {
    if ( !FullProcessImageNameW )
    {
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x6D,
        (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        v5);
      __debugbreak();
    }
    v7 = CompareStringOrdinal(lpExeName[0], -1, lpDst[0], -1, 1) == 2;
    std::vector<unsigned short>::_Tidy(lpExeName);
    std::vector<unsigned short>::_Tidy(lpDst);
    return v7;
  }
  else
  {
    std::vector<unsigned short>::_Tidy(lpExeName);
    std::vector<unsigned short>::_Tidy(lpDst);
    return 0;
  }
}
