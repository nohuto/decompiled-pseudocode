/*
 * XREFs of ConstraintEval @ 0x140747E38
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     FilterEval @ 0x1406CC630 (FilterEval.c)
 *     SimplifyFilter @ 0x14074848C (SimplifyFilter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v7; // r14d
  size_t v9; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v11; // r12
  int v12; // esi
  int *v13; // rdi
  int v14; // ebx
  __int64 v16; // rcx
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rdx
  int v19; // ebx
  int v20; // ebx
  unsigned int i; // r15d
  int *v22; // rbx
  __int64 v23; // rcx
  const wchar_t *v24; // rcx
  const wchar_t *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  int v28; // ebx
  int v29; // eax
  void *v30; // rcx
  unsigned int v31; // [rsp+30h] [rbp-50h] BYREF
  int v32; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 v33; // [rsp+38h] [rbp-48h] BYREF
  __int128 v34; // [rsp+48h] [rbp-38h] BYREF
  __int128 v35; // [rsp+58h] [rbp-28h]
  __int128 v36; // [rsp+68h] [rbp-18h]

  v31 = 0;
  v32 = 0;
  v7 = a1;
  v9 = 56LL * a1;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741823;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 56LL * a1, 1381256262LL);
  v11 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    SimplifyFilter(v7, a2, &v31, Pool2);
    v7 = v31;
  }
  else
  {
    memmove(Pool2, a2, v9);
  }
  v12 = 0;
  if ( !v7 )
    goto LABEL_9;
  while ( 1 )
  {
    v13 = &v11[14 * v12];
    if ( v13[6] == *(_DWORD *)(a3 + 16) )
    {
      v16 = *((_QWORD *)v13 + 1) - *(_QWORD *)a3;
      if ( !v16 )
        v16 = *((_QWORD *)v13 + 2) - *(_QWORD *)(a3 + 8);
      if ( !v16 && v13[7] == *(_DWORD *)(a3 + 20) )
      {
        v17 = (const wchar_t *)*((_QWORD *)v13 + 4);
        v18 = *(const wchar_t **)(a3 + 24);
        if ( (v17 == v18 || v17 && v18 && !wcsicmp(v17, v18)) && *v13 == a4 )
          break;
      }
    }
    if ( ++v12 >= v7 )
      goto LABEL_9;
  }
  if ( !v13 )
    goto LABEL_9;
  v34 = *(_OWORD *)(v13 + 2);
  v35 = *(_OWORD *)(v13 + 6);
  v36 = *(_OWORD *)(v13 + 10);
  v19 = a4 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v28 = v20 - 0x10000;
      if ( v28 )
      {
        if ( v28 != 0x10000 )
          goto LABEL_9;
        v29 = v13[10];
        if ( v29 != 18 && v29 != 25 && v29 != 8210 )
          goto LABEL_9;
      }
      else
      {
        if ( (_DWORD)v36 != 17 )
          goto LABEL_9;
        v30 = &unk_140D1BFD0;
        if ( **((_BYTE **)&v36 + 1) != 0xFF )
          v30 = &unk_140C0DE98;
        *((_QWORD *)&v36 + 1) = v30;
      }
    }
  }
  else
  {
    *(_QWORD *)&v36 = 0x400000007LL;
    *((_QWORD *)&v36 + 1) = &unk_140D1BFCC;
  }
  for ( i = 0; i < v7; ++i )
  {
    v22 = &v11[14 * i];
    if ( v22 != v13 && v22[6] == v13[6] )
    {
      v23 = *((_QWORD *)v22 + 1) - *((_QWORD *)v13 + 1);
      if ( !v23 )
        v23 = *((_QWORD *)v22 + 2) - *((_QWORD *)v13 + 2);
      if ( !v23 && v22[7] == v13[7] )
      {
        v24 = (const wchar_t *)*((_QWORD *)v22 + 4);
        v25 = (const wchar_t *)*((_QWORD *)v13 + 4);
        if ( v24 == v25 || v24 && v25 && !wcsicmp(v24, v25) )
        {
          v26 = *v22;
          if ( *v22 != *v13 )
            goto LABEL_9;
          if ( v22[10] != v13[10] )
            goto LABEL_9;
          v27 = v22[11];
          if ( v27 != v13[11] || memcmp(*((const void **)v22 + 6), *((const void **)v13 + 6), v27) )
            goto LABEL_9;
          *v22 = v26 ^ 0x10000;
        }
      }
    }
  }
  *v13 ^= 0x10000u;
  *((_QWORD *)&v33 + 1) = &v34;
  LODWORD(v33) = 1;
  v14 = FilterEval((int)GetPropertyFromPropArray, (int)&v33, v7, v11, (__int64)&v32);
  if ( v14 < 0 )
    goto LABEL_10;
  if ( !v32 )
  {
    *(_OWORD *)a5 = *(_OWORD *)v13;
    *(_OWORD *)(a5 + 16) = *((_OWORD *)v13 + 1);
    *(_OWORD *)(a5 + 32) = *((_OWORD *)v13 + 2);
    *(_QWORD *)(a5 + 48) = *((_QWORD *)v13 + 6);
    *(_DWORD *)a5 ^= 0x10000u;
    goto LABEL_10;
  }
LABEL_9:
  v14 = -1073741823;
LABEL_10:
  ExFreePoolWithTag(v11, 0x52544C46u);
  return (unsigned int)v14;
}
