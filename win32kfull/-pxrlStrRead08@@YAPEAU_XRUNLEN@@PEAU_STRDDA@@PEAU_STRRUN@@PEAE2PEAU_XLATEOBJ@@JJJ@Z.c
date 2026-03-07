struct _XRUNLEN *__fastcall pxrlStrRead08(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  _DWORD *v9; // r10
  unsigned __int8 *v10; // r8
  int v11; // esi
  __int64 v12; // rsi
  unsigned int *v13; // rdi
  __int64 v14; // r11
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  _DWORD *v19; // r11
  int v21; // ebp
  unsigned __int8 *v22; // r14
  int v23; // r9d
  int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // r13
  _DWORD *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // r12
  int v30; // eax
  _DWORD *v31; // rdi
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rdi
  int *v35; // rax
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // [rsp+38h] [rbp+10h]
  int v39; // [rsp+58h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = &a3[a6];
  v11 = *(_DWORD *)a1;
  if ( a4 )
  {
    v21 = a8 & 0x1F;
    v22 = &a4[4 * ((__int64)a8 >> 5)];
    v23 = 0;
    v24 = *(_DWORD *)v22;
    v39 = *(_DWORD *)v22;
    if ( v8 < a7 )
    {
      v25 = 0LL;
      v26 = a8 & 0x1F;
      v38 = 0LL;
      v27 = (_DWORD *)((char *)a1 + 32);
      while ( 1 )
      {
        v28 = *v10++;
        if ( a5 )
          LODWORD(v28) = a5->pulXlate[v28];
        if ( (v24 & dword_1C0319320[v26]) != 0 )
        {
          v29 = (unsigned int)*v27;
          if ( (_DWORD)v29 )
          {
            v30 = v28;
            v31 = &v9[v25 + 2];
            v32 = (unsigned int)v29;
            v23 += v29;
            v38 += v29;
            while ( v32 )
            {
              *v31++ = v30;
              --v32;
            }
          }
          v24 = v39;
        }
        else
        {
          if ( v23 > 0 )
          {
            v37 = v23;
            *v9 = v11;
            v11 += v23;
            v9[1] = v23;
            v23 = 0;
            v9 += v37 + 2;
            v38 = 0LL;
          }
          v11 += *v27;
        }
        ++v8;
        v33 = v21 + 1;
        ++v27;
        v34 = v26 + 1;
        if ( v8 >= a7 )
          break;
        v35 = (int *)(v22 + 4);
        v36 = v33 & 0x20;
        if ( (v33 & 0x20) != 0 )
        {
          v24 = *v35;
          v39 = *v35;
        }
        else
        {
          v35 = (int *)v22;
        }
        v21 = 0;
        v22 = (unsigned __int8 *)v35;
        if ( (v33 & 0x20) == 0 )
          v21 = v33;
        v25 = v38;
        v26 = 0LL;
        if ( !v36 )
          v26 = v34;
      }
      if ( v23 > 0 )
      {
        *v9 = v11;
        v9[1] = v23;
        v9 += v23 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( a6 != a7 )
    {
      v12 = 0LL;
      v13 = (unsigned int *)((char *)a1 + 32);
      v14 = (unsigned int)(a7 - a6);
      if ( a5 )
      {
        v17 = (unsigned int)v14;
        do
        {
          v18 = *v13++;
          if ( (_DWORD)v18 )
          {
            LODWORD(a4) = v18 + (_DWORD)a4;
            v19 = &v9[v12 + 2];
            v12 += v18;
            do
            {
              *v19++ = a5->pulXlate[*v10];
              LODWORD(v18) = v18 - 1;
            }
            while ( (_DWORD)v18 );
          }
          ++v10;
          --v17;
        }
        while ( v17 );
      }
      else
      {
        do
        {
          v15 = *v13++;
          if ( (_DWORD)v15 )
          {
            LODWORD(a4) = v15 + (_DWORD)a4;
            v16 = &v9[v12 + 2];
            v12 += v15;
            do
            {
              *v16++ = *v10;
              LODWORD(v15) = v15 - 1;
            }
            while ( (_DWORD)v15 );
          }
          ++v10;
          --v14;
        }
        while ( v14 );
      }
    }
    return (struct _XRUNLEN *)&v9[(int)a4 + 2];
  }
}
