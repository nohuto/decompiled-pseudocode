/*
 * XREFs of SPCallServerHandleGetCurrentHardwareID @ 0x1403D0264
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetCurrentHardwareID(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r13
  unsigned int v8; // ecx
  _DWORD *v9; // rdx
  __int64 *v10; // r14
  unsigned int *v11; // rax
  size_t v12; // rbp
  void *Pool2; // rax
  int v14; // edx
  void *v15; // rcx
  int v16; // r12d
  unsigned int v17; // ecx
  signed int v18; // ebx
  unsigned int *v20; // rax
  unsigned int i; // edx
  __int64 v22; // r10
  unsigned int *v23; // r9
  unsigned int v24; // r9d
  __int64 v25; // r14
  unsigned int j; // edx
  __int64 v27; // rax
  unsigned int *v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // eax
  int v32; // r8d
  unsigned int v33; // edx
  unsigned int v34; // eax
  unsigned int *v35; // rsi
  __int64 v36; // rax
  unsigned __int64 *v37; // rbx
  int v38; // r12d
  __int64 v39; // r9
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  _DWORD *k; // rdx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned __int64 m; // rdx
  unsigned int v47; // eax
  unsigned int v48; // ecx
  int v49; // r8d
  unsigned __int64 v50; // r9
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  _DWORD *v53; // rdx
  int v54; // [rsp+70h] [rbp+18h] BYREF

  v54 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v54 = 0;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v20 = v4;
  for ( i = 0; i < 3; ++i )
  {
    v22 = *v20;
    v23 = v20 + 1;
    if ( v20 + 1 < v20 )
      return (unsigned int)-1073741675;
    v20 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  v24 = *v20;
  if ( v20 + 1 >= v20 )
  {
    v10 = 0LL;
    if ( v24 )
      v10 = (__int64 *)(v20 + 1);
    if ( v24 != 8 )
      return (unsigned int)-1073741789;
    v25 = *v10;
    if ( *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v27 = *v4;
        v28 = v4 + 1;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v4 = (unsigned int *)((char *)v28 + v27);
        if ( (unsigned int *)((char *)v28 + v27) < v28 )
          return (unsigned int)-1073741675;
      }
      v29 = *v4;
      if ( v4 + 1 < v4 )
        return (unsigned int)-1073741675;
      v11 = 0LL;
      if ( v29 )
        v11 = v4 + 1;
      if ( v29 == 4 )
      {
        v12 = *v11;
        if ( (_DWORD)v12 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v12, 542329939LL);
          v5 = Pool2;
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          memset(Pool2, 0, (unsigned int)v12);
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
        if ( qword_140D53468 )
        {
          v15 = 0LL;
          if ( !v14 )
            v15 = v5;
          v16 = qword_140D53468(v15, (unsigned int)v12, &v54);
        }
        else
        {
          v16 = -1073741637;
        }
        if ( (unsigned int)v12 >= 0xFFFFFFFC
          || (unsigned int)(v12 + 24) < 0x14
          || (v17 = v12 + 32, (int)v12 + 32 < (unsigned int)(v12 + 24))
          || v17 >= 0xFFFFFFF8
          || (v30 = (v12 + 47) & 0xFFFFFFF8, v30 < (int)v12 + 40)
          || v30 + 8 < v30 )
        {
          v18 = -1073741675;
          goto LABEL_30;
        }
        v31 = v30 + 12;
        v32 = *(_DWORD *)(a2 + 16);
        if ( v30 + 12 < 4 || (v33 = v30 + 16, v31 + 4 < v31) || (v34 = v32 + v33, v32 + v33 < v33) || v34 + 4 < v34 )
          v18 = -1073741675;
        else
          v18 = *(_DWORD *)(a2 + 32) + v34 + 4 < v34 + 4 ? 0xC0000095 : 0;
        if ( v18 < 0 )
          goto LABEL_30;
        if ( !a4 )
          goto LABEL_29;
        v18 = 0;
        v35 = (unsigned int *)(a4 + 4);
        *(_DWORD *)(a4 + 4) = v17;
        if ( (_DWORD)v12 == -32 )
        {
          v18 = -1073741762;
        }
        else
        {
          v36 = ExAllocatePool2(256LL, v17, 542329939LL);
          if ( v36 )
          {
            *(_QWORD *)(a4 + 8) = v36;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v18 = -1073741801;
          }
        }
        if ( v18 < 0 )
          goto LABEL_30;
        v37 = (unsigned __int64 *)(a4 + 8);
        v38 = v16 | 0x10000000;
        v39 = *(_QWORD *)(a4 + 8);
        if ( v39 )
        {
          v41 = 0;
          for ( k = *(_DWORD **)(a4 + 8); v41 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v43) )
          {
            v43 = *k + 4;
            if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v43) < k )
              goto LABEL_42;
            ++v41;
          }
          if ( k + 1 < k )
            goto LABEL_42;
          if ( (unsigned __int64)(k + 2) > v39 + (unsigned __int64)*v35 )
            goto LABEL_105;
          *k = 4;
          k[1] = v38;
        }
        else
        {
          v40 = *v35 + 8;
          if ( v40 < *v35 )
            goto LABEL_102;
          *v35 = v40;
        }
        ++*(_DWORD *)a4;
        if ( *v37 )
        {
          v45 = 0;
          for ( m = *v37; v45 < *(_DWORD *)a4; m += v47 )
          {
            v47 = *(_DWORD *)m + 4;
            if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v47 < m )
              goto LABEL_42;
            ++v45;
          }
          if ( m + 4 < m )
            goto LABEL_42;
          if ( m + 12 > *v37 + *v35 )
            goto LABEL_105;
          *(_DWORD *)m = 8;
          *(_QWORD *)(m + 4) = v25;
        }
        else
        {
          v44 = *v35 + 12;
          if ( v44 < *v35 )
            goto LABEL_102;
          *v35 = v44;
        }
        ++*(_DWORD *)a4;
        if ( v5 )
        {
          if ( (_DWORD)v12 )
          {
LABEL_37:
            if ( *v37 )
            {
              v8 = 0;
              v9 = (_DWORD *)*v37;
              if ( *(_DWORD *)a4 )
              {
                while ( *v9 < 0xFFFFFFFC && (_DWORD *)((char *)v9 + (unsigned int)(*v9 + 4)) >= v9 )
                {
                  ++v8;
                  v9 = (_DWORD *)((char *)v9 + (unsigned int)(*v9 + 4));
                  if ( v8 >= *(_DWORD *)a4 )
                    goto LABEL_5;
                }
                goto LABEL_42;
              }
LABEL_5:
              if ( v9 + 1 < v9 )
                goto LABEL_42;
              if ( (unsigned __int64)v9 + v12 + 4 > *v37 + *v35 )
                goto LABEL_105;
              *v9 = v12;
              if ( v5 )
                memmove(v9 + 1, v5, v12);
LABEL_99:
              v49 = v54;
              ++*(_DWORD *)a4;
              v50 = *v37;
              if ( !*v37 )
              {
                v51 = *v35 + 8;
                if ( v51 >= *v35 )
                {
                  *v35 = v51;
                  ++*(_DWORD *)a4;
                  v18 = 0;
                  goto LABEL_30;
                }
                goto LABEL_102;
              }
              v52 = 0;
              v53 = (_DWORD *)*v37;
              if ( *(_DWORD *)a4 )
              {
                while ( *v53 < 0xFFFFFFFC && (_DWORD *)((char *)v53 + (unsigned int)(*v53 + 4)) >= v53 )
                {
                  ++v52;
                  v53 = (_DWORD *)((char *)v53 + (unsigned int)(*v53 + 4));
                  if ( v52 >= *(_DWORD *)a4 )
                    goto LABEL_110;
                }
                goto LABEL_42;
              }
LABEL_110:
              if ( v53 + 1 >= v53 )
              {
                v18 = 0;
                if ( (unsigned __int64)(v53 + 2) <= v50 + *v35 )
                {
                  *v53 = 4;
                  v53[1] = v49;
                  ++*(_DWORD *)a4;
LABEL_30:
                  if ( v5 )
                    ExFreePoolWithTag(v5, 0);
                  return (unsigned int)v18;
                }
LABEL_105:
                v18 = -1073741789;
                goto LABEL_30;
              }
LABEL_42:
              v18 = -1073741675;
              goto LABEL_30;
            }
            v48 = *v35 + v12 + 4;
            if ( v48 >= *v35 )
            {
              *v35 = v48;
              goto LABEL_99;
            }
LABEL_102:
            *v35 = -1;
            goto LABEL_42;
          }
        }
        else if ( !(_DWORD)v12 )
        {
          goto LABEL_37;
        }
LABEL_29:
        v18 = -1073741811;
        goto LABEL_30;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741675;
}
