/*
 * XREFs of sub_140A0C7AC @ 0x140A0C7AC
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     StringCbLengthW @ 0x140354748 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0C7AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // r12
  unsigned int j; // edx
  __int64 v18; // rax
  unsigned int *v19; // r8
  size_t v20; // rdx
  _WORD *v21; // rsi
  __int64 v22; // r11
  unsigned int v23; // eax
  size_t v24; // rbp
  void *Pool2; // rax
  void *v26; // r15
  unsigned int *v27; // rcx
  unsigned int v28; // r9d
  unsigned int *v29; // rax
  unsigned int k; // edx
  __int64 v31; // r10
  unsigned int *v32; // r8
  unsigned int v33; // ebx
  unsigned int *v34; // r11
  unsigned int m; // edx
  __int64 v36; // rax
  unsigned int *v37; // r8
  unsigned int *v38; // r9
  _DWORD *v39; // rax
  int v40; // ebx
  unsigned int v41; // r8d
  __int64 v42; // r9
  unsigned int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned int n; // ecx
  unsigned int v46; // eax
  size_t pcbLength; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a4 )
    {
      v8 = *(const wchar_t **)(a1 + 8);
      if ( v8 )
      {
        if ( *(_DWORD *)a1 > 3u )
        {
          v9 = (unsigned int *)v8;
          for ( i = 0; i < 3; ++i )
          {
            v11 = *v9;
            v12 = v9 + 1;
            if ( v9 + 1 < v9 )
              return (unsigned int)-1073741675;
            v9 = (unsigned int *)((char *)v12 + v11);
            if ( (unsigned int *)((char *)v12 + v11) < v12 )
              return (unsigned int)-1073741675;
          }
          v13 = *v9;
          v14 = v9 + 1;
          if ( v9 + 1 < v9 )
            return (unsigned int)-1073741675;
          v15 = 0LL;
          if ( v13 )
            v15 = v14;
          if ( v13 != 8 )
            return (unsigned int)-1073741789;
          v16 = *(_QWORD *)v15;
          pcbLength = 0LL;
          if ( *(_DWORD *)a1 > 4u )
          {
            for ( j = 0; j < 4; ++j )
            {
              v18 = *(unsigned int *)v8;
              v19 = (unsigned int *)(v8 + 2);
              if ( v8 + 2 < v8 )
                return (unsigned int)-1073741675;
              v8 = (const wchar_t *)((char *)v19 + v18);
              if ( (unsigned int *)((char *)v19 + v18) < v19 )
                return (unsigned int)-1073741675;
            }
            v20 = *(unsigned int *)v8;
            if ( v8 + 2 >= v8 )
            {
              if ( !(_DWORD)v20 )
                return (unsigned int)-1073741762;
              v21 = v8 + 2;
              if ( (v20 & 1) != 0 )
                return (unsigned int)-1073741762;
              if ( v21[(v20 >> 1) - 1] )
                return (unsigned int)-1073741762;
              if ( StringCbLengthW(v8 + 2, v20, &pcbLength) < 0 )
                return (unsigned int)-1073741762;
              if ( pcbLength + 2 != v22 )
                return (unsigned int)-1073741762;
              v23 = 2 * (pcbLength >> 1) + 2;
              if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
                return (unsigned int)-1073741762;
              v24 = v23;
              Pool2 = (void *)ExAllocatePool2(256LL, v23, 542329939LL);
              v26 = Pool2;
              if ( !Pool2 )
                return (unsigned int)-1073741801;
              memmove(Pool2, v21, v24);
              v27 = *(unsigned int **)(a1 + 8);
              if ( !v27 )
                goto LABEL_32;
              v28 = *(_DWORD *)a1;
              if ( *(_DWORD *)a1 <= 5u )
                goto LABEL_32;
              v29 = *(unsigned int **)(a1 + 8);
              for ( k = 0; k < 5; ++k )
              {
                v31 = *v29;
                v32 = v29 + 1;
                if ( v29 + 1 < v29 )
                  goto LABEL_63;
                v29 = (unsigned int *)((char *)v32 + v31);
                if ( (unsigned int *)((char *)v32 + v31) < v32 )
                  goto LABEL_63;
              }
              v33 = *v29;
              if ( v29 + 1 < v29 )
                goto LABEL_63;
              v34 = 0LL;
              if ( v33 )
                v34 = v29 + 1;
              if ( v28 > 6 )
              {
                for ( m = 0; m < 6; ++m )
                {
                  v36 = *v27;
                  v37 = v27 + 1;
                  if ( v27 + 1 < v27 )
                    goto LABEL_63;
                  v27 = (unsigned int *)((char *)v37 + v36);
                  if ( (unsigned int *)((char *)v37 + v36) < v37 )
                    goto LABEL_63;
                }
                if ( v27 + 1 < v27 )
                  goto LABEL_63;
                v38 = 0LL;
                if ( *v27 )
                  v38 = v27 + 1;
                if ( !qword_140D3B3D0 )
                {
                  v7 = -1073741637;
                  goto LABEL_64;
                }
                v7 = qword_140D3B3D0(v26, v34, v33, v38, *v27);
                if ( v7 < 0 )
                  goto LABEL_64;
                if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0
                  || *(_DWORD *)(a2 + 16) + 52 < (unsigned int)(*(_DWORD *)(a2 + 16) + 48)
                  || *(_DWORD *)(a2 + 16) + 52 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 52) )
                {
                  goto LABEL_63;
                }
                *(_DWORD *)(a4 + 4) = 20;
                v39 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
                if ( !v39 )
                {
                  v7 = -1073741801;
                  goto LABEL_64;
                }
                *(_QWORD *)(a4 + 8) = v39;
                *(_DWORD *)a4 = 0;
                v40 = v7 | 0x10000000;
                if ( v39 + 1 < v39 )
                  goto LABEL_63;
                if ( v39 + 2 > (_DWORD *)((char *)v39 + *(unsigned int *)(a4 + 4)) )
                {
LABEL_58:
                  v7 = -1073741789;
                  goto LABEL_64;
                }
                *v39 = 4;
                v39[1] = v40;
                v41 = ++*(_DWORD *)a4;
                v42 = *(_QWORD *)(a4 + 8);
                if ( !v42 )
                {
                  v43 = *(_DWORD *)(a4 + 4);
                  if ( v43 + 12 >= v43 )
                  {
                    *(_DWORD *)(a4 + 4) = v43 + 12;
                    *(_DWORD *)a4 = v41 + 1;
                    v7 = 0;
                    goto LABEL_64;
                  }
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_63;
                }
                v44 = *(_QWORD *)(a4 + 8);
                for ( n = 0; n < v41; v44 += v46 )
                {
                  v46 = *(_DWORD *)v44 + 4;
                  if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v46 < v44 )
                    goto LABEL_63;
                  ++n;
                }
                if ( v44 + 4 < v44 )
                {
LABEL_63:
                  v7 = -1073741675;
                  goto LABEL_64;
                }
                v7 = 0;
                if ( v44 + 12 > v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_58;
                *(_DWORD *)v44 = 8;
                *(_QWORD *)(v44 + 4) = v16;
                ++*(_DWORD *)a4;
              }
              else
              {
LABEL_32:
                v7 = -1073741811;
              }
LABEL_64:
              ExFreePoolWithTag(v26, 0);
              return (unsigned int)v7;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
