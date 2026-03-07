__int64 __fastcall PostMessageCheckIL(__int64 a1, unsigned int a2, unsigned __int64 a3, __int128 *a4)
{
  BOOL v4; // edi
  struct tagWND *v8; // rsi
  int v9; // eax
  __int64 v10; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdi
  void *const *WindowMessageFilter; // rax
  __int64 v14; // rdx
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]

  v4 = 0;
  v8 = (struct tagWND *)a1;
  if ( a2 - 992 <= 8 )
  {
    v9 = ValidateDDEConvPair(a3, a1);
    a1 = 1LL;
    v4 = v9 != 0;
  }
  if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && !v4 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 424LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v10 != v12 )
    {
      if ( a2 == 717 )
        return 0LL;
      if ( !(unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v10 + 840), a2, 0LL, 0LL) )
      {
        WindowMessageFilter = GetWindowMessageFilter(v8);
        if ( !(unsigned int)IsMessageAllowedByFilterEx(WindowMessageFilter, a2, 0LL, 0LL)
          && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
          && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
        {
          if ( *(_QWORD *)v10 == gpepCSRSS )
          {
            v17 = 0;
            v16 = 0x2000;
          }
          else
          {
            v16 = *(_DWORD *)(v10 + 864);
            v17 = *(_DWORD *)(v10 + 868);
          }
          if ( !(unsigned __int8)CheckAccess(v12 + 864, &v16) )
          {
            if ( a2 != 793
              || (v14 = *((_QWORD *)v8 + 2), *(struct tagWND **)(v14 + 1432) != v8)
              || *(_QWORD *)(v14 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
            {
              EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
              UserSetLastError(5);
              return 0LL;
            }
          }
        }
      }
    }
  }
  return PostMessage((unsigned __int64)v8, a2, a3, a4);
}
