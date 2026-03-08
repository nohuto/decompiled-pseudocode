/*
 * XREFs of I_MincryptAddChainInfo @ 0x140A6DD90
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall I_MincryptAddChainInfo(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        const void **a8,
        unsigned __int16 *Src,
        const void **a10)
{
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 v14; // rbp
  unsigned int v15; // r12d
  void *v16; // rcx
  __int64 Pool2; // rax
  __int64 v18; // rsi
  __int64 v20; // rcx
  char *v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // r12
  __int64 v24; // r15
  char *v25; // r13
  __int64 v26; // rbp
  char *v27; // rbx
  __int64 v28; // rax
  unsigned int v30; // r13d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r12
  char *v34; // rdi
  __int64 v35; // r14
  const void **v36; // rbx
  char *v37; // r15
  unsigned int v38; // eax
  void *v39; // rcx
  __int64 v40; // [rsp+20h] [rbp-48h]

  v10 = a5;
  v11 = a2 + 104;
  v12 = a3;
  v13 = a4;
  v14 = a1;
  v15 = a3 + a4;
  if ( a3 + a4 + a5 )
  {
    Pool2 = ExAllocatePool2(258LL, v11, 1919109443LL);
    v18 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    *(_DWORD *)Pool2 = v11;
    v20 = Pool2 + 104;
    *(_DWORD *)(Pool2 + 52) = a6;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 104;
    v21 = (char *)(16LL * v15 + Pool2 + 104);
    v22 = 0LL;
    v40 = v18 + 104;
    *(_DWORD *)(v18 + 32) = v12;
    if ( (_DWORD)v12 )
    {
      v23 = a7;
      v24 = v12;
      v25 = (char *)a7 - v20;
      v26 = v20 - (_QWORD)a7;
      do
      {
        v27 = (char *)v23 + v26;
        memmove(v21, *(const void **)&v25[(_QWORD)v23 + v26 + 8], (unsigned int)*v23);
        *((_QWORD *)v27 + 1) = v21;
        *(_DWORD *)v27 = *v23;
        v28 = (unsigned int)*v23;
        v23 += 4;
        v21 += (v28 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        --v24;
      }
      while ( v24 );
      v14 = a1;
      v22 = v12;
      v13 = a4;
      v10 = a5;
      v20 = v18 + 104;
    }
    *(_DWORD *)(v18 + 16) = v13;
    *(_QWORD *)(v18 + 8) = v20 + 16 * v22;
    if ( v13 )
    {
      v30 = 0;
      do
      {
        memmove(v21, a8[1], *(unsigned int *)a8);
        v31 = (unsigned int)v12 + v30++;
        v31 *= 2LL;
        *(_QWORD *)(v40 + 8 * v31 + 8) = v21;
        *(_DWORD *)(v40 + 8 * v31) = *(_DWORD *)a8;
        v32 = *(unsigned int *)a8;
        a8 += 2;
        v21 += (v32 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      while ( v30 < v13 );
      v10 = a5;
    }
    if ( a10 )
    {
      memmove(v21, a10[1], *(unsigned int *)a10);
      *(_QWORD *)(v18 + 64) = v21;
      *(_DWORD *)(v18 + 56) = *(_DWORD *)a10;
      v21 += (*(unsigned int *)a10 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      *(_OWORD *)(v18 + 56) = 0LL;
    }
    v33 = v10;
    *(_QWORD *)(v18 + 40) = v21;
    *(_DWORD *)(v18 + 48) = v10;
    memmove(v21, Src, 120LL * v10);
    v34 = &v21[120 * v10];
    if ( v10 )
    {
      v35 = -80LL - (_QWORD)Src;
      v36 = (const void **)(Src + 40);
      do
      {
        if ( *(_WORD *)v36 )
        {
          memmove(v34, *(v36 - 1), *(unsigned __int16 *)v36);
          v37 = (char *)v36 + v35;
          *(const void **)((char *)v36 + v35 + *(_QWORD *)(v18 + 40) + 72) = v34;
          v34 += *(unsigned __int16 *)v36;
        }
        else
        {
          v37 = (char *)v36 + v35;
        }
        if ( *((_WORD *)v36 + 8) )
        {
          memmove(v34, v36[1], *((unsigned __int16 *)v36 + 8));
          *(_QWORD *)&v37[*(_QWORD *)(v18 + 40) + 88] = v34;
          v34 += *((unsigned __int16 *)v36 + 8);
        }
        v38 = *((_DWORD *)v36 + 6);
        if ( v38 )
        {
          memmove(v34, v36[4], v38);
          *(_QWORD *)&v37[*(_QWORD *)(v18 + 40) + 112] = v34;
          v34 += *((unsigned int *)v36 + 6);
        }
        v36 += 15;
        --v33;
      }
      while ( v33 );
    }
    v39 = *(void **)(v14 + 16);
    if ( v39 )
      ExFreePoolWithTag(v39, 0x72634943u);
    *(_QWORD *)(v14 + 16) = v18;
  }
  else
  {
    v16 = *(void **)(a1 + 16);
    if ( v16 )
      ExFreePoolWithTag(v16, 0x72634943u);
    *(_QWORD *)(v14 + 16) = 0LL;
  }
  return 0LL;
}
