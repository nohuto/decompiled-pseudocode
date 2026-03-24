/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C003DF80
 * Callers:
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C0035C74 (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 *i; // rbx
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 784LL);
  v11[2] = 0LL;
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v4 = *(_QWORD *)(result + 24);
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v11;
      v11[1] = v4;
      HMLockObject(v4);
LABEL_4:
      for ( i = *(__int64 **)(v4 + 112); i; i = (__int64 *)i[11] )
      {
        if ( i[15] == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 488LL) & 1) != 0 || i != v2 )
          {
            if ( (*(_WORD *)(i[5] + 42) & 0x2FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              *(_QWORD *)(i[5] + 64) = 0LL;
              HMAssignmentUnlock(i + 15);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v9 = (void *)ReferenceDwmApiPort(v6, v8);
                DwmAsyncOwnerChange(v9, *i, 0LL, v10);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64) = 0LL;
          HMAssignmentUnlock(i + 15);
        }
      }
      return ThreadUnlock1(v6);
    }
  }
  return result;
}
