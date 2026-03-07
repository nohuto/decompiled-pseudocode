__int64 __fastcall EtwpRealtimeDeliverBuffer(__int64 a1, __int64 a2)
{
  __int16 *v2; // rdi
  int v4; // ecx
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int16 v7; // r12
  _QWORD *v8; // rbp
  int v9; // eax
  unsigned __int8 v10; // cl
  char v11; // r8
  __int16 v13; // ax
  __int16 v14; // ax
  char v15; // [rsp+60h] [rbp+8h]
  char v17; // [rsp+70h] [rbp+18h]

  v2 = (__int16 *)(a2 + 52);
  v15 = 0;
  v4 = *(_DWORD *)(a1 + 448);
  v5 = 0LL;
  v17 = 0;
  if ( v4 )
  {
    v13 = *v2;
    if ( v4 == 3 )
    {
      v14 = v13 | 8;
    }
    else if ( v4 == 2 )
    {
      v14 = v13 | 4;
    }
    else
    {
      v14 = v13 | 2;
    }
    *v2 = v14;
    v17 = 1;
  }
  v6 = *(_QWORD **)(a1 + 328);
  if ( v6 == (_QWORD *)(a1 + 328) )
    return 3221225473LL;
  do
  {
    v7 = *v2;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( (*((_BYTE *)v8 + 90) & 2) != 0 )
      *v2 = v7 | 4;
    v9 = EtwpRealtimeInjectEtwBuffer(a1, v8, a2);
    *v2 = v7;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741764 )
      {
        v8[4] = v5;
        v5 = v8;
      }
      else
      {
LABEL_17:
        EtwpDisassociateConsumer(a1, v8);
      }
      v11 = v15;
      continue;
    }
    v10 = *((_BYTE *)v8 + 90);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      *((_BYTE *)v8 + 90) = v10;
    }
    v11 = 1;
    v15 = 1;
    if ( (v10 & ((*v2 & 1) != 0)) != 0 )
      goto LABEL_17;
  }
  while ( v6 != (_QWORD *)(a1 + 328) );
  if ( !v11 )
    return 3221225473LL;
  if ( v17 )
    *(_DWORD *)(a1 + 448) = 0;
  if ( *(_WORD *)(a2 + 54) != 6 )
    ++*(_DWORD *)(a1 + 256);
  while ( v5 )
  {
    *((_BYTE *)v5 + 90) |= 2u;
    ++*((_DWORD *)v5 + 20);
    v5 = (_QWORD *)v5[4];
  }
  return 0LL;
}
