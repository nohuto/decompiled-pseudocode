_BYTE *__fastcall Input8BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v3; // r9
  _BYTE *v4; // r10
  _BYTE *v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // cl
  int v10; // eax
  int v11; // eax

  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v4 = &a2[*((int *)a1 + 14)];
  v5 = a2;
  v6 = *((_QWORD *)a1 + 10);
  if ( (*a1 & 4) != 0 )
  {
    do
    {
      v7 = *v3++;
      *a2++ = *(_BYTE *)(v6 + 4 * v7 + 3);
    }
    while ( a2 < v4 );
  }
  else
  {
    do
    {
      v8 = *v3++;
      *(_WORD *)a2 = *(_WORD *)(v6 + 4 * v8);
      a2[2] = *(_BYTE *)(v6 + 4 * v8 + 2);
      a2 += 3;
    }
    while ( a2 < v4 );
  }
  v9 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v10 = *((_DWORD *)a1 + 13);
    if ( v10 && (v11 = v10 - 1, (*((_DWORD *)a1 + 13) = v11) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v9 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v9 & 0xFD;
    }
  }
  return v5;
}
