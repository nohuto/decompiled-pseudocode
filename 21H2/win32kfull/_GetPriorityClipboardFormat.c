/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1C021F828
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1C01FB4D0 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C00301DC (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00304E8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021EDA8 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(unsigned int *a1, int a2)
{
  struct tagWINDOWSTATION *v4; // rax
  __int64 v5; // rcx
  struct tagWINDOWSTATION *v6; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rbp
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  v4 = CheckClipboardAccess();
  v6 = v4;
  if ( !v4 || !*((_DWORD *)v4 + 34) || !*((_QWORD *)v4 + 16) )
    return 0LL;
  while ( a2 > 0 )
  {
    v8 = *a1;
    --a2;
    if ( *a1 )
    {
      v9 = *((_QWORD *)v6 + 16);
      v10 = *((_DWORD *)v6 + 34);
      while ( v10 )
      {
        --v10;
        if ( *(_DWORD *)v9 == v8 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
          if ( !(unsigned int)CheckClipboardAccessForIntegrityLevel(
                                *(_QWORD *)(v9 + 20),
                                *(_QWORD *)(CurrentProcessWin32Process + 880))
            && (unsigned int)IsFmtBlocked(v8) )
          {
            v13 = PsGetCurrentProcessWin32Process(v12);
            EtwTraceUIPIClipboardError(0LL, v13, v8, *(_QWORD *)(v9 + 20));
            break;
          }
          return v8;
        }
        v9 += 32LL;
      }
    }
    ++a1;
  }
  return 0xFFFFFFFFLL;
}
