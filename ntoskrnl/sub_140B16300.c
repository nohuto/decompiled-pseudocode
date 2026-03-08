/*
 * XREFs of sub_140B16300 @ 0x140B16300
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     sub_1403EC068 @ 0x1403EC068 (sub_1403EC068.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

void __fastcall sub_140B16300(_QWORD **a1)
{
  void *v1; // rsi
  _QWORD **v2; // rbx
  __int64 v3; // rbp
  bool v4; // zf
  int v5; // ecx
  char **v6; // rcx
  char **v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rdi
  unsigned int v10; // r11d
  char **v11; // r15
  _DWORD *v12; // r12
  __int64 v13; // r14
  char *v14; // r9
  char *v15; // r10
  const char *v16; // rax
  int v17; // r13d
  __int64 i; // rbx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  unsigned __int64 j; // rax
  _DWORD *v26; // r15
  __int64 v27; // r13
  _DWORD *v28; // r9
  _QWORD *v29; // r10
  char *v30; // r11
  int v31; // r8d
  char *v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // r12
  char v35; // al
  int v36; // ecx
  unsigned int *v37; // rcx
  _QWORD *v38; // rdi
  unsigned int v39; // r9d
  _QWORD *v40; // r10
  int v41; // r11d
  const char *v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r8
  unsigned int v45; // esi
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rcx
  char v49; // al
  int v50; // eax
  unsigned int v51; // r9d
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 k; // rax
  void *v55; // [rsp+20h] [rbp-88h]
  __int64 v56; // [rsp+28h] [rbp-80h]
  _BYTE v57[112]; // [rsp+38h] [rbp-70h] BYREF
  int v59; // [rsp+B8h] [rbp+10h]
  _QWORD *v60; // [rsp+C0h] [rbp+18h]
  _QWORD *v61; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  v2 = a1;
  v3 = **a1;
  v4 = a1 == *a1 + 5;
  v5 = *((_DWORD *)a1 + 10);
  if ( v4 )
    v1 = 0LL;
  v55 = v1;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_54;
    v6 = (char **)v2[1];
    v7 = v6;
    v8 = *((_DWORD *)v2 + 8);
    v56 = (__int64)v6;
    v61 = v2[3];
    v60 = v2[2];
    if ( !v6 )
    {
      v7 = *(char ***)(v3 + 2696);
      v56 = (__int64)v7;
    }
    if ( v8 )
    {
      do
      {
        v9 = 8LL;
        v10 = 0;
        if ( v8 < 8 )
          v9 = v8;
        v11 = v7;
        v12 = v57;
        v13 = (__int64)v60;
        do
        {
          v11[1] = (char *)4096;
          v14 = (char *)(v13 + (v10 << 12));
          *v11 = v14;
          v15 = v14;
          *(_DWORD *)(v3 + 2088) += 4096;
          v16 = v14;
          v17 = *(_DWORD *)(v3 + 2068);
          for ( i = *(_QWORD *)(v3 + 2072); v16 < v14 + 4096; v16 += 64 )
            _mm_prefetch(v16, 0);
          v19 = *(_QWORD *)(v3 + 2072);
          v59 = 32;
          do
          {
            v20 = 8LL;
            do
            {
              v21 = *((_QWORD *)v15 + 1) ^ __ROL8__(*(_QWORD *)v15 ^ v19, v17);
              v15 += 16;
              v19 = __ROL8__(v21, v17);
              --v20;
            }
            while ( v20 );
            v22 = __ROL8__(i ^ (v15 - v14), 17);
            v23 = v59 - 1;
            v24 = ((unsigned __int8)(((v22 ^ i ^ (unsigned __int64)&v15[-v13 + -4096 * v10])
                                    * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v17 ^ v22 ^ i ^ ((_BYTE)v15 - v13))) & 0x3F;
            --v59;
            LOBYTE(v17) = 1;
            if ( v24 )
              LOBYTE(v17) = v24;
          }
          while ( v23 );
          v13 = (__int64)v60;
          for ( j = v19 >> 31; j; j >>= 31 )
            LODWORD(v19) = j ^ v19;
          ++v10;
          *v12 = v19 & 0x7FFFFFFF;
          v11 += 6;
          ++v12;
        }
        while ( v10 < (unsigned int)v9 );
        v7 = (char **)v56;
        sub_1403EC068(v3, v56, v9);
        v26 = v57;
        v27 = (unsigned int)v9;
        v28 = v61 + 2;
        v29 = v61;
        v30 = (char *)(v56 + 16);
        do
        {
          v31 = 16;
          v32 = v30;
          v33 = v29;
          v34 = 2LL;
          do
          {
            v31 -= 8;
            *v33 = *(_QWORD *)v32;
            v32 += 8;
            ++v33;
            --v34;
          }
          while ( v34 );
          for ( ; v31; --v31 )
          {
            v35 = *v32++;
            *(_BYTE *)v33 = v35;
            v33 = (_QWORD *)((char *)v33 + 1);
          }
          v30 += 48;
          v29 = (_QWORD *)((char *)v29 + 20);
          v36 = (*v28 ^ *v26++) & 0x7FFFFFFF;
          *v28 ^= v36;
          v28 += 5;
          --v27;
        }
        while ( v27 );
        v8 -= v9;
        v60 = (_QWORD *)((char *)v60 + (unsigned int)((_DWORD)v9 << 12));
        *(_DWORD *)(v3 + 2088) += (_DWORD)v9 << 15;
        v61 = (_QWORD *)((char *)v61 + 20 * v9);
      }
      while ( v8 );
      v2 = a1;
      v6 = (char **)a1[1];
    }
    if ( v6 )
    {
      ExFreePool(v6);
      v2[1] = 0LL;
    }
  }
  else
  {
    if ( !*((_DWORD *)v2 + 8) )
      goto LABEL_54;
    v37 = (unsigned int *)v2[2];
    do
    {
      v38 = (_QWORD *)((char *)v2[1] + *v37);
      v39 = v37[1] - *v37;
      *(_DWORD *)(v3 + 2088) += v39;
      v40 = v38;
      v41 = *(_DWORD *)(v3 + 2068);
      v42 = (const char *)v38;
      v43 = (unsigned __int64)v38 + v39;
      if ( (unsigned __int64)v38 < v43 )
      {
        do
        {
          _mm_prefetch(v42, 0);
          v42 += 64;
        }
        while ( (unsigned __int64)v42 < v43 );
      }
      v44 = *(_QWORD *)(v3 + 2072);
      v45 = v39 >> 7;
      if ( v39 >> 7 )
      {
        do
        {
          v46 = 8LL;
          do
          {
            v47 = v40[1] ^ __ROL8__(*v40 ^ v44, v41);
            v40 += 2;
            v44 = __ROL8__(v47, v41);
            --v46;
          }
          while ( v46 );
          v48 = __ROL8__(*(_QWORD *)(v3 + 2072) ^ ((char *)v40 - (char *)v38), 17) ^ *(_QWORD *)(v3 + 2072) ^ ((char *)v40 - (char *)v38);
          v49 = v41 ^ ((v48 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v48;
          LOBYTE(v41) = 1;
          v50 = v49 & 0x3F;
          if ( v50 )
            LOBYTE(v41) = v50;
          --v45;
        }
        while ( v45 );
        v2 = a1;
      }
      v51 = v39 & 0x7F;
      if ( v51 >= 8 )
      {
        v52 = (unsigned __int64)v51 >> 3;
        do
        {
          v44 = __ROL8__(*v40++ ^ v44, v41);
          v51 -= 8;
          --v52;
        }
        while ( v52 );
      }
      for ( ; v51; --v51 )
      {
        v53 = *(unsigned __int8 *)v40;
        v40 = (_QWORD *)((char *)v40 + 1);
        v44 = __ROL8__(v53 ^ v44, v41);
      }
      for ( k = v44; ; LODWORD(v44) = k ^ v44 )
      {
        k >>= 31;
        if ( !k )
          break;
      }
      *(_DWORD *)v2[3] ^= (*(_DWORD *)v2[3] ^ v44) & 0x7FFFFFFF;
      *(_DWORD *)v2[3] &= ~0x80000000;
      v2[2] = (_QWORD *)((char *)v2[2] + 12);
      v2[3] = (_QWORD *)((char *)v2[3] + 4);
      v4 = (*((_DWORD *)v2 + 8))-- == 1;
      v37 = (unsigned int *)v2[2];
    }
    while ( !v4 );
  }
  v1 = v55;
LABEL_54:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*v2 + 8, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)(*v2 + 1), 1u);
  if ( v1 )
    ExFreePool(v1);
}
