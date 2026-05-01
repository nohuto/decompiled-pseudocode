/*
 * XREFs of ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z @ 0x1804BA100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1804D9EEC (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopsApi::MoveWindowToDesktop(VirtualDesktopsApi *this, HWND a2, const struct _GUID *a3)
{
  int CallingProcessHandle; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DWORD ProcessId; // edi
  char *v10; // rcx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, HWND, __int128 *, ULONGLONG); // rbx
  ULONGLONG TickCount64; // rax
  int v14; // eax
  RTL_SRWLOCK *v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  DWORD dwProcessId; // [rsp+88h] [rbp+38h] BYREF
  HANDLE Process; // [rsp+98h] [rbp+48h] BYREF

  if ( !a2 )
  {
    CallingProcessHandle = -2147024809;
    v7 = 99LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    return (unsigned int)CallingProcessHandle;
  }
  dwProcessId = 0;
  GetWindowThreadProcessId(a2, &dwProcessId);
  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v8, 0LL, &Process);
  if ( CallingProcessHandle < 0 )
    ProcessId = dwProcessId;
  else
    ProcessId = GetProcessId(Process);
  v10 = (char *)Process;
  Process = 0LL;
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  if ( CallingProcessHandle < 0 )
  {
    v7 = 105LL;
    goto LABEL_3;
  }
  if ( dwProcessId != ProcessId )
  {
    CallingProcessHandle = -2147024891;
    v7 = 108LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11), v16);
  v11 = *((_QWORD *)this + 10);
  v12 = *(__int64 (__fastcall **)(__int64, HWND, __int128 *, ULONGLONG))(*(_QWORD *)v11 + 32LL);
  TickCount64 = GetTickCount64();
  v17 = (__int128)*a3;
  v14 = v12(v11, a2, &v17, TickCount64);
  CallingProcessHandle = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v14);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v16);
  return (unsigned int)CallingProcessHandle;
}
