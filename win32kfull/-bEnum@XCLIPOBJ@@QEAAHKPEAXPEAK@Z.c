__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // r14
  unsigned int v8; // edi
  int *v9; // rdx
  int v10; // ebp
  int v11; // r12d
  int i; // r8d
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r9d
  _DWORD *v22; // rcx
  _DWORD *v23; // rdx
  __int64 v24; // rax
  int v25; // r8d
  int v27; // r8d
  int v28; // esi
  _DWORD *v29; // r9
  int j; // edx
  unsigned int v31; // r12d
  unsigned int v32; // r8d
  int v33; // r9d
  int v34; // r13d
  int v35; // esi
  unsigned int v36; // edi
  __int64 v37; // rax

  v4 = a3 + 4;
  if ( a2 >= 0x14 )
  {
    v8 = a2 - 4;
    if ( a4 )
      *a4 = 4;
    *(_DWORD *)a3 = 0;
    v9 = (int *)*((_QWORD *)this + 10);
    if ( !*((_DWORD *)this + 32) )
    {
      v10 = v9[1];
      v11 = v9[2];
      for ( i = *((_DWORD *)this + 22); i; i = *((_DWORD *)this + 22) )
      {
        v20 = *((unsigned int *)this + 24);
        if ( (_DWORD)v20 == *((_DWORD *)this + 26) )
        {
          v21 = *((_DWORD *)this + 27);
          v22 = (_DWORD *)*((_QWORD *)this + 10);
          if ( v21 >= 2 )
          {
            if ( v22[1] <= *((_DWORD *)this + 17) )
            {
LABEL_29:
              *((_DWORD *)this + 22) = 0;
              return 0LL;
            }
            v23 = (_DWORD *)((char *)v22 - (unsigned int)(4 * *(v22 - 1) + 16));
          }
          else
          {
            if ( v22[2] >= *((_DWORD *)this + 19) )
              goto LABEL_29;
            v23 = (_DWORD *)((char *)v22 + (unsigned int)(4 * *v22 + 16));
          }
          *((_QWORD *)this + 10) = v23;
          *((_DWORD *)this + 22) = i - 1;
          v10 = v23[1];
          v11 = v23[2];
          if ( (v21 & 1) != 0 )
          {
            v24 = (unsigned int)(*v23 - 2);
            *((_DWORD *)this + 26) = -2;
            *((_DWORD *)this + 24) = v24;
            if ( (_DWORD)v24 != -2 )
            {
              v25 = *((_DWORD *)this + 18);
              do
              {
                if ( v23[v24 + 3] < v25 )
                  break;
                v24 = (unsigned int)(v24 - 2);
                *((_DWORD *)this + 24) = v24;
              }
              while ( (_DWORD)v24 != -2 );
            }
          }
          else
          {
            *((_DWORD *)this + 24) = 0;
            v27 = *v23;
            *((_DWORD *)this + 26) = *v23;
            if ( v27 )
            {
              v28 = *((_DWORD *)this + 16);
              v29 = v23;
              for ( j = 0; j != v27; *((_DWORD *)this + 24) = j )
              {
                if ( v29[j + 1 + 3] > v28 )
                  break;
                j += 2;
              }
            }
          }
        }
        else
        {
          v13 = *((_QWORD *)this + 10);
          v14 = *(_DWORD *)(v13 + 4 * v20 + 12);
          v15 = *(_DWORD *)(v13 + 4LL * (unsigned int)(v20 + 1) + 12);
          v16 = *((_DWORD *)this + 16);
          if ( v16 <= v14 )
            v16 = v14;
          *v4 = v16;
          v17 = *((_DWORD *)this + 18);
          if ( v17 >= v15 )
            v17 = v15;
          v4[2] = v17;
          if ( v16 >= v17 )
          {
            *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
          }
          else
          {
            v18 = *((_DWORD *)this + 17);
            if ( v18 <= v10 )
              v18 = v10;
            v4[1] = v18;
            v19 = *((_DWORD *)this + 19);
            if ( v19 >= v11 )
              v19 = v11;
            v8 -= 16;
            v4[3] = v19;
            v4 += 4;
            *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
            if ( a4 )
              *a4 += 16;
            ++*(_DWORD *)a3;
            if ( v8 < 0x10 )
              return 1LL;
          }
        }
      }
      return 0LL;
    }
    v31 = *((_DWORD *)this + 27);
    v32 = *((_DWORD *)this + 24);
    v33 = *((_DWORD *)this + 26);
    v34 = *((_DWORD *)this + 25);
    v35 = *((_DWORD *)this + 22);
    v36 = v8 >> 4;
    while ( 1 )
    {
      if ( !v35 )
        return 0LL;
      if ( v32 == v33 )
      {
        if ( v31 >= 2 )
          v9 = (int *)((char *)v9 - (unsigned int)(4 * *(v9 - 1) + 16));
        else
          v9 = (int *)((char *)v9 + (unsigned int)(4 * *v9 + 16));
        *((_DWORD *)this + 22) = v35 - 1;
        if ( !*v9 )
          goto LABEL_53;
        if ( (v31 & 1) != 0 )
        {
          v32 = *v9 - 2;
          v33 = -2;
        }
        else
        {
          v32 = 0;
          v33 = *v9;
        }
      }
      --v36;
      v37 = v32 + 1;
      *v4 = v9[v32 + 3];
      v32 += v34;
      v4[2] = v9[v37 + 3];
      v4[1] = v9[1];
      v4[3] = v9[2];
      v4 += 4;
      ++*(_DWORD *)a3;
      if ( a4 )
        *a4 += 16;
      if ( !v36 )
      {
        *((_DWORD *)this + 24) = v32;
        *((_DWORD *)this + 26) = v33;
        *((_QWORD *)this + 10) = v9;
        return 1LL;
      }
LABEL_53:
      v35 = *((_DWORD *)this + 22);
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
