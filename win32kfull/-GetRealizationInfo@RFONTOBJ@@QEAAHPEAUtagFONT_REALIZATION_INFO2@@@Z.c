__int64 __fastcall RFONTOBJ::GetRealizationInfo(RFONTOBJ *this, struct tagFONT_REALIZATION_INFO2 *a2)
{
  __int64 v4; // r11
  int v5; // edx
  char v6; // al
  int v7; // ebp
  __int64 v9; // rdi
  __int16 v10; // r11
  unsigned __int16 v11; // dx
  unsigned int v12; // r8d
  __int16 v13; // ax
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // r10
  __int64 *v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  __int16 v20; // ax
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // r11d
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 48LL);
  if ( (v5 & 2) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 4;
    if ( (v5 & 4) != 0 )
    {
      v6 = 2;
    }
    else if ( v5 >= 0 || (v5 & 0x4000000) != 0 )
    {
      v6 = 3;
    }
  }
  *((_BYTE *)a2 + 4) = v6;
  *((_DWORD *)a2 + 2) = **(_DWORD **)this;
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v4 + 140);
  *((_WORD *)a2 + 3) = 0;
  *((_BYTE *)a2 + 5) = ((*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000000) != 0) + 1;
  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 != 16 )
  {
    v9 = *(_QWORD *)this + 128LL;
    v10 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL);
    v11 = v10 - 1;
    if ( v10 != 1 )
    {
      v17 = (__int64 *)(*(_QWORD *)v9 + 216LL + 8LL * v11);
      do
      {
        v18 = *v17--;
        v19 = *(_DWORD *)(v18 + 12);
        v20 = v10 - 1;
        if ( (v19 & 0x100) == 0 )
          v20 = v10;
        v10 = v20;
        --v11;
      }
      while ( v11 );
    }
    v12 = *(_DWORD *)(*(_QWORD *)this + 12LL);
    v13 = (v12 >> 13) & 1 | 2;
    *((_DWORD *)a2 + 4) = *(_DWORD *)(*(_QWORD *)v9 + 36LL);
    *((_WORD *)a2 + 10) = v10 - 1;
    if ( (v12 & 0x4000) == 0 )
      v13 = (v12 >> 13) & 1;
    *((_WORD *)a2 + 11) = v13;
    if ( v7 != 24 )
    {
      if ( IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)) )
      {
        v21 = v14 + *(unsigned int *)(v14 + 204);
        v22 = v15;
        for ( v16[7] = *(_DWORD *)(v21 + 4); v22 < *(_DWORD *)(v21 + 4); v16[v23 + 8] = *(_DWORD *)(v21 + 4 * v23 + 8) )
          v23 = v22++;
        v24 = v15;
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)
            + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 208LL);
        v16[25] = *(_DWORD *)(v25 + 4);
        if ( *(_DWORD *)(v25 + 4) > (unsigned int)v15 )
        {
          do
          {
            v26 = v24++;
            v27 = 5 * v26;
            *(_OWORD *)&v16[2 * v27 + 26] = *(_OWORD *)(v25 + 40 * v26 + 8);
            *(_OWORD *)&v16[2 * v27 + 30] = *(_OWORD *)(v25 + 40 * v26 + 24);
            *(_QWORD *)&v16[2 * v27 + 34] = *(_QWORD *)(v25 + 40 * v26 + 40);
          }
          while ( v24 < *(_DWORD *)(v25 + 4) );
        }
        for ( v16[186] = *(_DWORD *)(v21 + 72); (unsigned int)v15 < *(_DWORD *)(v21 + 4); v15 = (unsigned int)(v15 + 1) )
          v16[v15 + 187] = *(_DWORD *)(v21 + 4 * v15 + 76);
      }
      else
      {
        v16[7] = v15;
        v16[25] = v15;
        v16[186] = v15;
      }
    }
  }
  return 1LL;
}
