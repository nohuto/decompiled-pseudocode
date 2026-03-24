/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1C012CFA0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0058C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0164CF0 (RIMSetPointerDeviceInputSpace.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // ebx
  PVOID v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  _BOOL8 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int128 *v15; // rdx
  NTSTATUS v16; // eax
  PVOID v18; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  __int128 v20; // [rsp+50h] [rbp-48h]
  __int128 v21; // [rsp+60h] [rbp-38h] BYREF

  v6 = 1;
  EnterCrit(0, 1);
  v7 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
  v11 = 0LL;
  if ( CurrentProcess )
    v11 = CurrentProcess == g_pepDwm;
  if ( !v11 )
  {
    v6 = 0;
    v12 = 5LL;
LABEL_5:
    UserSetLastError(v12, v11);
    goto LABEL_20;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v18) >= 0 )
  {
    if ( a2 )
    {
      v14 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v14 = (__int64 *)MmUserProbeAddress;
      v19 = *v14;
    }
    if ( a3 )
    {
      v15 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v15 = (__int128 *)MmUserProbeAddress;
      v20 = *v15;
      v21 = v20;
    }
    v7 = v18;
    v16 = RIMSetPointerDeviceInputSpace(
            v18,
            (unsigned __int64)&v19 & -(__int64)(a2 != 0),
            (unsigned __int64)&v21 & -(__int64)(a3 != 0));
    if ( v16 < 0 )
    {
      v6 = 0;
      v12 = RtlNtStatusToDosError(v16);
      goto LABEL_5;
    }
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v13);
    v7 = v18;
  }
LABEL_20:
  if ( v7 )
    ObfDereferenceObject(v7);
  UserSessionSwitchLeaveCrit();
  return v6;
}
