__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v8;
    HMLockObject(v8);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v11) && (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 232LL) & 2) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      LOBYTE(v12) = a3;
      v13 = SetLayeredWindowAttributes(v11, a2, v12, a4);
      if ( v13 >= 0 )
      {
        v17 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v11) )
          zzzUpdateShadowAlpha(v11);
        goto LABEL_9;
      }
      UserSetLastStatus(v13, 1);
    }
    v17 = 0LL;
LABEL_9:
    ThreadUnlock1(v15, v14, v16);
    v10 = v17;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
