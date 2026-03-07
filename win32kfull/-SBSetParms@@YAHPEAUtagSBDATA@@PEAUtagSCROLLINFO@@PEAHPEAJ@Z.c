__int64 __fastcall SBSetParms(struct tagSBDATA *a1, struct tagSCROLLINFO *a2, int *a3, int *a4)
{
  int v4; // r10d
  int v5; // esi
  unsigned int v8; // edi
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ecx
  bool v15; // cf
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // ecx

  v4 = *((_DWORD *)a2 + 1);
  v5 = 0;
  v8 = 0;
  if ( (v4 & 0x1000) != 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v4 & 1) != 0 )
  {
    v9 = *((_DWORD *)a2 + 2);
    v10 = *((_DWORD *)a2 + 3);
    LOBYTE(v8) = v9 == v10;
    if ( v9 > v10 )
    {
      *((_DWORD *)a2 + 3) = v9;
      v10 = v9;
    }
    if ( *(_DWORD *)a1 != v9 || *((_DWORD *)a1 + 1) != v10 )
    {
      *(_DWORD *)a1 = v9;
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 3);
      v4 = *((_DWORD *)a2 + 1);
      if ( (v4 & 2) == 0 )
      {
        v4 |= 2u;
        *((_DWORD *)a2 + 1) = v4;
        *((_DWORD *)a2 + 4) = *((_DWORD *)a1 + 2);
      }
      if ( (v4 & 4) == 0 )
      {
        v4 |= 4u;
        *((_DWORD *)a2 + 1) = v4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (v4 & 2) != 0 )
  {
    v11 = *((_DWORD *)a2 + 4);
    v12 = abs32(*((_DWORD *)a1 + 1) - *(_DWORD *)a1) + 1;
    if ( v11 > v12 )
    {
      *((_DWORD *)a2 + 4) = v12;
      v11 = v12;
    }
    if ( *((_DWORD *)a1 + 2) != v11 )
    {
      *((_DWORD *)a1 + 2) = v11;
      v4 = *((_DWORD *)a2 + 1);
      if ( (v4 & 4) == 0 )
      {
        v4 |= 4u;
        *((_DWORD *)a2 + 1) = v4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v13 = *((_DWORD *)a1 + 2);
    v14 = v13 - 1;
    v15 = v13 != 0;
    v16 = *(_DWORD *)a1;
    v17 = *((_DWORD *)a1 + 1) - (v15 ? v14 : 0);
    v18 = *((_DWORD *)a2 + 5);
    if ( v18 < *(_DWORD *)a1 )
    {
      *((_DWORD *)a2 + 5) = v16;
    }
    else
    {
      v16 = *((_DWORD *)a2 + 5);
      if ( v18 > v17 )
      {
        *((_DWORD *)a2 + 5) = v17;
        v16 = v17;
      }
    }
    if ( *((_DWORD *)a1 + 3) != v16 )
    {
      *((_DWORD *)a1 + 3) = v16;
      v8 = 1;
    }
  }
  v19 = *((_DWORD *)a2 + 1);
  if ( (v19 & 0x1000) == 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v19 & 1) == 0 )
  {
    if ( (v19 & 2) == 0 )
      return v8;
    goto LABEL_22;
  }
  if ( *(_DWORD *)a1 != *((_DWORD *)a1 + 1) )
LABEL_22:
    LOBYTE(v5) = *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
  *a3 = v5;
  return v8;
}
