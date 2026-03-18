/*
 * XREFs of SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SymCryptIntCopy @ 0x140400B8C (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntIsEqualUint32 @ 0x140400C90 (SymCryptIntIsEqualUint32.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptPrecomputation @ 0x140406800 (SymCryptPrecomputation.c)
 *     SymCryptEcpointCopy @ 0x1404068A4 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x1404068E0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140407254 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointAdd @ 0x14040A528 (SymCryptEcpointAdd.c)
 *     SymCryptEcpointDouble @ 0x14040A5C4 (SymCryptEcpointDouble.c)
 *     SymCryptEcpointIsZero @ 0x14040A64C (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointNegate @ 0x14040A6E8 (SymCryptEcpointNegate.c)
 *     SymCryptEcpointSetZero @ 0x14040A7A8 (SymCryptEcpointSetZero.c)
 *     SymCryptWidthNafRecoding @ 0x140411568 (SymCryptWidthNafRecoding.c)
 *     memset @ 0x140435E00 (memset.c)
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
  unsigned int v9; // r14d
  unsigned int v12; // esi
  char v14; // dl
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 *v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r14
  __int64 v25; // r13
  unsigned int v26; // eax
  __int64 v27; // r13
  __int64 v28; // r13
  unsigned int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int64 v32; // r15
  int v33; // ebx
  int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // rdi
  int IsZero; // ebx
  int v38; // eax
  int v39; // ebx
  _QWORD *v40; // rbx
  int i; // r12d
  unsigned int v42; // ecx
  unsigned int v43; // ebx
  __int64 *v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // ebx
  char v48; // [rsp+40h] [rbp-2B8h]
  unsigned int v49; // [rsp+44h] [rbp-2B4h]
  int v50; // [rsp+44h] [rbp-2B4h]
  unsigned int v51; // [rsp+48h] [rbp-2B0h]
  int v53; // [rsp+50h] [rbp-2A8h]
  int v54; // [rsp+54h] [rbp-2A4h]
  __int64 v55; // [rsp+58h] [rbp-2A0h]
  int v56; // [rsp+58h] [rbp-2A0h]
  __int64 *v57; // [rsp+58h] [rbp-2A0h]
  __int64 *v58; // [rsp+60h] [rbp-298h]
  __int64 v59; // [rsp+60h] [rbp-298h]
  __int64 v60; // [rsp+70h] [rbp-288h]
  int v61; // [rsp+78h] [rbp-280h]
  int v62; // [rsp+7Ch] [rbp-27Ch]
  __int64 v63; // [rsp+88h] [rbp-270h]
  __int64 v64; // [rsp+90h] [rbp-268h] BYREF
  __int64 v65; // [rsp+98h] [rbp-260h]
  _QWORD v66[64]; // [rsp+A0h] [rbp-258h] BYREF

  v9 = *(_DWORD *)(a1 + 92);
  v12 = 0;
  v53 = -1;
  v65 = a6;
  v61 = *(_DWORD *)(a1 + 88);
  v62 = *(_DWORD *)(a1 + 24);
  v54 = v62 + 1;
  v51 = v9;
  v64 = 0LL;
  v48 = 0;
  memset(v66, 0, sizeof(v66));
  if ( (a5 & 0xFFFFFFDE) != 0 )
    return 209715726;
  if ( a4 > 2 )
    return 209715723;
  if ( *a3 )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    *a3 = *(_QWORD *)(a1 + 648);
    v48 = 1;
  }
  if ( (a5 & 1) == 0 )
    return 209715723;
  v15 = v9 * a4;
  v16 = 0;
  v49 = v15;
  if ( v15 )
  {
    v17 = a1 - (_QWORD)v66;
    v18 = v66;
    v19 = v51;
    do
    {
      if ( v16 < v19 && v14 )
      {
        v20 = *(__int64 *)((char *)v18 + v17 + 104);
      }
      else
      {
        v21 = SymCryptSizeofEcpointFromCurve(a1);
        v55 = SymCryptEcpointCreate(a7, v21, a1);
        v22 = SymCryptSizeofEcpointFromCurve(a1);
        v17 = a1 - (_QWORD)v66;
        v14 = v48;
        v20 = v55;
        a7 += v22;
        v19 = v51;
      }
      *v18 = v20;
      ++v16;
      ++v18;
    }
    while ( v16 < v15 );
  }
  v23 = SymCryptSizeofEcpointFromCurve(a1);
  v24 = SymCryptEcpointCreate(a7, v23, a1);
  v25 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + a7;
  v26 = SymCryptSizeofEcpointFromCurve(a1);
  v63 = SymCryptEcpointCreate(v25, v26, a1);
  v27 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + v25;
  SymCryptSizeofIntFromDigits();
  v56 = SymCryptIntCreate();
  v28 = (unsigned int)SymCryptSizeofIntFromDigits() + v27;
  SymCryptSizeofIntFromDigits();
  SymCryptIntCreate();
  v60 = (unsigned int)SymCryptSizeofIntFromDigits() + v28;
  v29 = v54 * a4;
  v30 = 4LL * v29;
  v31 = v30 + v60;
  v32 = (v30 + v60 + v30 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
  v33 = 2 * SymCryptSizeofIntFromDigits();
  v34 = SymCryptSizeofEcpointFromCurve(a1);
  v35 = v49 + 2;
  v50 = 0;
  v36 = a8 - (((8LL * v29 + 31) & 0xFFFFFFFFFFFFFFE0uLL) + v33 + v35 * v34);
  if ( a4 )
  {
    v58 = &v64;
    do
    {
      IsZero = SymCryptEcpointIsZero(a1, *a3);
      v38 = IsZero | SymCryptIntIsEqualUint32();
      v53 &= v38;
      *(_DWORD *)v58 = v38;
      if ( !v38 )
      {
        SymCryptIntCopy();
        v39 = v50;
        SymCryptWidthNafRecoding(v61, v56, v60 + 4 * v50 * v54, v31 + 4 * v50 * v54, v54);
        if ( !v50 && v48 )
          goto LABEL_23;
        v40 = &v66[v50 * v51];
        SymCryptEcpointCopy(a1, *a3, *v40);
        SymCryptPrecomputation(a1, v51, (_DWORD)v40, v24, v32, v36);
      }
      v39 = v50;
LABEL_23:
      v58 = (__int64 *)((char *)v58 + 4);
      ++a3;
      v50 = v39 + 1;
    }
    while ( v39 + 1 < a4 );
  }
  SymCryptEcpointSetZero(a1, v24, v32, v36);
  if ( !v53 )
  {
    for ( i = v62; i > -1; --i )
    {
      SymCryptEcpointDouble(a1, v24, v24, 0, v32, v36);
      v42 = a4;
      v43 = 0;
      if ( a4 )
      {
        v44 = &v64;
        v57 = &v64;
        do
        {
          if ( !*(_DWORD *)v44 )
          {
            v45 = i + v43 * v54;
            v59 = v45;
            if ( *(_DWORD *)(v31 + 4 * v45) )
            {
              SymCryptEcpointCopy(a1, v66[v43 * v51 + (*(_DWORD *)(v60 + 4 * v45) >> 1)], v63);
              if ( *(_DWORD *)(v31 + 4 * v59) == -1 )
                SymCryptEcpointNegate(a1, v63, -1, v32, v36);
              SymCryptEcpointAdd(a1, v24, v63, v24, 1, v32, v36);
              v42 = a4;
              v44 = v57;
            }
          }
          v44 = (__int64 *)((char *)v44 + 4);
          ++v43;
          v57 = v44;
        }
        while ( v43 < v42 );
      }
    }
  }
  if ( *(_DWORD *)(a1 + 64) && (a5 & 0x20) != 0 )
  {
    v46 = 0;
    do
    {
      SymCryptEcpointDouble(a1, v24, v24, 0, v32, v36);
      ++v46;
    }
    while ( v46 < *(_DWORD *)(a1 + 64) );
  }
  if ( (unsigned int)SymCryptEcpointIsZero(a1, v24) )
    SymCryptEcpointSetZero(a1, v24, v32, v36);
  SymCryptEcpointCopy(a1, v24, v65);
  return v12;
}
