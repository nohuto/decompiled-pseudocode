/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x140593FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmParkCalculateUnparkCount @ 0x1402EBC70 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x14038E12C (PpmHeteroIsMultiClassParkingEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140594418 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14059553C (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmEventTraceHeteroResponse @ 0x14059945C (PpmEventTraceHeteroResponse.c)
 */

char PpmCheckComputeHeteroResponse()
{
  __int64 v0; // rcx
  unsigned int v1; // ecx
  char v2; // si
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r14
  __int16 v6; // cx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  int v10; // eax
  size_t v11; // rbx
  _DWORD *Prcb; // rax
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r13
  unsigned __int8 v29; // al
  unsigned int v30; // r15d
  __int64 v31; // rbx
  __int64 *v32; // r13
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // r15d
  unsigned __int8 v39; // al
  unsigned int v40; // edx
  bool v41; // zf
  unsigned int NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int NumOfElements_4; // [rsp+3Ch] [rbp-CCh]
  __int64 v45; // [rsp+40h] [rbp-C8h]
  __int64 v46; // [rsp+48h] [rbp-C0h]
  __int64 *v47; // [rsp+50h] [rbp-B8h]
  __int64 v48; // [rsp+58h] [rbp-B0h]
  __int128 v49; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h]
  _DWORD v51[64]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD Base[64]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v53[64]; // [rsp+278h] [rbp+170h] BYREF

  v50 = 0LL;
  v0 = 55LL * dword_140C3D48C;
  v49 = 0LL;
  v47 = &PpmCurrentProfile[v0 + 5];
  if ( PpmHeteroPolicy != 4 )
    goto LABEL_58;
  if ( !PpmHeteroIsMultiClassParkingEnabled(v0 * 8, (__int64)PpmCurrentProfile) )
  {
    v1 = 0;
    LODWORD(v46) = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v2 = 0;
        v3 = PpmParkNodes + 192LL * v1;
        if ( !PpmHeteroHgsParkingEnabled || *(_BYTE *)(*(_QWORD *)(v3 + 184) + 104LL) || PpmHeteroPolicy )
          break;
LABEL_57:
        LODWORD(v46) = ++v1;
        if ( v1 >= PpmParkNumNodes )
          goto LABEL_58;
      }
      v4 = *(_QWORD *)(v3 + 184);
      v5 = 0LL;
      v6 = *(_WORD *)(v3 + 4);
      v7 = 0LL;
      v8 = *(_QWORD *)(v3 + 16);
      NumOfElements = 0;
      v9 = *(unsigned __int8 *)(v4 + 108);
      NumOfElements_4 = *(unsigned __int8 *)(v4 + 108);
      LOWORD(v50) = v6;
      *((_QWORD *)&v49 + 1) = v8;
      *(_QWORD *)&v49 = 0LL;
      while ( 1 )
      {
        v10 = KeEnumerateNextProcessor(&NumOfElements, (unsigned __int16 **)&v49);
        v11 = NumOfElements;
        if ( v10 )
          break;
        Prcb = (_DWORD *)KeGetPrcb(NumOfElements);
        v13 = Prcb[8502];
        if ( PpmCheckCurrentPipelineId != 5 )
          v13 -= Prcb[8504];
        v14 = Prcb[8508];
        if ( v14 )
          v13 = (v14 * v13) >> 16;
        Base[v11] = v13;
        v15 = Prcb[8508];
        v16 = Prcb[8505];
        if ( v15 )
          v16 = (v15 * v16) >> 16;
        v5 += v16;
        v51[v11] = v16;
        v7 += v13;
        NumOfElements = v11 + 1;
      }
      qsort(Base, NumOfElements, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
      qsort(v51, v11, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
      v17 = *(unsigned __int8 *)(v3 + 10);
      v18 = 0LL;
      v19 = *(_QWORD *)(v3 + 72);
      v20 = 0LL;
      v45 = 0LL;
      if ( (_DWORD)v17 )
      {
        v21 = (unsigned int)v17;
        v22 = (_QWORD *)(v19 + 8 * v17);
        do
        {
          v20 += *v22 * v7;
          v23 = v21;
          v17 = (unsigned int)(v17 - 1);
          --v21;
          v53[v17] = v20;
          v24 = *v22-- * v23;
          v18 += v24;
        }
        while ( (_DWORD)v17 );
        v45 = v18;
      }
      if ( (_DWORD)v9 )
      {
        v25 = v51;
        v26 = v9;
        do
        {
          v27 = *v25++;
          v5 -= v27;
          --v26;
        }
        while ( v26 );
      }
      v28 = *(_QWORD *)(v3 + 184);
      v48 = v28;
      v29 = *(_BYTE *)(v28 + 104);
      if ( PpmHeteroHgsParkingEnabled )
        v29 = *(_BYTE *)(v3 + 10);
      v30 = v29;
      LODWORD(v31) = v9;
      if ( (unsigned int)v9 < v29 )
      {
        v32 = v47;
        while ( 1 )
        {
          v33 = (unsigned int)Base[(unsigned int)v31];
          v34 = *((unsigned __int8 *)v32 + (unsigned int)v31 + 289);
          v35 = v53[(unsigned int)v31];
          NumOfElements = *((unsigned __int8 *)v32 + (unsigned int)v31 + 289);
          if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v18, v33, v35, v34) )
            break;
          if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v45, v5, 0LL, NumOfElements) )
            break;
          v36 = (unsigned int)v51[(unsigned int)v31];
          LODWORD(v31) = v31 + 1;
          v5 -= v36;
          if ( (unsigned int)v31 >= v30 )
            break;
          v18 = v45;
        }
        LODWORD(v9) = NumOfElements_4;
        v28 = v48;
        if ( (unsigned int)v31 > NumOfElements_4 )
        {
          v37 = 2;
          goto LABEL_42;
        }
        v18 = v45;
      }
      if ( (_DWORD)v31 )
      {
        while ( 1 )
        {
          NumOfElements_4 = v31;
          v31 = (unsigned int)(v31 - 1);
          v5 += (unsigned int)v51[v31];
          v38 = *((unsigned __int8 *)v47 + v31 + 161);
          if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                               v18,
                               (unsigned int)Base[v31],
                               v53[v31],
                               *((unsigned __int8 *)v47 + v31 + 161)) )
          {
            if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v45, v5, 0LL, v38) )
              break;
          }
          if ( !(_DWORD)v31 )
            goto LABEL_41;
          v18 = v45;
        }
        LODWORD(v31) = NumOfElements_4;
      }
LABEL_41:
      v37 = (unsigned int)v31 < (unsigned int)v9;
LABEL_42:
      if ( *(char *)(v3 + 124) == v37 )
      {
        v39 = *(_BYTE *)(v3 + 122) + 1;
        v40 = v39;
        *(_BYTE *)(v3 + 122) = v39;
      }
      else
      {
        v40 = 1;
        *(_BYTE *)(v3 + 124) = v37;
        *(_BYTE *)(v3 + 122) = 1;
        v2 = 4;
      }
      if ( PpmCheckCurrentPipelineId == 5 )
      {
        v2 |= 0x10u;
      }
      else if ( v37 == 2 )
      {
        if ( v40 < *((unsigned __int8 *)v47 + 160) )
        {
LABEL_54:
          v41 = PpmHeteroHgsParkingEnabled == 0;
          *(_BYTE *)(v3 + 120) = *(_BYTE *)(v3 + 120) & 0xF9 | 4;
          if ( !v41 )
          {
            v2 |= 0x80u;
            *(_BYTE *)(*(_QWORD *)(v3 + 184) + 108LL) = *(_BYTE *)(*(_QWORD *)(v3 + 184) + 107LL);
            *(_BYTE *)(v3 + 160) = *(_BYTE *)(*(_QWORD *)(v3 + 184) + 107LL);
          }
          PpmEventTraceHeteroResponse(v3, (unsigned int)Base, (unsigned int)v53, v45, v31, v2 | 1);
          v1 = v46;
          goto LABEL_57;
        }
        v2 |= 0x20u;
      }
      else
      {
        if ( v37 != 1 || v40 < *((unsigned __int8 *)v47 + 159) )
          goto LABEL_54;
        v2 |= 0x40u;
      }
      *(_BYTE *)(v28 + 107) = v31;
      goto LABEL_54;
    }
LABEL_58:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  PpmCheckComputeMultiClassHeteroResponse();
  return 1;
}
