/*
 * XREFs of NtUserGetInputContainerId @ 0x1C012EBC0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetInputContainerId(struct _GUID *a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  _DWORD v11[12]; // [rsp+20h] [rbp-68h] BYREF
  struct _GUID v12; // [rsp+50h] [rbp-38h]
  struct _GUID v13; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(0, 1);
  v13 = 0LL;
  v4 = 0;
  v11[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( isChildPartition() )
    goto LABEL_2;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _GUID *)MmUserProbeAddress;
  v12 = *a1;
  v13 = v12;
  if ( gpfnIVResolveContainerId )
    v9 = gpfnIVResolveContainerId(&v13, (struct CONTAINER_ID *)v11);
  else
    v9 = -1073741637;
  if ( v9 < 0 )
  {
    v8 = 87LL;
    goto LABEL_3;
  }
  if ( (*(_WORD *)(CurrentProcessWin32Process + 1088) || *(_WORD *)(CurrentProcessWin32Process + 1090))
    && *(_DWORD *)(CurrentProcessWin32Process + 1088) != v11[0] )
  {
LABEL_2:
    v8 = 5LL;
LABEL_3:
    UserSetLastError(v8, v7);
    goto LABEL_18;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v11[0];
  *(_DWORD *)(CurrentProcessWin32Process + 1088) = v11[0];
  v4 = 1;
LABEL_18:
  UserSessionSwitchLeaveCrit();
  return v4;
}
