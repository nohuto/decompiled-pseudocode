/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C00C7B00
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C00280A4 (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *i; // rbx
  __int64 v9; // rbx
  void *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 784LL);
  v11 = 0LL;
  v12 = 0LL;
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v4 = *(_QWORD *)(result + 24);
    if ( v4 )
    {
      ThreadLockAlways(*(_QWORD *)(result + 24), &v11);
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
                v9 = *i;
                v10 = (void *)ReferenceDwmApiPort(v6);
                DwmAsyncOwnerChange(v10, v9, 0LL);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64) = 0LL;
          HMAssignmentUnlock(i + 15);
        }
      }
      return ThreadUnlock1(v6, v5, v7);
    }
  }
  return result;
}
