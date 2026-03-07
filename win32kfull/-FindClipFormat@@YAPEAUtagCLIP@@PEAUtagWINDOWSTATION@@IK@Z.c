struct tagCLIP *__fastcall FindClipFormat(struct tagWINDOWSTATION *a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int i; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( a2 )
  {
    v4 = *((_QWORD *)a1 + 16);
    if ( v4 )
    {
      for ( i = *((_DWORD *)a1 + 34); i; --i )
      {
        if ( *(_DWORD *)v4 == a2 )
        {
          if ( (a3 & 1) == 0 )
            return (struct tagCLIP *)v4;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          v8 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(*(_QWORD *)(v4 + 20), *(_QWORD *)(v8 + 864))
            || !(unsigned int)IsFmtBlocked(a2) )
          {
            return (struct tagCLIP *)v4;
          }
          v10 = *(_QWORD *)(v4 + 20);
          v11 = PsGetCurrentProcessWin32Process(v9);
          v12 = v11;
          if ( v11 )
            v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
          EtwTraceUIPIClipboardError(0LL, v12, a2, v10);
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
