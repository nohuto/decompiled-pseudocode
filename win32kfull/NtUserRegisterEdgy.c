__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  unsigned int i; // edi
  __int128 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  int updated; // eax
  __int128 v19; // [rsp+30h] [rbp-78h] BYREF
  __int128 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  __int128 v22; // [rsp+68h] [rbp-40h]
  __int128 v23; // [rsp+78h] [rbp-30h]

  v6 = 0;
  EnterCrit(0LL, 0LL);
  if ( !a1 )
  {
    v7 = 87;
LABEL_3:
    UserSetLastError(v7);
    goto LABEL_30;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v7 = 5;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v10 = (__int128 *)(a2 + 32LL * i);
    if ( v10 + 2 < v10 || (unsigned __int64)(v10 + 2) > MmUserProbeAddress )
      v10 = (__int128 *)MmUserProbeAddress;
    v22 = *v10;
    v23 = v10[1];
    v19 = v22;
    v20 = (unsigned __int64)v23;
    if ( a3 )
    {
      if ( !HMValidateHandle(v19, 0x13u) )
        goto LABEL_13;
      if ( *((_QWORD *)&v19 + 1) )
      {
        v11 = ValidateHwnd(*((_QWORD *)&v19 + 1));
        v13 = v11;
        if ( !v11 )
          goto LABEL_13;
        v14 = *(_QWORD *)(v11 + 40);
        if ( *(char *)(v14 + 19) < 0 || *(char *)(v14 + 20) < 0 )
          goto LABEL_13;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
        v16 = CurrentProcessWin32Process;
        v21 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v16 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v21 = v16;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL) != v16 || *(_DWORD *)(v13 + 260) )
        {
LABEL_13:
          UserSetLastError(87);
          goto LABEL_30;
        }
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 456LL),
                  v19,
                  (unsigned int)v20,
                  *((_QWORD *)&v19 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener(&v19);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8);
      goto LABEL_30;
    }
  }
  v6 = 1;
LABEL_30:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
