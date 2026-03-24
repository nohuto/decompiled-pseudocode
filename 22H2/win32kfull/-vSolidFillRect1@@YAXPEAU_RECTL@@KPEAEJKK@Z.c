/*
 * XREFs of ?vSolidFillRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C00C85D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  char v6; // bl
  int v7; // r14d
  unsigned __int8 *v8; // rdi
  int v9; // r15d
  LONG *p_bottom; // r12
  char v11; // r13
  int v12; // ebp
  int v13; // r11d
  unsigned __int8 *v14; // rax
  int v15; // edi
  int v16; // edx
  int v17; // ebp
  __int64 v18; // r9
  int v19; // r10d
  unsigned __int8 *v20; // rcx
  unsigned __int64 *v21; // r10
  unsigned int v22; // ebp
  int v23; // ebx
  unsigned __int64 v24; // r9
  unsigned int v25; // r11d
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // edx
  int v30; // r10d
  unsigned int v31; // edx
  unsigned int *i; // rcx
  unsigned int *j; // rdx
  unsigned int v34; // edi
  int v35; // r10d
  int v36; // edx
  unsigned int *v37; // rcx
  int v38; // [rsp+0h] [rbp-48h]
  unsigned int v39; // [rsp+4h] [rbp-44h]
  unsigned __int8 *v40; // [rsp+8h] [rbp-40h]
  int v41; // [rsp+58h] [rbp+10h]

  if ( a2 )
  {
    v6 = a6;
    v7 = a4;
    v8 = a3;
    v9 = a2;
    p_bottom = &a1->bottom;
    v11 = 5 - a6;
    do
    {
      v12 = *(p_bottom - 1);
      v13 = *p_bottom - *(p_bottom - 2);
      v41 = v13;
      v14 = &v8[v7 * *(p_bottom - 2)];
      v15 = *(p_bottom - 3);
      v40 = v14;
      v16 = v12 - v15;
      v17 = v12 >> v11;
      v18 = (unsigned int)(v15 >> v11);
      v39 = v17;
      v19 = aulMsk[(v15 << v6) & 0x1F];
      v38 = aulMsk[((unsigned __int8)(v15 << v6) + (unsigned __int8)(v16 << v6)) & 0x1F];
      if ( (_DWORD)v18 == v17 )
      {
        v29 = ~aulMsk[((unsigned __int8)(v15 << v6) + (unsigned __int8)(v16 << v6)) & 0x1F] & v19;
        v30 = ~v29;
        v31 = a5 & v29;
        for ( i = (unsigned int *)&v14[4 * v18]; v13; --v13 )
        {
          *i = v31 | v30 & *i;
          i = (unsigned int *)((char *)i + v7);
        }
      }
      else
      {
        if ( v19 != -1 )
        {
          v34 = a5 & v19;
          v35 = ~v19;
          v36 = *p_bottom - *(p_bottom - 2);
          v37 = (unsigned int *)&v14[4 * v18];
          if ( v13 )
          {
            do
            {
              *v37 = v34 | v35 & *v37;
              v37 = (unsigned int *)((char *)v37 + v7);
              --v36;
            }
            while ( v36 );
          }
          v18 = (unsigned int)(v18 + 1);
        }
        v20 = v14;
        v21 = (unsigned __int64 *)&v14[4 * v18];
        v22 = v17 - v18;
        if ( v22 )
        {
          v23 = v13;
          if ( v13 )
          {
            v24 = a5 | ((unsigned __int64)a5 << 32);
            do
            {
              --v23;
              v25 = v22;
              v26 = v21;
              if ( ((unsigned __int8)v21 & 4) != 0 )
              {
                *(_DWORD *)v21 = a5;
                v26 = (unsigned __int64 *)((char *)v21 + 4);
                v25 = v22 - 1;
              }
              v27 = v25 >> 1;
              v28 = v25 >> 4;
              if ( v25 >> 4 )
              {
                v27 &= 7u;
                do
                {
                  *v26 = v24;
                  v26[1] = v24;
                  v26[2] = v24;
                  v26[3] = v24;
                  v26[4] = v24;
                  v26[5] = v24;
                  v26[6] = v24;
                  v26[7] = v24;
                  v26 += 8;
                  --v28;
                }
                while ( v28 );
              }
              if ( (_DWORD)v27 )
              {
                memset64(v26, v24, v27);
                v26 += (unsigned int)v27;
              }
              if ( (v25 & 1) != 0 )
                *(_DWORD *)v26 = a5;
              v21 = (unsigned __int64 *)((char *)v21 + v7);
            }
            while ( v23 );
            v13 = v41;
            v7 = a4;
            v20 = v40;
          }
          v6 = a6;
        }
        if ( v38 != -1 )
        {
          for ( j = (unsigned int *)&v20[4 * v39]; v13; --v13 )
          {
            *j = a5 & ~v38 | v38 & *j;
            j = (unsigned int *)((char *)j + v7);
          }
        }
      }
      v8 = a3;
      p_bottom += 4;
      --v9;
    }
    while ( v9 );
  }
}
