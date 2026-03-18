/*
 * XREFs of NtUserDelegateInput @ 0x1C010E1B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  int v18; // eax
  __int64 v20; // rcx

  EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a4);
  v12 = 0LL;
  v13 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_25;
    if ( a1 )
    {
      v14 = PtiFromThreadId(a1);
      if ( !v14 )
        goto LABEL_25;
    }
    else
    {
      v14 = gptiCurrent;
    }
    v15 = *(_QWORD *)(v13 + 40);
    if ( *(char *)(v15 + 19) >= 0 && *(char *)(v15 + 20) >= 0 )
    {
      v16 = *(_QWORD *)(v13 + 16);
      v17 = *(_QWORD *)(v16 + 424);
      if ( v17 == PsGetCurrentProcessWin32Process(v11) )
      {
        v18 = *(_DWORD *)(v13 + 260);
        if ( v18 )
        {
          if ( !a3
            && *(_QWORD *)(v13 + 264) == v14
            && *(_QWORD *)(v14 + 1288) == a2
            && !*(_QWORD *)(v14 + 1296)
            && v18 == a5 )
          {
            v20 = 1242LL;
            goto LABEL_26;
          }
        }
        else if ( v17 == *(_QWORD *)(v14 + 424)
               && v16 != v14
               && !tagQ::AreMultipleThreadsAttached(*(tagQ **)(v14 + 432))
               && *(_QWORD *)(v16 + 456) == *(_QWORD *)(v14 + 456)
               && !*(_QWORD *)(v16 + 1288) )
        {
          *(_QWORD *)(v13 + 264) = v14;
          v12 = 1LL;
          *(_DWORD *)(v13 + 260) = a5;
          ++*(_DWORD *)(v14 + 1304);
          *(_DWORD *)(v14 + 1256) |= 0x2000u;
          *(_DWORD *)(v14 + 488) |= 0xC0u;
          *(_QWORD *)(v14 + 1288) = a2;
          *(_QWORD *)(v14 + 1296) = a3;
          ++*(_DWORD *)(v16 + 1304);
          goto LABEL_16;
        }
      }
      v20 = 5LL;
LABEL_26:
      UserSetLastError(v20, v10);
      goto LABEL_16;
    }
LABEL_25:
    v20 = 87LL;
    goto LABEL_26;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
