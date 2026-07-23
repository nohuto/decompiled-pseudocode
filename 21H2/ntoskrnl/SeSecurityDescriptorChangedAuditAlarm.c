/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x1406941A8
 * Callers:
 *     NtSetSecurityObject @ 0x1405F8450 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x1405960A4 (SeMaximumAuditMask.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     SepQueryNameString @ 0x1406C6CEC (SepQueryNameString.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409200BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x140920864 (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140924C98 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepIsAclEqual @ 0x140924E34 (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x140924EB4 (SepIsSidEqual.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
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
  __int64 v15; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  char v18; // r15
  __int64 v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // r15
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rcx
  __int16 v27; // ax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int16 v30; // ax
  __int64 v31; // rax
  _WORD *v32; // r12
  __int16 v33; // r11
  unsigned __int16 *v34; // r13
  unsigned __int16 *v35; // r10
  __int16 v36; // r8
  _WORD *v37; // r15
  unsigned __int16 *v38; // r14
  __int16 v39; // dx
  unsigned int v40; // eax
  int v41; // edi
  __int64 v42; // rax
  __int16 v43; // ax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int16 v46; // ax
  __int64 v47; // rax
  __int16 v48; // ax
  __int64 v49; // rax
  __int16 v50; // ax
  __int16 v51; // ax
  SIZE_T v52; // rsi
  SIZE_T v53; // rax
  SIZE_T v54; // rsi
  SIZE_T v55; // rax
  SIZE_T v56; // rsi
  SIZE_T v57; // rax
  bool v58; // cf
  SIZE_T v59; // rsi
  SIZE_T v60; // rax
  ACCESS_MASK v61; // edi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int16 v73; // ax
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // r13d
  __int64 v77; // rdi
  int v78; // r12d
  unsigned int v79; // ebx
  __int64 v80; // [rsp+38h] [rbp-B9h]
  unsigned __int16 *v81; // [rsp+58h] [rbp-99h]
  __int64 v82; // [rsp+60h] [rbp-91h]
  int v83; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+6Ch] [rbp-85h] BYREF
  int TypeString; // [rsp+70h] [rbp-81h]
  UNICODE_STRING *v86; // [rsp+78h] [rbp-79h]
  unsigned int v87; // [rsp+80h] [rbp-71h]
  PACCESS_TOKEN Token; // [rsp+88h] [rbp-69h]
  PVOID P; // [rsp+90h] [rbp-61h] BYREF
  PVOID v90[2]; // [rsp+98h] [rbp-59h] BYREF
  void *v91; // [rsp+A8h] [rbp-49h]
  void *Source2; // [rsp+B0h] [rbp-41h]
  __int64 v93; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v95; // [rsp+138h] [rbp+47h]
  __int16 v97; // [rsp+150h] [rbp+5Fh]
  __int16 v98; // [rsp+160h] [rbp+6Fh]

  AuditMask = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v13 = 0;
  P = 0LL;
  v90[0] = 0LL;
  v14 = 0;
  v93 = 0LL;
  v15 = 0LL;
  v86 = 0LL;
  TypeString = 0;
  v87 = 0;
  v83 = 0;
  v91 = 0LL;
  v95 = 0;
  v81 = 0LL;
  v97 = 0;
  Source2 = 0LL;
  v98 = 0;
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
  v18 = SepAdtAuditThisEventWithContext(142LL, 1u, 0, &SubjectContext);
  if ( v18 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(140LL, 1u, 0, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v18 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( !a3 || !a3->Length )
  {
    if ( !a2 )
    {
      a3 = 0LL;
      goto LABEL_9;
    }
    TypeString = SepQueryTypeString(a2, v90);
    if ( TypeString < 0 )
      goto LABEL_210;
    a3 = 0LL;
    if ( v90[0] )
      a3 = (UNICODE_STRING *)v90[0];
  }
  v86 = a3;
LABEL_9:
  v19 = a10;
  v20 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) == 0 )
    goto LABEL_10;
  v43 = *(_WORD *)(a10 + 2);
  if ( (v43 & 0x10) == 0 )
    goto LABEL_87;
  if ( v43 >= 0 )
  {
    v45 = *(_QWORD *)(a10 + 24);
    goto LABEL_89;
  }
  v44 = *(unsigned int *)(a10 + 12);
  if ( (_DWORD)v44 )
    v45 = a10 + v44;
  else
LABEL_87:
    v45 = 0LL;
LABEL_89:
  SeMaximumAuditMask(v45, v20, (__int64)Token, &AuditMask);
  SeMaximumAuditMaskFromGlobalSacl(a3, v20, Token, &AuditMask);
  if ( (AuditMask & 0x80000) != 0 && v18 )
    v14 |= a8 & 0x10;
LABEL_10:
  v21 = a13;
  v22 = *(_WORD *)(a13 + 2);
  if ( (v22 & 0x10) == 0 )
  {
LABEL_69:
    v24 = 0LL;
    goto LABEL_14;
  }
  if ( v22 < 0 )
  {
    v23 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v23 )
    {
      v24 = a13 + v23;
      goto LABEL_14;
    }
    goto LABEL_69;
  }
  v24 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v82 = v24;
  if ( !a10 )
    goto LABEL_15;
  v30 = *(_WORD *)(a10 + 2);
  if ( (v30 & 0x10) == 0 )
  {
LABEL_44:
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( v30 < 0 )
  {
    v31 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v31 )
    {
      v15 = a10 + v31;
      goto LABEL_15;
    }
    goto LABEL_44;
  }
  v15 = *(_QWORD *)(a10 + 24);
LABEL_15:
  v25 = a9;
  if ( !a9 )
  {
    v26 = 0LL;
    goto LABEL_17;
  }
  v46 = *(_WORD *)(a9 + 2);
  if ( (v46 & 0x10) == 0 )
  {
LABEL_98:
    v26 = 0LL;
    goto LABEL_17;
  }
  if ( v46 < 0 )
  {
    v47 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v47 )
    {
      v26 = a9 + v47;
      goto LABEL_17;
    }
    goto LABEL_98;
  }
  v26 = *(_QWORD *)(a9 + 24);
LABEL_17:
  if ( a11 )
  {
    v27 = *(_WORD *)(a11 + 2);
    if ( (v27 & 0x10) == 0 )
    {
LABEL_19:
      v28 = 0LL;
      goto LABEL_20;
    }
    if ( v27 >= 0 )
    {
      v28 = *(_QWORD *)(a11 + 24);
    }
    else
    {
      v42 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v42 )
        goto LABEL_19;
      v28 = a11 + v42;
    }
  }
  else
  {
    v28 = 0LL;
  }
LABEL_20:
  if ( !a12 )
  {
    v29 = 0LL;
    goto LABEL_22;
  }
  v48 = *(_WORD *)(a12 + 2);
  if ( (v48 & 0x10) == 0 )
  {
LABEL_105:
    v29 = 0LL;
    goto LABEL_22;
  }
  if ( v48 < 0 )
  {
    v49 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v49 )
    {
      v29 = a12 + v49;
      goto LABEL_22;
    }
    goto LABEL_105;
  }
  v29 = *(_QWORD *)(a12 + 24);
LABEL_22:
  if ( !v24 || !*(_WORD *)(v24 + 4) )
  {
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 = v14 & 8;
    if ( v26 && *(_WORD *)(v26 + 4) )
      v13 |= v14 & 0x10;
    if ( v28 && *(_WORD *)(v28 + 4) )
      v13 |= v14 & 0x20;
    if ( v29 && *(_WORD *)(v29 + 4) )
    {
      v41 = v14 & 0x40;
LABEL_152:
      v13 |= v41;
    }
    goto LABEL_28;
  }
  if ( !v14 )
    goto LABEL_28;
  v32 = (_WORD *)(v24 + 8);
  if ( v15 && (v50 = *(_WORD *)(v15 + 4)) != 0 )
  {
    v34 = (unsigned __int16 *)(v15 + 8);
    v95 = v50;
    v33 = v50;
  }
  else
  {
    v33 = 0;
    v34 = 0LL;
  }
  if ( v26 && *(_WORD *)(v26 + 4) )
  {
    v83 = *(unsigned __int16 *)(v26 + 4);
    v91 = (void *)(v26 + 8);
  }
  if ( v28 && *(_WORD *)(v28 + 4) )
  {
    v35 = (unsigned __int16 *)(v28 + 8);
    v97 = *(_WORD *)(v28 + 4);
    v81 = (unsigned __int16 *)(v28 + 8);
  }
  else
  {
    v35 = 0LL;
  }
  if ( v29 && (v51 = *(_WORD *)(v29 + 4)) != 0 )
  {
    v98 = *(_WORD *)(v29 + 4);
    Source2 = (void *)(v29 + 8);
    v36 = v51;
  }
  else
  {
    v36 = 0;
  }
  v37 = v91;
  v38 = (unsigned __int16 *)Source2;
  do
  {
    if ( *(_BYTE *)v32 != 17 )
    {
      if ( *(_BYTE *)v32 == 18 )
      {
        if ( (v14 & 0x20) == 0 )
          goto LABEL_56;
        if ( v35 && v32[1] == v35[1] )
        {
          v56 = v35[1];
          v57 = RtlCompareMemory(v32, v35, v56);
          v24 = v82;
          if ( v57 == v56 )
          {
            v39 = v97 - 1;
            v33 = v95;
            v36 = v98;
            v58 = v97-- != 1;
            v35 = (unsigned __int16 *)(((unsigned __int64)v81 + v56) & -(__int64)v58);
            v81 = v35;
            goto LABEL_57;
          }
          v35 = v81;
        }
        v13 |= 0x20u;
        v14 &= ~0x20u;
        goto LABEL_128;
      }
      if ( *(_BYTE *)v32 == 19 )
      {
        if ( (v14 & 0x40) == 0 )
          goto LABEL_56;
        if ( v38 )
        {
          if ( v32[1] == v38[1] )
          {
            v54 = v38[1];
            v55 = RtlCompareMemory(v32, v38, v54);
            v24 = v82;
            if ( v55 == v54 )
            {
              v35 = v81;
              v33 = v95;
              v36 = --v98;
              v38 = (unsigned __int16 *)(((unsigned __int64)v38 + v54) & -(__int64)(v98 != 0));
              goto LABEL_56;
            }
          }
        }
        v13 |= 0x40u;
        v14 &= ~0x40u;
      }
      else
      {
        if ( (v14 & 8) == 0 )
          goto LABEL_56;
        if ( v34 )
        {
          if ( *(_BYTE *)v34 == *(_BYTE *)v32 && v32[1] == v34[1] )
          {
            v52 = v34[1];
            v53 = RtlCompareMemory(v32, v34, v52);
            v24 = v82;
            if ( v53 == v52 )
            {
              v33 = --v95;
              v34 = (unsigned __int16 *)(((unsigned __int64)v34 + v52) & -(__int64)(v95 != 0));
LABEL_144:
              v35 = v81;
              goto LABEL_145;
            }
          }
        }
        v13 |= 8u;
        v14 &= ~8u;
      }
LABEL_125:
      v35 = v81;
LABEL_128:
      v33 = v95;
LABEL_145:
      v36 = v98;
      goto LABEL_56;
    }
    if ( (v14 & 0x10) != 0 )
    {
      if ( !v37
        || v32[1] != v37[1]
        || (v59 = (unsigned __int16)v37[1], v60 = RtlCompareMemory(v32, v37, v59), v24 = v82, v60 != v59) )
      {
        v33 = v95;
        v13 |= 0x10u;
        v14 &= ~0x10u;
        goto LABEL_144;
      }
      v37 = (_WORD *)(((unsigned __int64)v37 + v59) & -(__int64)(--v83 != 0));
      goto LABEL_125;
    }
LABEL_56:
    v39 = v97;
LABEL_57:
    v32 = (_WORD *)((char *)v32 + (unsigned __int16)v32[1]);
    v40 = *(unsigned __int16 *)(v24 + 4);
    ++v87;
  }
  while ( v87 < v40 && v14 );
  v25 = a9;
  v21 = a13;
  if ( v33 )
    v13 |= v14 & 8;
  if ( v39 )
    v13 |= v14 & 0x20;
  if ( v36 )
    v13 |= v14 & 0x40;
  v19 = a10;
  if ( v83 )
  {
    v41 = v14 & 0x10;
    goto LABEL_152;
  }
LABEL_28:
  if ( v25 )
  {
    v61 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v63 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v62 = *(unsigned int *)(v21 + 4);
          v63 = (_DWORD)v62 ? v21 + v62 : 0LL;
        }
        if ( *(__int16 *)(v25 + 2) >= 0 )
        {
          v65 = *(_QWORD *)(v25 + 8);
        }
        else
        {
          v64 = *(unsigned int *)(v25 + 4);
          v65 = (_DWORD)v64 ? v25 + v64 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v65, v63) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v67 = *(_QWORD *)(v21 + 16);
        }
        else
        {
          v66 = *(unsigned int *)(v21 + 8);
          v67 = (_DWORD)v66 ? v21 + v66 : 0LL;
        }
        if ( *(__int16 *)(v25 + 2) >= 0 )
        {
          v69 = *(_QWORD *)(v25 + 16);
        }
        else
        {
          v68 = *(unsigned int *)(v25 + 8);
          v69 = (_DWORD)v68 ? v25 + v68 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v69, v67) )
          v13 |= 2u;
      }
    }
    if ( (v61 & 0x40000) != 0 )
    {
      v70 = *(_WORD *)(v21 + 2);
      if ( (v70 & 4) == 0 )
        goto LABEL_185;
      if ( v70 >= 0 )
      {
        v72 = *(_QWORD *)(v21 + 32);
      }
      else
      {
        v71 = *(unsigned int *)(v21 + 16);
        if ( (_DWORD)v71 )
        {
          v72 = v21 + v71;
          goto LABEL_187;
        }
LABEL_185:
        v72 = 0LL;
      }
LABEL_187:
      v73 = *(_WORD *)(v25 + 2);
      if ( (v73 & 4) == 0 )
        goto LABEL_191;
      if ( v73 >= 0 )
      {
        v75 = *(_QWORD *)(v25 + 32);
        goto LABEL_193;
      }
      v74 = *(unsigned int *)(v25 + 16);
      if ( (_DWORD)v74 )
        v75 = v25 + v74;
      else
LABEL_191:
        v75 = 0LL;
LABEL_193:
      if ( !(unsigned __int8)SepIsAclEqual(v75, v72) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( !a2 )
    {
      v76 = v93;
LABEL_201:
      v77 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
      {
        v80 = v19;
        v78 = (int)v86;
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)v86,
          v76,
          a5,
          v77,
          v80,
          8,
          v21);
      }
      else
      {
        v78 = (int)v86;
      }
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v78,
          v76,
          a5,
          v77,
          a11,
          32,
          v21);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v78,
          v76,
          a5,
          v77,
          a12,
          64,
          v21);
      v79 = v13 & 0xFFFFFF97;
      if ( v79 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v78,
          v76,
          a5,
          v77,
          v25,
          v79,
          v21);
      goto LABEL_210;
    }
    TypeString = SepQueryNameString(a2, &P);
    if ( TypeString >= 0 )
    {
      v76 = v93;
      if ( P )
        v76 = (int)P;
      goto LABEL_201;
    }
LABEL_210:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v90[0] )
      ExFreePoolWithTag(v90[0], 0);
  }
  if ( TypeString < 0 )
    SepAuditFailed((unsigned int)TypeString);
  SeReleaseSubjectContext(&SubjectContext);
}
