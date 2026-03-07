__int64 __fastcall GetPriorityClipboardFormat(__int64 a1, int a2)
{
  unsigned int *v3; // r14
  struct tagWINDOWSTATION *v4; // rax
  __int64 v5; // rcx
  struct tagWINDOWSTATION *v6; // rsi
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax

  v3 = (unsigned int *)a1;
  v4 = CheckClipboardAccess(a1);
  v6 = v4;
  if ( !v4 || !*((_DWORD *)v4 + 34) || !*((_QWORD *)v4 + 16) )
    return 0LL;
  while ( a2 > 0 )
  {
    v8 = *v3;
    --a2;
    if ( *v3 )
    {
      v9 = *((_QWORD *)v6 + 16);
      v10 = *((_DWORD *)v6 + 34);
      while ( v10 )
      {
        --v10;
        if ( *(_DWORD *)v9 == v8 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                               *(_QWORD *)(v9 + 20),
                               *(_QWORD *)(CurrentProcessWin32Process + 864))
            || !(unsigned int)IsFmtBlocked(v8) )
          {
            return v8;
          }
          v13 = *(_QWORD *)(v9 + 20);
          v14 = PsGetCurrentProcessWin32Process(v12);
          if ( v14 )
            v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
          EtwTraceUIPIClipboardError(0LL, v14, v8, v13);
          break;
        }
        v9 += 32LL;
      }
    }
    ++v3;
  }
  return 0xFFFFFFFFLL;
}
