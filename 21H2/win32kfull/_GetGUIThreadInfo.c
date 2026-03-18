/*
 * XREFs of _GetGUIThreadInfo @ 0x1C00E7738
 * Callers:
 *     NtUserGetGUIThreadInfo @ 0x1C00E7600 (NtUserGetGUIThreadInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall GetGUIThreadInfo(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int **v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  _QWORD *v25; // rax

  v2 = a2;
  v3 = a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v15 = 87LL;
    goto LABEL_29;
  }
  if ( a1 )
  {
    v4 = a1[54];
  }
  else
  {
    v4 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v5 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v5 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) == gpqForeground )
      {
        v3 = *(_QWORD **)(v5 + 16);
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) != v3[57] )
          goto LABEL_28;
      }
    }
  }
  if ( *(_QWORD *)(v4 + 296)
    && (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
        a2 = *(_QWORD *)(*(_QWORD *)(v4 + 296) + 16LL),
        *(_QWORD *)(a2 + 456) != *(_QWORD *)(ThreadWin32Thread + 456))
    || v3 && v3[57] != *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
  {
LABEL_28:
    v15 = 5LL;
LABEL_29:
    UserSetLastError(v15, a2);
    return 0LL;
  }
  *(_DWORD *)(v2 + 4) = 0;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( !v3 )
    goto LABEL_13;
  v6 = v3[84];
  v7 = 0;
  if ( v6 && (*(_DWORD *)(v6 + 200) & 8) == 0 && *(_QWORD *)(v6 + 16) )
  {
    *(_DWORD *)(v2 + 4) = 2;
    v7 = 2;
    *(_QWORD *)(v2 + 40) = **(_QWORD **)(v3[84] + 16LL);
  }
  v8 = (int **)v3[76];
  if ( !v8 || !*v8 )
    goto LABEL_13;
  v22 = v7 | 4;
  *(_DWORD *)(v2 + 4) = v22;
  v23 = **v8;
  if ( (v23 & 2) != 0 )
  {
    if ( (v23 & 4) == 0 )
      goto LABEL_48;
    v24 = v22 | 8;
  }
  else
  {
    v24 = v22 | 0x10;
  }
  *(_DWORD *)(v2 + 4) = v24;
LABEL_48:
  v25 = *(_QWORD **)(*(_QWORD *)v3[76] + 8LL);
  if ( v25 )
    *(_QWORD *)(v2 + 32) = *v25;
LABEL_13:
  v9 = *(_QWORD **)(v4 + 120);
  if ( v9 )
    v9 = (_QWORD *)*v9;
  *(_QWORD *)(v2 + 8) = v9;
  v10 = *(_QWORD **)(v4 + 112);
  if ( v10 )
    v10 = (_QWORD *)*v10;
  *(_QWORD *)(v2 + 16) = v10;
  v11 = *(_QWORD **)(v4 + 104);
  if ( v11 )
    v11 = (_QWORD *)*v11;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 24) = v11;
  v12 = *(_QWORD **)(v4 + 296);
  if ( v12 )
  {
    *(_QWORD *)(v2 + 48) = *v12;
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v17 = *(_QWORD *)(v4 + 296);
    if ( *(_QWORD *)(v17 + 16) != v16 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 136) + 8LL) + 8LL) & 0x20) != 0 )
    {
      v21 = *(_DWORD *)(v4 + 356);
      *(_DWORD *)(v2 + 56) = v21;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v4 + 364) + v21;
      v19 = *(_DWORD *)(v4 + 360);
      *(_DWORD *)(v2 + 60) = v19;
      v20 = *(_DWORD *)(v4 + 368);
    }
    else
    {
      v18 = *(_DWORD *)(v4 + 316);
      *(_DWORD *)(v2 + 56) = v18;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v4 + 328) + v18;
      v19 = *(_DWORD *)(v4 + 320);
      *(_DWORD *)(v2 + 60) = v19;
      v20 = *(_DWORD *)(v4 + 324);
    }
    *(_DWORD *)(v2 + 68) = v19 + v20;
    if ( !*(_DWORD *)(v4 + 308) )
      *(_DWORD *)(v2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[53] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3[57] + 144LL);
    *(_OWORD *)(v2 + 56) = *(_OWORD *)(v3[57] + 152LL);
  }
  else
  {
    *(_OWORD *)(v2 + 56) = 0LL;
  }
  return 1LL;
}
