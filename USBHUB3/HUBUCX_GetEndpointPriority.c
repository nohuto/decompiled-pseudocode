__int64 __fastcall HUBUCX_GetEndpointPriority(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r10d
  __int64 v9; // rcx
  __int16 v10; // si
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  char v13; // bp
  __int64 v14; // rax
  __int16 v15; // r15
  __int16 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // ax

  v4 = *(_DWORD *)(a1 + 2704);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)-1073741275;
  v9 = *(_QWORD *)(a3 + 32);
  if ( (*(_BYTE *)(v9 + 3) & 3) != 2 )
    return (unsigned int)-1073741275;
  v10 = 0;
  v11 = 0;
  v12 = *(_DWORD *)(a2 + 24);
  v13 = *(_BYTE *)(v9 + 2) & 0x80;
  v14 = *(_QWORD *)(a2 + 32);
  v15 = *(unsigned __int8 *)(v14 + 2);
  v16 = *(unsigned __int8 *)(v14 + 3);
  if ( v12 )
  {
    v17 = a2 + 40;
    do
    {
      if ( v17 == a3 )
        break;
      v18 = *(_QWORD *)(v17 + 32);
      if ( (*(_BYTE *)(v18 + 3) & 3) == 2 && (*(_BYTE *)(v18 + 2) & 0x80) == v13 )
        ++v10;
      ++v11;
      v17 += 72LL;
    }
    while ( v11 < v12 );
  }
  if ( v11 != v12 )
  {
    v19 = 0;
    v20 = *(_QWORD *)(a1 + 2696);
    while ( 1 )
    {
      v21 = *(_WORD *)(v20 + 20LL * v19);
      if ( v21 == *(unsigned __int8 *)(*(_QWORD *)(a1 + 2016) + 5LL) || v21 == -1 )
      {
        v22 = *(_WORD *)(v20 + 20LL * v19 + 2);
        if ( v22 == v15 || v22 == -1 )
        {
          v23 = *(_WORD *)(v20 + 20LL * v19 + 4);
          if ( (v23 == v16 || v23 == -1)
            && (*(_DWORD *)(v20 + 20LL * v19 + 8) == 0) == v13
            && *(_WORD *)(v20 + 20LL * v19 + 12) == v10 )
          {
            break;
          }
        }
      }
      if ( ++v19 >= v4 )
        return (unsigned int)-1073741275;
    }
    *a4 = *(_DWORD *)(v20 + 20LL * v19 + 16);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
