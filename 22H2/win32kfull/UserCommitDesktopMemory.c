/*
 * XREFs of UserCommitDesktopMemory @ 0x1C00A72E0
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C004FEC0 (GetDesktopView.c)
 *     MapDesktop @ 0x1C00E4A20 (MapDesktop.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *j; // rcx
  __int64 result; // rax
  __int64 v12; // r9
  _QWORD *i; // rcx
  __int64 v14; // rcx
  __int64 k; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  _DWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+38h] [rbp-10h]
  int v22; // [rsp+3Ch] [rbp-Ch]
  int v23; // [rsp+68h] [rbp+20h] BYREF

  v23 = 0;
  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v12 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v12 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_17;
      }
      v12 = *(_QWORD *)(v12 + 8);
    }
    while ( v12 );
LABEL_17:
    if ( !v12 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[16], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v23);
    if ( (int)result >= 0 )
      *a2 += v23;
  }
  else
  {
    v6 = *((unsigned int *)PtiCurrentShared() + 318);
    if ( (v6 & 0x40) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      if ( CurrentProcessWin32Process )
      {
        v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        CurrentProcessWin32Process &= v8;
      }
      for ( j = *(_QWORD **)(CurrentProcessWin32Process + 696); j; j = (_QWORD *)*j )
      {
        if ( *(_QWORD *)(j[1] + 16LL) == a1 )
          return MmCommitSessionMappedView(*a2, *a3);
      }
      v14 = grpWinStaList;
      if ( !grpWinStaList )
        return 3221225495LL;
      do
      {
        for ( k = *(_QWORD *)(v14 + 16); k; k = *(_QWORD *)(k + 32) )
        {
          if ( *(_QWORD *)(k + 16) == a1 )
            goto LABEL_26;
        }
        v14 = *(_QWORD *)(v14 + 8);
      }
      while ( v14 );
LABEL_26:
      if ( !v14 )
        return 3221225495LL;
      v18[1] = 0;
      v18[0] = 1;
      v21 = 0;
      CurrentProcess = PsGetCurrentProcess(v14, v8, v9);
      v20 = k;
      v22 = 1;
      if ( (int)MapDesktop(v18) < 0 )
        return 3221225495LL;
      v17 = PsGetCurrentProcessWin32Process(v16);
      if ( v17 )
        v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
      if ( !GetDesktopView(v17, k) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
