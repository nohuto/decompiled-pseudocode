__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  int v21; // ecx

  EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a4);
  v11 = 0LL;
  v12 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_27;
    if ( a1 )
    {
      v13 = PtiFromThreadId(a1);
      if ( !v13 )
        goto LABEL_27;
    }
    else
    {
      v13 = gptiCurrent;
    }
    v14 = *(_QWORD *)(v12 + 40);
    if ( *(char *)(v14 + 19) >= 0 && *(char *)(v14 + 20) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v16 = *(_QWORD *)(v12 + 16);
      v17 = *(_QWORD *)(v16 + 424);
      if ( v17 == CurrentProcessWin32Process )
      {
        v18 = *(_DWORD *)(v12 + 260);
        if ( v18 )
        {
          if ( !a3
            && *(_QWORD *)(v12 + 264) == v13
            && *(_QWORD *)(v13 + 1304) == a2
            && !*(_QWORD *)(v13 + 1312)
            && v18 == a5 )
          {
            v21 = 1242;
            goto LABEL_28;
          }
        }
        else if ( v17 == *(_QWORD *)(v13 + 424)
               && v16 != v13
               && !tagQ::AreMultipleThreadsAttached(*(tagQ **)(v13 + 432))
               && *(_QWORD *)(v19 + 456) == *(_QWORD *)(v13 + 456)
               && !*(_QWORD *)(v19 + 1304) )
        {
          *(_QWORD *)(v12 + 264) = v13;
          v11 = 1LL;
          *(_DWORD *)(v12 + 260) = a5;
          ++*(_DWORD *)(v13 + 1344);
          *(_DWORD *)(v13 + 1272) |= 0x2000u;
          *(_DWORD *)(v13 + 488) |= 0xC0u;
          *(_QWORD *)(v13 + 1304) = a2;
          *(_QWORD *)(v13 + 1312) = a3;
          ++*(_DWORD *)(v19 + 1344);
          goto LABEL_18;
        }
      }
      v21 = 5;
LABEL_28:
      UserSetLastError(v21);
      goto LABEL_18;
    }
LABEL_27:
    v21 = 87;
    goto LABEL_28;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
