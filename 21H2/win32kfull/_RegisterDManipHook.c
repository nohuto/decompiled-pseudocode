/*
 * XREFs of _RegisterDManipHook @ 0x1C00E5110
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C00E50C0 (NtUserRegisterDManipHook.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GetHmodTableIndex @ 0x1C0025248 (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00A2D80 (IsPrivileged.c)
 *     AddHmodDependency @ 0x1C00E6268 (AddHmodDependency.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C00E6358 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x1C00E63D0 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  const wchar_t *NtSystemRoot; // rax
  size_t *v9; // r8
  const unsigned __int16 *v10; // r8
  unsigned int HmodTableIndex; // eax
  __int64 v12; // rcx
  size_t v13; // [rsp+20h] [rbp-238h]
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v5 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v4) + 780), (_DWORD)v5 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v2 = 5LL;
LABEL_3:
    UserSetLastError(v2, a2);
    return 0LL;
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v7, a2);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v9, NtSystemRoot, v13) < 0 || (int)RtlStringCbCatW(pszDest, a2, v10) < 0 )
  {
    v2 = 3LL;
    goto LABEL_3;
  }
  RtlStringCchCopyW((char *)gszModuleDManipHook, 260LL, (char *)pszDest);
  HmodTableIndex = GetHmodTableIndex((__int64)pszDest);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v2 = 126LL;
    goto LABEL_3;
  }
  AddHmodDependency(HmodTableIndex);
  gppiDManipHook = PsGetCurrentProcessWin32Process(v12);
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
