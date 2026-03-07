_BYTE *__fastcall Input1BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // rdi
  unsigned int v3; // r10d
  bool v5; // zf
  _BYTE *v6; // r9
  __int16 *v7; // rcx
  __int64 v9; // rdx
  char *v10; // rcx
  char v11; // al
  int v12; // edx
  unsigned __int16 v13; // ax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int i; // edx
  unsigned int v17; // ecx
  int v18; // r10d
  unsigned __int16 v19; // ax
  char v20; // al
  int v21; // ecx
  unsigned int v22; // esi
  unsigned __int16 v23; // ax
  unsigned __int64 v24; // r8
  unsigned int v25; // esi
  _WORD *v26; // r15
  unsigned int v27; // r8d
  unsigned __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rdx
  char v35; // al
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // r10d
  unsigned __int16 v42; // ax
  unsigned __int64 v43; // r8
  char v44; // cl
  int v45; // eax
  int v46; // eax
  __int16 v48; // [rsp+20h] [rbp+20h] BYREF
  char v49; // [rsp+22h] [rbp+22h]
  __int16 v50; // [rsp+23h] [rbp+23h]
  char v51; // [rsp+25h] [rbp+25h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 12);
  v5 = (*a1 & 4) == 0;
  v6 = a2;
  v7 = (__int16 *)*((_QWORD *)a1 + 10);
  if ( v5 )
  {
    v48 = *v7;
    v49 = *((_BYTE *)v7 + 2);
    v50 = v7[2];
    v20 = *((_BYTE *)v7 + 6);
    v21 = (unsigned __int8)a1[1];
    v51 = v20;
    if ( v21 )
    {
      v22 = v3;
      v23 = *v2++ << v21;
      if ( 8 - v21 <= v3 )
        v22 = 8 - v21;
      for ( v3 -= v22; v22; --v22 )
      {
        v23 *= 2;
        v24 = ((unsigned __int64)v23 >> 8) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v24 + v24);
        v6[2] = *((_BYTE *)&v48 + 2 * v24 + v24 + 2);
        v6 += 3;
      }
    }
    v25 = v3 >> 3;
    if ( v3 >> 3 )
    {
      v26 = v6 + 6;
      do
      {
        v27 = *v2;
        v28 = *v2++;
        v28 >>= 7;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v28 + v28);
        v29 = *((_BYTE *)&v48 + 2 * v28 + v28 + 2);
        v30 = (v27 >> 6) & 1;
        v6[2] = v29;
        v6 += 24;
        *(_WORD *)((char *)v26 - 3) = *(__int16 *)((char *)&v48 + 2 * v30 + v30);
        v31 = *((_BYTE *)&v48 + 2 * v30 + v30 + 2);
        v32 = (v27 >> 5) & 1;
        *((_BYTE *)v26 - 1) = v31;
        *v26 = *(__int16 *)((char *)&v48 + 2 * v32 + v32);
        v26 += 12;
        v33 = *((_BYTE *)&v48 + 2 * v32 + v32 + 2);
        v34 = (v27 >> 4) & 1;
        *((_BYTE *)v26 - 22) = v33;
        *(_WORD *)((char *)v26 - 21) = *(__int16 *)((char *)&v48 + 2 * v34 + v34);
        v35 = *((_BYTE *)&v48 + 2 * v34 + v34 + 2);
        v36 = (v27 >> 3) & 1;
        *((_BYTE *)v26 - 19) = v35;
        *(v26 - 9) = *(__int16 *)((char *)&v48 + 2 * v36 + v36);
        v37 = *((_BYTE *)&v48 + 2 * v36 + v36 + 2);
        v38 = (v27 >> 2) & 1;
        *((_BYTE *)v26 - 16) = v37;
        *(_WORD *)((char *)v26 - 15) = *(__int16 *)((char *)&v48 + 2 * v38 + v38);
        *((_BYTE *)v26 - 13) = *((_BYTE *)&v48 + 2 * v38 + v38 + 2);
        v39 = (v27 >> 1) & 1;
        v40 = v27 & 1;
        *(v26 - 6) = *(__int16 *)((char *)&v48 + 2 * v39 + v39);
        *((_BYTE *)v26 - 10) = *((_BYTE *)&v48 + 2 * v39 + v39 + 2);
        *(_WORD *)((char *)v26 - 9) = *(__int16 *)((char *)&v48 + 2 * v40 + v40);
        *((_BYTE *)v26 - 7) = *((_BYTE *)&v48 + 2 * v40 + v40 + 2);
        --v25;
      }
      while ( v25 );
    }
    v41 = v3 & 7;
    if ( v41 )
    {
      v42 = *v2;
      do
      {
        v42 *= 2;
        v43 = ((unsigned __int64)v42 >> 8) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v43 + v43);
        v6 += 3;
        *(v6 - 1) = *((_BYTE *)&v48 + 2 * v43 + v43 + 2);
        --v41;
      }
      while ( v41 );
    }
  }
  else
  {
    v9 = 0LL;
    v10 = (char *)v7 + 3;
    do
    {
      v11 = *v10;
      v10 += 4;
      *((_BYTE *)&v48 + v9++) = v11;
    }
    while ( v9 < 2 );
    v12 = (unsigned __int8)a1[1];
    if ( a1[1] )
    {
      v13 = *v2++ << v12;
      v14 = 8 - v12;
      v15 = v3;
      if ( v14 <= v3 )
        v15 = v14;
      for ( v3 -= v15; v15; --v15 )
      {
        v13 *= 2;
        *v6++ = *((_BYTE *)&v48 + (((unsigned __int64)v13 >> 8) & 1));
      }
    }
    for ( i = v3 >> 3; i; --i )
    {
      v17 = *v2++;
      *v6 = *((_BYTE *)&v48 + ((unsigned __int64)v17 >> 7));
      v6[1] = *((_BYTE *)&v48 + ((v17 >> 6) & 1));
      v6[2] = *((_BYTE *)&v48 + ((v17 >> 5) & 1));
      v6[3] = *((_BYTE *)&v48 + ((v17 >> 4) & 1));
      v6[4] = *((_BYTE *)&v48 + ((v17 >> 3) & 1));
      v6[5] = *((_BYTE *)&v48 + ((v17 >> 2) & 1));
      v6[6] = *((_BYTE *)&v48 + ((v17 >> 1) & 1));
      v6[7] = *((_BYTE *)&v48 + (v17 & 1));
      v6 += 8;
    }
    v18 = v3 & 7;
    if ( v18 )
    {
      v19 = *v2;
      do
      {
        v19 *= 2;
        *v6++ = *((_BYTE *)&v48 + (((unsigned __int64)v19 >> 8) & 1));
        --v18;
      }
      while ( v18 );
    }
  }
  v44 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v45 = *((_DWORD *)a1 + 13);
    if ( v45 && (v46 = v45 - 1, (*((_DWORD *)a1 + 13) = v46) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v44 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v44 & 0xFD;
    }
  }
  return a2;
}
