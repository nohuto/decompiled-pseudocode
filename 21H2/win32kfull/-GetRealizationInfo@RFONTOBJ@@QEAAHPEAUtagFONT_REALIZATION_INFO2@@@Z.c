/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C0094DC8
 * Callers:
 *     GreGetRealizationInfo @ 0x1C0137D04 (GreGetRealizationInfo.c)
 * Callees:
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C00623E8 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetRealizationInfo(RFONTOBJ *this, struct tagFONT_REALIZATION_INFO2 *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  char v6; // al
  int v7; // esi
  _DWORD *v8; // rdi
  __int16 v9; // r11
  unsigned __int16 v10; // dx
  __int64 *v11; // r8
  __int64 v12; // rax
  int v13; // ecx
  __int16 v14; // ax
  unsigned int v15; // r8d
  __int16 v16; // ax
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  unsigned int v23; // r11d
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 48LL);
  if ( (v5 & 2) != 0 )
  {
    v6 = 1;
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = 2;
  }
  else
  {
    v6 = ((v5 & 0x84000000) == 0x80000000) + 3;
  }
  *((_BYTE *)a2 + 4) = v6;
  *((_DWORD *)a2 + 2) = **(_DWORD **)this;
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v4 + 140);
  *((_WORD *)a2 + 3) = 0;
  *((_BYTE *)a2 + 5) = ((*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000000) != 0) + 1;
  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 != 16 )
  {
    v8 = *(_DWORD **)this;
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL);
    v10 = v9 - 1;
    if ( v9 != 1 )
    {
      v11 = (__int64 *)(*((_QWORD *)v8 + 16) + 216LL + 8LL * v10);
      do
      {
        v12 = *v11--;
        v13 = *(_DWORD *)(v12 + 12);
        v14 = v9 - 1;
        if ( (v13 & 0x100) == 0 )
          v14 = v9;
        v9 = v14;
        --v10;
      }
      while ( v10 );
    }
    v15 = v8[3];
    v16 = (v15 >> 13) & 1 | 2;
    *((_DWORD *)a2 + 4) = *(_DWORD *)(*((_QWORD *)v8 + 16) + 36LL);
    *((_WORD *)a2 + 10) = v9 - 1;
    if ( (v15 & 0x4000) == 0 )
      v16 = (v15 >> 13) & 1;
    *((_WORD *)a2 + 11) = v16;
    if ( v7 != 24 )
    {
      if ( IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)) )
      {
        v20 = v17 + *(unsigned int *)(v17 + 204);
        v21 = v18;
        for ( v19[7] = *(_DWORD *)(v20 + 4); v21 < *(_DWORD *)(v20 + 4); v19[v22 + 8] = *(_DWORD *)(v20 + 4 * v22 + 8) )
          v22 = v21++;
        v23 = v18;
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)
            + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 208LL);
        v19[25] = *(_DWORD *)(v24 + 4);
        if ( *(_DWORD *)(v24 + 4) > (unsigned int)v18 )
        {
          do
          {
            v25 = v23++;
            v26 = 5 * v25;
            *(_OWORD *)&v19[2 * v26 + 26] = *(_OWORD *)(v24 + 40 * v25 + 8);
            *(_OWORD *)&v19[2 * v26 + 30] = *(_OWORD *)(v24 + 40 * v25 + 24);
            *(_QWORD *)&v19[2 * v26 + 34] = *(_QWORD *)(v24 + 40 * v25 + 40);
          }
          while ( v23 < *(_DWORD *)(v24 + 4) );
        }
        for ( v19[186] = *(_DWORD *)(v20 + 72); (unsigned int)v18 < *(_DWORD *)(v20 + 4); v18 = (unsigned int)(v18 + 1) )
          v19[v18 + 187] = *(_DWORD *)(v20 + 4 * v18 + 76);
      }
      else
      {
        v19[7] = v18;
        v19[25] = v18;
        v19[186] = v18;
      }
    }
  }
  return 1LL;
}
