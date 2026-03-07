__int64 __fastcall EtwpEnableTrace(
        _WORD *a1,
        __int128 *a2,
        _OWORD *a3,
        __int16 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        const void **a10,
        const void **a11,
        void *Src,
        size_t Size,
        void *a14,
        size_t a15,
        void *a16,
        size_t a17,
        __int64 a18)
{
  const void **v18; // r15
  int v22; // r10d
  unsigned int v23; // r11d
  unsigned int v24; // r9d
  const void **v25; // r8
  int v26; // eax
  const void **v27; // r12
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // r8d
  int v33; // edx
  unsigned int v34; // eax
  int v35; // ecx
  unsigned int v36; // ebx
  int v37; // esi
  unsigned int v38; // esi
  __int64 Pool2; // rax
  _BYTE *v40; // r14
  __int128 v41; // xmm0
  unsigned int v42; // ebx
  unsigned int v44; // eax
  __int64 v45; // rdi
  unsigned int v46; // ebp
  char *v47; // rsi
  unsigned int i; // r13d
  unsigned int j; // r15d
  __int64 v50; // rbx
  int v51; // ecx
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rbx
  size_t v55; // r8
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v60; // rcx

  v18 = a10;
  v22 = 120;
  v23 = 0;
  if ( a10 )
  {
    v24 = 0;
    v25 = a10;
    do
    {
      v26 = *(unsigned __int16 *)v25;
      if ( (_WORD)v26 && v25[1] )
      {
        if ( (unsigned __int16)v26 > 0x400u )
          return (unsigned int)-1073741811;
        ++v23;
        v22 += v26 + 2;
      }
      ++v24;
      v25 += 2;
    }
    while ( v24 < 4 );
  }
  v27 = a11;
  if ( a11 )
  {
    v28 = 0;
    v29 = (__int64)a11;
    do
    {
      if ( *(_QWORD *)v29 )
      {
        v44 = *(unsigned __int16 *)(*(_QWORD *)v29 + 2LL);
        if ( (_WORD)v44 )
        {
          if ( v44 > 0x40 )
            return (unsigned int)-1073741811;
          ++v23;
          v22 += 2 * v44 + 4;
        }
      }
      ++v28;
      v29 += 8LL;
    }
    while ( v28 < 2 );
  }
  v30 = v23 + 1;
  if ( !(_DWORD)Size )
    v30 = v23;
  v31 = v22 + Size;
  if ( !(_DWORD)Size )
    v31 = v22;
  v32 = v30 + 1;
  if ( !(_DWORD)a15 )
    v32 = v30;
  v33 = v31 + a15;
  if ( !(_DWORD)a15 )
    v33 = v31;
  v34 = v32 + 1;
  if ( !(_DWORD)a17 )
    v34 = v32;
  v35 = v33 + a17;
  if ( !(_DWORD)a17 )
    v35 = v33;
  v36 = v34 + 1;
  if ( !a18 )
    v36 = v34;
  v37 = v35 + 24;
  if ( !a18 )
    v37 = v35;
  v38 = 16 * v36 + v37;
  Pool2 = ExAllocatePool2(256LL, v38, 1953985605LL);
  v40 = (_BYTE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 3;
    *(_DWORD *)(Pool2 + 4) = v38;
    if ( a3 )
      *(_OWORD *)(Pool2 + 56) = *a3;
    v41 = *a2;
    *(_WORD *)(Pool2 + 78) = a4;
    *(_DWORD *)(Pool2 + 116) = v36;
    *(_OWORD *)(Pool2 + 40) = v41;
    *(_DWORD *)(Pool2 + 72) = a5;
    *(_BYTE *)(Pool2 + 76) = a6;
    *(_QWORD *)(Pool2 + 96) = a8;
    *(_QWORD *)(Pool2 + 88) = a7;
    *(_DWORD *)(Pool2 + 80) = a9;
    if ( v36 )
    {
      v45 = Pool2 + 120;
      v46 = 0;
      v47 = (char *)(Pool2 + 120 + 16LL * v36);
      for ( i = 0; i < 4; ++i )
      {
        if ( *(_WORD *)v18 && v18[1] )
        {
          if ( i )
          {
            if ( i == 1 )
            {
              *(_DWORD *)(v45 + 16LL * v46 + 12) = -2147483632;
            }
            else if ( i == 2 )
            {
              *(_DWORD *)(v45 + 16LL * v46 + 12) = -2147483616;
            }
            else
            {
              *(_DWORD *)(v45 + 16LL * v46 + 12) = -2147450880;
            }
          }
          else
          {
            *(_DWORD *)(v45 + 16LL * v46 + 12) = -2147483640;
          }
          v54 = 2LL * v46;
          v55 = (unsigned int)*(unsigned __int16 *)v18 + 2;
          *(_DWORD *)(v45 + 8 * v54 + 8) = v55;
          *(_QWORD *)(v45 + 8 * v54) = v47 - v40;
          memmove(v47, v18[1], v55);
          v56 = *(unsigned int *)(v45 + 16LL * v46++ + 8);
          v47 += v56;
        }
        v18 += 2;
      }
      for ( j = 0; j < 2; ++j )
      {
        if ( *v27 && *((_WORD *)*v27 + 1) )
        {
          if ( j )
            *(_DWORD *)(v45 + 16LL * v46 + 12) = -2147479552;
          else
            *(_DWORD *)(v45 + 16LL * v46 + 12) = -2147483136;
          v50 = 2LL * v46;
          v51 = *((unsigned __int16 *)*v27 + 1);
          *(_QWORD *)(v45 + 8 * v50) = v47 - v40;
          v52 = 2 * v51 + 4;
          *(_DWORD *)(v45 + 8 * v50 + 8) = v52;
          memmove(v47, *v27, v52);
          v53 = *(unsigned int *)(v45 + 16LL * v46++ + 8);
          v47 += v53;
        }
        ++v27;
      }
      if ( (_DWORD)Size )
      {
        v57 = 2LL * v46;
        *(_DWORD *)(v45 + 8 * v57 + 8) = Size;
        *(_DWORD *)(v45 + 8 * v57 + 12) = -2147482624;
        *(_QWORD *)(v45 + 8 * v57) = v47 - v40;
        memmove(v47, Src, (unsigned int)Size);
        v47 += *(unsigned int *)(v45 + 16LL * v46++ + 8);
      }
      if ( (_DWORD)a15 )
      {
        v58 = 2LL * v46;
        *(_DWORD *)(v45 + 8 * v58 + 8) = a15;
        *(_DWORD *)(v45 + 8 * v58 + 12) = -2147475456;
        *(_QWORD *)(v45 + 8 * v58) = v47 - v40;
        memmove(v47, a14, (unsigned int)a15);
        v47 += *(unsigned int *)(v45 + 16LL * v46++ + 8);
      }
      if ( (_DWORD)a17 )
      {
        v59 = 2LL * v46;
        *(_DWORD *)(v45 + 8 * v59 + 8) = a17;
        *(_DWORD *)(v45 + 8 * v59 + 12) = 0x80000000;
        *(_QWORD *)(v45 + 8 * v59) = v47 - v40;
        memmove(v47, a16, (unsigned int)a17);
        v47 += *(unsigned int *)(v45 + 16LL * v46++ + 8);
      }
      if ( a18 )
      {
        v60 = 2LL * v46;
        *(_DWORD *)(v45 + 8 * v60 + 12) = -2147467264;
        *(_DWORD *)(v45 + 8 * v60 + 8) = 24;
        *(_QWORD *)(v45 + 8 * v60) = v47 - v40;
        *(_OWORD *)v47 = *(_OWORD *)a18;
        *((_QWORD *)v47 + 2) = *(_QWORD *)(a18 + 16);
      }
    }
    v42 = EtwpEnableGuid(a1, (__int64)v40, 0);
    ExFreePoolWithTag(v40, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v42;
}
