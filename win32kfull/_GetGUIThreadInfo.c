__int64 __fastcall GetGUIThreadInfo(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  int v4; // ecx
  __int64 v6; // rdi
  __int64 v7; // rax
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  int **v12; // rax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rsi
  int v25; // ecx
  int v26; // ecx
  int v27; // edx
  int v28; // ecx

  v3 = (_QWORD *)a1;
  if ( *(_DWORD *)a2 != 72 )
  {
    v4 = 87;
LABEL_3:
    UserSetLastError(v4);
    return 0LL;
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 432);
  }
  else
  {
    v6 = gpqForeground;
    if ( !gpqForeground )
      return 0LL;
    v7 = *(_QWORD *)(gpqForeground + 128LL);
    if ( v7 )
    {
      a1 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      {
        v3 = *(_QWORD **)(v7 + 16);
        a1 = *((_QWORD *)PtiCurrentShared(a1) + 57);
        if ( a1 != v3[57] )
          goto LABEL_19;
      }
    }
  }
  if ( *(_QWORD *)(v6 + 304) )
  {
    v8 = PtiCurrentShared(a1);
    a1 = *(_QWORD *)(v6 + 304);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) != *((_QWORD *)v8 + 57) )
      goto LABEL_19;
  }
  if ( v3 )
  {
    if ( !IS_USERCRIT_OWNED_AT_ALL(a1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    if ( v3[57] != *(_QWORD *)(v9 + 456) )
    {
LABEL_19:
      v4 = 5;
      goto LABEL_3;
    }
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( v3 )
  {
    v11 = v3[84];
    a1 = 0LL;
    if ( v11 && (*(_DWORD *)(v11 + 200) & 8) == 0 && *(_QWORD *)(v11 + 16) )
    {
      *(_DWORD *)(a2 + 4) = 2;
      a1 = 2LL;
      *(_QWORD *)(a2 + 40) = **(_QWORD **)(v3[84] + 16LL);
    }
    v12 = (int **)v3[76];
    if ( v12 )
    {
      if ( *v12 )
      {
        v13 = a1 | 4;
        *(_DWORD *)(a2 + 4) = v13;
        v14 = **v12;
        if ( (v14 & 2) != 0 )
        {
          if ( (v14 & 4) == 0 )
            goto LABEL_32;
          v15 = v13 | 8;
        }
        else
        {
          v15 = v13 | 0x10;
        }
        *(_DWORD *)(a2 + 4) = v15;
LABEL_32:
        a1 = *(_QWORD *)v3[76];
        v16 = *(_QWORD **)(a1 + 8);
        if ( v16 )
          *(_QWORD *)(a2 + 32) = *v16;
      }
    }
  }
  v17 = *(__int64 **)(v6 + 128);
  if ( v17 )
    v18 = *v17;
  else
    v18 = 0LL;
  *(_QWORD *)(a2 + 8) = v18;
  v19 = *(__int64 **)(v6 + 120);
  if ( v19 )
    v20 = *v19;
  else
    v20 = 0LL;
  *(_QWORD *)(a2 + 16) = v20;
  v21 = *(__int64 **)(v6 + 112);
  if ( v21 )
    v22 = *v21;
  else
    v22 = 0LL;
  *(_QWORD *)(a2 + 24) = v22;
  *(_QWORD *)(a2 + 48) = 0LL;
  v23 = *(_QWORD **)(v6 + 304);
  if ( v23 )
  {
    *(_QWORD *)(a2 + 48) = *v23;
    v24 = *(_QWORD *)(v6 + 304);
    if ( *(struct tagTHREADINFO **)(v24 + 16) == PtiCurrentShared(a1)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 136) + 8LL) + 8LL) & 0x20) == 0 )
    {
      v28 = *(_DWORD *)(v6 + 324);
      *(_DWORD *)(a2 + 56) = v28;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v6 + 336) + v28;
      v26 = *(_DWORD *)(v6 + 328);
      *(_DWORD *)(a2 + 60) = v26;
      v27 = *(_DWORD *)(v6 + 332);
    }
    else
    {
      v25 = *(_DWORD *)(v6 + 364);
      *(_DWORD *)(a2 + 56) = v25;
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v6 + 372) + v25;
      v26 = *(_DWORD *)(v6 + 368);
      *(_DWORD *)(a2 + 60) = v26;
      v27 = *(_DWORD *)(v6 + 376);
    }
    *(_DWORD *)(a2 + 68) = v26 + v27;
    if ( !*(_DWORD *)(v6 + 316) )
      *(_DWORD *)(a2 + 4) |= 1u;
  }
  else if ( v3 && (*(_DWORD *)(v3[53] + 12LL) & 0x4000000) != 0 )
  {
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v3[57] + 144LL);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(v3[57] + 152LL);
  }
  else
  {
    *(_OWORD *)(a2 + 56) = 0LL;
  }
  return 1LL;
}
