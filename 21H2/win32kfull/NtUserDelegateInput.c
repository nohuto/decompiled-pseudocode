/*
 * XREFs of NtUserDelegateInput @ 0x1C011F3C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r15
  int v19; // eax
  __int64 v21; // rcx

  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a4);
  v13 = 0LL;
  v14 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_25;
    if ( a1 )
    {
      v15 = PtiFromThreadId(a1);
      if ( !v15 )
        goto LABEL_25;
    }
    else
    {
      v15 = gptiCurrent;
    }
    v16 = *(_QWORD *)(v14 + 40);
    if ( *(char *)(v16 + 19) >= 0 && *(char *)(v16 + 20) >= 0 )
    {
      v17 = *(_QWORD *)(v14 + 16);
      v18 = *(_QWORD *)(v17 + 424);
      if ( v18 == PsGetCurrentProcessWin32Process(v11) )
      {
        v19 = *(_DWORD *)(v14 + 260);
        if ( v19 )
        {
          if ( !a3
            && *(_QWORD *)(v14 + 264) == v15
            && *(_QWORD *)(v15 + 1256) == a2
            && !*(_QWORD *)(v15 + 1264)
            && v19 == a5 )
          {
            v21 = 1242LL;
            goto LABEL_26;
          }
        }
        else if ( v18 == *(_QWORD *)(v15 + 424) && v17 != v15 )
        {
          v11 = 1LL;
          if ( *(_DWORD *)(*(_QWORD *)(v15 + 432) + 392LL) == 1
            && *(_QWORD *)(v17 + 456) == *(_QWORD *)(v15 + 456)
            && !*(_QWORD *)(v17 + 1256) )
          {
            v13 = 1LL;
            *(_QWORD *)(v14 + 264) = v15;
            *(_DWORD *)(v14 + 260) = a5;
            *(_DWORD *)(v15 + 1232) |= 0x2000u;
            *(_DWORD *)(v15 + 488) |= 0xC0u;
            ++*(_DWORD *)(v15 + 1272);
            *(_QWORD *)(v15 + 1256) = a2;
            *(_QWORD *)(v15 + 1264) = a3;
            ++*(_DWORD *)(v17 + 1272);
            goto LABEL_16;
          }
        }
      }
      v21 = 5LL;
LABEL_26:
      UserSetLastError(v21, v10, v12);
      goto LABEL_16;
    }
LABEL_25:
    v21 = 87LL;
    goto LABEL_26;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
