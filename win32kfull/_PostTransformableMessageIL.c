__int64 __fastcall PostTransformableMessageIL(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  int v9; // r9d
  __int64 v10; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdi
  void *const *WindowMessageFilter; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+64h] [rbp+Ch]

  if ( a2 - 992 <= 8 )
  {
    v15 = ValidateDDEConvPair(a3, a1);
    v9 = a5;
    if ( v15 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( a2 == 274 && a3 == 61488 )
  {
    LOBYTE(v16) = IAMThreadAccessGranted(gptiCurrent);
    if ( v16 )
      v9 = 1;
  }
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL || v9 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v10 == v12 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( a2 != 717 )
  {
    if ( !(unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v10 + 840), a2, 0LL, 0LL) )
    {
      WindowMessageFilter = GetWindowMessageFilter(a1);
      if ( !(unsigned int)IsMessageAllowedByFilterEx(WindowMessageFilter, a2, 0LL, 0LL)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
        && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( *(_QWORD *)v10 == gpepCSRSS )
        {
          v19 = 0;
          v18 = 0x2000;
        }
        else
        {
          v18 = *(_DWORD *)(v10 + 864);
          v19 = *(_DWORD *)(v10 + 868);
        }
        if ( !(unsigned __int8)CheckAccess(v12 + 864, &v18) )
        {
          if ( a2 != 793
            || (v17 = *((_QWORD *)a1 + 2), *(struct tagWND **)(v17 + 1432) != a1)
            || *(_QWORD *)(v17 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
          {
            EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
            UserSetLastError(5);
            return 0LL;
          }
        }
      }
    }
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  }
  return 0LL;
}
