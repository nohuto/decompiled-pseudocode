/*
 * XREFs of RtlpCombineAcls @ 0x1405DD6F0
 * Callers:
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  unsigned __int8 *v8; // r12
  unsigned int v9; // edi
  unsigned __int8 *v10; // r15
  unsigned int v12; // r9d
  char *PoolWithTag; // r14
  unsigned int v16; // edx
  unsigned __int8 *v17; // rcx
  unsigned int j; // ebp
  unsigned int v19; // ebp
  _WORD *v20; // rsi
  unsigned int v21; // ebp
  char *v22; // r15
  __int64 v23; // rax
  char *v24; // rsi
  unsigned int v25; // ebx
  __int64 result; // rax
  unsigned __int8 *v27; // rcx
  unsigned int n; // r10d
  _WORD *v29; // rbp
  unsigned int mm; // r15d
  __int64 v31; // rax
  unsigned __int8 *v32; // r10
  unsigned int i; // ebp
  unsigned __int16 *v34; // rbp
  unsigned int v35; // ecx
  char *v36; // r12
  __int64 v37; // rax
  unsigned __int8 *v38; // rcx
  unsigned int k; // ebp
  _WORD *v40; // rbx
  unsigned int jj; // ebp
  __int64 v42; // rax
  unsigned __int8 *v43; // rcx
  unsigned int m; // r10d
  unsigned __int8 *v45; // rcx
  unsigned int ii; // r8d
  _WORD *v47; // rbx
  unsigned int kk; // ebp
  __int64 v49; // rax
  _WORD *v50; // rbx
  __int64 v51; // rax
  char *v52; // [rsp+28h] [rbp-40h]
  int v53; // [rsp+70h] [rbp+8h]
  unsigned int v54; // [rsp+70h] [rbp+8h]

  v8 = a6;
  v9 = 0;
  v10 = a5;
  v12 = 2;
  v53 = 2;
  PoolWithTag = 0LL;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 || a6 )
  {
    v16 = 8;
    if ( a1 )
    {
      v32 = a1 + 8;
      for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v32 += *((unsigned __int16 *)v32 + 1) )
      {
        switch ( *v32 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v16 + *((unsigned __int16 *)v32 + 1) < v16 )
              goto LABEL_106;
            v16 += *((unsigned __int16 *)v32 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v12 )
            {
              v12 = *a1;
              v53 = v12;
            }
            break;
          default:
            break;
        }
        ++i;
      }
    }
    if ( a2 )
    {
      v17 = a2 + 8;
      for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v17 += *((unsigned __int16 *)v17 + 1) )
      {
        if ( *v17 == 17 )
        {
          if ( v16 + *((unsigned __int16 *)v17 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v17 + 1);
          if ( a8 )
            *a8 |= 0x10u;
          if ( *a2 > v12 )
          {
            v12 = *a2;
            v53 = v12;
          }
        }
        ++j;
      }
    }
    if ( a5 )
    {
      v38 = a5 + 8;
      for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v38 += *((unsigned __int16 *)v38 + 1) )
      {
        if ( *v38 == 20 )
        {
          if ( v16 + *((unsigned __int16 *)v38 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v38 + 1);
          if ( a8 )
            *a8 |= 0x80u;
          if ( *a5 > v12 )
          {
            v12 = *a5;
            v53 = v12;
          }
        }
        ++k;
      }
    }
    if ( a6 )
    {
      v43 = a6 + 8;
      for ( m = 0; m < *((unsigned __int16 *)a6 + 2); v43 += *((unsigned __int16 *)v43 + 1) )
      {
        if ( *v43 == 21 )
        {
          if ( v16 + *((unsigned __int16 *)v43 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v43 + 1);
          if ( a8 )
            *a8 |= 0x100u;
          if ( *a6 > v12 )
            v12 = *a6;
          v53 = v12;
        }
        ++m;
      }
    }
    if ( a3 )
    {
      v27 = a3 + 8;
      for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v27 += *((unsigned __int16 *)v27 + 1) )
      {
        if ( *v27 == 18 )
        {
          if ( v16 + *((unsigned __int16 *)v27 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v27 + 1);
          if ( a8 )
            *a8 |= 0x20u;
          if ( *a3 > v12 )
          {
            v12 = *a3;
            v53 = v12;
          }
        }
        ++n;
      }
    }
    if ( a4 )
    {
      v45 = a4 + 8;
      for ( ii = 0; ii < *((unsigned __int16 *)a4 + 2); v45 += *((unsigned __int16 *)v45 + 1) )
      {
        if ( *v45 == 19 )
        {
          if ( v16 + *((unsigned __int16 *)v45 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v45 + 1);
          if ( a8 )
            *a8 |= 0x40u;
          if ( *a4 > v12 )
            v12 = *a4;
          v53 = v12;
        }
        ++ii;
      }
    }
    if ( v16 + 3 < v16 )
    {
LABEL_106:
      v25 = -1073741675;
    }
    else
    {
      v19 = (v16 + 3) & 0xFFFFFFFC;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x64536553u);
      if ( PoolWithTag )
      {
        if ( v19 < 8 )
        {
          v25 = -1073741789;
        }
        else
        {
          if ( (unsigned int)(v53 - 2) <= 2 && v19 <= 0xFFFC )
          {
            memset(PoolWithTag, 0, v19);
            *PoolWithTag = v53;
            *((_WORD *)PoolWithTag + 1) = v19;
            PoolWithTag[1] = 0;
            *((_DWORD *)PoolWithTag + 1) = 0;
            v52 = 0LL;
            if ( PoolWithTag + 8 <= &PoolWithTag[(unsigned __int16)v19] )
              v52 = PoolWithTag + 8;
            if ( a1 )
            {
              v34 = (unsigned __int16 *)(a1 + 8);
              v35 = 0;
              v54 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                v36 = v52;
                do
                {
                  switch ( *(_BYTE *)v34 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                      memmove(v36, v34, v34[1]);
                      ++*((_WORD *)PoolWithTag + 2);
                      v37 = v34[1];
                      v35 = v54;
                      v36 += v37;
                      break;
                    case 4:
                    case 5:
                    case 6:
                    case 9:
                    case 0xA:
                    case 0xB:
                    case 0xC:
                      v35 = v54;
                      goto LABEL_58;
                    default:
LABEL_58:
                      LOWORD(v37) = v34[1];
                      break;
                  }
                  ++v35;
                  v34 = (unsigned __int16 *)((char *)v34 + (unsigned __int16)v37);
                  v54 = v35;
                }
                while ( v35 < *((unsigned __int16 *)a1 + 2) );
                v10 = a5;
                v52 = v36;
                v8 = a6;
              }
            }
            if ( a2 )
            {
              v20 = a2 + 8;
              v21 = 0;
              if ( *((_WORD *)a2 + 2) )
              {
                v22 = v52;
                do
                {
                  LOWORD(v23) = v20[1];
                  if ( *(_BYTE *)v20 == 17 )
                  {
                    memmove(v22, v20, (unsigned __int16)v20[1]);
                    ++*((_WORD *)PoolWithTag + 2);
                    v23 = (unsigned __int16)v20[1];
                    v22 += v23;
                  }
                  ++v21;
                  v20 = (_WORD *)((char *)v20 + (unsigned __int16)v23);
                }
                while ( v21 < *((unsigned __int16 *)a2 + 2) );
                v52 = v22;
                v10 = a5;
              }
            }
            v24 = v52;
            if ( v10 )
            {
              v40 = v10 + 8;
              for ( jj = 0; jj < *((unsigned __int16 *)v10 + 2); v40 = (_WORD *)((char *)v40 + (unsigned __int16)v42) )
              {
                LOWORD(v42) = v40[1];
                if ( *(_BYTE *)v40 == 20 )
                {
                  memmove(v24, v40, (unsigned __int16)v40[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v42 = (unsigned __int16)v40[1];
                  v24 += v42;
                }
                ++jj;
              }
            }
            if ( v8 )
            {
              v47 = v8 + 8;
              for ( kk = 0; kk < *((unsigned __int16 *)v8 + 2); v47 = (_WORD *)((char *)v47 + (unsigned __int16)v49) )
              {
                LOWORD(v49) = v47[1];
                if ( *(_BYTE *)v47 == 21 )
                {
                  memmove(v24, v47, (unsigned __int16)v47[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v49 = (unsigned __int16)v47[1];
                  v24 += v49;
                }
                ++kk;
              }
            }
            if ( a3 )
            {
              v29 = a3 + 8;
              for ( mm = 0; mm < *((unsigned __int16 *)a3 + 2); v29 = (_WORD *)((char *)v29 + (unsigned __int16)v31) )
              {
                LOWORD(v31) = v29[1];
                if ( *(_BYTE *)v29 == 18 )
                {
                  memmove(v24, v29, (unsigned __int16)v29[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v31 = (unsigned __int16)v29[1];
                  v24 += v31;
                }
                ++mm;
              }
            }
            if ( a4 && (v50 = a4 + 8, *((_WORD *)a4 + 2)) )
            {
              do
              {
                LOWORD(v51) = v50[1];
                if ( *(_BYTE *)v50 == 19 )
                {
                  memmove(v24, v50, (unsigned __int16)v50[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v51 = (unsigned __int16)v50[1];
                  v24 += v51;
                }
                ++v9;
                v50 = (_WORD *)((char *)v50 + (unsigned __int16)v51);
              }
              while ( v9 < *((unsigned __int16 *)a4 + 2) );
              v25 = 0;
            }
            else
            {
              v25 = 0;
            }
            goto LABEL_36;
          }
          v25 = -1073741811;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      else
      {
        v25 = -1073741801;
      }
    }
LABEL_36:
    result = v25;
    *a7 = PoolWithTag;
    return result;
  }
  *a7 = 0LL;
  return 0LL;
}
