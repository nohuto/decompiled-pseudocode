__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *j; // rcx
  __int64 result; // rax
  __int64 v13; // r9
  _QWORD *i; // rcx
  __int64 v15; // rcx
  __int64 k; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD v19[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+38h] [rbp-10h]
  int v23; // [rsp+3Ch] [rbp-Ch]
  int v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = 0;
  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v13 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v13 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_17;
      }
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
LABEL_17:
    if ( !v13 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v24);
    if ( (int)result >= 0 )
      *a2 += v24;
  }
  else
  {
    v7 = *((unsigned int *)PtiCurrentShared(v6) + 318);
    if ( (v7 & 0x40) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      if ( CurrentProcessWin32Process )
      {
        v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        CurrentProcessWin32Process &= v9;
      }
      for ( j = *(_QWORD **)(CurrentProcessWin32Process + 696); j; j = (_QWORD *)*j )
      {
        if ( *(_QWORD *)(j[1] + 16LL) == a1 )
          return MmCommitSessionMappedView(*a2, *a3);
      }
      v15 = grpWinStaList;
      if ( !grpWinStaList )
        return 3221225495LL;
      do
      {
        for ( k = *(_QWORD *)(v15 + 16); k; k = *(_QWORD *)(k + 32) )
        {
          if ( *(_QWORD *)(k + 16) == a1 )
            goto LABEL_26;
        }
        v15 = *(_QWORD *)(v15 + 8);
      }
      while ( v15 );
LABEL_26:
      if ( !v15 )
        return 3221225495LL;
      v19[1] = 0;
      v19[0] = 1;
      v22 = 0;
      CurrentProcess = PsGetCurrentProcess(v15, v9, v10);
      v21 = k;
      v23 = 1;
      if ( (int)MapDesktop((__int64)v19) < 0 )
        return 3221225495LL;
      v18 = PsGetCurrentProcessWin32Process(v17);
      if ( v18 )
        v18 &= -(__int64)(*(_QWORD *)v18 != 0LL);
      if ( !GetDesktopView(v18, k) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
