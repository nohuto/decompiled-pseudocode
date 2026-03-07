// write access to const memory has been detected, the output may be wrong!
__int64 RegisterDManipHook()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  const wchar_t *NtSystemRoot; // rax
  size_t *v8; // r8
  unsigned __int64 v9; // rdx
  const unsigned __int16 *v10; // r8
  unsigned int HmodTableIndex; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  int v16; // ecx
  size_t v17; // [rsp+20h] [rbp-238h]
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0 || (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_16;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  v2 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_DWORD *)(v2 + 772) != luidSystem[0] )
    goto LABEL_16;
  v3 = PsGetCurrentProcessWin32Process(luidSystem[0]);
  v4 = v3;
  if ( v3 )
    v4 = -(__int64)(*(_QWORD *)v3 != 0LL) & v3;
  if ( *(_DWORD *)(v4 + 776) != luidSystem[1] || !(unsigned int)IsPrivileged(psTcb) )
  {
LABEL_16:
    v16 = 5;
LABEL_17:
    UserSetLastError(v16);
    return 0LL;
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v6, v5);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v8, NtSystemRoot, v17) < 0 || (int)RtlStringCbCatW(pszDest, v9, v10) < 0 )
  {
    v16 = 3;
    goto LABEL_17;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, pszDest);
  HmodTableIndex = GetHmodTableIndex((__int64)pszDest);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v16 = 126;
    goto LABEL_17;
  }
  AddHmodDependency(HmodTableIndex);
  v13 = PsGetCurrentProcessWin32Process(v12);
  v14 = v13;
  if ( v13 )
    v14 = -(__int64)(*(_QWORD *)v13 != 0LL) & v13;
  gppiDManipHook = v14;
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
