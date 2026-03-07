void *__fastcall NVMeControllerFilterResourceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v6; // r14d
  char v7; // r12
  __int16 v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  void *result; // rax
  char ProcessorInformation; // al
  __int64 v14; // r10
  __int64 v15; // rbx
  unsigned int v16; // r11d
  unsigned int v17; // r15d
  _BYTE *v18; // rdx
  unsigned int v19; // r15d
  _BYTE *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // r8d
  int v24; // r14d
  unsigned int v25; // edx
  int v26; // edx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // r10
  __int64 v30; // r11
  __int16 v31; // ax
  bool v32; // zf
  unsigned int v33; // r10d
  int v34; // edx
  __int64 v35; // r8
  char v36; // r9
  __int64 v37; // r11
  unsigned int v38; // r8d
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // r8d
  __int64 v43; // r9
  __int64 v44; // rax
  const void *v45; // rdx
  __int64 v46; // r9
  int v47; // edx
  _OWORD *v48; // rcx
  unsigned int v49; // r9d
  unsigned int v50; // r10d
  __int64 v51; // rax
  int v52; // eax
  unsigned int v53; // r12d
  unsigned int v54; // esi
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // r8d
  int v58; // r9d
  __int64 v59; // r14
  __int64 v60; // r15
  int v61; // r8d
  int v62; // r13d
  int v63; // eax
  __int64 v64; // rdx
  unsigned int v65; // r15d
  __int64 v66; // rax
  unsigned int v67; // ecx
  __int64 v68; // rax
  unsigned int v69; // r12d
  __int64 v70; // r14
  __int64 v71; // r15
  int v72; // r8d
  int v73; // r13d
  int v74; // eax
  __int64 v75; // rdx
  int v76; // r14d
  unsigned int v77; // r12d
  __int64 v78; // r15
  __int64 v79; // r13
  int v80; // eax
  __int64 v81; // rdx
  unsigned int v82; // r9d
  unsigned int v83; // ecx
  int v84; // eax
  unsigned int v85; // edx
  unsigned int v86; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v87; // [rsp+44h] [rbp-2Ch]
  int v88; // [rsp+48h] [rbp-28h]
  unsigned int v89; // [rsp+4Ch] [rbp-24h]
  unsigned int v90; // [rsp+50h] [rbp-20h]
  __int64 v91; // [rsp+60h] [rbp-10h]
  int v93; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v94; // [rsp+C8h] [rbp+58h]

  v4 = a2;
  v89 = 0;
  v6 = 0;
  v90 = 0;
  v91 = 0LL;
  v7 = 1;
  v88 = 4;
  v8 = 4;
  if ( !GetProcessorGroupInformation(a1, a2, a3, a4) )
  {
    *(_DWORD *)(a1 + 36) = 9;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  ProcessorInformation = GetProcessorInformation(a1, v9, v10, v11);
  LODWORD(v14) = 0;
  if ( !ProcessorInformation )
  {
    *(_DWORD *)(a1 + 36) = 10;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  v15 = *(_QWORD *)(v4 + 8);
  v16 = *(_DWORD *)(v15 + 36);
  v94 = v16;
  v17 = v16;
  if ( v16 )
  {
    v18 = (_BYTE *)(v15 + 41);
    v19 = 0;
    do
    {
      if ( IsPci3MsiInterrupt((__int64)(v18 - 1)) )
      {
        ++v6;
      }
      else if ( *v20 == 1 && (v20[3] & 1) != 0 )
      {
        ++v19;
      }
      v18 = v20 + 32;
    }
    while ( v21 != 1 );
    v90 = v19;
    v17 = v16;
  }
  v22 = *(unsigned __int16 *)(a1 + 242);
  if ( v6 <= (int)v22 + 1 )
  {
    if ( g_HeteroSystem == (_BYTE)v14 )
      goto LABEL_50;
    if ( v6 <= 1 )
      goto LABEL_50;
    if ( v6 >= (unsigned int)v22 )
      goto LABEL_50;
    v86 = v14;
    v93 = v14;
    v87 = v14;
    v88 = v14;
    v52 = StorPortExtendedFunction(0LL, a1, v22, 1701672526LL);
    LODWORD(v14) = 0;
    if ( v52 )
      goto LABEL_50;
    v53 = *(_DWORD *)(a1 + 308);
    v54 = 0;
    if ( v53 >= v6 )
      v53 = v6 >> 1;
    if ( v6 > 2 && *(_DWORD *)(v15 + 36) )
    {
      while ( 1 )
      {
        v55 = 32LL * v54++ + v15 + 40;
        if ( IsPci3MsiInterrupt(v55) )
          break;
        if ( v54 >= v57 )
          goto LABEL_80;
      }
      *(_DWORD *)(v15 + v56 + 48) = v58;
      *(_WORD *)(v15 + v56 + 44) |= 4u;
      *(_DWORD *)(v15 + v56 + 52) = v58;
      *(_DWORD *)(v15 + v56 + 56) = v14;
      *(_DWORD *)(v15 + v56 + 60) = 3;
      *(_QWORD *)(v15 + v56 + 64) = v14;
    }
LABEL_80:
    v59 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
    while ( 1 )
    {
      v67 = *(_DWORD *)(v15 + 36);
      if ( v54 >= v67 || !v53 )
        break;
      v60 = 32LL * v54;
      if ( IsPci3MsiInterrupt(v60 + v15 + 40) )
      {
        while ( v59 )
        {
          while ( 1 )
          {
            v62 = v61;
            if ( ((1LL << v61) & v59) != 0 )
              break;
            ++v61;
          }
          LOWORD(v93) = v89;
          BYTE2(v93) = v61;
          v63 = StorPortExtendedFunction(56LL, a1, &v93, &v86);
          LODWORD(v14) = 0;
          if ( v63 )
            goto LABEL_49;
          v64 = v86;
          v59 &= ~(1LL << v62);
          v61 = v62 + 1;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 272) + 72LL * v86 + 4) )
          {
            ++v87;
            *(_DWORD *)(v15 + v60 + 48) = -2;
            *(_WORD *)(v15 + v60 + 44) |= 4u;
            *(_DWORD *)(v15 + v60 + 52) = -2;
            *(_WORD *)(v15 + v60 + 58) = v89;
            *(_WORD *)(v15 + v60 + 56) = 4;
            *(_QWORD *)(v15 + v60 + 64) = 1LL << v62;
            *(_DWORD *)(v15 + v60 + 60) = 3;
            *(_BYTE *)(v64 + v91) = 1;
            v59 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v86 + 24);
            if ( !--v53 || v59 )
              goto LABEL_94;
            break;
          }
        }
        v65 = v89;
        if ( v89 >= (unsigned int)*(unsigned __int16 *)(a1 + 240) - 1 )
          goto LABEL_49;
        v66 = *(_QWORD *)(a1 + 256);
        ++v89;
        v59 = *(_QWORD *)(v66 + 16LL * (v65 + 1) + 8);
      }
LABEL_94:
      ++v54;
    }
    v68 = *(_QWORD *)(a1 + 256);
    v89 = 1;
    v69 = v14;
    v70 = *(_QWORD *)(v68 + 8);
    if ( v54 < v67 )
    {
      do
      {
        v71 = 32LL * v54;
        if ( IsPci3MsiInterrupt(v71 + v15 + 40) )
        {
          while ( v70 )
          {
            while ( 1 )
            {
              v73 = v72;
              if ( ((1LL << v72) & v70) != 0 )
                break;
              ++v72;
            }
            LOWORD(v93) = v69;
            BYTE2(v93) = v72;
            v74 = StorPortExtendedFunction(56LL, a1, &v93, &v86);
            LODWORD(v14) = 0;
            if ( v74 )
              goto LABEL_49;
            v75 = v86;
            v70 &= ~(1LL << v73);
            v72 = v73 + 1;
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 272) + 72LL * v86 + 4) == 1 )
            {
              ++v88;
              *(_WORD *)(v15 + v71 + 44) |= 4u;
              *(_DWORD *)(v15 + v71 + 48) = -2;
              *(_DWORD *)(v15 + v71 + 52) = -2;
              *(_WORD *)(v15 + v71 + 56) = 4;
              *(_QWORD *)(v15 + v71 + 64) = 1LL << v73;
              *(_WORD *)(v15 + v71 + 58) = v69;
              *(_DWORD *)(v15 + v71 + 60) = 3;
              *(_BYTE *)(v75 + v91) = 1;
              v70 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v86 + 24);
              if ( v70 )
                goto LABEL_108;
              break;
            }
          }
          if ( v69 >= (unsigned int)*(unsigned __int16 *)(a1 + 240) - 1 )
            break;
          v70 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 16LL * ++v69 + 8);
        }
LABEL_108:
        ++v54;
      }
      while ( v54 < *(_DWORD *)(v15 + 36) );
    }
    v76 = v14;
    v77 = v14;
    v78 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
    while ( v54 < *(_DWORD *)(v15 + 36) )
    {
      v79 = 32LL * v54;
      if ( IsPci3MsiInterrupt(v79 + v15 + 40) )
      {
        while ( 1 )
        {
          if ( !v78 )
          {
            v85 = v88;
            v83 = v87;
            goto LABEL_126;
          }
          while ( ((1LL << v76) & v78) == 0 )
            ++v76;
          LOWORD(v93) = v77;
          BYTE2(v93) = v76;
          v80 = StorPortExtendedFunction(56LL, a1, &v93, &v86);
          LODWORD(v14) = 0;
          if ( v80 )
            goto LABEL_49;
          v81 = v86;
          v82 = v89;
          v78 &= ~(1LL << v76);
          if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 272) + 72LL * v86 + 4) == v89 && !*(_BYTE *)(v86 + v91) )
            break;
          ++v76;
        }
        *(_WORD *)(v15 + v79 + 58) = v77;
        *(_WORD *)(v15 + v79 + 44) |= 4u;
        *(_DWORD *)(v15 + v79 + 48) = -2;
        *(_DWORD *)(v15 + v79 + 52) = -2;
        *(_WORD *)(v15 + v79 + 56) = 4;
        *(_QWORD *)(v15 + v79 + 64) = 1LL << v76;
        *(_DWORD *)(v15 + v79 + 60) = 3;
        *(_BYTE *)(v81 + v91) = 1;
        v83 = v87;
        v78 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v86 + 24);
        ++v76;
        if ( v82 != 1 )
          v83 = v87 + 1;
        v84 = v88 + 1;
        if ( v82 != 1 )
          v84 = v88;
        v87 = v83;
        v88 = v84;
        v85 = v84;
        if ( v78 )
          goto LABEL_134;
LABEL_126:
        if ( v77 >= (unsigned int)*(unsigned __int16 *)(a1 + 240) - 1 )
        {
          if ( v54 >= *(_DWORD *)(v15 + 36) - 1 )
            goto LABEL_134;
          if ( v85 >= *(_DWORD *)(a1 + 320) )
          {
            if ( v83 >= *(_DWORD *)(a1 + 316) )
              break;
            v89 = v14;
          }
          v77 = v14;
          v78 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
        }
        else
        {
          v78 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 16LL * ++v77 + 8);
        }
        v76 = v14;
      }
LABEL_134:
      ++v54;
    }
  }
  else
  {
    v23 = v22 - v6;
    v24 = 0;
    v94 = v23 + v17 + 1;
    v25 = 0;
    if ( v16 )
    {
      do
      {
        if ( !IsPci3MsiInterrupt(32LL * v25 + v15 + 40) )
          goto LABEL_30;
        if ( v28 )
        {
          while ( ((1LL << v29) & v28) == 0 )
            ++v29;
        }
        if ( g_HeteroSystem )
        {
          if ( v7 )
          {
            v8 = 0;
            v7 = 0;
LABEL_24:
            v30 = 0LL;
            goto LABEL_25;
          }
          v8 = 4;
        }
        else if ( v8 != 4 )
        {
          goto LABEL_24;
        }
        v30 = 1LL << v29;
LABEL_25:
        *(_WORD *)(v27 + v15 + 44) |= 4u;
        v31 = v24;
        v32 = v8 == (__int16)v88;
        *(_DWORD *)(v27 + v15 + 48) = -2;
        if ( !v32 )
          v31 = 0;
        *(_DWORD *)(v27 + v15 + 52) = -2;
        *(_WORD *)(v27 + v15 + 58) = v31;
        *(_WORD *)(v27 + v15 + 56) = v8;
        *(_DWORD *)(v27 + v15 + 60) = 3;
        *(_QWORD *)(v27 + v15 + 64) = v30;
        if ( (v28 & ~(1LL << v29)) == 0 )
        {
          if ( v24 == *(unsigned __int16 *)(a1 + 240) - 1 )
          {
            v25 = v26 + 1;
            break;
          }
          ++v24;
        }
LABEL_30:
        v25 = v26 + 1;
      }
      while ( v25 < *(_DWORD *)(v15 + 36) );
    }
    v33 = *(_DWORD *)(v15 + 36);
    while ( 1 )
    {
      if ( v25 >= v33 )
      {
        LODWORD(v14) = 0;
        goto LABEL_41;
      }
      if ( IsPci3MsiInterrupt(32LL * v25 + v15 + 40) )
        break;
      v25 = v34 + 1;
    }
    LODWORD(v14) = 0;
    if ( v37 )
    {
      while ( ((1LL << v36) & v37) == 0 )
        ++v36;
    }
    *(_DWORD *)(v15 + v35 + 48) = -2;
    *(_WORD *)(v15 + v35 + 44) |= 4u;
    *(_DWORD *)(v15 + v35 + 56) = 4;
    *(_QWORD *)(v15 + v35 + 64) = 1LL << v36;
    v25 = v34 + 1;
    *(_DWORD *)(v15 + v35 + 52) = -2;
    *(_DWORD *)(v15 + v35 + 60) = 3;
LABEL_41:
    v38 = *(_DWORD *)(v15 + 36);
    while ( v25 < v38 )
    {
      if ( IsPci3MsiInterrupt(32LL * v25 + v15 + 40) )
      {
        if ( v39 < v38 )
        {
          do
          {
            if ( !IsPci3MsiInterrupt(32LL * v39 + v15 + 40) && v47 != v50 )
            {
              v51 = 32LL * v50;
              *(_OWORD *)(v51 + v15 + 40) = *v48;
              *(_OWORD *)(v51 + v15 + 56) = v48[1];
              v49 = *(_DWORD *)(v15 + 36);
            }
            v39 = v47 + 1;
          }
          while ( v39 < v49 );
          LODWORD(v14) = 0;
        }
        break;
      }
      v25 = v39 + 1;
    }
  }
LABEL_49:
  v17 = v94;
  v4 = a2;
LABEL_50:
  if ( v90 > (unsigned int)v14 )
  {
    v40 = *(_DWORD *)(v15 + 36);
    v41 = v14;
    v42 = v14;
    if ( v40 )
    {
      do
      {
        v43 = 32LL * v42;
        if ( *(_BYTE *)(v43 + v15 + 41) != 1 || (*(_BYTE *)(v43 + v15 + 44) & 1) == 0 )
        {
          if ( v42 != v41 )
          {
            v44 = 32LL * v41;
            *(_OWORD *)(v44 + v15 + 40) = *(_OWORD *)(v43 + v15 + 40);
            *(_OWORD *)(v44 + v15 + 56) = *(_OWORD *)(v43 + v15 + 56);
            v40 = *(_DWORD *)(v15 + 36);
          }
          ++v41;
        }
        ++v42;
      }
      while ( v42 < v40 );
    }
    v17 += v41 - v42;
  }
  v45 = (const void *)(32LL * *(unsigned int *)(v15 + 36) + v15 + 40);
  memmove((void *)(32LL * v17 + v15 + 40), v45, (unsigned int)*(_QWORD *)(v4 + 8) + **(_DWORD **)(v4 + 8) - (_DWORD)v45);
  result = NVMeZeroMemory(
             (void *)(*(_QWORD *)(v4 + 8) + **(unsigned int **)(v4 + 8) - 32LL * (*(_DWORD *)(v15 + 36) - v17)),
             32 * (*(_DWORD *)(v15 + 36) - v17));
  *(_DWORD *)(v15 + 36) = v17;
  if ( v91 )
    return (void *)StorPortExtendedFunction(1LL, a1, v91, v46);
  return result;
}
