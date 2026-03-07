__int64 __fastcall INVCMAP::blueloop(INVCMAP *this, int a2)
{
  int v3; // r15d
  int v4; // r11d
  int v5; // ebx
  int v6; // r10d
  int v7; // ecx
  int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int v11; // ebp
  int v12; // r9d
  int v13; // eax
  unsigned int *v14; // rdx
  _BYTE *v15; // rsi
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int *v19; // rdx
  _BYTE *v20; // r10

  v3 = *((_DWORD *)this + 29);
  v4 = 2 * *((_DWORD *)this + 27);
  v5 = *((_DWORD *)this + 43);
  v6 = *((_DWORD *)this + 44);
  if ( a2 )
  {
    v5 = 0;
    *((_DWORD *)this + 42) = *((_DWORD *)this + 2);
    v7 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 47) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 45) = v7;
    v6 = v7 - 1;
  }
  v8 = *((_DWORD *)this + 42);
  v9 = 0;
  v10 = *((_DWORD *)this + 5);
  v11 = v5;
  v12 = *((_DWORD *)this + 47);
  v13 = v8;
  v14 = (unsigned int *)*((_QWORD *)this + 6);
  v15 = (_BYTE *)*((_QWORD *)this + 9);
  if ( v8 <= v6 )
  {
    while ( *v14 <= v10 )
    {
      v10 += v12;
      ++v13;
      v12 += v4;
      ++v14;
      ++v15;
      if ( v13 > v6 )
        goto LABEL_13;
    }
    if ( v13 > v8 )
    {
      *((_DWORD *)this + 42) = v13;
      v11 = v13;
      *((_QWORD *)this + 6) = v14;
      *((_QWORD *)this + 9) = v15;
      *((_DWORD *)this + 5) = v10;
      *((_DWORD *)this + 47) = v12;
    }
    v9 = 1;
  }
  while ( v13 <= v6 && *v14 > v10 )
  {
    *v14 = v10;
    ++v13;
    *v15 = v3;
    ++v14;
    ++v15;
    v10 += v12;
    v12 += v4;
  }
LABEL_13:
  v16 = *((_DWORD *)this + 47) - v4;
  v17 = *((_DWORD *)this + 42) - 1;
  v18 = *((_DWORD *)this + 5) - v16;
  v19 = (unsigned int *)(*((_QWORD *)this + 6) - 4LL);
  v20 = (_BYTE *)(*((_QWORD *)this + 9) - 1LL);
  if ( v9 )
    goto LABEL_22;
  while ( v17 >= v5 )
  {
    if ( *v19 > v18 )
    {
      *((_DWORD *)this + 42) = v17;
      v9 = 1;
      *((_QWORD *)this + 6) = v19;
      *((_QWORD *)this + 9) = v20;
      *((_DWORD *)this + 5) = v18;
      *((_DWORD *)this + 47) = v16;
LABEL_22:
      while ( v17 >= v5 )
      {
        if ( *v19 <= v18 )
        {
          v11 = v17 + 1;
          goto LABEL_25;
        }
        *v19 = v18;
        --v17;
        *v20 = v3;
        --v19;
        --v20;
        v16 -= v4;
        v18 -= v16;
      }
      break;
    }
    --v17;
    --v19;
    --v20;
    v16 -= v4;
    v18 -= v16;
  }
LABEL_25:
  if ( v9 )
    *((_DWORD *)this + 45) = v11;
  return v9;
}
