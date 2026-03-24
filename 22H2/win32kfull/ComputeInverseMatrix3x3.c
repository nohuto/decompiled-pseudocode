/*
 * XREFs of ComputeInverseMatrix3x3 @ 0x1C011B23C
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0112328 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C011ACE4 (ComputeColorSpaceXForm.c)
 * Callees:
 *     MulFD6 @ 0x1C001C03C (MulFD6.c)
 *     DivFD6 @ 0x1C001CD3C (DivFD6.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeInverseMatrix3x3(__int128 *a1, __int64 a2)
{
  int *v2; // r12
  __int128 v3; // xmm0
  __int64 v4; // r15
  __int128 v5; // xmm1
  int *v6; // r14
  int v7; // r10d
  __int64 v8; // rsi
  __int64 v9; // r13
  int v10; // r11d
  __int64 v11; // rdx
  int v12; // edi
  __int64 i; // rbx
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // rax
  int v17; // eax
  int v18; // edi
  __int64 v19; // rbx
  __int64 v20; // r14
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdi
  int v24; // r13d
  __int64 v25; // rsi
  __int64 v26; // r15
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // r8d
  int v30; // ecx
  __int128 v31; // xmm1
  __int64 v33; // r11
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // r8
  _DWORD *v37; // rdx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // [rsp+20h] [rbp-79h]
  int v42; // [rsp+24h] [rbp-75h]
  __int64 v43; // [rsp+28h] [rbp-71h]
  int *v44; // [rsp+30h] [rbp-69h]
  __int64 v45; // [rsp+38h] [rbp-61h]
  int *v46; // [rsp+40h] [rbp-59h]
  int *v47; // [rsp+48h] [rbp-51h]
  __int64 v48; // [rsp+50h] [rbp-49h]
  __int64 v49; // [rsp+58h] [rbp-41h]
  __int128 v51; // [rsp+68h] [rbp-31h] BYREF
  __int128 v52; // [rsp+78h] [rbp-21h]
  int v53; // [rsp+88h] [rbp-11h]
  _OWORD v54[2]; // [rsp+90h] [rbp-9h] BYREF
  int v55; // [rsp+B0h] [rbp+17h]

  v2 = (int *)v54;
  v3 = *a1;
  v4 = 0LL;
  v55 = *((_DWORD *)a1 + 8);
  v5 = a1[1];
  v6 = (int *)v54;
  v53 = 1000000;
  v54[0] = v3;
  v52 = 0xF4240uLL;
  v7 = 0;
  v54[1] = v5;
  v51 = 0xF4240uLL;
  v8 = 0LL;
  v41 = 1;
  v9 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v47 = (int *)v54;
  v46 = (int *)v54;
  do
  {
    v10 = v7;
    v42 = v7 + 1;
    v49 = v8 + 1;
    v11 = v8;
    v12 = v7 + 1;
    for ( i = v8 + 1; v12 < 3; v10 = v17 )
    {
      v14 = *((_DWORD *)v54 + 2 * i + i + v8);
      if ( v14 < 0 )
        v14 = -v14;
      v15 = *((_DWORD *)v54 + 2 * v11 + v11 + v8);
      if ( v15 < 0 )
        v15 = -v15;
      v16 = i;
      if ( v14 <= v15 )
        v16 = v11;
      v11 = v16;
      v17 = v12;
      if ( v14 <= v15 )
        v17 = v10;
      ++v12;
      ++i;
    }
    if ( *((_DWORD *)v54 + 2 * v11 + v11 + v8) )
    {
      if ( v10 != v7 )
      {
        v33 = 3LL;
        v34 = 12 * (v8 - v11);
        v35 = v34 - 40;
        v36 = 12 * v11;
        do
        {
          v37 = (_DWORD *)((char *)v54 + v36);
          v38 = *(_DWORD *)((char *)v54 + v36 + v34);
          v37[(unsigned __int64)v34 / 4] = *v37;
          v39 = *(_DWORD *)((char *)&v51 + v36);
          *v37 = v38;
          v40 = *(_DWORD *)((char *)v54 + v36 + v35);
          *(_DWORD *)((char *)v37 + v35) = v39;
          *(_DWORD *)((char *)&v51 + v36) = v40;
          v36 += 4LL;
          --v33;
        }
        while ( v33 );
      }
      v18 = *v6;
      v19 = v9;
      v20 = 3LL;
      do
      {
        v21 = DivFD6(*(_DWORD *)((char *)v54 + v19), v18);
        v22 = *(_DWORD *)((char *)&v51 + v19);
        *(_DWORD *)((char *)v54 + v19) = v21;
        *(_DWORD *)((char *)&v51 + v19) = DivFD6(v22, v18);
        v19 += 4LL;
        --v20;
      }
      while ( v20 );
      v43 = 0LL;
      v44 = v2;
      v23 = v9 - (_QWORD)v54;
      do
      {
        if ( v4 != v8 )
        {
          v24 = *v2;
          if ( *v2 )
          {
            v25 = v20;
            v26 = 3LL;
            do
            {
              v27 = MulFD6(*(_DWORD *)((char *)v54 + (_QWORD)v54 + v25 + v23), v24);
              v28 = *(_DWORD *)((char *)v54 + v25 + (_QWORD)&v51 + v23);
              *(_DWORD *)((char *)v54 + v25) -= v27;
              *(_DWORD *)((char *)&v51 + v25) -= MulFD6(v28, v24);
              v25 += 4LL;
              --v26;
            }
            while ( v26 );
            v8 = v45;
            v4 = v43;
            v2 = v44;
          }
        }
        ++v4;
        v2 += 3;
        v23 -= 12LL;
        v43 = v4;
        v20 += 12LL;
        v44 = v2;
      }
      while ( v20 < 36 );
      v9 = v48;
      v4 = 0LL;
      v6 = v46;
      v2 = v47;
      v29 = v41;
    }
    else
    {
      v29 = 0;
      v41 = 0;
    }
    v7 = v42;
    v6 += 4;
    v8 = v49;
    ++v2;
    v9 += 12LL;
    v45 = v49;
    v46 = v6;
    v47 = v2;
    v48 = v9;
  }
  while ( v42 < 3 );
  v30 = v53;
  v31 = v52;
  *(_OWORD *)a2 = v51;
  *(_OWORD *)(a2 + 16) = v31;
  *(_DWORD *)(a2 + 32) = v30;
  return v29;
}
