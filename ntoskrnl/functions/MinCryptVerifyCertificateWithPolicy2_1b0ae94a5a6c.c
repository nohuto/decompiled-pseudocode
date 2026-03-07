__int64 __fastcall MinCryptVerifyCertificateWithPolicy2(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r14
  int v7; // r12d
  int v8; // edi
  __int64 Pool2; // rax
  _DWORD *v10; // r13
  int CertificateEKUs; // ebx
  __int64 v12; // rsi
  unsigned int i; // edx
  char v14; // cl
  __int64 v15; // r12
  char *v16; // rbx
  int v17; // edi
  char *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned int v21; // eax
  BOOL v22; // ecx
  char v23; // al
  unsigned int *v24; // rbx
  __int64 j; // r12
  __int64 *v26; // rcx
  int v27; // r12d
  int v28; // edx
  int v29; // edx
  __int64 *RootByName; // rax
  int v31; // r12d
  __int64 IssuerCertificateByName; // rax
  __int64 v33; // rbx
  int v35; // [rsp+40h] [rbp-F8h]
  int v36; // [rsp+60h] [rbp-D8h] BYREF
  int v37; // [rsp+64h] [rbp-D4h]
  int v38; // [rsp+68h] [rbp-D0h]
  char v39; // [rsp+6Ch] [rbp-CCh]
  int v40; // [rsp+70h] [rbp-C8h]
  char v41; // [rsp+74h] [rbp-C4h]
  int v42; // [rsp+78h] [rbp-C0h]
  int v43; // [rsp+7Ch] [rbp-BCh] BYREF
  unsigned int v44; // [rsp+80h] [rbp-B8h]
  int v45; // [rsp+84h] [rbp-B4h]
  int v46; // [rsp+88h] [rbp-B0h]
  int v47; // [rsp+8Ch] [rbp-ACh]
  int v48; // [rsp+90h] [rbp-A8h]
  __int64 v49; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-90h]
  unsigned int v52; // [rsp+B0h] [rbp-88h] BYREF
  int v53; // [rsp+B4h] [rbp-84h]
  void *Src; // [rsp+B8h] [rbp-80h]
  _DWORD *v55; // [rsp+C0h] [rbp-78h]
  __int64 v56; // [rsp+C8h] [rbp-70h]
  unsigned int v57; // [rsp+D0h] [rbp-68h]
  __int64 v58; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-58h]
  __int64 v60; // [rsp+E8h] [rbp-50h]
  char *v61; // [rsp+F0h] [rbp-48h]
  __int64 v62; // [rsp+F8h] [rbp-40h]
  int v63[2]; // [rsp+100h] [rbp-38h]
  int v64[2]; // [rsp+108h] [rbp-30h]
  char v68; // [rsp+168h] [rbp+30h]
  unsigned int v69; // [rsp+168h] [rbp+30h]

  v6 = a1;
  *(_QWORD *)v64 = 0LL;
  v38 = 0;
  v48 = 0;
  v43 = 50;
  v46 = 0;
  v44 = 0;
  v36 = 0;
  v7 = 0;
  v37 = 0;
  v8 = 48;
  v40 = 48;
  v45 = 0;
  v59 = 0LL;
  v47 = 0;
  v58 = 0LL;
  v42 = 0;
  Src = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v39 = 0;
  v56 = 0x7FFFFFFFFFFFFFFFLL;
  v62 = a1;
  Pool2 = ExAllocatePool2(258LL, 2976LL, 1919109443LL);
  v10 = (_DWORD *)Pool2;
  v55 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    CertificateEKUs = -1073741801;
    v38 = -1073741801;
    v12 = a5;
    goto LABEL_101;
  }
  v51 = Pool2 + 800;
  v60 = Pool2 + 976;
  Src = (void *)(Pool2 + 1776);
  CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(v6 + 224), &v43, Pool2);
  v38 = CertificateEKUs;
  if ( CertificateEKUs >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      v57 = i;
      if ( i >= v43 )
        break;
      v8 += ((v10[4 * i] + 3) & 0xFFFFFFFC) + 16;
      v40 = v8;
    }
    if ( a4
      && (*(_DWORD *)(a4 + 4) & 1) == 0
      && !(unsigned __int8)I_MinCryptCheckEKURequirements((unsigned int)v43, v10, a4) )
    {
      v36 |= 0x80000u;
      CertificateEKUs = -1073740760;
LABEL_11:
      v38 = CertificateEKUs;
      v40 = v8;
      goto LABEL_99;
    }
    if ( !(unsigned __int8)MinAsn1DecodeTime(v6 + 128, &v49) || !(unsigned __int8)MinAsn1DecodeTime(v6 + 144, &v50) )
    {
      v49 = 0LL;
      v50 = 0LL;
    }
    v68 = I_MinCryptCheckEKU((const void **)&qword_140A75AD0, v43, (__int64)v10);
    if ( v68 && g_FlightSignedNotBefore > 0 && v49 < g_FlightSignedNotBefore )
    {
      v36 |= 0x600000u;
      CertificateEKUs = -1073740283;
      goto LABEL_11;
    }
    if ( !g_IgnoreLifetimeSigningEKU && I_MinCryptCheckEKU((const void **)&qword_140A75AC0, v43, (__int64)v10) )
    {
      v14 = 0;
      v41 = 0;
      if ( !v68 && MEMORY[0xFFFFF78000000014] < v49 || MEMORY[0xFFFFF78000000014] > v50 )
      {
        v14 = 1;
        v41 = 1;
      }
      if ( v14 )
      {
        v36 |= 0x400000u;
        CertificateEKUs = -1073740283;
        v38 = -1073740283;
        v40 = v8;
        v10 = v55;
        goto LABEL_99;
      }
      CertificateEKUs = v38;
      v6 = v62;
      v10 = v55;
    }
    v40 = v8;
    v12 = a5;
    while ( 1 )
    {
      if ( v46 )
        goto LABEL_100;
      v15 = 120LL * (unsigned int)v45;
      v61 = (char *)Src + v15 + 8;
      v69 = MinCryptDecodeHashAlgorithmIdentifier(v6 + 48);
      CertificateEKUs = MinCryptHashMemory(v69);
      v38 = CertificateEKUs;
      if ( CertificateEKUs < 0 )
      {
        v36 |= 0x40000u;
        goto LABEL_100;
      }
      v16 = (char *)Src;
      *(_DWORD *)((char *)Src + v15) = v69;
      *(_DWORD *)&v16[v15 + 4] = v44;
      *(_OWORD *)&v16[v15 + 104] = *(_OWORD *)(v6 + 16);
      v17 = ((*(_DWORD *)(v6 + 16) + 3) & 0xFFFFFFFC) + v8;
      v40 = v17;
      v18 = &v16[v15 + 72];
      *(_OWORD *)v18 = 0LL;
      *(_OWORD *)&v16[v15 + 88] = 0LL;
      if ( a5 )
      {
        if ( (unsigned __int8)I_MinCryptGetCommonName(v6 + 160, (__int64)v18) )
        {
          v17 += (*(unsigned __int16 *)&v16[v15 + 80] + 3) & 0xFFFFFFFC;
          v40 = v17;
        }
        if ( (unsigned __int8)I_MinCryptGetCommonName(v6 + 112, (__int64)&v16[v15 + 88]) )
        {
          v17 += (*(unsigned __int16 *)&v16[v15 + 96] + 3) & 0xFFFFFFFC;
          v40 = v17;
        }
      }
      ++v45;
      v8 = v17 + 120;
      v40 = v8;
      if ( I_MinCryptIsCertificateHashRevokedV2(v69, &v16[v15 + 8], v44, &v58) )
      {
        v38 = -1073740285;
        v47 = 1;
        v36 |= 0x200000u;
        v19 = v56;
        if ( v58 < v56 )
          v19 = v58;
        v56 = v19;
      }
      v38 = 0;
      if ( a4 && (*(_DWORD *)(a4 + 4) & 1) != 0 )
      {
        v52 = 50;
        v20 = v60;
        CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(v6 + 224), &v52, v60);
        v38 = CertificateEKUs;
        if ( CertificateEKUs < 0 )
          goto LABEL_100;
        if ( !(unsigned __int8)I_MinCryptCheckEKURequirements(v52, v20, a4) )
        {
          v36 |= 0x80000u;
LABEL_46:
          CertificateEKUs = -1073740760;
          v38 = -1073740760;
          goto LABEL_100;
        }
      }
      v21 = *(_DWORD *)(v6 + 112);
      if ( v21 == *(_DWORD *)(v6 + 160) )
      {
        v22 = memcmp(*(const void **)(v6 + 120), *(const void **)(v6 + 168), v21) == 0;
        v23 = v39;
        if ( v22 )
          v23 = 1;
        v39 = v23;
      }
      CertificateEKUs = MincryptValidateBasicConstraints((_DWORD *)(v6 + 224), v48, v39, &v36);
      v38 = CertificateEKUs;
      if ( CertificateEKUs < 0 )
        goto LABEL_100;
      if ( v39 )
        break;
      if ( a5 )
      {
        v29 = v37;
        *(_OWORD *)(v51 + 16LL * (unsigned int)v37) = *(_OWORD *)(v6 + 176);
        v37 = v29 + 1;
        v8 += ((*(_DWORD *)(v6 + 176) + 3) & 0xFFFFFFFC) + 16;
        v40 = v8;
      }
      RootByName = I_MinCryptFindRootByName((const void **)(v6 + 112), a4);
      if ( !RootByName )
      {
        IssuerCertificateByName = I_MinCryptFindIssuerCertificateByName((unsigned int *)(v6 + 112), a2, a3, a4, v60);
        v33 = IssuerCertificateByName;
        v59 = IssuerCertificateByName;
        if ( IssuerCertificateByName )
        {
          v33 = IssuerCertificateByName & -(__int64)((unsigned int)MinCryptDecodeHashAlgorithmIdentifier(IssuerCertificateByName + 48) != 0);
          v59 = v33;
        }
        if ( !v33 )
        {
          if ( a4 )
          {
            if ( (*(_DWORD *)(a4 + 4) & 0x20) != 0 )
            {
              CertificateEKUs = MinCryptCheckCertsAndKeys(
                                  v69,
                                  (int)v61,
                                  v44,
                                  v6,
                                  *(unsigned int **)(a4 + 120),
                                  *(_DWORD *)(a4 + 112),
                                  v35,
                                  *(_DWORD *)(a4 + 96));
              v38 = CertificateEKUs;
              if ( CertificateEKUs >= 0 )
              {
                v36 |= 0x4000u;
                goto LABEL_100;
              }
            }
          }
          v42 = 1;
          if ( a5 )
          {
            v36 |= 0x10u;
            CertificateEKUs = 0;
          }
          else
          {
            v36 |= 0x20000u;
            CertificateEKUs = -1073740760;
          }
          v38 = CertificateEKUs;
          v7 = v37;
          goto LABEL_101;
        }
        v24 = (unsigned int *)(v33 + 176);
        goto LABEL_88;
      }
      v24 = (unsigned int *)(RootByName + 2);
      v36 |= *((_DWORD *)RootByName + 8);
      v42 = *((_DWORD *)RootByName + 9);
      v46 = 1;
      if ( !a5 )
        goto LABEL_88;
      v31 = v37;
      *(_OWORD *)(v51 + 16LL * (unsigned int)v37) = *(_OWORD *)v24;
      v7 = v31 + 1;
      v37 = v7;
      v8 += ((*v24 + 3) & 0xFFFFFFFC) + 16;
      v40 = v8;
LABEL_89:
      CertificateEKUs = MinCryptVerifySignedHash2(v69, (int)v61, v44, (unsigned int *)(v6 + 64), (__int64)v24, a4);
      v38 = CertificateEKUs;
      if ( CertificateEKUs < 0 )
      {
        v36 |= 0x40000u;
        goto LABEL_101;
      }
      if ( !v46 )
      {
        if ( (unsigned int)++v48 >= 0xA )
        {
          v42 = 1;
          if ( a5 )
          {
            v36 |= 0x10u;
            CertificateEKUs = 0;
          }
          else
          {
            v36 |= 0x20000u;
            CertificateEKUs = -1073740760;
          }
          v38 = CertificateEKUs;
          goto LABEL_101;
        }
        v6 = v59;
        v62 = v59;
      }
    }
    v24 = (unsigned int *)(v6 + 176);
    v53 = 0;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v53 = j;
      if ( (unsigned int)j >= 0x13 )
        break;
      *(_QWORD *)v63 = 5 * j;
      if ( *v24 == LODWORD(RootTable[5 * j + 2])
        && RtlCompareMemory(*(const void **)(v6 + 184), (const void *)RootTable[5 * j + 3], *v24) == *v24 )
      {
        v26 = &RootTable[*(_QWORD *)v63];
        goto LABEL_60;
      }
    }
    v26 = 0LL;
LABEL_60:
    if ( v26 )
    {
      v24 = (unsigned int *)(v26 + 2);
      v36 |= *((_DWORD *)v26 + 8) | 1;
      v42 = *((_DWORD *)v26 + 9);
    }
    else
    {
      if ( !a5 )
        goto LABEL_46;
      v27 = v36 | 1;
      v36 |= 1u;
      v42 = 2;
      if ( a4
        && (*(_DWORD *)(a4 + 4) & 0x20) != 0
        && ((unsigned int)MinCryptIsCertPresent((const void **)(v6 + 16), *(_QWORD *)(a4 + 120), *(_DWORD *)(a4 + 112))
         || (unsigned int)MinCryptIsKeyPresent(v6 + 176, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 96))) )
      {
        v36 = v27 | 0x4000;
      }
    }
    if ( a5 )
    {
      v28 = v37;
      *(_OWORD *)(v51 + 16LL * (unsigned int)v37) = *(_OWORD *)v24;
      v37 = v28 + 1;
      v8 += ((*v24 + 3) & 0xFFFFFFFC) + 16;
      v40 = v8;
    }
    v46 = 1;
LABEL_88:
    v7 = v37;
    goto LABEL_89;
  }
LABEL_99:
  v12 = a5;
LABEL_100:
  v7 = v37;
LABEL_101:
  if ( v12 )
  {
    *(_DWORD *)v12 = 48;
    *(_DWORD *)(v12 + 4) = CertificateEKUs;
    *(_DWORD *)(v12 + 8) = v36;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v12 + 32) = v49;
    *(_QWORD *)(v12 + 40) = v50;
    if ( v47 )
      *(_QWORD *)(v12 + 24) = v56;
    if ( CertificateEKUs >= 0 )
      CertificateEKUs = I_MincryptAddChainInfo(v12, v8, v43, v7, v45, v42, (__int64)v10, v51, Src, 0LL);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72634943u);
  if ( CertificateEKUs >= 0 && v47 )
    return (unsigned int)-1073740285;
  return (unsigned int)CertificateEKUs;
}
