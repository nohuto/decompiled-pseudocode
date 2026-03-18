/*
 * XREFs of _RegisterDManipHook @ 0x1C00497B0
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C0049760 (NtUserRegisterDManipHook.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0048AB8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x1C0048AE0 (RtlStringCopyWorkerW.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0049990 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     IsPrivileged @ 0x1C0060DD8 (IsPrivileged.c)
 *     AddHmodDependency @ 0x1C007154C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C007163C (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 RegisterDManipHook()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  const wchar_t *NtSystemRoot; // rax
  size_t *v6; // r8
  unsigned __int64 v7; // rdx
  const unsigned __int16 *v8; // r8
  unsigned int HmodTableIndex; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v14; // rcx
  size_t v15; // [rsp+20h] [rbp-238h]
  size_t pszDest[66]; // [rsp+30h] [rbp-228h] BYREF

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
    v14 = 5LL;
LABEL_17:
    UserSetLastError(v14);
    return 0LL;
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
  if ( RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)pszDest, 0x82uLL, v6, NtSystemRoot, v15) < 0
    || (int)RtlStringCbCatW((unsigned __int16 *)pszDest, v7, v8) < 0 )
  {
    v14 = 3LL;
    goto LABEL_17;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, pszDest);
  HmodTableIndex = GetHmodTableIndex(pszDest);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v14 = 126LL;
    goto LABEL_17;
  }
  AddHmodDependency(HmodTableIndex);
  v11 = PsGetCurrentProcessWin32Process(v10);
  v12 = v11;
  if ( v11 )
    v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
  gppiDManipHook = v12;
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
