unsigned __int64 __fastcall DNG_DrawRow(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  int v6; // ecx
  char *v7; // rdx
  char *v8; // r9
  size_t v9; // r8
  char *v10; // r10
  char *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned __int64 result; // rax
  int v17; // edx
  __int64 v18; // r14
  int v19; // r9d
  int v20; // r8d
  __int64 v21; // rdi
  unsigned int v22; // r10d
  int v23; // esi
  _DWORD *v24; // r9
  unsigned __int64 v25; // rbx
  _DWORD *v26; // rax
  unsigned __int64 v27; // r11
  bool v28; // cf
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // ecx
  int v32; // ecx
  char *v33; // rdx
  char *v34; // r9
  size_t v35; // r8
  char *v36; // rcx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r11
  int v39; // edi
  int v40; // r8d
  unsigned int v41; // ebx
  int v42; // edx
  _DWORD *v43; // r10
  __int64 v44; // rax
  int v45; // r11d
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  unsigned __int64 v48; // r9
  __int64 v49; // rcx
  _DWORD *v50; // rax
  unsigned __int64 v51; // r8

  v1 = *(_DWORD *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = 0;
  if ( *(_DWORD *)a1 < v1 )
  {
    if ( *(_DWORD *)(a1 + 60) == v1 )
    {
      v5 = *(int *)(a1 + 64);
      v6 = 4 * (*(_DWORD *)(a1 + 68) - v5);
      v7 = (char *)(v4 + 4 * v5);
      v8 = (char *)(v3 + 4 * v5);
      if ( v6 > 0 )
      {
        v9 = v6;
        v10 = &v8[v6];
        if ( v10 > v8 )
        {
          v11 = &v7[v6];
          if ( v11 > v7 )
          {
            v12 = *(_QWORD *)(a1 + 216);
            if ( v12 <= (unsigned __int64)v8 )
            {
              v13 = *(_QWORD *)(a1 + 224);
              if ( (unsigned __int64)v10 <= v13
                && ((unsigned __int64)v11 <= v13 && v12 <= (unsigned __int64)v7
                 || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v7 && (unsigned __int64)v11 <= *(_QWORD *)(a1 + 240)) )
              {
                memmove(v8, v7, v9);
              }
            }
          }
        }
      }
    }
    else
    {
      DNG_StretchRow(a1, v3, v4, (unsigned int *)(a1 + 104));
    }
  }
  v14 = *(int *)(a1 + 60);
  v15 = v14;
  result = *(int *)(a1 + 168);
  v17 = v14 + *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = v17;
  v18 = v3 + 4 * result;
  if ( v17 >= (int)v14 )
  {
    if ( *(_DWORD *)(a1 + 100) )
    {
      v19 = *(_DWORD *)(a1 + 92);
      v20 = *(_DWORD *)(a1 + 96);
      if ( v19 < v20 )
      {
        if ( *(_DWORD *)(a1 + 176) )
        {
          v39 = *(_DWORD *)(a1 + 84);
          v40 = v20 - v19;
          v41 = v39;
          v42 = (v19 - (int)v14) % v39;
          v43 = (_DWORD *)(v18 + 4LL * (v19 - (int)v14));
          v44 = v14;
          v45 = v39 - v42;
          v46 = v14 + v42;
          if ( v40 <= v39 - v42 )
            v44 = v15 + v42;
          if ( v40 <= v45 )
            v41 = v40;
          v47 = (_DWORD *)(v4 + 4 * v46);
          v48 = v4 + 4 * v44;
          if ( v40 > 0 && (unsigned int)v40 < 0x3FFFFFFF && v41 < 0x3FFFFFFF )
          {
            v49 = v40;
            v50 = &v43[v40];
            if ( v43 < v50
              && *(_QWORD *)(a1 + 216) <= (unsigned __int64)v43
              && (unsigned __int64)v50 <= *(_QWORD *)(a1 + 224) )
            {
              v51 = v48 + 4LL * (int)v41;
              if ( v48 < v51 && *(_QWORD *)(a1 + 232) <= v48 && v51 <= *(_QWORD *)(a1 + 240) && v39 >= 0 )
              {
                do
                {
                  *v43 = *v47;
                  if ( !--v45 )
                  {
                    v45 = *(_DWORD *)(a1 + 84);
                    v47 -= v45;
                  }
                  ++v43;
                  ++v47;
                  --v49;
                }
                while ( v49 );
              }
            }
          }
        }
        else
        {
          v21 = *(unsigned int *)(a1 + 192);
          v22 = *(_DWORD *)(a1 + 184);
          v23 = *(_DWORD *)(a1 + 188);
          v24 = (_DWORD *)(v18 + 4LL * *(int *)(a1 + 204));
          v25 = v18 + 4LL * *(int *)(a1 + 208);
          v26 = (_DWORD *)(v4 + 4 * (v14 + *(unsigned int *)(a1 + 180)));
          v27 = v4 + 4 * (v14 + *(_DWORD *)(a1 + 52) - v17);
          if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v24
            && v25 <= *(_QWORD *)(a1 + 224)
            && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v26
            && v27 <= *(_QWORD *)(a1 + 240)
            && (unsigned __int64)v24 < v25 )
          {
            do
            {
              if ( (unsigned __int64)v26 >= v27 )
                break;
              v28 = v22 + v23 < v22;
              *v24 = *v26;
              v22 += v23;
              ++v24;
              v26 += v28 + v21;
            }
            while ( (unsigned __int64)v24 < v25 );
          }
        }
      }
      v18 += 4LL * *(int *)(a1 + 88);
    }
    v29 = *(int *)(a1 + 84);
    *(_DWORD *)(a1 + 56) += v29;
    result = v15 + v29;
    v30 = v4 + 4 * (v15 + v29);
    if ( *(_DWORD *)(a1 + 56) >= (int)v29 )
    {
      v31 = *(_DWORD *)(a1 + 172);
      result = (unsigned int)(*(_DWORD *)(a1 + 20) - v31);
      if ( *(_DWORD *)(a1 + 4) > (int)result )
      {
        if ( *(_DWORD *)(a1 + 72) == v31 )
        {
          result = *(int *)(a1 + 76);
          v32 = 4 * (*(_DWORD *)(a1 + 80) - result);
          v33 = (char *)(v30 + 4 * result);
          v34 = (char *)(v18 + 4 * result);
          if ( v32 > 0 )
          {
            v35 = v32;
            v36 = &v34[v32];
            if ( v36 > v34 )
            {
              result = (unsigned __int64)&v33[v35];
              if ( &v33[v35] > v33 )
              {
                v37 = *(_QWORD *)(a1 + 216);
                if ( v37 <= (unsigned __int64)v34 )
                {
                  v38 = *(_QWORD *)(a1 + 224);
                  if ( (unsigned __int64)v36 <= v38
                    && (result <= v38 && v37 <= (unsigned __int64)v33
                     || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v33 && result <= *(_QWORD *)(a1 + 240)) )
                  {
                    return (unsigned __int64)memmove(v34, v33, v35);
                  }
                }
              }
            }
          }
        }
        else
        {
          return DNG_StretchRow(a1, v18, v30, (unsigned int *)(a1 + 136));
        }
      }
    }
  }
  return result;
}
