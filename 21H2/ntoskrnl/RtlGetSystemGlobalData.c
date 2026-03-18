/*
 * XREFs of RtlGetSystemGlobalData @ 0x140236E00
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

__int64 __fastcall RtlGetSystemGlobalData(int a1, _DWORD *a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  __int16 v14; // ax
  __int64 ThreadServerSilo; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  char v24; // al
  __int64 v25; // [rsp+48h] [rbp+20h]

  if ( a1 > 7 )
  {
    v19 = a1 - 8;
    if ( !v19 )
    {
      if ( a3 != 4 )
        return 3221225990LL;
      v18 = MEMORY[0xFFFFF78000000270];
      goto LABEL_62;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( a3 == 8 )
      {
        v5 = MEMORY[0xFFFFF780000002C8];
        goto LABEL_6;
      }
      return 3221225990LL;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( a3 == 2 )
        {
          v14 = MEMORY[0xFFFFF780000002D6];
          goto LABEL_26;
        }
        return 3221225990LL;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          return 3221225485LL;
        if ( a3 != 4 )
          return 3221225990LL;
        v18 = MEMORY[0xFFFFF780000002E4];
LABEL_62:
        *a2 = v18;
        return 0LL;
      }
      if ( a3 != 1 )
        return 3221225990LL;
      v24 = MEMORY[0xFFFFF780000002EC];
    }
    else
    {
      if ( a3 != 1 )
        return 3221225990LL;
      v24 = MEMORY[0xFFFFF780000002D4];
    }
    *(_BYTE *)a2 = v24;
    return 0LL;
  }
  if ( a1 == 7 )
  {
    if ( a3 != 4 )
      return 3221225990LL;
    v18 = MEMORY[0xFFFFF7800000026C];
    goto LABEL_62;
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
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( a3 != 8 )
      return 3221225990LL;
    while ( 1 )
    {
      v25 = MEMORY[0xFFFFF78000000008];
      if ( MEMORY[0xFFFFF7800000000C] == MEMORY[0xFFFFF78000000010] )
        break;
      _mm_pause();
    }
    goto LABEL_39;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 != 8 )
      return 3221225990LL;
    if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
    {
      ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
      if ( ThreadServerSilo )
        v16 = *(_QWORD **)(ThreadServerSilo + 1464);
      else
        v16 = &PspHostSiloGlobals;
      v17 = v16[165] + 592LL;
    }
    else
    {
      v17 = 0xFFFFF78000000020uLL;
    }
    while ( 1 )
    {
      v25 = *(_QWORD *)v17;
      if ( HIDWORD(*(_QWORD *)v17) == *(_DWORD *)(v17 + 8) )
        break;
      _mm_pause();
    }
LABEL_39:
    *(_QWORD *)a2 = v25;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 2 )
    {
      v14 = MEMORY[0xFFFFF7800000002C];
      goto LABEL_26;
    }
    return 3221225990LL;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 == 2 )
    {
      v14 = MEMORY[0xFFFFF7800000002E];
LABEL_26:
      *(_WORD *)a2 = v14;
      return 0LL;
    }
    return 3221225990LL;
  }
  if ( v10 == 1 )
  {
    if ( a3 == 4 )
    {
      if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
      {
        v11 = PsGetThreadServerSilo(KeGetCurrentThread());
        if ( v11 )
          v12 = *(_QWORD **)(v11 + 1464);
        else
          v12 = &PspHostSiloGlobals;
        v13 = (_DWORD *)(v12[165] + 584LL);
      }
      else
      {
        v13 = (_DWORD *)0xFFFFF78000000240LL;
      }
      *a2 = *v13;
      return 0LL;
    }
    return 3221225990LL;
  }
  return 3221225485LL;
}
