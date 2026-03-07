_BOOL8 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7)
{
  __int128 *v10; // r15
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rbx
  NTSTATUS v15; // edi
  void *v16; // rax
  BOOL v17; // ebx
  __int128 v19; // [rsp+98h] [rbp-80h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v14 = ValidateHwnd(a1);
  if ( v14 )
  {
    v15 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v19 = *a4;
        a4 = &v19;
      }
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v10 = (__int128 *)MmUserProbeAddress;
        v20 = *v10;
        v10 = &v20;
      }
      if ( a6 )
      {
        if ( a6 >= MmUserProbeAddress )
          v11 = (__int128 *)MmUserProbeAddress;
        v21 = *v11;
        v11 = &v21;
      }
      if ( a7 )
      {
        if ( a7 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v22 = *v12;
        v12 = &v22;
      }
      if ( IsTopLevelWindow(v14) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v13) )
        {
          v16 = (void *)ReferenceDwmApiPort(v13);
          v15 = DwmAsyncSetTransition(v16, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
        }
      }
      else
      {
        v15 = -1073741816;
      }
    }
    else
    {
      v15 = -1073741811;
    }
    v17 = v15 >= 0;
    if ( v15 < 0 )
    {
      v17 = 0;
      UserSetLastStatus(v15, 1);
    }
  }
  else
  {
    v17 = 0;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v17;
}
