/*
 * XREFs of NtUserSetSysColors @ 0x1C000D5C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateProfileUserName @ 0x1C000DC60 (CreateProfileUserName.c)
 *     xxxSetSysColors @ 0x1C00205DC (xxxSetSysColors.c)
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0044418 (CheckAccessEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, int a4)
{
  __int64 v7; // r12
  void *v8; // rdi
  void *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  char *v16; // rcx
  void *v17; // rax
  void *v18; // rax
  __int64 v19; // rbx
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // r14d
  _DWORD v24[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v25; // [rsp+40h] [rbp-88h]
  void *v26; // [rsp+48h] [rbp-80h]
  __int128 v27; // [rsp+58h] [rbp-70h] BYREF
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int128 v29; // [rsp+70h] [rbp-58h] BYREF
  __int64 v30; // [rsp+80h] [rbp-48h]
  __int128 v31; // [rsp+88h] [rbp-40h] BYREF
  __int64 v32; // [rsp+98h] [rbp-30h]

  v7 = a1;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v24[0] = 0x2000;
  v24[1] = -1;
  EnterCrit(0LL, 1LL);
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 8;
  else
    v10 = 0;
  if ( v10 || !(unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 53) + 880LL, v24, 0LL) )
  {
    v22 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v15 = 4 * v7;
      if ( 4 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = &a2[v15];
        if ( (unsigned __int64)&a2[v15] > MmUserProbeAddress || v16 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v15 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v16) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v15] > MmUserProbeAddress || &a3[v15] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v17 = (void *)Win32AllocPoolWithQuota(4 * v7, 1919120213LL);
      v8 = v17;
      v25 = v17;
      if ( !v17 )
        ExRaiseStatus(-1073741801);
      memmove(v17, a2, 4 * v7);
      v18 = (void *)Win32AllocPoolWithQuota(4 * v7, 1986229077LL);
      v9 = v18;
      v26 = v18;
      if ( !v18 )
        ExRaiseStatus(-1073741801);
      memmove(v18, a3, 4 * v7);
    }
    if ( qword_1C0255FC0 )
      qword_1C0255FC0(v8, &v31, Win32FreePool);
    if ( qword_1C0255FC0 )
      qword_1C0255FC0(v9, &v29, Win32FreePool);
    v19 = CreateProfileUserName(&v27, v11, v13, v14);
    v22 = xxxSetSysColors(v20, v7, (_DWORD)v8, (_DWORD)v9, a4);
    if ( v19 && qword_1C02560E8 )
      qword_1C02560E8(&v27);
    if ( qword_1C0255FD0 )
      qword_1C0255FD0(&v29);
    if ( qword_1C0255FD0 )
      qword_1C0255FD0(&v31);
    if ( v8 )
      Win32FreePool(v8);
    if ( v9 )
      Win32FreePool(v9);
  }
  UserSessionSwitchLeaveCrit(v21);
  return v22;
}
