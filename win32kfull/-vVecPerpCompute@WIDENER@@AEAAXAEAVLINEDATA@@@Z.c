void __fastcall WIDENER::vVecPerpCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ebp
  int v7; // r14d
  int v8; // r11d
  int v9; // edi
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // r14d
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // esi
  int v23; // edx
  int v24; // r8d
  int v25; // ecx
  int v26; // r8d
  int v27; // ecx

  if ( (*(_DWORD *)a2 & 8) == 0 )
    WIDENER::vVecDrawCompute(this, a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *v3;
  v7 = v3[1];
  if ( v4 > v5 )
  {
    v8 = v3[2] - v6;
    v9 = v3[3] - v7;
  }
  else
  {
    v8 = v6 - *(v3 - 2);
    v9 = v7 - *(v3 - 1);
  }
  v10 = v5 + v4;
  v11 = v6 - (v8 >> 1);
  v12 = v7 - (v9 >> 1);
  v13 = v4 * (int)abs32(v9);
  v14 = v4 * (int)abs32(v8);
  if ( v5 + v4 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      LODWORD(v16) = 0;
      LODWORD(v18) = 0;
      v14 /= v10;
      v13 /= v10;
    }
    else
    {
      if ( v14 < 0 )
      {
        v15 = -v14;
        v14 = -(__int64)(-v14 / (unsigned __int64)(unsigned int)v10);
      }
      else
      {
        v15 = v14;
        v14 /= (unsigned __int64)(unsigned int)v10;
      }
      v16 = v15 % (unsigned int)v10;
      if ( v13 < 0 )
      {
        v19 = -v13;
        v13 = -(__int64)(-v13 / (unsigned __int64)(unsigned int)v10);
        v18 = v19 % (unsigned int)v10;
      }
      else
      {
        v17 = v13 % (unsigned __int64)(unsigned int)v10;
        v13 /= (unsigned __int64)(unsigned int)v10;
        LODWORD(v18) = v17;
      }
    }
  }
  else
  {
    LODWORD(v16) = 0;
    LODWORD(v18) = 0;
  }
  v20 = *(_DWORD *)a2;
  v21 = v14 + 1;
  v22 = (unsigned int)v10 >> 1;
  v23 = v13 + 1;
  if ( (unsigned int)v16 < v22 )
    v21 = v14;
  if ( (unsigned int)v18 < v22 )
    v23 = v13;
  v24 = -v21;
  if ( v8 >= 0 )
    v24 = v21;
  v25 = -v23;
  v26 = v11 + v24;
  if ( v9 >= 0 )
    v25 = v23;
  v27 = v12 + v25;
  if ( (v20 & 1) != 0 )
  {
    v26 = -v26;
    v27 = -v27;
  }
  *(_DWORD *)a2 = v20 | 4;
  *((_DWORD *)a2 + 16) = (v26 + ((v26 >> 31) & 1) + 3) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 17) = ((v27 >> 31) + v27 + 4) & 0xFFFFFFF8;
}
