__int64 __fastcall ComputeInverseMatrix3x3(__int128 *a1, __int64 a2)
{
  int v2; // eax
  int *v3; // r13
  __int128 v4; // xmm0
  __int64 v5; // rsi
  __int128 v6; // xmm1
  int *v7; // rbx
  int v8; // r10d
  __int64 v9; // rdi
  int v10; // r11d
  __int64 v11; // r9
  int v12; // r15d
  __int64 i; // r14
  __int64 v14; // rcx
  signed int v15; // r8d
  signed int v16; // eax
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  char *v22; // r11
  __int64 v23; // r8
  _DWORD *v24; // rdx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // r14d
  __int64 v29; // r15
  __int64 v30; // rbx
  int v31; // eax
  int v32; // ecx
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // rdi
  __int64 v36; // r15
  __int64 v37; // r12
  int v38; // esi
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // edx
  int v42; // ecx
  __int128 v43; // xmm1
  int v45; // [rsp+20h] [rbp-89h]
  int v46; // [rsp+28h] [rbp-81h]
  __int64 v47; // [rsp+30h] [rbp-79h]
  int *v48; // [rsp+38h] [rbp-71h]
  __int64 v49; // [rsp+40h] [rbp-69h]
  int *v50; // [rsp+48h] [rbp-61h]
  int *v51; // [rsp+50h] [rbp-59h]
  __int64 v52; // [rsp+58h] [rbp-51h]
  __int64 v53; // [rsp+60h] [rbp-49h]
  __int128 v55; // [rsp+70h] [rbp-39h] BYREF
  __int128 v56; // [rsp+80h] [rbp-29h]
  int v57; // [rsp+90h] [rbp-19h]
  _OWORD v58[2]; // [rsp+98h] [rbp-11h] BYREF
  int v59; // [rsp+B8h] [rbp+Fh]

  v2 = *((_DWORD *)a1 + 8);
  v3 = (int *)v58;
  v4 = *a1;
  *(_QWORD *)((char *)&v55 + 4) = 0LL;
  v5 = 0LL;
  v6 = a1[1];
  HIDWORD(v55) = 0;
  v7 = (int *)v58;
  v56 = 0xF4240uLL;
  v8 = 0;
  v59 = v2;
  v9 = 0LL;
  v52 = 0LL;
  v58[0] = v4;
  v57 = 1000000;
  v58[1] = v6;
  LODWORD(v55) = 1000000;
  v45 = 1;
  v49 = 0LL;
  v51 = (int *)v58;
  v50 = (int *)v58;
  do
  {
    v10 = v8;
    v46 = v8 + 1;
    v53 = v5 + 1;
    v11 = v5;
    v12 = v8 + 1;
    for ( i = v5 + 1; v12 < 3; v10 = v17 )
    {
      v14 = i;
      v15 = abs32(*((_DWORD *)v58 + 2 * i + i + v5));
      v16 = abs32(*((_DWORD *)v58 + 2 * v11 + v11 + v5));
      if ( v15 <= v16 )
        v14 = v11;
      v11 = v14;
      v17 = v12;
      if ( v15 <= v16 )
        v17 = v10;
      ++v12;
      ++i;
    }
    if ( *((_DWORD *)v58 + 2 * v11 + v11 + v5) )
    {
      if ( v10 != v8 )
      {
        v18 = 3 * v11;
        v19 = v5 - v11;
        v20 = 3LL;
        v21 = 3 * v19;
        v22 = (char *)&v55 + 12 * v19 - (_QWORD)v58;
        v23 = 4 * v18;
        do
        {
          v24 = (_DWORD *)((char *)v58 + v23);
          v25 = *(_DWORD *)((char *)v58 + v23 + v21 * 4);
          v24[v21] = *v24;
          v26 = *(_DWORD *)((char *)&v55 + v23);
          *v24 = v25;
          v27 = *(_DWORD *)((char *)v58 + v23 + (_QWORD)v22);
          *(_DWORD *)((char *)v24 + (_QWORD)v22) = v26;
          *(_DWORD *)((char *)&v55 + v23) = v27;
          v23 += 4LL;
          --v20;
        }
        while ( v20 );
      }
      v28 = *v7;
      v29 = 3LL;
      v30 = v9;
      do
      {
        v31 = DivFD6(*(_DWORD *)((char *)v58 + v30), v28);
        v32 = *(_DWORD *)((char *)&v55 + v30);
        *(_DWORD *)((char *)v58 + v30) = v31;
        *(_DWORD *)((char *)&v55 + v30) = DivFD6(v32, v28);
        v30 += 4LL;
        --v29;
      }
      while ( v29 );
      v33 = 0LL;
      v48 = v3;
      v34 = 0LL;
      v47 = 0LL;
      v35 = v9 - (_QWORD)v58;
      do
      {
        if ( v33 != v5 && *v3 )
        {
          v36 = v34;
          v37 = 3LL;
          v38 = *v3;
          do
          {
            v39 = MulFD6(*(_DWORD *)((char *)v58 + (_QWORD)v58 + v36 + v35), v38);
            v40 = *(_DWORD *)((char *)&v55 + v35 + (_QWORD)v58 + v36);
            *(_DWORD *)((char *)v58 + v36) -= v39;
            *(_DWORD *)((char *)&v55 + v36) -= MulFD6(v40, v38);
            v36 += 4LL;
            --v37;
          }
          while ( v37 );
          v5 = v49;
          v33 = v47;
          v3 = v48;
        }
        ++v33;
        v3 += 3;
        v35 -= 12LL;
        v47 = v33;
        v34 += 12LL;
        v48 = v3;
      }
      while ( v34 < 36 );
      v9 = v52;
      v7 = v50;
      v3 = v51;
      v41 = v45;
    }
    else
    {
      v41 = 0;
      v45 = 0;
    }
    v8 = v46;
    v7 += 4;
    v5 = v53;
    ++v3;
    v9 += 12LL;
    v49 = v53;
    v50 = v7;
    v51 = v3;
    v52 = v9;
  }
  while ( v46 < 3 );
  v42 = v57;
  v43 = v56;
  *(_OWORD *)a2 = v55;
  *(_OWORD *)(a2 + 16) = v43;
  *(_DWORD *)(a2 + 32) = v42;
  return v41;
}
