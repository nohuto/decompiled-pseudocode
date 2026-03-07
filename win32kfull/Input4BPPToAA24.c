_BYTE *__fastcall Input4BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // r10
  unsigned int v4; // ebx
  _BYTE *v5; // r9
  __int64 v6; // r11
  char v8; // cl
  __int64 v9; // rax
  unsigned int i; // edx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  unsigned int j; // esi
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  char v18; // cl
  int v19; // eax
  int v20; // eax

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 12);
  v5 = a2;
  v6 = *((_QWORD *)a1 + 10);
  v8 = a1[1];
  if ( (*a1 & 4) != 0 )
  {
    if ( v8 )
    {
      --v4;
      v9 = *v2++ & 0xF;
      v5 = a2 + 1;
      *a2 = *(_BYTE *)(v6 + 4 * v9 + 3);
    }
    for ( i = v4 >> 1; i; --i )
    {
      v11 = *v2++;
      *v5 = *(_BYTE *)(v6 + 4 * ((unsigned __int64)v11 >> 4) + 3);
      v5[1] = *(_BYTE *)(v6 + 4LL * (v11 & 0xF) + 3);
      v5 += 2;
    }
    if ( (v4 & 1) != 0 )
      *v5 = *(_BYTE *)(v6 + 4 * ((unsigned __int64)*v2 >> 4) + 3);
  }
  else
  {
    if ( v8 )
    {
      --v4;
      v12 = *v2++ & 0xF;
      v5 = a2 + 3;
      *(_WORD *)a2 = *(_WORD *)(v6 + 4 * v12);
      a2[2] = *(_BYTE *)(v6 + 4 * v12 + 2);
    }
    for ( j = v4 >> 1; j; --j )
    {
      v14 = *v2++;
      v15 = v14;
      v16 = v14 & 0xF;
      v15 >>= 4;
      *(_WORD *)v5 = *(_WORD *)(v6 + 4 * v15);
      v5[2] = *(_BYTE *)(v6 + 4 * v15 + 2);
      *(_WORD *)(v5 + 3) = *(_WORD *)(v6 + 4 * v16);
      v5[5] = *(_BYTE *)(v6 + 4 * v16 + 2);
      v5 += 6;
    }
    if ( (v4 & 1) != 0 )
    {
      v17 = (unsigned __int64)*v2 >> 4;
      *(_WORD *)v5 = *(_WORD *)(v6 + 4 * v17);
      v5[2] = *(_BYTE *)(v6 + 4 * v17 + 2);
    }
  }
  v18 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v19 = *((_DWORD *)a1 + 13);
    if ( v19 && (v20 = v19 - 1, (*((_DWORD *)a1 + 13) = v20) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v18 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v18 & 0xFD;
    }
  }
  return a2;
}
