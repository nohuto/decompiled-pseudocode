/*
 * XREFs of SepAdjustPrivileges @ 0x140608570
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x140608190 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x1402520F0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1402521FC (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x140608AA0 (SepAdtTokenRightAdjusted.c)
 */

NTSTATUS __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        char a3,
        int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  PSID v13; // rsi
  NTSTATUS result; // eax
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r11
  unsigned int v21; // ecx
  int v22; // edi
  unsigned int v23; // r10d
  char v24; // al
  int v25; // edi
  int v26; // eax
  __int64 v27; // xmm1_8
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // xmm1_8
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  signed int v41; // edx
  __int64 v42; // r8
  BOOL v43; // r9d
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  BOOLEAN Dominates; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v50[2]; // [rsp+32h] [rbp-CEh] BYREF
  int v51; // [rsp+34h] [rbp-CCh]
  unsigned int v52; // [rsp+38h] [rbp-C8h]
  NTSTATUS v53; // [rsp+3Ch] [rbp-C4h]
  int v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  _BYTE *v57; // [rsp+60h] [rbp-A0h]
  int *v58; // [rsp+68h] [rbp-98h]
  PSID Sid1[2]; // [rsp+70h] [rbp-90h]
  _QWORD v60[54]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v61[54]; // [rsp+230h] [rbp+130h] BYREF

  v10 = 0;
  v11 = 0;
  v58 = a7;
  v51 = 0;
  v52 = 0;
  v56 = 0LL;
  Dominates = 0;
  v50[0] = 0;
  LOBYTE(v54) = 0;
  LODWORD(v55) = a4;
  v57 = a9;
  *(_OWORD *)Sid1 = 0LL;
  memset(v60, 0, sizeof(v60));
  memset(v61, 0, sizeof(v61));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1);
  v13 = Sid1[0];
  result = RtlSidDominates(Sid1[0], SeHighMandatorySid, &Dominates);
  v53 = result;
  if ( result < 0 )
    return result;
  if ( !Dominates )
  {
    result = RtlSidDominates(v13, SeMediumMandatorySid, v50);
    v53 = result;
    if ( result < 0 )
      return result;
    v37 = (unsigned __int8)v54;
    if ( !v50[0] )
      v37 = 1;
    v54 = v37;
  }
  if ( a3 )
  {
    v24 = a2;
    v41 = 0;
    v23 = 0;
    do
    {
      v42 = *(_QWORD *)(a1 + 72);
      if ( (v42 & (1LL << v41)) != 0 )
      {
        if ( v24 )
        {
          v43 = ((1LL << v41) & *(_QWORD *)(a1 + 80)) != 0;
          v55 = v41;
          v44 = v43 + 2;
          v56 = v41;
          v45 = v23++;
          v46 = 3 * v45;
          *(_QWORD *)((char *)v60 + 4 * v46) = v41;
          *((_DWORD *)&v60[1] + v46) = v44;
          if ( a6 )
          {
            v47 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v47 + 4) = v41;
            *(_DWORD *)(a6 + 4 * v47 + 12) = v44;
            v42 = *(_QWORD *)(a1 + 72);
          }
          _bittestandreset64(&v42, (unsigned int)v41);
          v24 = a2;
          *(_QWORD *)(a1 + 72) = v42;
        }
        ++*a8;
      }
      ++v41;
    }
    while ( (unsigned int)v41 <= 0x24 );
LABEL_15:
    v25 = v53;
    goto LABEL_16;
  }
  if ( !(_DWORD)v55 )
  {
    v23 = 0;
LABEL_14:
    v24 = a2;
    goto LABEL_15;
  }
  v16 = (unsigned int)v55;
  do
  {
    v17 = *(_QWORD *)(a1 + 64);
    v18 = 1LL << *a5;
    if ( (v17 & v18) == 0 )
      goto LABEL_10;
    v19 = *(_QWORD *)a5;
    ++v10;
    v56 = *(_QWORD *)a5;
    v20 = *(_QWORD *)(a1 + 72);
    v21 = a5[2];
    v22 = (((1LL << v56) & v20) != 0 ? 2 : 0) | (((1LL << v56) & *(_QWORD *)(a1 + 80)) != 0);
    if ( (v21 & 4) != 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 72) = v20 & ~(1LL << v19);
        *(_DWORD *)(a1 + 200) |= 0x800u;
        *(_QWORD *)(a1 + 64) = v17 & ~(1LL << v19);
      }
    }
    else if ( (v21 & 2) != 0 )
    {
      if ( (v20 & v18) != 0 )
        goto LABEL_10;
      if ( !a2 )
        goto LABEL_30;
      v27 = v56;
      if ( a6 )
      {
        v36 = 3LL * (unsigned int)*a8;
        *(_QWORD *)(a6 + 4 * v36 + 4) = v56;
        *(_DWORD *)(a6 + 4 * v36 + 12) = v22;
      }
      v28 = v11++;
      v29 = Dominates == 0;
      v30 = 3 * v28;
      *(_QWORD *)((char *)v61 + 4 * v30) = v27;
      *((_DWORD *)&v61[1] + v30) = v22;
      if ( !v29 )
        goto LABEL_29;
      if ( v50[0] )
      {
        v38 = 0x1120160684LL;
        if ( _bittest64(&v38, *a5) )
          goto LABEL_52;
      }
      else
      {
        if ( !(_BYTE)v54 )
          goto LABEL_30;
        v40 = 1LL << *a5;
        if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
        {
          if ( (v40 & 0x200800000LL) != 0 )
          {
LABEL_29:
            v31 = *(_QWORD *)(a1 + 72);
            _bittestandset64(&v31, (unsigned int)v19);
            *(_QWORD *)(a1 + 72) = v31;
          }
          else
          {
LABEL_52:
            ++v51;
          }
LABEL_30:
          ++*a8;
          goto LABEL_10;
        }
        if ( (v40 & 0x202800000LL) == 0 )
          goto LABEL_52;
      }
      v39 = *(_QWORD *)(a1 + 72);
      _bittestandset64(&v39, (unsigned int)v19);
      *(_QWORD *)(a1 + 72) = v39;
      ++*a8;
    }
    else if ( (v20 & v18) != 0 )
    {
      if ( a2 )
      {
        v32 = v56;
        if ( a6 )
        {
          v33 = 3LL * (unsigned int)*a8;
          *(_QWORD *)(a6 + 4 * v33 + 4) = v56;
          *(_DWORD *)(a6 + 4 * v33 + 12) = v22;
          v20 = *(_QWORD *)(a1 + 72);
        }
        v34 = 3LL * v52;
        v35 = v52 + 1;
        _bittestandreset64(&v20, (unsigned int)v19);
        *(_QWORD *)((char *)v60 + 4 * v34) = v32;
        *(_QWORD *)(a1 + 72) = v20;
        *((_DWORD *)&v60[1] + v34) = v22;
        v52 = v35;
      }
      ++*a8;
    }
LABEL_10:
    a5 += 3;
    --v16;
  }
  while ( v16 );
  if ( v10 >= (unsigned int)v55 && !v51 )
  {
    v23 = v52;
    goto LABEL_14;
  }
  v24 = a2;
  v25 = 262;
  v23 = v52;
LABEL_16:
  if ( *a8 && v24 )
  {
    *v57 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v60, v23, (unsigned int)v61, v11, v25 >= 0);
  }
  if ( a6 )
  {
    if ( *a8 > 1u )
      v26 = 12 * *a8 + 4;
    else
      v26 = 16;
    *v58 = v26;
  }
  return v25;
}
