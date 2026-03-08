/*
 * XREFs of RtlGetSystemGlobalData @ 0x1402D9300
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 */

__int64 __fastcall RtlGetSystemGlobalData(int a1, _WORD *a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rax
  char v7; // al
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  __int16 v19; // ax
  __int64 CurrentServerSilo; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // [rsp+48h] [rbp+20h]

  if ( a1 == 10 )
  {
    if ( a3 != 1 )
      return 3221225990LL;
    v7 = MEMORY[0xFFFFF780000002D4];
    goto LABEL_10;
  }
  if ( a1 > 10 )
  {
    v23 = a1 - 11;
    if ( !v23 )
    {
      if ( a3 != 2 )
        return 3221225990LL;
      v19 = MEMORY[0xFFFFF780000002D6];
      goto LABEL_77;
    }
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( a3 == 4 )
        {
          v15 = MEMORY[0xFFFFF780000002E4];
          goto LABEL_26;
        }
        return 3221225990LL;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        if ( a3 == 4 )
        {
          v15 = MEMORY[0xFFFFF780000002F0];
          goto LABEL_26;
        }
        return 3221225990LL;
      }
      v27 = v26 - 2;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              return 3221225485LL;
            if ( a3 == 8 )
            {
              v5 = MEMORY[0xFFFFF780000003B8];
              goto LABEL_6;
            }
            return 3221225990LL;
          }
          if ( a3 != 2 )
            return 3221225990LL;
          v19 = MEMORY[0xFFFFF780000003C6];
LABEL_77:
          *a2 = v19;
          return 0LL;
        }
        if ( a3 != 1 )
          return 3221225990LL;
        v7 = MEMORY[0xFFFFF780000003C6];
      }
      else
      {
        if ( a3 != 1 )
          return 3221225990LL;
        v7 = MEMORY[0xFFFFF780000003C7];
      }
    }
    else
    {
      if ( a3 != 1 )
        return 3221225990LL;
      v7 = MEMORY[0xFFFFF780000002EC];
    }
LABEL_10:
    *(_BYTE *)a2 = v7;
    return 0LL;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    if ( a3 == 8 )
    {
      v5 = MEMORY[0xFFFFF78000000250];
LABEL_6:
      *(_QWORD *)a2 = v5;
      return 0LL;
    }
    return 3221225990LL;
  }
  v8 = v4 - 1;
  if ( !v8 )
  {
    if ( a3 != 8 )
      return 3221225990LL;
    while ( 1 )
    {
      v30 = MEMORY[0xFFFFF78000000008];
      if ( MEMORY[0xFFFFF7800000000C] == MEMORY[0xFFFFF78000000010] )
        break;
      _mm_pause();
    }
    goto LABEL_51;
  }
  v9 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v9 )
  {
    if ( a3 != 8 )
      return 3221225990LL;
    if ( PsIsCurrentThreadInServerSilo(v9, (__int64)a2) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      if ( CurrentServerSilo )
        v21 = *(_QWORD **)(CurrentServerSilo + 1488);
      else
        v21 = &PspHostSiloGlobals;
      v22 = v21[165] + 592LL;
    }
    else
    {
      v22 = 0xFFFFF78000000020uLL;
    }
    while ( 1 )
    {
      v30 = *(_QWORD *)v22;
      if ( HIDWORD(*(_QWORD *)v22) == *(_DWORD *)(v22 + 8) )
        break;
      _mm_pause();
    }
LABEL_51:
    *(_QWORD *)a2 = v30;
    return 0LL;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 != 2 )
      return 3221225990LL;
    v19 = MEMORY[0xFFFFF7800000002C];
    goto LABEL_77;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 != 2 )
      return 3221225990LL;
    v19 = MEMORY[0xFFFFF7800000002E];
    goto LABEL_77;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v12 )
  {
    if ( a3 == 4 )
    {
      if ( PsIsCurrentThreadInServerSilo(v12, (__int64)a2) )
      {
        v16 = PsGetCurrentServerSilo();
        if ( v16 )
          v17 = *(_QWORD **)(v16 + 1488);
        else
          v17 = &PspHostSiloGlobals;
        v18 = (_DWORD *)(v17[165] + 584LL);
      }
      else
      {
        v18 = (_DWORD *)0xFFFFF78000000240LL;
      }
      *(_DWORD *)a2 = *v18;
      return 0LL;
    }
    return 3221225990LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a3 == 4 )
    {
      v15 = MEMORY[0xFFFFF7800000026C];
      goto LABEL_26;
    }
    return 3221225990LL;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a3 == 4 )
    {
      v15 = MEMORY[0xFFFFF78000000270];
LABEL_26:
      *(_DWORD *)a2 = v15;
      return 0LL;
    }
    return 3221225990LL;
  }
  if ( v14 == 1 )
  {
    if ( a3 == 8 )
    {
      v5 = MEMORY[0xFFFFF780000002C8];
      goto LABEL_6;
    }
    return 3221225990LL;
  }
  return 3221225485LL;
}
