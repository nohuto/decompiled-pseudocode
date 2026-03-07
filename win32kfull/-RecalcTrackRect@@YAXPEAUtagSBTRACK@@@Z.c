void __fastcall RecalcTrackRect(struct tagSBTRACK *a1)
{
  unsigned int v1; // r8d
  __int128 *v3; // rcx
  __int128 *v4; // rdx
  _DWORD *v5; // r8
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)a1;
  v11 = 0LL;
  if ( (v1 & 4) == 0 )
    CalcSBStuff(*((_QWORD *)a1 + 1), *((_QWORD *)a1 + 12), (v1 >> 1) & 1);
  v3 = &v11;
  v4 = (__int128 *)((char *)&v11 + 4);
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v3 = (__int128 *)((char *)&v11 + 4);
    v4 = &v11;
  }
  v5 = (_DWORD *)*((_QWORD *)a1 + 12);
  *(_DWORD *)v3 = v5[6];
  *(_DWORD *)v4 = v5[4];
  *((_DWORD *)v3 + 2) = v5[7];
  v6 = *((_DWORD *)a1 + 14);
  *((_DWORD *)v4 + 2) = v5[5];
  if ( !v6 )
  {
    v10 = v5[9];
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_DWORD *)v4 = v5[10];
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_DWORD *)v4 = v5[9];
    v10 = v5[13];
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_DWORD *)v4 = v5[12];
    v10 = v5[10];
LABEL_15:
    *((_DWORD *)v4 + 2) = v10;
    goto LABEL_16;
  }
  if ( v9 == 1 )
    CalcTrackDragRect(a1);
LABEL_16:
  if ( *((_DWORD *)a1 + 14) != 4 )
    *((_OWORD *)a1 + 2) = v11;
}
