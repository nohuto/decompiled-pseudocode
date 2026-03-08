/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x14066D780
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14066E690 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14066E738 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpIsSDValidSelfRelative @ 0x14066EB8C (AdtpIsSDValidSelfRelative.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x14079BA9C (AdtpEtwBuildDashString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4,
        int a5,
        __int64 *a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  int v9; // r11d
  unsigned int v10; // esi
  char v11; // bl
  char v12; // r14
  __int64 v13; // r13
  char *v14; // rdi
  _DWORD *v15; // r12
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int IsSDValidSelfRelative; // eax
  __int64 v20; // r12
  __int64 *v21; // rbx
  char v22; // r10
  unsigned int v23; // r14d
  unsigned int v24; // ecx
  unsigned __int8 v25; // dl
  unsigned int v26; // eax
  _DWORD *v27; // r8
  unsigned __int16 *v28; // rdi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  __int64 v32; // r9
  unsigned int v33; // r14d
  int *v34; // rdi
  int v35; // ebx
  unsigned __int16 *v36; // r12
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rdi
  char v41; // al
  __int64 Pool2; // rax
  unsigned int v43; // r12d
  unsigned __int16 *v44; // r14
  const void *v45; // rdx
  PVOID *v46; // rbx
  __int64 v47; // rdi
  int v49; // [rsp+28h] [rbp-D8h]
  char v51; // [rsp+61h] [rbp-9Fh] BYREF
  char v52; // [rsp+62h] [rbp-9Eh]
  char v53; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v54; // [rsp+64h] [rbp-9Ch]
  int v55; // [rsp+68h] [rbp-98h]
  unsigned int v56; // [rsp+6Ch] [rbp-94h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  _DWORD *v59; // [rsp+80h] [rbp-80h]
  char *v60; // [rsp+88h] [rbp-78h]
  _DWORD *v61; // [rsp+90h] [rbp-70h]
  __int128 v62; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  __int128 v64; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  _DWORD *v67; // [rsp+D0h] [rbp-30h]
  char *v68; // [rsp+D8h] [rbp-28h]
  _OWORD v69[32]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v66 = a7;
  v10 = 0;
  v67 = a8;
  v11 = 1;
  v12 = 0;
  v68 = a9;
  v13 = 0LL;
  v59 = a3;
  v57 = a2;
  v58 = a1;
  v55 = 0;
  v53 = 0;
  v54 = 0;
  v52 = 0;
  v51 = 0;
  v60 = 0LL;
  v62 = 0LL;
  P = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( !*a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, a3);
    goto LABEL_71;
  }
  v56 = 0;
  v61 = a3 + 1;
  v14 = (char *)(a3 + 36);
  v15 = a3 + 1;
  do
  {
    v16 = *v15 & 0xFF0000;
    if ( !v16 )
      goto LABEL_21;
    if ( v16 == 0x10000 || v16 == 0x20000 )
    {
LABEL_19:
      v11 = 0;
      IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v14, 0LL);
      v9 = 0;
      if ( IsSDValidSelfRelative < 0 )
        goto LABEL_15;
      v12 = 1;
      goto LABEL_21;
    }
    if ( v16 != 196608 && v16 != 0x40000 )
    {
      if ( v16 == 327680 )
        goto LABEL_19;
      if ( v16 != 393216 )
      {
        v11 = 0;
        goto LABEL_21;
      }
    }
    v11 = 0;
    v17 = AdtpIsSDValidSelfRelative(v14, &v51);
    v9 = 0;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741736 )
        goto LABEL_15;
    }
    else if ( !v51 )
    {
      goto LABEL_15;
    }
    v60 = &v14[RtlLengthSecurityDescriptor(v14)];
    v18 = AdtpIsSDValidSelfRelative(v60, 0LL);
    v9 = 0;
    v10 = v18;
    if ( v18 < 0 )
    {
LABEL_15:
      v10 = -1073741811;
      goto LABEL_71;
    }
    v12 = 1;
    v52 = 1;
LABEL_21:
    ++v15;
    ++v56;
  }
  while ( v56 < 0x20 );
  if ( v11 == 1 )
    goto LABEL_2;
  memset(v69, 0, sizeof(v69));
  if ( v12 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v14, &v62);
  if ( v52 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v60, &v64);
  v20 = (__int64)v61;
  v21 = AdtpStandardAccessTypes;
  v22 = a4;
  v9 = 0;
  v23 = 0;
  while ( 2 )
  {
    v24 = *(_DWORD *)v21;
    if ( v22 == 1 )
    {
      v25 = 0;
      v26 = *(_DWORD *)v21;
      while ( 1 )
      {
        v26 >>= 1;
        if ( !v26 )
          break;
        ++v25;
      }
      v27 = v59;
      if ( (int)v59[v25 + 1] < 0 )
      {
        v28 = (unsigned __int16 *)&v69[(unsigned int)v13];
        v29 = AdtpBuildStagingReasonAuditStringInternal(
                v58,
                v57,
                (unsigned int)&v62,
                (unsigned int)&v64,
                v24,
                v49,
                v20,
                (__int64)v28);
        goto LABEL_36;
      }
LABEL_38:
      v31 = v54;
    }
    else
    {
      v27 = v59;
      v30 = *v59 & v24;
      if ( !v30 )
        goto LABEL_38;
      v28 = (unsigned __int16 *)&v69[(unsigned int)v13];
      LOBYTE(v49) = *((_BYTE *)v59 + 136);
      v29 = AdtpBuildAccessReasonAuditStringInternal(v58, v57, v30, v49, v20, (__int64)v28, 0, 0, 0, (__int64)&v53);
LABEL_36:
      v9 = 0;
      v10 = v29;
      if ( v29 < 0 )
        goto LABEL_66;
      v27 = v59;
      v31 = *v28 + v54;
      v22 = a4;
      v13 = (unsigned int)(v13 + 1);
      v55 = v13;
      v54 = v31;
    }
    ++v23;
    v21 = (__int64 *)((char *)v21 + 4);
    if ( v23 < 7 )
      continue;
    break;
  }
  if ( *(_WORD *)v27 )
  {
    v32 = (__int64)(v27 + 1);
    v33 = 0;
    v34 = v27 + 1;
    v35 = 1;
    do
    {
      if ( v22 == 1 )
      {
        if ( *v34 < 0 )
        {
          v36 = (unsigned __int16 *)&v69[(unsigned int)v13];
          v37 = AdtpBuildStagingReasonAuditStringInternal(
                  v58,
                  v57,
                  (unsigned int)&v62,
                  (unsigned int)&v64,
                  v35,
                  v49,
                  v32,
                  (__int64)v36);
LABEL_47:
          v9 = 0;
          v10 = v37;
          if ( v37 < 0 )
            goto LABEL_66;
          v27 = v59;
          v31 = *v36 + v54;
          v32 = (__int64)v61;
          v13 = (unsigned int)(v13 + 1);
          v22 = a4;
          v55 = v13;
          v54 = v31;
        }
      }
      else if ( (*v27 & v35) != 0 )
      {
        v36 = (unsigned __int16 *)&v69[(unsigned int)v13];
        LOBYTE(v49) = *((_BYTE *)v27 + 136);
        v37 = AdtpBuildAccessReasonAuditStringInternal(
                v58,
                v57,
                *v27 & (unsigned int)v35,
                v49,
                v32,
                (__int64)v36,
                0,
                0,
                0,
                (__int64)&v53);
        goto LABEL_47;
      }
      ++v33;
      ++v34;
      v35 *= 2;
    }
    while ( v33 < 0x10 );
  }
  v54 = v31 >> 1;
  v38 = (v31 >> 1) + 1;
  if ( v66 )
  {
    if ( v67 )
    {
      v39 = (unsigned int)*v67;
      if ( (unsigned int)v39 + v38 < 0x400 )
      {
        v40 = v66 + 2 * v39;
        *v67 = v39 + v38;
        v41 = 0;
        goto LABEL_57;
      }
    }
  }
  Pool2 = ExAllocatePool2(256LL, 2LL * v38, 1799447891LL);
  v9 = 0;
  v40 = Pool2;
  if ( Pool2 )
  {
    v41 = 1;
LABEL_57:
    v43 = 0;
    *v68 = v41;
    if ( (_DWORD)v13 )
    {
      v44 = (unsigned __int16 *)v69;
      do
      {
        v45 = (const void *)*((_QWORD *)v44 + 1);
        if ( v45 )
        {
          memmove((void *)(v40 + v43), v45, *v44);
          v43 += *v44;
          v9 = 0;
        }
        v44 += 8;
        --v13;
      }
      while ( v13 );
      LODWORD(v13) = v55;
    }
    *(_WORD *)(v40 + 2LL * v54) = 0;
    if ( a6 )
    {
      *a6 = v40;
      a6[1] = 2 * v38;
    }
    else
    {
      MEMORY[8] = v40;
      MEMORY[2] = 2 * v38;
      MEMORY[0] = 2 * v38 - 2;
    }
  }
  else
  {
    v10 = -1073741801;
  }
LABEL_66:
  if ( (_DWORD)v13 )
  {
    v46 = (PVOID *)v69 + 1;
    v47 = (unsigned int)v13;
    do
    {
      if ( *v46 )
      {
        ExFreePoolWithTag(*v46, 0);
        v9 = 0;
      }
      v46 += 2;
      --v47;
    }
    while ( v47 );
  }
LABEL_71:
  if ( DWORD2(v62) != v9 && P )
  {
    ExFreePoolWithTag(P, 0);
    v9 = 0;
  }
  if ( DWORD2(v64) != v9 && v65 )
    ExFreePoolWithTag(v65, 0);
  return v10;
}
