/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40
 * Callers:
 *     NtSetSecurityObject @ 0x14076A550 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x1405B55B8 (SeMaximumAuditMask.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SepQueryNameString @ 0x140744C84 (SepQueryNameString.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C9E48 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1409CA608 (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x1409CE3E8 (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x1409CE468 (SepIsSidEqual.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409CF634 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        char *a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r12
  __int64 v16; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r15
  unsigned int v22; // r14d
  __int64 v23; // r15
  __int16 v24; // ax
  __int64 v25; // r8
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int16 v32; // ax
  __int64 v33; // rax
  UNICODE_STRING *v34; // rax
  __int16 v35; // ax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rax
  __int16 v40; // ax
  __int64 v41; // rax
  _WORD *v42; // rsi
  __int16 v43; // ax
  unsigned __int16 *v44; // r13
  __int16 v45; // r9
  int v46; // eax
  _WORD *v47; // r12
  __int16 v48; // ax
  __int16 v49; // r10
  __int16 v50; // ax
  __int16 v51; // r11
  _WORD *v52; // r15
  unsigned __int16 *v53; // r14
  unsigned int v54; // edx
  SIZE_T v55; // rax
  __int64 v56; // rcx
  int v57; // edx
  unsigned int v58; // eax
  int v59; // edi
  SIZE_T v60; // rax
  __int64 v61; // rcx
  SIZE_T v62; // rax
  __int64 v63; // rcx
  SIZE_T v64; // rax
  __int64 v65; // rcx
  bool v66; // cf
  ACCESS_MASK v67; // edi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int16 v76; // ax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int16 v79; // ax
  __int64 v80; // rax
  __int64 v81; // rcx
  int v82; // r12d
  int v83; // r13d
  __int64 v84; // rdi
  unsigned int v85; // ebx
  int v86; // [rsp+58h] [rbp-99h]
  __int64 v87; // [rsp+60h] [rbp-91h]
  ACCESS_MASK AuditMask[2]; // [rsp+68h] [rbp-89h] BYREF
  PUNICODE_STRING v89; // [rsp+70h] [rbp-81h]
  int v90; // [rsp+78h] [rbp-79h]
  PACCESS_TOKEN Token; // [rsp+80h] [rbp-71h]
  PVOID P; // [rsp+88h] [rbp-69h] BYREF
  PVOID v93[3]; // [rsp+90h] [rbp-61h] BYREF
  void *Source2; // [rsp+A8h] [rbp-49h]
  void *v95; // [rsp+B0h] [rbp-41h]
  __int64 v96; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v98; // [rsp+138h] [rbp+47h]
  __int16 v100; // [rsp+150h] [rbp+5Fh]
  __int16 v101; // [rsp+160h] [rbp+6Fh]

  AuditMask[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v13 = 0;
  P = 0LL;
  v93[0] = 0LL;
  v14 = 0;
  v96 = 0LL;
  v15 = 0LL;
  v89 = 0LL;
  v16 = 0LL;
  AuditMask[1] = 0;
  v90 = 0;
  v86 = 0;
  v100 = 0;
  v95 = 0LL;
  v98 = 0;
  Source2 = 0LL;
  v101 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !PrimaryToken )
  {
    SepAuditFailed(3221225596LL);
    return;
  }
  v21 = SepAdtAuditThisEventWithContext(141LL, 1u, 0, &SubjectContext);
  if ( v21 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    if ( SepAdtAuditThisEventWithContext(139LL, 1u, 0, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v21 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( a3 && a3->Length )
  {
    v89 = a3;
  }
  else if ( a2 )
  {
    AuditMask[1] = SepQueryTypeString(a2, v93, v19, v20);
    if ( (AuditMask[1] & 0x80000000) != 0 )
      goto LABEL_207;
    v34 = 0LL;
    if ( v93[0] )
      v34 = (UNICODE_STRING *)v93[0];
    v89 = v34;
  }
  v22 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) != 0 )
  {
    v35 = *(_WORD *)(a10 + 2);
    if ( (v35 & 0x10) == 0 )
      goto LABEL_65;
    if ( v35 >= 0 )
    {
      v37 = *(_QWORD *)(a10 + 24);
      goto LABEL_67;
    }
    v36 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v36 )
      v37 = a10 + v36;
    else
LABEL_65:
      v37 = 0LL;
LABEL_67:
    SeMaximumAuditMask(v37, v22, (__int64)Token, AuditMask);
    SeMaximumAuditMaskFromGlobalSacl(v89, v22, Token, AuditMask);
    if ( (AuditMask[0] & 0x80000) != 0 && v21 )
      v14 |= a8 & 0x10;
  }
  v23 = a13;
  v24 = *(_WORD *)(a13 + 2);
  if ( (v24 & 0x10) == 0 )
  {
LABEL_14:
    v25 = 0LL;
    goto LABEL_15;
  }
  if ( v24 >= 0 )
  {
    v25 = *(_QWORD *)(a13 + 24);
  }
  else
  {
    v31 = *(unsigned int *)(a13 + 12);
    if ( !(_DWORD)v31 )
      goto LABEL_14;
    v25 = a13 + v31;
  }
LABEL_15:
  v87 = v25;
  if ( !a10 )
    goto LABEL_20;
  v26 = *(_WORD *)(a10 + 2);
  if ( (v26 & 0x10) == 0 )
    goto LABEL_19;
  if ( v26 >= 0 )
  {
    v16 = *(_QWORD *)(a10 + 24);
  }
  else
  {
    v27 = *(unsigned int *)(a10 + 12);
    if ( !(_DWORD)v27 )
    {
LABEL_19:
      v16 = 0LL;
      goto LABEL_20;
    }
    v16 = a10 + v27;
  }
LABEL_20:
  v28 = a9;
  if ( !a9 )
    goto LABEL_21;
  v38 = *(_WORD *)(a9 + 2);
  if ( (v38 & 0x10) == 0 )
  {
LABEL_75:
    v15 = 0LL;
    goto LABEL_21;
  }
  if ( v38 < 0 )
  {
    v39 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v39 )
    {
      v15 = a9 + v39;
      goto LABEL_21;
    }
    goto LABEL_75;
  }
  v15 = *(_QWORD *)(a9 + 24);
LABEL_21:
  if ( !a11 )
  {
    v29 = 0LL;
    goto LABEL_23;
  }
  v32 = *(_WORD *)(a11 + 2);
  if ( (v32 & 0x10) == 0 )
    goto LABEL_44;
  if ( v32 >= 0 )
  {
    v29 = *(_QWORD *)(a11 + 24);
  }
  else
  {
    v33 = *(unsigned int *)(a11 + 12);
    if ( !(_DWORD)v33 )
    {
LABEL_44:
      v29 = 0LL;
      goto LABEL_23;
    }
    v29 = a11 + v33;
  }
LABEL_23:
  if ( a12 )
  {
    v40 = *(_WORD *)(a12 + 2);
    if ( (v40 & 0x10) == 0 )
      goto LABEL_81;
    if ( v40 >= 0 )
    {
      v30 = *(_QWORD *)(a12 + 24);
      goto LABEL_25;
    }
    v41 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v41 )
      v30 = a12 + v41;
    else
LABEL_81:
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
LABEL_25:
  if ( v25 && *(_WORD *)(v25 + 4) )
  {
    if ( !v14 )
      goto LABEL_30;
    v42 = (_WORD *)(v25 + 8);
    if ( v16 && (v43 = *(_WORD *)(v16 + 4)) != 0 )
    {
      v44 = (unsigned __int16 *)(v16 + 8);
      v100 = v43;
      v45 = v43;
    }
    else
    {
      v45 = 0;
      v44 = 0LL;
    }
    if ( v15 && (v46 = *(unsigned __int16 *)(v15 + 4), (_WORD)v46) )
    {
      v47 = (_WORD *)(v15 + 8);
      v86 = v46;
    }
    else
    {
      v47 = 0LL;
    }
    if ( v29 && (v48 = *(_WORD *)(v29 + 4)) != 0 )
    {
      v98 = *(_WORD *)(v29 + 4);
      v95 = (void *)(v29 + 8);
      v49 = v48;
    }
    else
    {
      v49 = 0;
    }
    if ( v30 && (v50 = *(_WORD *)(v30 + 4)) != 0 )
    {
      v101 = *(_WORD *)(v30 + 4);
      Source2 = (void *)(v30 + 8);
      v51 = v50;
    }
    else
    {
      v51 = 0;
    }
    v52 = Source2;
    v53 = (unsigned __int16 *)v95;
    while ( 1 )
    {
      v54 = *(unsigned __int8 *)v42;
      if ( v54 <= 0x10 )
        goto LABEL_101;
      if ( v54 != 17 )
        break;
      if ( (v14 & 0x10) == 0 )
        goto LABEL_108;
      if ( !v47
        || v42[1] != v47[1]
        || (v64 = RtlCompareMemory(v42, v47, (unsigned __int16)v47[1]),
            v65 = (unsigned __int16)v47[1],
            v25 = v87,
            v64 != v65) )
      {
        v13 |= 0x10u;
        v14 &= ~0x10u;
        goto LABEL_129;
      }
      v45 = v100;
      v57 = v86 - 1;
      v49 = v98;
      v51 = v101;
      v66 = v86-- != 1;
      v47 = (_WORD *)(((unsigned __int64)v47 + v65) & -(__int64)v66);
LABEL_109:
      v42 = (_WORD *)((char *)v42 + (unsigned __int16)v42[1]);
      v58 = *(unsigned __int16 *)(v25 + 4);
      if ( ++v90 >= v58 || !v14 )
      {
        v28 = a9;
        v23 = a13;
        if ( v45 )
          v13 |= v14 & 8;
        if ( v49 )
          v13 |= v14 & 0x20;
        if ( v51 )
          v13 |= v14 & 0x40;
        if ( v57 )
        {
          v59 = v14 & 0x10;
          goto LABEL_150;
        }
        goto LABEL_30;
      }
    }
    if ( v54 == 18 )
    {
      if ( (v14 & 0x20) == 0 )
        goto LABEL_108;
      if ( v53 )
      {
        if ( v42[1] == v53[1] )
        {
          v62 = RtlCompareMemory(v42, v53, v53[1]);
          v63 = v53[1];
          v25 = v87;
          if ( v62 == v63 )
          {
            v45 = v100;
            v49 = --v98;
            v53 = (unsigned __int16 *)(((unsigned __int64)v53 + v63) & -(__int64)(v98 != 0));
            goto LABEL_133;
          }
        }
      }
      v13 |= 0x20u;
      v14 &= ~0x20u;
LABEL_129:
      v45 = v100;
    }
    else
    {
      if ( v54 == 19 )
      {
        if ( (v14 & 0x40) == 0 )
          goto LABEL_108;
        if ( !v52
          || v42[1] != v52[1]
          || (v60 = RtlCompareMemory(v42, v52, (unsigned __int16)v52[1]),
              v61 = (unsigned __int16)v52[1],
              v25 = v87,
              v60 != v61) )
        {
          v13 |= 0x40u;
          v14 &= ~0x40u;
          goto LABEL_129;
        }
        v51 = --v101;
        v52 = (_WORD *)(((unsigned __int64)v52 + v61) & -(__int64)(v101 != 0));
        goto LABEL_107;
      }
LABEL_101:
      if ( (v14 & 8) == 0 )
      {
LABEL_108:
        v57 = v86;
        goto LABEL_109;
      }
      if ( !v44
        || *(_BYTE *)v44 != (_BYTE)v54
        || v42[1] != v44[1]
        || (v55 = RtlCompareMemory(v42, v44, v44[1]), v56 = v44[1], v25 = v87, v55 != v56) )
      {
        v51 = v101;
        v13 |= 8u;
        v14 &= ~8u;
LABEL_107:
        v49 = v98;
        v45 = v100;
        goto LABEL_108;
      }
      v45 = --v100;
      v44 = (unsigned __int16 *)(((unsigned __int64)v44 + v56) & -(__int64)(v100 != 0));
    }
    v49 = v98;
LABEL_133:
    v51 = v101;
    goto LABEL_108;
  }
  if ( v16 && *(_WORD *)(v16 + 4) )
    v13 = v14 & 8;
  if ( v15 && *(_WORD *)(v15 + 4) )
    v13 |= v14 & 0x10;
  if ( v29 && *(_WORD *)(v29 + 4) )
    v13 |= v14 & 0x20;
  if ( v30 && *(_WORD *)(v30 + 4) )
  {
    v59 = v14 & 0x40;
LABEL_150:
    v13 |= v59;
  }
LABEL_30:
  if ( v28 )
  {
    v67 = AuditMask[0];
    if ( (AuditMask[0] & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v69 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v68 = *(unsigned int *)(v23 + 4);
          v69 = (_DWORD)v68 ? v23 + v68 : 0LL;
        }
        if ( *(__int16 *)(v28 + 2) >= 0 )
        {
          v71 = *(_QWORD *)(v28 + 8);
        }
        else
        {
          v70 = *(unsigned int *)(v28 + 4);
          v71 = (_DWORD)v70 ? v28 + v70 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v71, v69) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v73 = *(_QWORD *)(v23 + 16);
        }
        else
        {
          v72 = *(unsigned int *)(v23 + 8);
          v73 = (_DWORD)v72 ? v23 + v72 : 0LL;
        }
        if ( *(__int16 *)(v28 + 2) >= 0 )
        {
          v75 = *(_QWORD *)(v28 + 16);
        }
        else
        {
          v74 = *(unsigned int *)(v28 + 8);
          v75 = (_DWORD)v74 ? v28 + v74 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v75, v73) )
          v13 |= 2u;
      }
    }
    if ( (v67 & 0x40000) != 0 )
    {
      v76 = *(_WORD *)(v23 + 2);
      if ( (v76 & 4) != 0 )
      {
        if ( v76 >= 0 )
        {
          v78 = *(_QWORD *)(v23 + 32);
LABEL_185:
          v79 = *(_WORD *)(v28 + 2);
          if ( (v79 & 4) != 0 )
          {
            if ( v79 >= 0 )
            {
              v81 = *(_QWORD *)(v28 + 32);
LABEL_191:
              if ( !(unsigned __int8)SepIsAclEqual(v81, v78) )
                v13 |= 4u;
              goto LABEL_31;
            }
            v80 = *(unsigned int *)(v28 + 16);
            if ( (_DWORD)v80 )
            {
              v81 = v28 + v80;
              goto LABEL_191;
            }
          }
          v81 = 0LL;
          goto LABEL_191;
        }
        v77 = *(unsigned int *)(v23 + 16);
        if ( (_DWORD)v77 )
        {
          v78 = v23 + v77;
          goto LABEL_185;
        }
      }
      v78 = 0LL;
      goto LABEL_185;
    }
  }
LABEL_31:
  if ( v13 )
  {
    if ( !a2 )
    {
      v82 = v96;
LABEL_199:
      v83 = (int)v89;
      v84 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)v89,
          v82,
          a5,
          v84,
          a10,
          8,
          v23);
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v83,
          v82,
          a5,
          v84,
          a11,
          32,
          v23);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v83,
          v82,
          a5,
          v84,
          a12,
          64,
          v23);
      v85 = v13 & 0xFFFFFF97;
      if ( v85 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v83,
          v82,
          a5,
          v84,
          v28,
          v85,
          v23);
      goto LABEL_207;
    }
    AuditMask[1] = SepQueryNameString(a2, &P);
    if ( (AuditMask[1] & 0x80000000) == 0 )
    {
      v82 = 0;
      if ( P )
        v82 = (int)P;
      goto LABEL_199;
    }
LABEL_207:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v93[0] )
      ExFreePoolWithTag(v93[0], 0);
  }
  if ( (AuditMask[1] & 0x80000000) != 0 )
    SepAuditFailed(AuditMask[1]);
  SeReleaseSubjectContext(&SubjectContext);
}
