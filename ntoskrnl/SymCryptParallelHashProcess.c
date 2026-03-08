/*
 * XREFs of SymCryptParallelHashProcess @ 0x1403F09A0
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EFFF0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403F0DE8 (SymCryptParallelHashSetNextWork.c)
 *     _guard_dispatch_icall_nop @ 0x140411B00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall SymCryptParallelHashProcess(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v9; // ebx
  size_t v13; // r8
  unsigned __int64 v14; // rbp
  _QWORD *v15; // r14
  size_t v16; // rdi
  unsigned __int64 *i; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rax
  char v22; // r12
  size_t v23; // rsi
  __int64 v24; // r13
  _QWORD *v25; // r15
  _QWORD *v26; // rbp
  char v27; // dl
  size_t v28; // rsi
  __int64 *v29; // r12
  __int64 v30; // r15
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  size_t v34; // rbp
  _QWORD *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v39; // [rsp+30h] [rbp-38h]
  unsigned __int64 v40; // [rsp+38h] [rbp-30h]
  __int64 v42; // [rsp+90h] [rbp+28h]

  v9 = 0;
  if ( a5 )
  {
    v42 = *a1;
    v13 = 48 * a3;
    v39 = *((unsigned int *)a1 + 2);
    v14 = (a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = (_QWORD *)(v13 + v14);
    v40 = (v13 + v14 + 8 * a3 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v39 + v40 <= a6 + a7 )
    {
      memset((void *)((a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL), 0, v13);
      v16 = 0LL;
      for ( i = (unsigned __int64 *)(a4 + 40 * a5); (unsigned __int64)i > a4; v19[3] = i )
      {
        i -= 5;
        v18 = *i;
        if ( *i >= a3 )
          return 32782;
        v19 = (_QWORD *)(v14 + 48 * v18);
        if ( !*v19 )
        {
          *v19 = a2 + v18 * *(unsigned int *)(v42 + 32);
          v15[v16++] = v19;
        }
        v20 = *((_DWORD *)i + 2);
        if ( v20 == 1 )
        {
          v21 = i[3];
        }
        else
        {
          if ( v20 != 2 )
            return 32782;
          v21 = *(unsigned int *)(v42 + 40);
        }
        v19[2] += v21;
        i[4] = v19[3];
      }
      v22 = 1;
      v23 = 0LL;
      v24 = *(_QWORD *)(*v15 + 16LL);
      if ( v16 )
      {
        v25 = &v15[v16 - 1];
        do
        {
          v26 = &v15[v23];
          if ( (unsigned __int8)SymCryptParallelHashSetNextWork(a1, *v26) )
          {
            ++v23;
            v27 = 0;
            if ( *(_QWORD *)(*v26 + 16LL) == v24 )
              v27 = v22;
            v22 = v27;
          }
          else
          {
            --v16;
            *v26 = *v25--;
          }
        }
        while ( v23 < v16 );
        if ( !v22 )
          qsort(v15, v16, 8uLL, compareRequestSize);
      }
      v28 = a8;
      if ( v16 < a8 )
        v28 = v16;
      v29 = &v15[v28];
      if ( v16 )
      {
        v30 = v42;
        do
        {
          v31 = 1LL;
          v32 = *(_QWORD *)(*v15 + 40LL);
          while ( v31 < v28 )
          {
            v33 = *(_QWORD *)(v15[v31] + 40LL);
            if ( v32 < v33 )
              v33 = v32;
            ++v31;
            v32 = v33;
          }
          ((void (__fastcall *)(_QWORD *, size_t, _QWORD, unsigned __int64, unsigned __int64))a1[5])(
            v15,
            v28,
            (unsigned int)v32 & -*(_DWORD *)(v30 + 40),
            v40,
            v39);
          v34 = 0LL;
          if ( v28 )
          {
            v35 = &v15[v28];
            do
            {
              v36 = v15[v34];
              if ( *(_QWORD *)(v36 + 40) < (unsigned __int64)*(unsigned int *)(v42 + 40)
                && !(unsigned __int8)SymCryptParallelHashSetNextWork(a1, v36) )
              {
                if ( v16 <= v28 )
                {
                  --v35;
                  --v28;
                  v15[v34--] = *v35;
                }
                else
                {
                  v37 = *v29++;
                  v15[v34] = v37;
                }
                --v16;
              }
              ++v34;
            }
            while ( v34 < v28 );
            v30 = v42;
          }
        }
        while ( v16 );
      }
      SymCryptWipe(v40, v39);
    }
    else
    {
      return 32781;
    }
  }
  return v9;
}
