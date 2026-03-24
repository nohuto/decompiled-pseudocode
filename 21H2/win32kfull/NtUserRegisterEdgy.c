/*
 * XREFs of NtUserRegisterEdgy @ 0x1C0200A50
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C003C638 (IsShellProcess.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C0207A34 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C0208BA0 (EdgyUnregisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int i; // edi
  __int128 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  int updated; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int128 v23; // [rsp+30h] [rbp-68h] BYREF
  __int128 v24; // [rsp+40h] [rbp-58h]
  __int128 v25; // [rsp+60h] [rbp-38h]
  __int128 v26; // [rsp+70h] [rbp-28h]

  v6 = 0;
  EnterCrit(0LL, 1LL);
  if ( !a1 )
  {
    v9 = 87LL;
LABEL_3:
    UserSetLastError(v9, v7, v8);
    goto LABEL_28;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v9 = 5LL;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v12 = (__int128 *)(a2 + 32LL * i);
    if ( v12 + 2 < v12 || (unsigned __int64)(v12 + 2) > MmUserProbeAddress )
      v12 = (__int128 *)MmUserProbeAddress;
    v25 = *v12;
    v26 = v12[1];
    v23 = v25;
    v24 = (unsigned __int64)v26;
    if ( a3 )
    {
      if ( !HMValidateHandle(v23, 0x13u)
        || *((_QWORD *)&v23 + 1)
        && ((v15 = ValidateHwnd(*((_QWORD *)&v23 + 1)), (v17 = v15) == 0)
         || (v18 = *(_QWORD *)(v15 + 40), *(char *)(v18 + 19) < 0)
         || *(char *)(v18 + 20) < 0
         || *(_QWORD *)(*(_QWORD *)(v17 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v16)
         || *(_DWORD *)(v17 + 260)) )
      {
        UserSetLastError(87LL, v13, v14);
        goto LABEL_28;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 456LL),
                  v23,
                  (unsigned int)v24,
                  *((_QWORD *)&v23 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener(&v23);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL, v20, v21);
      goto LABEL_28;
    }
  }
  v6 = 1;
LABEL_28:
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
