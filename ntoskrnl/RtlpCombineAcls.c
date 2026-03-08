/*
 * XREFs of RtlpCombineAcls @ 0x1407BC8E0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        char **a7,
        _DWORD *a8)
{
  unsigned __int8 *v8; // r13
  unsigned int v9; // edi
  char *Pool2; // r12
  unsigned int v14; // r15d
  unsigned int v15; // r10d
  unsigned __int16 v16; // r8
  unsigned __int8 *v17; // rcx
  unsigned int v18; // r9d
  unsigned __int16 v19; // dx
  unsigned int v20; // ebx
  char *v21; // r15
  unsigned __int16 *v22; // rbx
  unsigned int j; // ebp
  unsigned int v24; // ebx
  __int64 result; // rax
  unsigned __int16 v26; // dx
  unsigned __int8 *v27; // rcx
  unsigned int v28; // r9d
  unsigned __int16 v29; // r8
  unsigned __int16 *v30; // rbx
  unsigned int k; // ebp
  unsigned __int16 v32; // dx
  unsigned __int8 *v33; // rcx
  unsigned int v34; // r9d
  unsigned __int16 v35; // r8
  unsigned __int16 *v36; // rbx
  unsigned int n; // ebp
  unsigned __int8 *v38; // rdx
  unsigned int i; // r8d
  unsigned __int16 *v40; // rbx
  unsigned int v41; // esi
  unsigned __int16 v42; // dx
  unsigned __int8 *v43; // rcx
  unsigned int v44; // r9d
  unsigned __int16 v45; // r8
  unsigned __int16 v46; // dx
  unsigned __int8 *v47; // rcx
  unsigned int v48; // r9d
  unsigned __int16 v49; // r8
  unsigned __int16 *v50; // rbx
  unsigned int m; // ebp
  unsigned __int16 *v52; // rbx

  v8 = a5;
  v9 = 0;
  Pool2 = 0LL;
  v14 = 2;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 || a6 )
  {
    v15 = 8;
    if ( a1 )
    {
      v38 = a1 + 8;
      for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v38 += *((unsigned __int16 *)v38 + 1) )
      {
        switch ( *v38 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v15 + *((unsigned __int16 *)v38 + 1) < v15 )
              goto LABEL_112;
            v15 += *((unsigned __int16 *)v38 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v14 )
              v14 = *a1;
            break;
          default:
            break;
        }
        ++i;
      }
    }
    if ( a2 )
    {
      v16 = *((_WORD *)a2 + 2);
      v17 = a2 + 8;
      v18 = 0;
      if ( v16 )
      {
        do
        {
          v19 = v16;
          if ( *v17 == 17 )
          {
            if ( v15 + *((unsigned __int16 *)v17 + 1) < v15 )
              goto LABEL_112;
            v15 += *((unsigned __int16 *)v17 + 1);
            v19 = v16;
            if ( a8 )
            {
              *a8 |= 0x10u;
              v19 = *((_WORD *)a2 + 2);
            }
            if ( *a2 > v14 )
              v14 = *a2;
          }
          ++v18;
          v17 += *((unsigned __int16 *)v17 + 1);
          v16 = v19;
        }
        while ( v18 < v19 );
      }
    }
    if ( a5 )
    {
      v26 = *((_WORD *)a5 + 2);
      v27 = a5 + 8;
      v28 = 0;
      if ( v26 )
      {
        do
        {
          v29 = v26;
          if ( *v27 == 20 )
          {
            if ( v15 + *((unsigned __int16 *)v27 + 1) < v15 )
              goto LABEL_112;
            v15 += *((unsigned __int16 *)v27 + 1);
            v29 = v26;
            if ( a8 )
            {
              *a8 |= 0x80u;
              v29 = *((_WORD *)a5 + 2);
            }
            if ( *a5 > v14 )
              v14 = *a5;
          }
          ++v28;
          v27 += *((unsigned __int16 *)v27 + 1);
          v26 = v29;
        }
        while ( v28 < v29 );
      }
    }
    if ( a6 )
    {
      v42 = *((_WORD *)a6 + 2);
      v43 = a6 + 8;
      v44 = 0;
      if ( v42 )
      {
        do
        {
          v45 = v42;
          if ( *v43 == 21 )
          {
            if ( v15 + *((unsigned __int16 *)v43 + 1) < v15 )
              goto LABEL_112;
            v15 += *((unsigned __int16 *)v43 + 1);
            v45 = v42;
            if ( a8 )
            {
              *a8 |= 0x100u;
              v45 = *((_WORD *)a6 + 2);
            }
            if ( *a6 > v14 )
              v14 = *a6;
          }
          ++v44;
          v43 += *((unsigned __int16 *)v43 + 1);
          v42 = v45;
        }
        while ( v44 < v45 );
      }
    }
    if ( a3 )
    {
      v32 = *((_WORD *)a3 + 2);
      v33 = a3 + 8;
      v34 = 0;
      if ( v32 )
      {
        do
        {
          v35 = v32;
          if ( *v33 == 18 )
          {
            if ( v15 + *((unsigned __int16 *)v33 + 1) < v15 )
              goto LABEL_112;
            v15 += *((unsigned __int16 *)v33 + 1);
            v35 = v32;
            if ( a8 )
            {
              *a8 |= 0x20u;
              v35 = *((_WORD *)a3 + 2);
            }
            if ( *a3 > v14 )
              v14 = *a3;
          }
          ++v34;
          v33 += *((unsigned __int16 *)v33 + 1);
          v32 = v35;
        }
        while ( v34 < v35 );
      }
    }
    if ( a4 )
    {
      v46 = *((_WORD *)a4 + 2);
      v47 = a4 + 8;
      v48 = 0;
      if ( v46 )
      {
        do
        {
          v49 = v46;
          if ( *v47 == 19 )
          {
            if ( v15 + *((unsigned __int16 *)v47 + 1) < v15 )
              goto LABEL_112;
            v15 += *((unsigned __int16 *)v47 + 1);
            v49 = v46;
            if ( a8 )
            {
              *a8 |= 0x40u;
              v49 = *((_WORD *)a4 + 2);
            }
            if ( *a4 > v14 )
              v14 = *a4;
          }
          ++v48;
          v47 += *((unsigned __int16 *)v47 + 1);
          v46 = v49;
        }
        while ( v48 < v49 );
      }
    }
    if ( v15 + 3 < v15 )
    {
LABEL_112:
      v24 = -1073741675;
    }
    else
    {
      v20 = (v15 + 3) & 0xFFFFFFFC;
      Pool2 = (char *)ExAllocatePool2(256LL, v20, 1683187027LL);
      if ( Pool2 )
      {
        if ( v20 < 8 )
        {
          v24 = -1073741789;
        }
        else
        {
          if ( v14 - 2 <= 2 && v20 <= 0xFFFC )
          {
            memset(Pool2, 0, v20);
            *((_WORD *)Pool2 + 1) = v20;
            *Pool2 = v14;
            v21 = 0LL;
            Pool2[1] = 0;
            *((_DWORD *)Pool2 + 1) = 0;
            if ( Pool2 + 8 <= &Pool2[(unsigned __int16)v20] )
              v21 = Pool2 + 8;
            if ( a1 )
            {
              v40 = (unsigned __int16 *)(a1 + 8);
              v41 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                do
                {
                  switch ( *(_BYTE *)v40 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                      memmove(v21, v40, v40[1]);
                      ++*((_WORD *)Pool2 + 2);
                      v21 += v40[1];
                      break;
                    default:
                      break;
                  }
                  ++v41;
                  v40 = (unsigned __int16 *)((char *)v40 + v40[1]);
                }
                while ( v41 < *((unsigned __int16 *)a1 + 2) );
                v8 = a5;
              }
            }
            if ( a2 )
            {
              v22 = (unsigned __int16 *)(a2 + 8);
              for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v22 = (unsigned __int16 *)((char *)v22 + v22[1]) )
              {
                if ( *(_BYTE *)v22 == 17 )
                {
                  memmove(v21, v22, v22[1]);
                  ++*((_WORD *)Pool2 + 2);
                  v21 += v22[1];
                }
                ++j;
              }
            }
            if ( v8 )
            {
              v30 = (unsigned __int16 *)(v8 + 8);
              for ( k = 0; k < *((unsigned __int16 *)v8 + 2); v30 = (unsigned __int16 *)((char *)v30 + v30[1]) )
              {
                if ( *(_BYTE *)v30 == 20 )
                {
                  memmove(v21, v30, v30[1]);
                  ++*((_WORD *)Pool2 + 2);
                  v21 += v30[1];
                }
                ++k;
              }
            }
            if ( a6 )
            {
              v50 = (unsigned __int16 *)(a6 + 8);
              for ( m = 0; m < *((unsigned __int16 *)a6 + 2); v50 = (unsigned __int16 *)((char *)v50 + v50[1]) )
              {
                if ( *(_BYTE *)v50 == 21 )
                {
                  memmove(v21, v50, v50[1]);
                  ++*((_WORD *)Pool2 + 2);
                  v21 += v50[1];
                }
                ++m;
              }
            }
            if ( a3 )
            {
              v36 = (unsigned __int16 *)(a3 + 8);
              for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v36 = (unsigned __int16 *)((char *)v36 + v36[1]) )
              {
                if ( *(_BYTE *)v36 == 18 )
                {
                  memmove(v21, v36, v36[1]);
                  ++*((_WORD *)Pool2 + 2);
                  v21 += v36[1];
                }
                ++n;
              }
            }
            if ( a4 && (v52 = (unsigned __int16 *)(a4 + 8), *((_WORD *)a4 + 2)) )
            {
              do
              {
                if ( *(_BYTE *)v52 == 19 )
                {
                  memmove(v21, v52, v52[1]);
                  ++*((_WORD *)Pool2 + 2);
                  v21 += v52[1];
                }
                ++v9;
                v52 = (unsigned __int16 *)((char *)v52 + v52[1]);
              }
              while ( v9 < *((unsigned __int16 *)a4 + 2) );
              v24 = 0;
            }
            else
            {
              v24 = 0;
            }
            goto LABEL_34;
          }
          v24 = -1073741811;
        }
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
      else
      {
        v24 = -1073741801;
      }
    }
LABEL_34:
    result = v24;
    *a7 = Pool2;
    return result;
  }
  *a7 = 0LL;
  return 0LL;
}
