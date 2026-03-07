void __fastcall KiResortScbQueue(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v6; // rcx
  __int64 i; // rcx
  unsigned __int64 v8; // r8
  __int64 j; // r8
  _QWORD *v10; // rdx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // r8d
  int v21; // eax

  v3 = (unsigned __int64 *)(a2 + 88);
  if ( !a3 )
  {
    v6 = *v3;
    if ( *v3 )
    {
      for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 104); ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)(v6 + 8) == v3 )
          break;
        v3 = (unsigned __int64 *)v6;
      }
    }
    if ( !v6 )
      return;
    v16 = *(_DWORD *)(a2 + 116);
    v17 = v16 - *(_DWORD *)(v6 + 28);
    if ( v16 != *(_DWORD *)(v6 + 28) )
      goto LABEL_31;
    v18 = *(unsigned __int16 *)(a2 + 114);
    if ( (_WORD)v18 )
    {
      v19 = *(unsigned __int16 *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v20, v18);
      v21 = 0;
      if ( (_WORD)v19 )
        _BitScanReverse((unsigned int *)&v21, v19);
      v17 = v21 - v20;
LABEL_31:
      if ( v17 >= 0 )
        return;
      goto LABEL_21;
    }
    if ( v16 || *(_QWORD *)a2 > *(_QWORD *)(v6 - 88) )
      return;
LABEL_21:
    KiRemoveSchedulingGroupQueue(a1, a2, 0LL);
    KiInsertSchedulingGroupQueue(a1, a2, 0);
    return;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    v10 = *(_QWORD **)v8;
    if ( *(_QWORD *)v8 )
    {
      do
      {
        v8 = (unsigned __int64)v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v8 + 16) )
    {
      v8 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(unsigned __int64 **)v8 == v3 )
        break;
      v3 = (unsigned __int64 *)v8;
    }
  }
  if ( v8 )
  {
    v11 = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28);
    if ( !v11 )
    {
      v12 = *(unsigned __int16 *)(a2 + 114);
      if ( !(_WORD)v12 )
      {
        if ( !*(_DWORD *)(a2 + 116) && *(_QWORD *)a2 <= *(_QWORD *)(v8 - 88) )
          return;
        goto LABEL_21;
      }
      v13 = *(unsigned __int16 *)(v8 + 26);
      _BitScanReverse((unsigned int *)&v14, v12);
      v15 = 0;
      if ( (_WORD)v13 )
        _BitScanReverse((unsigned int *)&v15, v13);
      v11 = v15 - v14;
    }
    if ( v11 <= 0 )
      return;
    goto LABEL_21;
  }
}
