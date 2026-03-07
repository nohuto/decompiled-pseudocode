__int64 __fastcall INVCMAP::greenloop(INVCMAP *this, int a2)
{
  int v3; // r13d
  int v4; // r15d
  int v5; // esi
  int v6; // ebp
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r14d
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rdx
  int v16; // ebp
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx

  v3 = *((_DWORD *)this + 31);
  v4 = 2 * *((_DWORD *)this + 27);
  v5 = *((_DWORD *)this + 32);
  if ( a2 )
  {
    v3 = 0;
    *((_DWORD *)this + 30) = *((_DWORD *)this + 3);
    v5 = *((_DWORD *)this + 28) - 1;
    *((_DWORD *)this + 35) = *((_DWORD *)this + 9);
    *((_DWORD *)this + 34) = 0;
  }
  v6 = *((_DWORD *)this + 30);
  v7 = 0;
  v8 = *((_QWORD *)this + 7);
  v9 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 5) = v9;
  v10 = *((_DWORD *)this + 35);
  v11 = 1;
  *((_QWORD *)this + 6) = v8;
  *((_QWORD *)this + 19) = v8;
  v12 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 9) = v12;
  *((_QWORD *)this + 20) = v12;
  while ( v6 <= v5 )
  {
    if ( (unsigned int)INVCMAP::blueloop(this, v11) )
    {
      if ( !v7 )
      {
        if ( v6 > *((_DWORD *)this + 30) )
        {
          *((_DWORD *)this + 30) = v6;
          *((_QWORD *)this + 7) = *((_QWORD *)this + 19);
          *((_QWORD *)this + 10) = *((_QWORD *)this + 20);
          *((_DWORD *)this + 6) = v9;
          *((_DWORD *)this + 35) = v10;
        }
        v7 = 1;
      }
    }
    else if ( v7 )
    {
      v5 = v6 - 1;
      break;
    }
    v13 = *((int *)this + 24);
    v9 += v10;
    ++v6;
    *((_QWORD *)this + 6) += 4 * v13;
    *((_QWORD *)this + 19) += 4 * v13;
    *((_QWORD *)this + 9) += v13;
    *((_QWORD *)this + 20) += v13;
    *((_DWORD *)this + 5) += v10;
    v10 += v4;
    v11 = 0;
  }
  v14 = *((_DWORD *)this + 35) - v4;
  v15 = *((int *)this + 24);
  v16 = *((_DWORD *)this + 30) - 1;
  v17 = *((_QWORD *)this + 7);
  v18 = *((_DWORD *)this + 6) - v14;
  *((_DWORD *)this + 5) = v18;
  v19 = v17 - 4 * v15;
  *((_QWORD *)this + 6) = v19;
  *((_QWORD *)this + 19) = v19;
  v20 = *((_QWORD *)this + 10) - v15;
  v21 = 1;
  *((_QWORD *)this + 9) = v20;
  *((_QWORD *)this + 20) = v20;
  while ( v16 >= v3 )
  {
    if ( (unsigned int)INVCMAP::blueloop(this, v21) )
    {
      if ( !v7 )
      {
        *((_DWORD *)this + 30) = v16;
        v5 = v16;
        v7 = 1;
        *((_QWORD *)this + 7) = *((_QWORD *)this + 19);
        *((_QWORD *)this + 10) = *((_QWORD *)this + 20);
        *((_DWORD *)this + 6) = v18;
        *((_DWORD *)this + 35) = v14;
      }
    }
    else if ( v7 )
    {
      goto LABEL_22;
    }
    v22 = *((int *)this + 24);
    v14 -= v4;
    --v16;
    v18 -= v14;
    *((_QWORD *)this + 6) -= 4 * v22;
    *((_QWORD *)this + 19) -= 4 * v22;
    *((_QWORD *)this + 9) -= v22;
    *((_QWORD *)this + 20) -= v22;
    *((_DWORD *)this + 5) -= v14;
    v21 = 0;
  }
  if ( !v7 )
    return v7;
LABEL_22:
  *((_DWORD *)this + 34) = v5;
  return v7;
}
