/*
 * XREFs of SeLogAccessFailure @ 0x1402EE66C
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepFlattenAcl @ 0x1405B61F4 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1405B6378 (SepGetLearningModeObjectInformation.c)
 *     PsReferenceEffectiveToken @ 0x1406D657C (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeLogAccessFailure(char *Object, __int64 a2, __int64 a3, ULONGLONG a4, __int64 a5, char a6, char a7)
{
  char v7; // bl
  char v9; // cl
  const wchar_t *v10; // rax
  __int64 LearningModeObjectInformation; // rax
  __int64 v12; // r13
  const size_t *v13; // rdx
  unsigned __int16 *v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // ebx
  unsigned __int16 *v18; // r8
  const size_t *v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  const size_t *v23; // r8
  unsigned __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  int *v27; // rax
  unsigned int v28; // edi
  _DWORD *Pool2; // rax
  _DWORD *v30; // rsi
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // edi
  ULONGLONG v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // r10
  ULONG v38; // esi
  __int64 *v39; // r9
  __int64 v40; // rax
  void *v41; // rax
  PVOID v42; // rdx
  unsigned int v43; // ecx
  _DWORD *v44; // r12
  unsigned int v45; // r13d
  __int64 v46; // rbx
  unsigned __int8 *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  ULONGLONG v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // edi
  __int64 v54; // rcx
  int v55; // eax
  __int16 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edi
  __int64 v60; // rax
  unsigned __int8 *v61; // rdx
  __int64 v62; // rcx
  unsigned int v63; // edi
  int v64; // eax
  __int64 v65; // rax
  unsigned __int8 *v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rax
  ULONGLONG v71; // rdi
  unsigned int v72; // ebx
  __int64 v73; // rsi
  int v74; // eax
  PVOID v75; // r12
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int16 v79; // ax
  unsigned int v80; // ecx
  __int64 v81; // rax
  ULONGLONG v82; // rdi
  unsigned int v83; // ebx
  __int64 v84; // rsi
  int v85; // eax
  PVOID v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int16 v90; // [rsp+38h] [rbp-D0h] BYREF
  char v91[2]; // [rsp+3Ah] [rbp-CEh] BYREF
  _WORD v92[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v93; // [rsp+40h] [rbp-C8h] BYREF
  int v94; // [rsp+44h] [rbp-C4h] BYREF
  int v95; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v96; // [rsp+4Ch] [rbp-BCh] BYREF
  int v97; // [rsp+50h] [rbp-B8h] BYREF
  int v98; // [rsp+54h] [rbp-B4h] BYREF
  int v99; // [rsp+58h] [rbp-B0h] BYREF
  int v100; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v101; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v102; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v103; // [rsp+70h] [rbp-98h] BYREF
  __int64 v104; // [rsp+78h] [rbp-90h] BYREF
  PVOID v105; // [rsp+80h] [rbp-88h]
  __int64 v106; // [rsp+88h] [rbp-80h]
  ULONGLONG v107; // [rsp+90h] [rbp-78h]
  PVOID P; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  const size_t *v110; // [rsp+B8h] [rbp-50h]
  int v111; // [rsp+C0h] [rbp-48h]
  int v112; // [rsp+C4h] [rbp-44h]
  const size_t *v113; // [rsp+C8h] [rbp-40h]
  int v114; // [rsp+D0h] [rbp-38h]
  int v115; // [rsp+D4h] [rbp-34h]
  const size_t *v116; // [rsp+D8h] [rbp-30h]
  int v117; // [rsp+E0h] [rbp-28h]
  int v118; // [rsp+E4h] [rbp-24h]
  const size_t *v119; // [rsp+E8h] [rbp-20h]
  __int64 v120; // [rsp+F0h] [rbp-18h]
  char *v121; // [rsp+F8h] [rbp-10h]
  __int64 v122; // [rsp+100h] [rbp-8h]
  int *v123; // [rsp+108h] [rbp+0h]
  __int64 v124; // [rsp+110h] [rbp+8h]
  int *v125; // [rsp+118h] [rbp+10h]
  __int64 v126; // [rsp+120h] [rbp+18h]
  char *v127; // [rsp+128h] [rbp+20h]
  __int64 v128; // [rsp+130h] [rbp+28h]
  int *v129; // [rsp+138h] [rbp+30h]
  __int64 v130; // [rsp+140h] [rbp+38h]
  __int64 *v131; // [rsp+148h] [rbp+40h]
  __int64 v132; // [rsp+150h] [rbp+48h]
  _DWORD *v133; // [rsp+158h] [rbp+50h]
  unsigned int v134; // [rsp+160h] [rbp+58h]
  int v135; // [rsp+164h] [rbp+5Ch]

  v7 = a7;
  v9 = 0;
  v107 = a4;
  v105 = 0LL;
  v96 = 0;
  v102 = 0LL;
  LOWORD(v93) = 0;
  v100 = 0;
  v103 = 0LL;
  LODWORD(v101) = 0;
  LOWORD(v94) = 0;
  v91[0] = 0;
  v98 = 0;
  v99 = 1;
  v97 = 0;
  v95 = 0;
  v90 = 0;
  v92[0] = 0;
  if ( KeGetCurrentIrql() >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( Object )
  {
    v97 = *((_DWORD *)Object + 48);
    v98 = *((_DWORD *)Object + 49);
  }
  else
  {
    Object = (char *)PsReferenceEffectiveToken(
                       (unsigned int)KeGetCurrentThread(),
                       1732535635,
                       (unsigned int)&v97,
                       (unsigned int)&v90 + 1,
                       (__int64)&v98,
                       0LL);
    if ( !Object )
      return;
    v9 = 1;
    HIBYTE(v90) = 1;
  }
  if ( (*((_DWORD *)Object + 50) & 0x1000000) == 0 )
  {
    if ( v9 )
      ObfDereferenceObjectWithTag(Object, 0x67446553u);
    return;
  }
  UserData.Reserved = 0;
  v10 = L"Normal";
  if ( v7 )
    v10 = L"Permissive";
  UserData.Ptr = (ULONGLONG)v10;
  UserData.Size = v7 != 0 ? 22 : 14;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v91);
  v106 = LearningModeObjectInformation;
  v12 = LearningModeObjectInformation;
  v13 = &cchOriginalDestLength;
  if ( LearningModeObjectInformation && (v14 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v15 = *v14;
    v16 = v15 + 2;
    if ( v15 + 2 >= (unsigned __int64)v14[1] )
      v16 = v14[1];
    v13 = (const size_t *)*((_QWORD *)v14 + 1);
  }
  else
  {
    v16 = 2;
  }
  v110 = v13;
  v111 = v16;
  v112 = 0;
  v17 = 10;
  if ( v12 && (v18 = *(unsigned __int16 **)(v12 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v12 + 32) && (v19 = *(const size_t **)(v12 + 48)) != 0LL )
    {
      v20 = *(unsigned __int16 *)(v12 + 42);
      v115 = 0;
      LODWORD(v21) = v20;
    }
    else
    {
      v22 = *v18;
      v21 = v18[1];
      if ( v22 + 2 < v21 )
        LODWORD(v21) = v22 + 2;
      v19 = (const size_t *)*((_QWORD *)v18 + 1);
      v115 = 0;
    }
    v23 = &cchOriginalDestLength;
  }
  else
  {
    v23 = &cchOriginalDestLength;
    v115 = 0;
    v19 = &cchOriginalDestLength;
    LODWORD(v21) = 2;
  }
  v114 = v21;
  v113 = v19;
  v24 = KeGetCurrentThread()->Process[1].ActiveProcessors.StaticBitmap[2];
  if ( v24 )
  {
    v25 = *(unsigned __int16 *)(v24 + 2);
    v23 = *(const size_t **)(v24 + 8);
  }
  else
  {
    v25 = 2;
  }
  v116 = v23;
  v117 = v25;
  v118 = 0;
  v119 = &cchOriginalDestLength;
  v120 = 2LL;
  v121 = &a6;
  v122 = 4LL;
  v123 = &v97;
  v124 = 4LL;
  v125 = &v98;
  v126 = 4LL;
  v127 = Object + 120;
  v128 = 4LL;
  v26 = *((_QWORD *)Object + 135);
  if ( v26 )
    v27 = (int *)(v26 + 40);
  else
    v27 = &v95;
  v129 = v27;
  v130 = 4LL;
  LODWORD(v104) = 1;
  v28 = 4 * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 12;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v28, 1767073107LL);
  P = Pool2;
  v30 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *(_DWORD *)(*((_QWORD *)Object + 19) + 8LL);
    memmove(
      Pool2 + 1,
      **((const void ***)Object + 19),
      4LL * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 8);
    v17 = 11;
    v131 = &v104;
    v132 = 4LL;
    v133 = v30;
    v134 = v28;
    v135 = 0;
  }
  else
  {
    v131 = (__int64 *)&v95;
    v132 = 4LL;
  }
  v31 = *((_QWORD *)Object + 98);
  v32 = v17 + 1;
  v33 = v17 + 2;
  *((_QWORD *)&UserData.Size + 2 * (unsigned int)(v17 + 1)) = 4LL;
  if ( v31 )
  {
    *(&UserData.Ptr + 2 * v32) = (ULONGLONG)&v99;
    v34 = *((_QWORD *)Object + 98);
    v35 = 2LL * v33;
    v33 = v17 + 3;
    v36 = *(unsigned __int8 *)(v34 + 1);
    *(&UserData.Ptr + v35) = v34;
    *(&UserData.Reserved + 2 * v35) = 0;
    *(&UserData.Size + 2 * v35) = 4 * v36 + 8;
  }
  else
  {
    *(&UserData.Ptr + 2 * v32) = (ULONGLONG)&v95;
  }
  if ( !*((_DWORD *)Object + 200) )
  {
    v50 = 2LL * v33;
    *(&UserData.Ptr + v50) = (ULONGLONG)&v95;
    *((_QWORD *)&UserData.Size + v50) = 4LL;
    goto LABEL_53;
  }
  v37 = *((unsigned int *)Object + 200);
  v38 = 0;
  v39 = (__int64 *)*((_QWORD *)Object + 99);
  do
  {
    v40 = *v39;
    v39 += 2;
    v38 += 4 * *(unsigned __int8 *)(v40 + 1) + 12;
    --v37;
  }
  while ( v37 );
  v41 = (void *)ExAllocatePool2(256LL, v38, 1767073107LL);
  v105 = v41;
  v42 = v41;
  if ( v41 )
  {
    v43 = *((_DWORD *)Object + 200);
    v44 = v41;
    v96 = v43;
    if ( v43 )
    {
      v45 = 0;
      do
      {
        v46 = 2LL * v45;
        *v44 = *(_DWORD *)(*((_QWORD *)Object + 99) + 16LL * v45 + 8);
        v47 = *(unsigned __int8 **)(*((_QWORD *)Object + 99) + 16LL * v45);
        memmove(v44 + 1, v47, 4LL * v47[1] + 8);
        ++v45;
        v43 = v96;
        v44 += *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 99) + 8 * v46) + 1LL) + 3;
      }
      while ( v45 < v96 );
      v12 = v106;
      v42 = v105;
    }
  }
  else
  {
    v43 = v96;
  }
  v48 = 2LL * v33++;
  *(&UserData.Ptr + v48) = (ULONGLONG)&v96;
  *((_QWORD *)&UserData.Size + v48) = 4LL;
  if ( v43 )
  {
    v49 = 2LL * v33;
    *(&UserData.Ptr + v49) = (ULONGLONG)v42;
    *(&UserData.Size + 2 * v49) = v38;
    *(&UserData.Reserved + 2 * v49) = 0;
LABEL_53:
    ++v33;
  }
  v51 = v107;
  v52 = 2LL * v33;
  v53 = v33 + 1;
  *((_QWORD *)&UserData.Size + v52) = 4LL;
  if ( v51 )
  {
    *(&UserData.Ptr + v52) = (ULONGLONG)&v99;
    v54 = 2LL * v53++;
    v55 = 4 * *(unsigned __int8 *)(v51 + 1) + 8;
    *(&UserData.Ptr + v54) = v51;
    *(&UserData.Size + 2 * v54) = v55;
    *(&UserData.Reserved + 2 * v54) = 0;
  }
  else
  {
    *(&UserData.Ptr + v52) = (ULONGLONG)&v95;
  }
  v56 = *(_WORD *)(a5 + 2);
  v57 = 2LL * v53;
  *(&UserData.Ptr + v57) = a5;
  *((_QWORD *)&UserData.Size + v57) = 1LL;
  v58 = v53 + 1;
  v59 = v53 + 2;
  v58 *= 2LL;
  *(&UserData.Ptr + v58) = a5 + 2;
  *((_QWORD *)&UserData.Size + v58) = 2LL;
  if ( v56 >= 0 )
  {
    v61 = *(unsigned __int8 **)(a5 + 8);
LABEL_61:
    if ( v61 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v60 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v60 )
  {
    v61 = (unsigned __int8 *)(a5 + v60);
    goto LABEL_61;
  }
LABEL_62:
  v61 = (unsigned __int8 *)SeNullSid;
LABEL_63:
  v62 = v59;
  v63 = v59 + 1;
  v62 *= 2LL;
  v64 = 4 * v61[1] + 8;
  *(&UserData.Ptr + v62) = (ULONGLONG)v61;
  *(&UserData.Size + 2 * v62) = v64;
  *(&UserData.Reserved + 2 * v62) = 0;
  if ( v56 >= 0 )
  {
    v66 = *(unsigned __int8 **)(a5 + 8);
LABEL_67:
    if ( v66 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v65 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v65 )
  {
    v66 = (unsigned __int8 *)(a5 + v65);
    goto LABEL_67;
  }
LABEL_68:
  v66 = (unsigned __int8 *)SeNullSid;
LABEL_69:
  v67 = 2LL * v63;
  v68 = 4 * v66[1] + 8;
  *(&UserData.Ptr + v67) = (ULONGLONG)v66;
  *(&UserData.Size + 2 * v67) = v68;
  *(&UserData.Reserved + 2 * v67) = 0;
  v69 = v63 + 1;
  if ( (v56 & 4) == 0 )
  {
LABEL_73:
    v71 = 0LL;
    goto LABEL_75;
  }
  if ( v56 < 0 )
  {
    v70 = *(unsigned int *)(a5 + 16);
    if ( (_DWORD)v70 )
    {
      v71 = a5 + v70;
      goto LABEL_75;
    }
    goto LABEL_73;
  }
  v71 = *(_QWORD *)(a5 + 32);
LABEL_75:
  v72 = v69 + 1;
  v73 = 2LL * v69;
  if ( v71 )
  {
    v74 = SepFlattenAcl(v71, &v102, &v100, &v93);
    *((_QWORD *)&UserData.Size + v73) = 1LL;
    v75 = v102;
    if ( v74 >= 0 )
    {
      *(&UserData.Ptr + v73) = v71;
      v76 = v72++;
      v76 *= 2LL;
      *(&UserData.Ptr + v76) = (ULONGLONG)&v93;
      *((_QWORD *)&UserData.Size + v76) = 2LL;
      LODWORD(v76) = v100;
      v77 = 2LL * v72;
      *(&UserData.Ptr + v77) = (ULONGLONG)v75;
      *(&UserData.Size + 2 * v77) = v76;
      *(&UserData.Reserved + 2 * v77) = 0;
      goto LABEL_80;
    }
  }
  else
  {
    v75 = v102;
    *((_QWORD *)&UserData.Size + 2 * v69) = 1LL;
  }
  *(&UserData.Ptr + v73) = (ULONGLONG)&v90;
  v78 = 2LL * v72;
  *((_QWORD *)&UserData.Size + v78) = 2LL;
  *(&UserData.Ptr + v78) = (ULONGLONG)v92;
LABEL_80:
  v79 = *(_WORD *)(a5 + 2);
  v80 = v72 + 1;
  if ( (v79 & 0x10) == 0 )
  {
LABEL_84:
    v82 = 0LL;
    goto LABEL_86;
  }
  if ( v79 < 0 )
  {
    v81 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v81 )
    {
      v82 = a5 + v81;
      goto LABEL_86;
    }
    goto LABEL_84;
  }
  v82 = *(_QWORD *)(a5 + 24);
LABEL_86:
  v83 = v72 + 2;
  v84 = 2LL * v80;
  if ( !v82 )
  {
    *((_QWORD *)&UserData.Size + 2 * v80) = 1LL;
    *(&UserData.Ptr + 2 * v80) = (ULONGLONG)&v90;
    v89 = 2LL * v83;
    goto LABEL_91;
  }
  v85 = SepFlattenAcl(v82, &v103, &v101, &v94);
  *((_QWORD *)&UserData.Size + v84) = 1LL;
  if ( v85 < 0 )
  {
    *(&UserData.Ptr + v84) = (ULONGLONG)&v90;
    v89 = 2LL * v83;
LABEL_91:
    v86 = v103;
    *((_QWORD *)&UserData.Size + v89) = 2LL;
    *(&UserData.Ptr + v89) = (ULONGLONG)v92;
    goto LABEL_92;
  }
  *(&UserData.Ptr + v84) = v82;
  v86 = v103;
  v87 = v83++;
  v87 *= 2LL;
  *(&UserData.Ptr + v87) = (ULONGLONG)&v94;
  *((_QWORD *)&UserData.Size + v87) = 2LL;
  LODWORD(v87) = v101;
  v88 = 2LL * v83;
  *(&UserData.Ptr + v88) = (ULONGLONG)v86;
  *(&UserData.Size + 2 * v88) = v87;
  *(&UserData.Reserved + 2 * v88) = 0;
LABEL_92:
  EtwWrite(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, v83 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v105 )
    ExFreePoolWithTag(v105, 0);
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
  if ( v86 )
    ExFreePoolWithTag(v86, 0);
  if ( HIBYTE(v90) )
    ObfDereferenceObjectWithTag(Object, 0x67446553u);
  if ( v91[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v12 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v12 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v12 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v12 + 24), 0);
    ExFreePoolWithTag((PVOID)v12, 0);
  }
}
