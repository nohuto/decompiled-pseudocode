__int64 __fastcall HalpInterruptDpReplaceBegin(
        char *a1,
        _DWORD *a2,
        ULONG *a3,
        unsigned int a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  unsigned int v8; // ebx
  __int64 v9; // r9
  char *v11; // r10
  _DWORD *v12; // r8
  unsigned int v13; // r14d
  unsigned int v14; // edx
  ULONG_PTR v15; // rcx
  unsigned int v16; // r12d
  __int64 v17; // r13
  unsigned int v18; // esi
  ULONG_PTR v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, char *, __int128 *, __int64); // r15
  __int64 v23; // r13
  unsigned int v24; // esi
  char *v25; // r14
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  unsigned int v30; // r14d
  char *v31; // r12
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // r9
  int v37; // r12d
  int v38; // eax
  __int64 v39; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v41; // rcx
  int v42; // eax
  unsigned int v44; // [rsp+20h] [rbp-50h]
  int v45; // [rsp+30h] [rbp-40h]
  int v46; // [rsp+30h] [rbp-40h]
  __int128 v47; // [rsp+38h] [rbp-38h] BYREF
  int v48; // [rsp+48h] [rbp-28h]
  __int128 v49; // [rsp+50h] [rbp-20h] BYREF
  int v50; // [rsp+60h] [rbp-10h]
  char *v51; // [rsp+B0h] [rbp+40h]
  _DWORD *v52; // [rsp+B8h] [rbp+48h]
  int v53; // [rsp+C8h] [rbp+58h]

  v52 = a2;
  v51 = a1;
  v53 = 0;
  v8 = 0;
  v48 = 0;
  v9 = 0LL;
  v50 = 0;
  v11 = a1;
  v47 = 0LL;
  *a7 = 0;
  v49 = 0LL;
  if ( a4 )
  {
    v12 = a2;
    while ( 1 )
    {
      v13 = HalpInterruptProcessorCount;
      v14 = 0;
      if ( (_DWORD)HalpInterruptProcessorCount )
        break;
LABEL_7:
      v9 = (unsigned int)(v9 + 1);
      ++v12;
      if ( (unsigned int)v9 >= a4 )
      {
        v16 = 0;
        v17 = v11 - (char *)a3;
        while ( 1 )
        {
          v18 = 0;
          if ( v13 )
          {
            while ( 1 )
            {
              v19 = HalpInterruptProcessorState + ((unsigned __int64)v18 << 6);
              if ( *(_BYTE *)(v19 + 12) )
              {
                if ( *(_BYTE *)(v19 + 13) && *(_DWORD *)v19 == *(ULONG *)((char *)a3 + v17) )
                  break;
              }
              if ( ++v18 >= v13 )
                goto LABEL_19;
            }
            *a3 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v19 + 16));
          }
LABEL_19:
          if ( v18 == v13 )
            break;
          ++v16;
          ++a3;
          if ( v16 >= a4 )
          {
            a2 = v52;
            v11 = v51;
            goto LABEL_22;
          }
        }
        v44 = 187;
        v20 = 21;
        goto LABEL_16;
      }
    }
    while ( 1 )
    {
      v15 = HalpInterruptProcessorState + ((unsigned __int64)v14 << 6);
      if ( *(_BYTE *)(v15 + 13) )
      {
        if ( *(_DWORD *)v15 == *v12 )
          break;
      }
      if ( ++v14 >= (unsigned int)HalpInterruptProcessorCount )
        goto LABEL_7;
    }
    v44 = 151;
    v20 = 24;
LABEL_16:
    v21 = 0LL;
    goto LABEL_17;
  }
LABEL_22:
  v22 = *(__int64 (__fastcall **)(__int64, char *, __int128 *, __int64))(HalpInterruptController + 144);
  v23 = *(_QWORD *)(HalpInterruptController + 16);
  if ( a4 && v22 && !HalpInterruptPhysicalModeOnly && !a5 )
  {
    v24 = 0;
    v25 = (char *)a2;
    v26 = v11 - (char *)a2;
    while ( 1 )
    {
      LOBYTE(v9) = 1;
      v27 = v22(v23, &v25[v26], &v49, v9);
      v8 = v27;
      if ( v27 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v27,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xECu);
        return v8;
      }
      LOBYTE(v28) = 1;
      v29 = v22(v23, v25, &v47, v28);
      v8 = v29;
      if ( v29 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v29,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xF9u);
        return v8;
      }
      if ( DWORD2(v49) != DWORD2(v47) )
        break;
      v25 += 4;
      if ( ++v24 >= a4 )
        goto LABEL_32;
    }
    if ( v24 >= a4 )
      goto LABEL_32;
    v30 = 0;
    while ( 2 )
    {
      v31 = v51;
      v32 = 0;
      do
      {
        LOBYTE(v9) = 1;
        v45 = v32;
        v33 = v22(v23, v31, &v49, v9);
        v8 = v33;
        if ( v33 < 0 )
        {
          HalpInterruptSetProblemEx(
            HalpInterruptController,
            9,
            v33,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
            0x129u);
          return v8;
        }
        v34 = v53;
        if ( !v32 )
          v34 = DWORD2(v49);
        v31 += 4;
        ++v30;
        v53 = v34;
        ++v32;
        v51 = v31;
      }
      while ( v30 < a4 && DWORD2(v49) == v34 );
      LOBYTE(v9) = 1;
      v35 = v22(v23, (char *)v52, &v47, v9);
      v8 = v35;
      if ( v35 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v35,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0x151u);
        return v8;
      }
      LOBYTE(v36) = 1;
      v37 = DWORD2(v47);
      v38 = v22(v23, (char *)&v52[v45], &v47, v36);
      v8 = v38;
      if ( v38 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v38,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0x162u);
        return v8;
      }
      v46 = DWORD2(v47);
      if ( v37 == DWORD2(v47) )
      {
        for ( i = HalpInterruptClusterData; i < HalpInterruptClusterDataEnd; i += 24LL )
        {
          if ( *(_DWORD *)i == v37 )
          {
            v41 = *(_QWORD *)(i + 8) - ((*(_QWORD *)(i + 8) >> 1) & 0x5555555555555555LL);
            if ( (unsigned int)((0x101010101010101LL
                               * (((v41 & 0x3333333333333333LL)
                                 + ((v41 >> 2) & 0x3333333333333333LL)
                                 + (((v41 & 0x3333333333333333LL) + ((v41 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
            {
              v44 = 397;
              v20 = 26;
              goto LABEL_64;
            }
            break;
          }
        }
        if ( v32 )
        {
          v44 = 412;
          v20 = 25;
          goto LABEL_16;
        }
        if ( v30 >= a4 )
          goto LABEL_32;
        LOBYTE(v39) = 1;
        v42 = v22(v23, (char *)v52, &v47, v39);
        v8 = v42;
        if ( v42 < 0 )
        {
          HalpInterruptSetProblemEx(
            HalpInterruptController,
            9,
            v42,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
            0x1ACu);
          return v8;
        }
        if ( v46 != DWORD2(v47) )
          continue;
        v44 = 449;
        v20 = 27;
      }
      else
      {
        v44 = 372;
        v20 = 25;
      }
      break;
    }
LABEL_64:
    v21 = HalpInterruptController;
LABEL_17:
    HalpInterruptSetProblemEx(v21, v20, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", v44);
    return (unsigned int)-1073741811;
  }
LABEL_32:
  if ( a6 && a4 )
  {
    if ( a5 || !HalpInterruptPhysicalModeOnly )
    {
      *a7 = *(_DWORD *)(HalpInterruptController + 312);
      return v8;
    }
    v44 = 476;
    v20 = 28;
    goto LABEL_64;
  }
  return v8;
}
