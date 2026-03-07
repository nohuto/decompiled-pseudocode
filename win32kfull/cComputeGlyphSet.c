__int64 __fastcall cComputeGlyphSet(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // r10
  _DWORD *v6; // rdi
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebp
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rbp
  unsigned __int16 v19; // dx
  _DWORD *v20; // rdx
  unsigned __int8 *v21; // rcx
  int v22; // eax

  v5 = 0LL;
  v6 = 0LL;
  if ( a5 )
  {
    a5[3] = a4;
    v11 = a3 + 4 + 4 * a4;
    v12 = 2;
    *a5 = v11 * 4;
    v6 = &a5[v11];
    if ( a3 == 256 )
      v12 = 4;
    a5[2] = 0;
    a5[1] = v12;
    v5 = &a5[4 * a4 + 4];
  }
  v13 = 0;
  v14 = 0;
  if ( a3 )
  {
    do
    {
      v15 = v13 + 1;
      if ( (unsigned int)v15 < a3 )
      {
        v16 = (unsigned __int16 *)(a1 + 2 * v15);
        do
        {
          if ( *v16 - *(unsigned __int16 *)(a1 + 2LL * (unsigned int)(v15 - 1)) > 1 )
            break;
          LODWORD(v15) = v15 + 1;
          ++v16;
        }
        while ( (unsigned int)v15 < a3 );
      }
      if ( a5 )
      {
        if ( v14 < a4 )
        {
          v17 = v13;
          v18 = 2LL * v14;
          LOWORD(a5[2 * v18 + 4]) = *(_WORD *)(a1 + 2 * v17);
          v19 = *(_WORD *)(a1 + 2LL * (unsigned int)(v15 - 1)) - *(_WORD *)(a1 + 2 * v17) + 1;
          *(_QWORD *)&a5[2 * v18 + 6] = v5;
          HIWORD(a5[2 * v18 + 4]) = v19;
          v20 = &v5[v19];
          if ( v20 <= v6 )
          {
            v21 = (unsigned __int8 *)(v17 + a2);
            while ( v5 < v20 )
            {
              v22 = *v21++;
              *v5++ = v22;
            }
            a5[2] += HIWORD(a5[4 * v14 + 4]);
          }
        }
      }
      ++v14;
      v13 = v15;
    }
    while ( (unsigned int)v15 < a3 );
  }
  return v14;
}
