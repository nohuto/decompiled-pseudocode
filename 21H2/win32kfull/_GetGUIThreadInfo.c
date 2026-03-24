/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00F98B4
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00F9770 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetGUIThreadInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rdx
  int v20; // ecx
  int **v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  int v30; // ecx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v36; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  _QWORD *v45; // rax

  v3 = a2;
  v4 = a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v28 = 87LL;
    goto LABEL_34;
  }
  if ( a1 )
  {
    v5 = a1[54];
  }
  else
  {
    v5 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v6 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v6 )
    {
      a1 = *(_QWORD **)(v6 + 16);
      if ( a1[54] == gpqForeground )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *(_QWORD **)(v6 + 16);
        v8 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(a1)
          || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v36),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v8 = *ThreadWin32Thread;
        }
        if ( *(_QWORD *)(v8 + 456) != v4[57] )
          goto LABEL_33;
      }
    }
  }
  if ( *(_QWORD *)(v5 + 296) )
  {
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    a1 = *(_QWORD **)(v5 + 296);
    a2 = a1[2];
    if ( *(_QWORD *)(a2 + 456) != *(_QWORD *)(v27 + 456) )
      goto LABEL_33;
  }
  if ( v4 )
  {
    v13 = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (v38 = PsGetCurrentProcess(v16, v15, v17),
          v39 = PsGetProcessSessionIdEx(v38),
          v41 = PsGetCurrentThreadProcess(v40),
          v39 == (unsigned int)PsGetProcessSessionIdEx(v41)) )
    {
      v18 = (__int64 *)PsGetThreadWin32Thread(v13);
      if ( v18 )
        v14 = *v18;
    }
    if ( v4[57] != *(_QWORD *)(v14 + 456) )
    {
LABEL_33:
      v28 = 5LL;
LABEL_34:
      UserSetLastError(v28, a2, a3);
      return 0LL;
    }
  }
  *(_DWORD *)(v3 + 4) = 0;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( !v4 )
    goto LABEL_19;
  v19 = v4[84];
  v20 = 0;
  if ( v19 && (*(_DWORD *)(v19 + 196) & 8) == 0 && *(_QWORD *)(v19 + 16) )
  {
    *(_DWORD *)(v3 + 4) = 2;
    v20 = 2;
    *(_QWORD *)(v3 + 40) = **(_QWORD **)(v4[84] + 16LL);
  }
  v21 = (int **)v4[76];
  if ( !v21 || !*v21 )
    goto LABEL_19;
  v42 = v20 | 4;
  *(_DWORD *)(v3 + 4) = v42;
  v43 = **v21;
  if ( (v43 & 2) != 0 )
  {
    if ( (v43 & 4) == 0 )
      goto LABEL_58;
    v44 = v42 | 8;
  }
  else
  {
    v44 = v42 | 0x10;
  }
  *(_DWORD *)(v3 + 4) = v44;
LABEL_58:
  v45 = *(_QWORD **)(*(_QWORD *)v4[76] + 8LL);
  if ( v45 )
    *(_QWORD *)(v3 + 32) = *v45;
LABEL_19:
  v22 = *(_QWORD **)(v5 + 120);
  if ( v22 )
    v22 = (_QWORD *)*v22;
  *(_QWORD *)(v3 + 8) = v22;
  v23 = *(_QWORD **)(v5 + 112);
  if ( v23 )
    v23 = (_QWORD *)*v23;
  *(_QWORD *)(v3 + 16) = v23;
  v24 = *(_QWORD **)(v5 + 104);
  if ( v24 )
    v24 = (_QWORD *)*v24;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 24) = v24;
  v25 = *(_QWORD **)(v5 + 296);
  if ( v25 )
  {
    *(_QWORD *)(v3 + 48) = *v25;
    v29 = *(_QWORD *)(v5 + 296);
    if ( *(_QWORD *)(v29 + 16) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 136) + 8LL) + 8LL) & 0x20) != 0 )
    {
      v33 = *(_DWORD *)(v5 + 356);
      *(_DWORD *)(v3 + 56) = v33;
      *(_DWORD *)(v3 + 64) = *(_DWORD *)(v5 + 364) + v33;
      v31 = *(_DWORD *)(v5 + 360);
      *(_DWORD *)(v3 + 60) = v31;
      v32 = *(_DWORD *)(v5 + 368);
    }
    else
    {
      v30 = *(_DWORD *)(v5 + 316);
      *(_DWORD *)(v3 + 56) = v30;
      *(_DWORD *)(v3 + 64) = *(_DWORD *)(v5 + 328) + v30;
      v31 = *(_DWORD *)(v5 + 320);
      *(_DWORD *)(v3 + 60) = v31;
      v32 = *(_DWORD *)(v5 + 324);
    }
    *(_DWORD *)(v3 + 68) = v31 + v32;
    if ( !*(_DWORD *)(v5 + 308) )
      *(_DWORD *)(v3 + 4) |= 1u;
  }
  else if ( v4 && (*(_DWORD *)(v4[53] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(v4[57] + 144LL);
    *(_OWORD *)(v3 + 56) = *(_OWORD *)(v4[57] + 152LL);
  }
  else
  {
    *(_OWORD *)(v3 + 56) = 0LL;
  }
  return 1LL;
}
