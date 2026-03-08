/*
 * XREFs of SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptIntCopy @ 0x1403F3798 (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptIntIsEqualUint32 @ 0x1403F389C (SymCryptIntIsEqualUint32.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptPrecomputation @ 0x1403F93C0 (SymCryptPrecomputation.c)
 *     SymCryptEcpointCopy @ 0x1403F9464 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x1403F94A0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403F9E14 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointAdd @ 0x1403FD098 (SymCryptEcpointAdd.c)
 *     SymCryptEcpointDouble @ 0x1403FD134 (SymCryptEcpointDouble.c)
 *     SymCryptEcpointIsZero @ 0x1403FD1BC (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointNegate @ 0x1403FD258 (SymCryptEcpointNegate.c)
 *     SymCryptEcpointSetZero @ 0x1403FD318 (SymCryptEcpointSetZero.c)
 *     SymCryptWidthNafRecoding @ 0x140404004 (SymCryptWidthNafRecoding.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall SymCryptEcpointMultiScalarMulWnafWithInterleaving(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // ebp
  _QWORD *v10; // r12
  __int64 v11; // r15
  unsigned int v14; // edi
  __int64 v15; // r14
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  __int64 *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r15
  int IsZero; // ebx
  int v31; // eax
  int v32; // ebx
  _QWORD *v33; // rbx
  int i; // r12d
  unsigned int v35; // ebx
  unsigned int v36; // eax
  __int64 *v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // ebx
  char v41; // [rsp+40h] [rbp-2C8h]
  __int64 v43; // [rsp+48h] [rbp-2C0h]
  int v44; // [rsp+48h] [rbp-2C0h]
  unsigned int v45; // [rsp+50h] [rbp-2B8h]
  __int64 v46; // [rsp+58h] [rbp-2B0h]
  __int64 *v47; // [rsp+58h] [rbp-2B0h]
  __int64 v48; // [rsp+58h] [rbp-2B0h]
  int v49; // [rsp+60h] [rbp-2A8h]
  int v50; // [rsp+64h] [rbp-2A4h]
  int v51; // [rsp+68h] [rbp-2A0h]
  __int64 *v52; // [rsp+68h] [rbp-2A0h]
  __int64 v54; // [rsp+70h] [rbp-298h]
  __int64 v55; // [rsp+80h] [rbp-288h]
  int v56; // [rsp+88h] [rbp-280h]
  int v57; // [rsp+8Ch] [rbp-27Ch]
  __int64 v58; // [rsp+98h] [rbp-270h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-268h]
  _QWORD v60[64]; // [rsp+B0h] [rbp-258h] BYREF

  v9 = *(_DWORD *)(a1 + 92);
  v10 = a3;
  v11 = a8;
  v14 = 0;
  v49 = -1;
  v59 = a6;
  v56 = *(_DWORD *)(a1 + 88);
  v57 = *(_DWORD *)(a1 + 24);
  v50 = v57 + 1;
  v45 = v9;
  v58 = 0LL;
  v41 = 0;
  memset(v60, 0, sizeof(v60));
  v15 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1);
  v43 = v15;
  v46 = (unsigned int)SymCryptSizeofIntFromDigits();
  if ( (a5 & 0xFFFFFFDE) != 0 )
    return 32782;
  if ( a4 > 2 )
    return 32779;
  if ( !*v10 )
  {
    *v10 = *(_QWORD *)(a1 + 648);
    v41 = 1;
  }
  if ( (a5 & 1) == 0 )
    return 32779;
  v16 = v9 * a4;
  v17 = 0;
  if ( v16 )
  {
    v18 = v60;
    v19 = a1 - (_QWORD)v60;
    do
    {
      if ( v17 < v45 && v41 )
      {
        v20 = *(__int64 *)((char *)v18 + v19 + 104);
      }
      else
      {
        v21 = SymCryptEcpointCreate(a7, v43, a1);
        a7 += v43;
        v20 = v21;
        v19 = a1 - (_QWORD)v60;
      }
      *v18 = v20;
      ++v17;
      ++v18;
    }
    while ( v17 < v16 );
    v11 = a8;
    v10 = a3;
    v15 = v43;
  }
  v22 = SymCryptEcpointCreate(a7, v15, a1);
  v23 = v15 + a7;
  v24 = v22;
  v54 = SymCryptEcpointCreate(v23, v15, a1);
  v51 = SymCryptIntCreate();
  SymCryptIntCreate();
  v55 = v46 + v46 + v15 + v23;
  v25 = 4LL * v50 * a4;
  v26 = v25 + v55;
  v27 = (v25 + v55 + v25 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
  v28 = v43 * (v16 + 2);
  v44 = 0;
  v29 = v11 - (v28 + 2 * (v46 + 16 * ((4 * (unsigned __int64)(2 * v50 * a4) + 31) >> 5)));
  if ( a4 )
  {
    v47 = &v58;
    do
    {
      IsZero = SymCryptEcpointIsZero(a1, *v10, v27, v29);
      v31 = IsZero | SymCryptIntIsEqualUint32();
      v49 &= v31;
      *(_DWORD *)v47 = v31;
      if ( !v31 )
      {
        SymCryptIntCopy();
        v32 = v44;
        SymCryptWidthNafRecoding(v56, v51, v55 + 4 * v44 * v50, v26 + 4 * v44 * v50, v50);
        if ( !v44 && v41 )
          goto LABEL_23;
        v33 = &v60[v44 * v45];
        SymCryptEcpointCopy(a1, *v10, *v33);
        SymCryptPrecomputation(a1, v45, (_DWORD)v33, v24, v27, v29);
      }
      v32 = v44;
LABEL_23:
      v47 = (__int64 *)((char *)v47 + 4);
      ++v10;
      v44 = v32 + 1;
    }
    while ( v32 + 1 < a4 );
  }
  SymCryptEcpointSetZero(a1, v24, v27, v29);
  if ( !v49 )
  {
    for ( i = v57; i > -1; --i )
    {
      SymCryptEcpointDouble(a1, v24, v24, 0, v27, v29);
      v35 = 0;
      if ( a4 )
      {
        v36 = a4;
        v37 = &v58;
        v52 = &v58;
        do
        {
          if ( !*(_DWORD *)v37 )
          {
            v38 = i + v35 * v50;
            v48 = v38;
            if ( *(_DWORD *)(v26 + 4 * v38) )
            {
              SymCryptEcpointCopy(a1, v60[v35 * v45 + (*(_DWORD *)(v55 + 4 * v38) >> 1)], v54);
              if ( *(_DWORD *)(v26 + 4 * v48) == -1 )
                SymCryptEcpointNegate(a1, v54, -1, v27, v29);
              SymCryptEcpointAdd(a1, v24, v54, v24, 1, v27, v29);
              v37 = v52;
            }
            v36 = a4;
          }
          v37 = (__int64 *)((char *)v37 + 4);
          ++v35;
          v52 = v37;
        }
        while ( v35 < v36 );
      }
    }
  }
  if ( *(_DWORD *)(a1 + 64) && (a5 & 0x20) != 0 )
  {
    v39 = 0;
    do
    {
      SymCryptEcpointDouble(a1, v24, v24, 0, v27, v29);
      ++v39;
    }
    while ( v39 < *(_DWORD *)(a1 + 64) );
  }
  if ( (unsigned int)SymCryptEcpointIsZero(a1, v24, v27, v29) )
    SymCryptEcpointSetZero(a1, v24, v27, v29);
  SymCryptEcpointCopy(a1, v24, v59);
  return v14;
}
