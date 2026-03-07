__int64 PpmParkRegisterParking()
{
  __m128i *v0; // r15
  int v1; // r12d
  __int64 v2; // r14
  _BYTE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  unsigned __int16 v9; // si
  unsigned int v10; // edi
  __int64 v11; // r9
  unsigned int v12; // edx
  _QWORD *v13; // r8
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned int v16; // edi
  __int64 v17; // rdx
  unsigned __int16 epi16; // r12
  __int64 v19; // rcx
  __int64 v20; // r15
  unsigned int v21; // ecx
  __int64 v22; // rbx
  char *v23; // r13
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  unsigned __int8 v26; // si
  unsigned int v27; // edi
  __int64 v28; // rdi
  __int64 Prcb; // rax
  char v30; // cl
  __int64 v31; // rcx
  _BYTE *v32; // rax
  unsigned __int8 v33; // cl
  int v34; // r15d
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned __int8 *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // edi
  __int64 v42; // r12
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  void *v48; // rax
  void *v49; // rdi
  unsigned int *v50; // rbx
  __int64 v51; // r12
  unsigned int v52; // eax
  void *v53; // rcx
  size_t v54; // r8
  size_t v55; // rdi
  size_t v56; // rdi
  __int64 v57; // rcx
  unsigned int i; // r15d
  void *v59; // rcx
  unsigned __int8 *v60; // rsi
  int v61; // eax
  unsigned int v62; // eax
  size_t v63; // r8
  size_t v64; // rdi
  size_t v65; // rdi
  KIRQL v66; // r10
  PVOID v67; // rbx
  char v69; // [rsp+38h] [rbp-D0h]
  _WORD v70[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v71; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v72; // [rsp+44h] [rbp-C4h]
  unsigned __int16 v73; // [rsp+46h] [rbp-C2h]
  unsigned int v74; // [rsp+48h] [rbp-C0h]
  unsigned int v75; // [rsp+4Ch] [rbp-BCh] BYREF
  int v76; // [rsp+50h] [rbp-B8h]
  unsigned int v77; // [rsp+54h] [rbp-B4h]
  __int64 v78; // [rsp+58h] [rbp-B0h]
  __int64 Pool2; // [rsp+60h] [rbp-A8h]
  PVOID v80; // [rsp+68h] [rbp-A0h]
  char *v81; // [rsp+70h] [rbp-98h]
  __int64 v82; // [rsp+78h] [rbp-90h]
  PVOID P; // [rsp+80h] [rbp-88h]
  PVOID v84; // [rsp+88h] [rbp-80h]
  __int128 v85; // [rsp+90h] [rbp-78h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-68h]
  __m128i v87; // [rsp+A8h] [rbp-60h]
  _QWORD v88[34]; // [rsp+B8h] [rbp-50h] BYREF

  memset(v88, 0, 0x108uLL);
  v86 = 0LL;
  v0 = 0LL;
  v1 = (unsigned __int8)PpmMaxCoreClasses;
  v75 = 0;
  P = 0LL;
  v80 = 0LL;
  if ( (unsigned __int8)PpmMaxCoreClasses < 2u )
    v1 = 2;
  v84 = 0LL;
  v76 = v1;
  v2 = 0LL;
  v77 = 0;
  v69 = 0;
  v85 = 0LL;
  if ( PpmParkNodes )
  {
    v80 = (PVOID)PpmParkNodes;
    v84 = (PVOID)PpmParkHistograms;
    v77 = PpmParkNumNodes;
    if ( PpmParkNumNodes )
    {
      v3 = (_BYTE *)(PpmParkNodes + 120);
      v4 = (unsigned int)PpmParkNumNodes;
      while ( 1 )
      {
        if ( !*((_QWORD *)v3 - 9) || (*v3 & 8) == 0 )
          goto LABEL_13;
        LODWORD(v88[0]) = 2097153;
        memset((char *)v88 + 4, 0, 0x104uLL);
        v5 = *((unsigned __int16 *)v3 - 58);
        v6 = *((_QWORD *)v3 - 13);
        if ( !(_WORD)v5 )
          goto LABEL_11;
        if ( WORD1(v88[0]) > (unsigned __int16)v5 )
          break;
LABEL_12:
        PopExecuteOnTargetProcessors((__int64)v88, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
LABEL_13:
        v3 += 192;
        if ( !--v4 )
        {
          LOBYTE(v1) = v76;
          goto LABEL_15;
        }
      }
      LOWORD(v88[0]) = v5 + 1;
LABEL_11:
      v88[v5 + 1] |= v6;
      goto LABEL_12;
    }
  }
LABEL_15:
  v7 = 0;
  v8 = 0;
  v70[0] = 0;
  v9 = 0;
  v73 = 0;
  v10 = 0;
  if ( !KeNumberNodes )
  {
LABEL_20:
    Pool2 = ExAllocatePool2(64LL, 16LL * v9, 1884115024LL);
    v0 = (__m128i *)Pool2;
    if ( !Pool2 )
      goto LABEL_103;
    v82 = ExAllocatePool2(64LL, 192 * v8, 1884115024LL);
    v2 = v82;
    if ( !v82 )
      goto LABEL_103;
    v11 = ExAllocatePool2(64LL, 104 * v8 * (unsigned __int8)v1, 1884115024LL);
    if ( !v11 )
      goto LABEL_103;
    v12 = 0;
    if ( v8 )
    {
      v13 = (_QWORD *)(v2 + 184);
      do
      {
        v14 = v12 * (unsigned __int8)v1;
        ++v12;
        *v13 = v11 + 104 * v14;
        v13 += 24;
      }
      while ( v12 < v8 );
    }
    v15 = 0;
    v71 = v8;
    v16 = 0;
    v74 = 0;
    v78 = 0LL;
    if ( !KeNumberNodes )
      goto LABEL_89;
    while ( 1 )
    {
      if ( (int)KeQueryNodeActiveAffinity2(v16, (__int64)v0, v9, v70) < 0 )
        goto LABEL_102;
      v17 = 0LL;
      v72 = 0;
      if ( !v70[0] )
        goto LABEL_87;
      do
      {
        epi16 = _mm_extract_epi16(v0[(unsigned __int16)v17], 4);
        v87 = v0[(unsigned __int16)v17];
        if ( epi16 >= (unsigned __int16)PpmCheckRegistered )
          v19 = 0LL;
        else
          v19 = qword_140C0BD78[epi16];
        v20 = v19 & v87.m128i_i64[0];
        if ( (v19 & v87.m128i_i64[0]) == 0 )
          goto LABEL_85;
        v21 = v78;
        v22 = 192LL * (unsigned int)v78;
        v87.m128i_i64[0] = v22;
        *(_WORD *)(v22 + v2 + 4) = epi16;
        *(_WORD *)(v22 + v2 + 6) = v16;
        *(_WORD *)(v22 + v2 + 8) = v17;
        *(_QWORD *)(v22 + v2 + 16) = v20;
        if ( v21 >= v77
          || (v23 = (char *)v80 + v22, v81 = (char *)v80 + v22, *(unsigned __int16 *)((char *)v80 + v22 + 6) != v16)
          || *((_WORD *)v23 + 4) != (_WORD)v17 )
        {
          v23 = 0LL;
          v81 = 0LL;
        }
        v24 = v76;
        v25 = v21 + 1;
        v26 = 0;
        LODWORD(v78) = v25;
        if ( (_BYTE)v76 )
        {
          do
          {
            v27 = v26;
            if ( v26 )
            {
              v17 = (unsigned int)PpmHeteroPolicy;
              v25 = (unsigned int)-(PpmHeteroPolicy != 0);
              v27 = PpmHeteroPolicy != 0 ? v26 : 0;
              if ( PpmHeteroHgsParkingEnabled )
              {
                if ( PpmHeteroPolicy )
                  v27 = 0;
              }
            }
            if ( !(unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(v25, v17, 0LL) )
              v27 = v27 != 0;
            LOWORD(v86) = epi16;
            v28 = *(_QWORD *)(v22 + v2 + 184) + 104LL * v27;
            *((_QWORD *)&v85 + 1) = v20;
            *(_QWORD *)&v85 = 0LL;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v75, (unsigned __int16 **)&v85) )
            {
              do
              {
                Prcb = KeGetPrcb(v75);
                if ( KeHeteroSystem )
                  v30 = *(_BYTE *)(Prcb + 34056);
                else
                  v30 = *(_BYTE *)(Prcb + 34059);
                if ( v30 == v26 )
                {
                  ++*(_BYTE *)v28;
                  *(_QWORD *)(v28 + 16) |= *(_QWORD *)(Prcb + 200);
                }
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v75, (unsigned __int16 **)&v85) );
              v2 = v82;
              v22 = v87.m128i_i64[0];
            }
            v24 = v76;
            ++v26;
          }
          while ( v26 < (unsigned __int8)v76 );
          v23 = v81;
        }
        v31 = v24;
        if ( v24 )
        {
          v32 = *(_BYTE **)(v22 + v2 + 184);
          do
          {
            if ( *v32 )
              ++*(_BYTE *)(v22 + v2 + 11);
            v32 += 104;
            --v31;
          }
          while ( v31 );
        }
        v33 = *(_BYTE *)(v22 + v2 + 11);
        *(_BYTE *)(v22 + v2 + 121) = v33 > 1u;
        if ( v33 <= 1u )
          *(_BYTE *)(v22 + v2 + 120) |= 4u;
        v34 = 0;
        v35 = 0;
        if ( v33 )
        {
          do
          {
            v36 = v35++;
            v37 = (unsigned __int8 *)(*(_QWORD *)(v22 + v2 + 184) + 104 * v36);
            LODWORD(v36) = *v37;
            v34 += v36;
            v37[3] = v36;
            v37[4] = v36;
            v37[5] = v36;
          }
          while ( v35 < *(unsigned __int8 *)(v22 + v2 + 11) );
        }
        LODWORD(v88[0]) = 2097153;
        v74 += v34 + 2 * v34 + 3;
        memset((char *)v88 + 4, 0, 0x104uLL);
        v38 = *(unsigned __int16 *)(v22 + v2 + 4);
        v39 = *(_QWORD *)(v22 + v2 + 16);
        if ( !(_WORD)v38 )
          goto LABEL_66;
        if ( WORD1(v88[0]) > (unsigned __int16)v38 )
        {
          LOWORD(v88[0]) = v38 + 1;
LABEL_66:
          v88[v38 + 1] |= v39;
        }
        if ( v23 )
          v40 = *((_QWORD *)v23 + 6);
        else
          v40 = 0LL;
        if ( (int)PpmIdleInitializeConcurrency(v88, v22 + v2 + 48, v40) < 0 )
        {
LABEL_101:
          v0 = (__m128i *)Pool2;
          goto LABEL_102;
        }
        if ( *(_BYTE *)(v22 + v2 + 121) )
        {
          v41 = 0;
          if ( *(_BYTE *)(v22 + v2 + 11) )
          {
            while ( 1 )
            {
              v42 = *(_QWORD *)(v22 + v2 + 184);
              v43 = 104LL * v41;
              v44 = *(unsigned __int8 *)(v43 + v42);
              if ( !(_BYTE)v44 )
                goto LABEL_83;
              LODWORD(v88[0]) = 2097153;
              v74 += v44 + 2 * v44 + 3;
              memset((char *)v88 + 4, 0, 0x104uLL);
              v45 = *(unsigned __int16 *)(v22 + v2 + 4);
              v46 = *(_QWORD *)(v43 + v42 + 16);
              if ( !(_WORD)v45 )
                goto LABEL_77;
              if ( WORD1(v88[0]) > (unsigned __int16)v45 )
                break;
LABEL_78:
              if ( v23 && v41 < (unsigned __int8)v23[11] )
                v47 = *(_QWORD *)(*((_QWORD *)v23 + 23) + v43 + 32);
              else
                v47 = 0LL;
              if ( (int)PpmIdleInitializeConcurrency(v88, v43 + v42 + 32, v47) < 0 )
                goto LABEL_101;
LABEL_83:
              if ( ++v41 >= *(unsigned __int8 *)(v22 + v2 + 11) )
                goto LABEL_84;
            }
            LOWORD(v88[0]) = v45 + 1;
LABEL_77:
            v88[v45 + 1] |= v46;
            goto LABEL_78;
          }
        }
LABEL_84:
        v17 = v72;
        v16 = HIDWORD(v78);
        *(_BYTE *)(v22 + v2 + 10) = v34;
        *(_BYTE *)(v22 + v2 + 113) = v34;
        *(_BYTE *)(v22 + v2 + 115) = v34;
LABEL_85:
        v0 = (__m128i *)Pool2;
        LOWORD(v17) = v17 + 1;
        v72 = v17;
      }
      while ( (unsigned __int16)v17 < v70[0] );
      v9 = v73;
LABEL_87:
      HIDWORD(v78) = ++v16;
      if ( v16 >= (unsigned __int16)KeNumberNodes )
      {
        v8 = v71;
        v15 = v74;
LABEL_89:
        v48 = (void *)ExAllocatePool2(64LL, 8LL * v15, 1884115024LL);
        P = v48;
        if ( v48 )
        {
          v49 = v48;
          if ( v8 )
          {
            v7 = v71;
            v50 = (unsigned int *)(v2 + 104);
            v51 = v71;
            do
            {
              v52 = *((unsigned __int8 *)v50 - 94);
              v53 = v49;
              *((_QWORD *)v50 - 6) = v49;
              v54 = 8LL * ++v52;
              v55 = (size_t)v49 + v54;
              *v50 = v52;
              *((_QWORD *)v50 - 5) = v55;
              v56 = v54 + v55;
              *((_QWORD *)v50 - 4) = v56;
              v49 = (void *)(v54 + v56);
              memmove(v53, (const void *)(*((_QWORD *)v50 - 7) + 328LL), v54);
              memmove(*((void **)v50 - 5), (const void *)(*((_QWORD *)v50 - 7) + 328LL), 8LL * *v50);
              v57 = *((_QWORD *)v50 - 7);
              *((_QWORD *)v50 - 3) = *(_QWORD *)(v57 + 24);
              *((_QWORD *)v50 - 2) = *(_QWORD *)(v57 + 24);
              if ( *((_BYTE *)v50 + 17) )
              {
                for ( i = 0; i < *((unsigned __int8 *)v50 - 93); ++i )
                {
                  v59 = v49;
                  v60 = (unsigned __int8 *)(*((_QWORD *)v50 + 10) + 104LL * i);
                  v61 = *v60;
                  if ( (_BYTE)v61 )
                  {
                    *((_QWORD *)v60 + 5) = v49;
                    v62 = v61 + 1;
                    v63 = 8LL * v62;
                    v64 = (size_t)v49 + v63;
                    *((_DWORD *)v60 + 22) = v62;
                    *((_QWORD *)v60 + 6) = v64;
                    v65 = v63 + v64;
                    *((_QWORD *)v60 + 7) = v65;
                    v49 = (void *)(v63 + v65);
                    memmove(v59, (const void *)(*((_QWORD *)v60 + 4) + 328LL), v63);
                    memmove(
                      *((void **)v60 + 6),
                      (const void *)(*((_QWORD *)v60 + 4) + 328LL),
                      8LL * *((unsigned int *)v60 + 22));
                    *((_QWORD *)v60 + 8) = *(_QWORD *)(*((_QWORD *)v60 + 4) + 24LL);
                    *((_QWORD *)v60 + 9) = *(_QWORD *)(*((_QWORD *)v60 + 4) + 24LL);
                  }
                }
              }
              v50 += 48;
              --v51;
            }
            while ( v51 );
            v2 = v82;
          }
          else
          {
            v7 = v71;
          }
          v0 = (__m128i *)Pool2;
          v69 = 1;
          goto LABEL_103;
        }
LABEL_102:
        v7 = v71;
        goto LABEL_103;
      }
    }
  }
  while ( (unsigned int)KeQueryNodeActiveAffinity2(v10, 0LL, 0, v70) == -1073741789 )
  {
    v8 += v70[0];
    if ( v70[0] > v9 )
      v9 = v70[0];
    ++v10;
    v73 = v9;
    if ( v10 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_20;
  }
LABEL_103:
  v66 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v67 = 0LL;
  if ( !v69 )
    v67 = P;
  PpmParkNumNodes = v69 != 0 ? v7 : 0;
  PpmParkNodes = v2 & -(__int64)(v69 != 0);
  PpmParkHistograms = (unsigned __int64)P & -(__int64)(v69 != 0);
  KeReleaseSpinLock(&PpmParkStateLock, v66);
  PpmParkFreeAllParkNodes(v80, v69);
  if ( v67 )
    ExFreePoolWithTag(v67, 0x704D5050u);
  if ( v84 )
    ExFreePoolWithTag(v84, 0x704D5050u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
