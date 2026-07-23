/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x140577E50
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkCalculateUnparkCount @ 0x140234500 (PpmParkCalculateUnparkCount.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x1405785FC (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x14057864C (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14057AAD0 (PpmEventTraceHeteroResponse.c)
 */

char PpmCheckComputeHeteroResponse()
{
  __int64 *v0; // r15
  unsigned int v1; // r13d
  char v2; // si
  __int64 v3; // rbx
  int v4; // r14d
  __int16 v5; // ax
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int v8; // r12d
  __int64 v9; // rdi
  __int64 Prcb; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  size_t v14; // r10
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r14d
  unsigned int v22; // edi
  int v23; // ecx
  int v24; // r14d
  unsigned int v25; // edx
  char v26; // al
  bool v27; // zf
  size_t NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C8h]
  __int128 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h]
  _DWORD Base[64]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v34[64]; // [rsp+168h] [rbp+60h] BYREF

  v32 = 0LL;
  v31 = 0LL;
  v0 = &PpmCurrentProfile[342 * dword_140C2332C];
  if ( PpmHeteroPolicy != 4 )
  {
LABEL_43:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  v1 = 0;
  v30 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v2 = 0;
      v3 = PpmParkNodes + 272LL * v1;
      if ( *(_BYTE *)(v3 + 129) )
        break;
      v4 = 1;
      v30 = 1;
LABEL_41:
      if ( ++v1 >= PpmParkNumNodes )
      {
        if ( v4 )
          goto LABEL_43;
        return 1;
      }
    }
    v5 = *(_WORD *)(v3 + 4);
    v6 = 0LL;
    v7 = *(_QWORD *)(v3 + 8);
    LODWORD(NumOfElements) = 0;
    *(_QWORD *)&v31 = 0LL;
    v8 = *(unsigned __int8 *)(v3 + 139);
    LOWORD(v32) = v5;
    *((_QWORD *)&v31 + 1) = v7;
    while ( !(unsigned int)KeEnumerateNextProcessor(&NumOfElements, (unsigned __int16 **)&v31) )
    {
      v9 = (unsigned int)NumOfElements;
      Prcb = KeGetPrcb(NumOfElements);
      v11 = *(unsigned int *)(Prcb + 33168);
      if ( PpmCheckCurrentPipelineId != 5 )
        v11 = (unsigned int)(v11 - *(_DWORD *)(Prcb + 33176));
      v12 = PpmHeteroUtilityToNormalizedUtility(Prcb + 33128, v11);
      v6 += v12;
      Base[v9] = v12;
      LODWORD(NumOfElements) = v9 + 1;
    }
    qsort(Base, (unsigned int)NumOfElements, 4uLL, PpmUtilityComparer);
    v13 = *(unsigned __int8 *)(v3 + 6);
    v14 = 0LL;
    v15 = *(_QWORD *)(v3 + 96);
    v16 = 0LL;
    NumOfElements = 0LL;
    if ( (_DWORD)v13 )
    {
      v17 = (unsigned int)v13;
      v18 = (_QWORD *)(v15 + 8 * v13);
      do
      {
        v16 += v6 * *v18;
        v19 = v17;
        v13 = (unsigned int)(v13 - 1);
        --v17;
        v34[v13] = v16;
        v20 = *v18-- * v19;
        v14 += v20;
      }
      while ( (_DWORD)v13 );
      NumOfElements = v14;
    }
    v21 = *(unsigned __int8 *)(v3 + 129);
    v22 = v8;
    if ( v8 >= v21 )
      goto LABEL_21;
    do
    {
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v14,
                            (unsigned int)Base[v22],
                            v34[v22],
                            *((unsigned __int8 *)v0 + v22 + 1481)) )
        break;
      v14 = NumOfElements;
      ++v22;
    }
    while ( v22 < v21 );
    if ( v22 <= v8 )
    {
      do
      {
        v14 = NumOfElements;
LABEL_21:
        if ( !v22 )
          goto LABEL_24;
        v24 = v22--;
      }
      while ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                               v14,
                               (unsigned int)Base[v22],
                               v34[v22],
                               *((unsigned __int8 *)v0 + v22 + 201)) );
      v22 = v24;
LABEL_24:
      v23 = v22 < v8;
    }
    else
    {
      v23 = 2;
    }
    if ( *(char *)(v3 + 148) == v23 )
    {
      v25 = (unsigned __int8)++*(_BYTE *)(v3 + 147);
    }
    else
    {
      v25 = 1;
      *(_BYTE *)(v3 + 148) = v23;
      *(_BYTE *)(v3 + 147) = 1;
      v2 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v2 |= 0x10u;
LABEL_36:
      *(_BYTE *)(v3 + 139) = v22;
      goto LABEL_37;
    }
    if ( v23 == 2 )
    {
      if ( v25 >= *((unsigned __int8 *)v0 + 200) )
      {
        v2 |= 0x20u;
        goto LABEL_36;
      }
    }
    else if ( v23 == 1 && v25 >= *((unsigned __int8 *)v0 + 199) )
    {
      v2 |= 0x40u;
      goto LABEL_36;
    }
LABEL_37:
    v26 = *(_BYTE *)(v3 + 146) | 6;
    v27 = *(_BYTE *)(v3 + 139) == 0;
    *(_BYTE *)(v3 + 146) = v26;
    if ( v27 )
    {
      v4 = 1;
      *(_BYTE *)(v3 + 146) = v26 & 0xFD;
      v30 = 1;
    }
    else
    {
      v4 = v30;
    }
    PpmEventTraceHeteroResponse(v3, (unsigned int)Base, (unsigned int)v34, NumOfElements, v22, v2 | (2 - (v4 != 0)));
    goto LABEL_41;
  }
  return 1;
}
