__int64 __fastcall SymCryptEcpointScalarMulFixedWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r12
  __int64 v11; // r15
  unsigned int v12; // ebp
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // edi
  int v21; // ebx
  __int64 v22; // rcx
  char *v23; // r13
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  unsigned int v26; // ebx
  unsigned int v27; // edi
  _QWORD *v28; // r15
  __int64 v29; // rdi
  bool v30; // zf
  signed __int64 v31; // rcx
  unsigned int v32; // r13d
  __int64 v33; // rdi
  _QWORD *v34; // r15
  unsigned int i; // r13d
  __int64 v36; // rdi
  _QWORD *v37; // r13
  unsigned int j; // r14d
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v42; // [rsp+40h] [rbp-2C8h]
  unsigned int v43; // [rsp+40h] [rbp-2C8h]
  unsigned int v44; // [rsp+44h] [rbp-2C4h]
  unsigned int v45; // [rsp+48h] [rbp-2C0h]
  unsigned int v46; // [rsp+4Ch] [rbp-2BCh]
  __int64 v47; // [rsp+50h] [rbp-2B8h]
  int IsEqualUint32; // [rsp+50h] [rbp-2B8h]
  int v49; // [rsp+50h] [rbp-2B8h]
  int v50; // [rsp+58h] [rbp-2B0h]
  char *v51; // [rsp+58h] [rbp-2B0h]
  __int64 v52; // [rsp+60h] [rbp-2A8h]
  char *v53; // [rsp+68h] [rbp-2A0h]
  __int64 v54; // [rsp+70h] [rbp-298h]
  int v55; // [rsp+70h] [rbp-298h]
  char v56; // [rsp+78h] [rbp-290h]
  __int64 v57; // [rsp+80h] [rbp-288h]
  unsigned __int64 v58; // [rsp+88h] [rbp-280h]
  char *v59; // [rsp+90h] [rbp-278h]
  signed __int64 v60; // [rsp+98h] [rbp-270h]
  __int64 v62; // [rsp+A8h] [rbp-260h]
  _QWORD v63[64]; // [rsp+C0h] [rbp-248h] BYREF

  v7 = *(unsigned int *)(a1 + 92);
  v50 = *(_DWORD *)(a1 + 88);
  v46 = v50 - 1;
  v56 = a4;
  v57 = a3;
  v45 = *(_DWORD *)(a1 + 92);
  v44 = (v50 - 2 + *(_DWORD *)(a1 + 24)) / (unsigned int)(v50 - 1);
  v42 = v44 + 1;
  memset(v63, 0, sizeof(v63));
  v11 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1);
  v54 = v11;
  v47 = (unsigned int)SymCryptSizeofIntFromDigits();
  if ( (a4 & 0xFFFFFFDF) != 0 )
  {
    return 32782;
  }
  else
  {
    v12 = 0;
    if ( !a3 )
      v57 = *(_QWORD *)(a1 + 648);
    SymCryptModElementCreate();
    v13 = *(unsigned int *)(a1 + 36) + a6;
    if ( (_DWORD)v7 )
    {
      v14 = v7;
      v15 = v63;
      do
      {
        if ( a3 )
        {
          v16 = SymCryptEcpointCreate(v13, v11, a1);
          v13 += v11;
        }
        else
        {
          v16 = *(__int64 *)((char *)v15 + a1 - (_QWORD)v63 + 104);
        }
        *v15++ = v16;
        --v14;
      }
      while ( v14 );
      LODWORD(v7) = v45;
    }
    v17 = SymCryptEcpointCreate(v13, v11, a1);
    v18 = v11 + v13;
    v62 = v17;
    v19 = v17;
    v52 = SymCryptEcpointCreate(v18, v11, a1);
    v20 = SymCryptIntCreate();
    v21 = SymCryptIntCreate();
    v53 = (char *)(v47 + v47 + v11 + v18);
    v22 = 4LL * v42;
    v23 = &v53[v22];
    v59 = v23;
    v24 = (unsigned __int64)&v53[v22 + 31 + v22] & 0xFFFFFFFFFFFFFFE0uLL;
    v58 = v24;
    v25 = a7
        - (*(unsigned int *)(a1 + 36)
         + v54 * (unsigned int)(v7 + 2)
         + 2 * (v47 + 16 * ((4 * (unsigned __int64)(2 * v42) + 31) >> 5)));
    SymCryptIntCopy();
    IsEqualUint32 = SymCryptIntIsEqualUint32();
    v49 = SymCryptEcpointIsZero(a1, v57, v24, v25) | IsEqualUint32;
    v55 = ~((unsigned __int64)-(__int64)(unsigned int)SymCryptIntGetBit() >> 32);
    SymCryptIntFromModulus();
    SymCryptIntSubSameSize();
    SymCryptIntMaskedCopy();
    SymCryptFixedWindowRecoding(v50, v20, v21, (_DWORD)v53, (__int64)v23, v42);
    if ( a3 )
    {
      SymCryptEcpointCopy(a1, v57, v63[0]);
      v26 = v45;
      SymCryptPrecomputation(a1, v45, (unsigned int)v63, v19, v24, v25);
    }
    else
    {
      v26 = v45;
    }
    v27 = 0;
    if ( v26 )
    {
      v28 = v63;
      do
        SymCryptEcpointMaskedCopy(
          a1,
          *v28++,
          v19,
          (unsigned int)~((unsigned __int64)-(__int64)(v27++ ^ (unsigned __int64)*(unsigned int *)&v53[4 * v44]) >> 32));
      while ( v27 < v26 );
      v24 = v58;
    }
    v29 = v52;
    v30 = v42 == 2;
    v43 = v44 - 1;
    if ( !v30 )
    {
      v31 = v53 - v23;
      v51 = &v23[4 * v44 - 4];
      v32 = v46;
      v60 = v31;
      do
      {
        if ( v32 )
        {
          v33 = v32;
          do
          {
            SymCryptEcpointDouble(a1, v19, v19, 0, v24, v25);
            --v33;
          }
          while ( v33 );
          v29 = v52;
        }
        if ( v26 )
        {
          v34 = v63;
          for ( i = 0; i < v26; ++i )
            SymCryptEcpointMaskedCopy(
              a1,
              *v34++,
              v29,
              (unsigned int)~((unsigned __int64)-(__int64)(i ^ (unsigned __int64)*(unsigned int *)&v51[v60]) >> 32));
          v19 = v62;
          v12 = 0;
          v24 = v58;
          v32 = v46;
        }
        SymCryptEcpointNegate(a1, v29, *(_DWORD *)v51, v24, v25);
        SymCryptEcpointAddDiffNonZero(a1, v19, v29, v19, v24, v25);
        v51 -= 4;
        --v43;
      }
      while ( v43 );
      v23 = v59;
    }
    if ( v46 )
    {
      v36 = v46;
      do
      {
        SymCryptEcpointDouble(a1, v19, v19, 0, v24, v25);
        --v36;
      }
      while ( v36 );
      v29 = v52;
    }
    if ( v26 )
    {
      v37 = v63;
      for ( j = 0; j < v26; ++j )
        SymCryptEcpointMaskedCopy(
          a1,
          *v37++,
          v29,
          (unsigned int)~((unsigned __int64)-(__int64)(j ^ (unsigned __int64)*(unsigned int *)v53) >> 32));
      v19 = v62;
      v24 = v58;
      v23 = v59;
    }
    SymCryptEcpointNegate(a1, v29, *(_DWORD *)v23, v24, v25);
    SymCryptEcpointAdd(a1, v19, v29, v19, 0, v24, v25);
    SymCryptEcpointNegate(a1, v19, v55, v24, v25);
    if ( *(_DWORD *)(a1 + 64) && (v56 & 0x20) != 0 )
    {
      v39 = 0;
      do
      {
        SymCryptEcpointDouble(a1, v19, v19, 0, v24, v25);
        ++v39;
      }
      while ( v39 < *(_DWORD *)(a1 + 64) );
    }
    v40 = SymCryptEcpointIsZero(a1, v19, v24, v25) | v49;
    SymCryptEcpointSetZero(a1, v29, v24, v25);
    SymCryptEcpointMaskedCopy(a1, v29, v19, v40);
    SymCryptEcpointCopy(a1, v19, a5);
  }
  return v12;
}
