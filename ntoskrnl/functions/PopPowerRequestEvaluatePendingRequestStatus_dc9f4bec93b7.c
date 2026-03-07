int __fastcall PopPowerRequestEvaluatePendingRequestStatus(_BYTE *Object, __int64 *a2)
{
  __int64 *v2; // rbp
  int v4; // esi
  unsigned int v5; // ecx
  _DWORD *v6; // rdx
  unsigned int v7; // r14d
  char *v8; // rdi
  __int64 **v9; // rax
  int v10; // r8d
  int v11; // ecx
  __int64 v12; // rdx
  __int64 ***v13; // rcx
  __int64 **v14; // rcx
  int v15; // ecx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx

  v2 = &PopPowerRequestUpdateQueue;
  if ( a2 )
    v2 = a2;
  v4 = 0;
  if ( !Object[32] )
  {
    v5 = 0;
    v6 = Object + 40;
    do
    {
      if ( *v6 )
        v4 |= 1 << v5;
      ++v5;
      ++v6;
    }
    while ( v5 < 6 );
  }
  if ( !Object[152] )
    v4 &= ~PopPowerRequestGlobalOverrideMask & ~(*((_DWORD *)Object + 6) | *((_DWORD *)Object + 7));
  v7 = 0;
  v8 = (char *)&unk_140C03560;
  do
  {
    LODWORD(v9) = (1 << v7) & *((_DWORD *)Object + 20);
    v10 = v4 & (1 << v7);
    if ( (_DWORD)v9 != v10 )
    {
      v15 = *(_DWORD *)v8;
      if ( ((1 << v7) & *((_DWORD *)Object + 21)) == v10 )
      {
        LODWORD(v9) = v15 - 1;
        *(_DWORD *)v8 = v15 - 1;
        if ( v15 == 1 )
          LODWORD(v9) = KeSetEvent((PRKEVENT)(v8 + 8), 0, 0);
      }
      else
      {
        *(_DWORD *)v8 = v15 + 1;
        LODWORD(v9) = KeResetEvent((PRKEVENT)(v8 + 8));
      }
    }
    ++v7;
    v8 += 48;
  }
  while ( v7 < 6 );
  v11 = *((_DWORD *)Object + 22);
  *((_DWORD *)Object + 20) = v4;
  if ( v4 != *((_DWORD *)Object + 21) )
  {
    if ( v11 )
    {
      if ( v11 != 1 )
        return (int)v9;
    }
    else
    {
      ObfReferenceObjectWithTag(Object, 0x72506F50u);
    }
    v9 = (__int64 **)(Object + 64);
    v12 = *((_QWORD *)Object + 8);
    if ( *(_BYTE **)(v12 + 8) == Object + 64 )
    {
      v13 = (__int64 ***)*((_QWORD *)Object + 9);
      if ( *v13 == v9 )
      {
        *v13 = (__int64 **)v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = (__int64 **)v2[1];
        if ( *v14 == v2 )
        {
          *v9 = v2;
          *((_QWORD *)Object + 9) = v14;
          *v14 = (__int64 *)v9;
          v2[1] = (__int64)v9;
          *((_DWORD *)Object + 22) = 1;
          return (int)v9;
        }
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  if ( v11 != 1 )
    return (int)v9;
  v16 = Object + 64;
  v17 = *((_QWORD *)Object + 8);
  if ( *(_BYTE **)(v17 + 8) != Object + 64 )
    goto LABEL_32;
  v18 = (_QWORD *)*((_QWORD *)Object + 9);
  if ( (_QWORD *)*v18 != v16 )
    goto LABEL_32;
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  *((_DWORD *)Object + 22) = 0;
  *((_QWORD *)Object + 9) = Object + 64;
  *v16 = v16;
  LODWORD(v9) = ObfDereferenceObjectWithTag(Object, 0x72506F50u);
  return (int)v9;
}
