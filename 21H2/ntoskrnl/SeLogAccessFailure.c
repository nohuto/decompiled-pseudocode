/*
 * XREFs of SeLogAccessFailure @ 0x140238D50
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SepFlattenAcl @ 0x1405968AC (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x140596A2C (SepGetLearningModeObjectInformation.c)
 *     PsReferenceEffectiveToken @ 0x140651B70 (PsReferenceEffectiveToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SeLogAccessFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONGLONG a4,
        ULONGLONG a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // al
  const wchar_t *v10; // r8
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 LearningModeObjectInformation; // rax
  __int64 v14; // r13
  unsigned __int16 *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  const size_t *v18; // rdx
  unsigned __int16 *v19; // r8
  const size_t *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // ecx
  const size_t *v25; // rdx
  __int64 v26; // rax
  int *v27; // rax
  unsigned int v28; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v30; // rdi
  int *v31; // rax
  unsigned int v32; // edi
  int **v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  ULONGLONG v36; // rcx
  int v37; // eax
  __int64 v38; // r9
  ULONG v39; // r15d
  __int64 *v40; // rdx
  __int64 v41; // rax
  PVOID v42; // rax
  _DWORD *v43; // r12
  unsigned int v44; // ecx
  unsigned int v45; // r13d
  __int64 v46; // rbx
  unsigned __int8 *v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // edi
  __int64 v50; // rax
  __int64 v51; // rax
  ULONGLONG v52; // r8
  unsigned int v53; // edx
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  unsigned int v57; // edx
  __int64 v58; // rcx
  unsigned int v59; // edx
  __int16 v60; // r9
  __int64 v61; // rax
  unsigned __int8 *v62; // r8
  __int64 v63; // rcx
  unsigned int v64; // edx
  int v65; // eax
  __int64 v66; // rax
  unsigned __int8 *v67; // r8
  __int64 v68; // rcx
  unsigned int v69; // edx
  int v70; // eax
  __int64 v71; // rax
  ULONGLONG v72; // rdi
  unsigned int v73; // ebx
  __int64 v74; // r15
  int v75; // eax
  PVOID v76; // r12
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // ecx
  __int64 v82; // rax
  ULONGLONG v83; // rdi
  unsigned int v84; // ebx
  __int64 v85; // rsi
  int v86; // eax
  PVOID v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  char v91; // [rsp+48h] [rbp-C0h] BYREF
  char v92; // [rsp+49h] [rbp-BFh]
  char v93[2]; // [rsp+4Ah] [rbp-BEh] BYREF
  _WORD v94[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v95; // [rsp+50h] [rbp-B8h] BYREF
  int v96; // [rsp+54h] [rbp-B4h] BYREF
  int v97; // [rsp+58h] [rbp-B0h] BYREF
  int v98; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v99; // [rsp+60h] [rbp-A8h] BYREF
  int v100; // [rsp+64h] [rbp-A4h] BYREF
  int v101; // [rsp+68h] [rbp-A0h] BYREF
  int v102; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v103; // [rsp+70h] [rbp-98h] BYREF
  PVOID v104; // [rsp+78h] [rbp-90h] BYREF
  PVOID v105; // [rsp+80h] [rbp-88h]
  int v106; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v107; // [rsp+8Ch] [rbp-7Ch]
  PVOID v108; // [rsp+90h] [rbp-78h] BYREF
  __int64 v109; // [rsp+98h] [rbp-70h]
  ULONGLONG v110; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  const size_t *v113; // [rsp+C8h] [rbp-40h]
  int v114; // [rsp+D0h] [rbp-38h]
  int v115; // [rsp+D4h] [rbp-34h]
  const size_t *v116; // [rsp+D8h] [rbp-30h]
  int v117; // [rsp+E0h] [rbp-28h]
  int v118; // [rsp+E4h] [rbp-24h]
  const size_t *v119; // [rsp+E8h] [rbp-20h]
  int v120; // [rsp+F0h] [rbp-18h]
  int v121; // [rsp+F4h] [rbp-14h]
  const size_t *v122; // [rsp+F8h] [rbp-10h]
  __int64 v123; // [rsp+100h] [rbp-8h]
  char *v124; // [rsp+108h] [rbp+0h]
  __int64 v125; // [rsp+110h] [rbp+8h]
  int *v126; // [rsp+118h] [rbp+10h]
  __int64 v127; // [rsp+120h] [rbp+18h]
  int *v128; // [rsp+128h] [rbp+20h]
  __int64 v129; // [rsp+130h] [rbp+28h]
  __int64 v130; // [rsp+138h] [rbp+30h]
  __int64 v131; // [rsp+140h] [rbp+38h]
  int *v132; // [rsp+148h] [rbp+40h]
  __int64 v133; // [rsp+150h] [rbp+48h]
  int *v134; // [rsp+158h] [rbp+50h]
  __int64 v135; // [rsp+160h] [rbp+58h]
  _DWORD *v136; // [rsp+168h] [rbp+60h] BYREF
  unsigned int v137; // [rsp+170h] [rbp+68h]
  int v138; // [rsp+174h] [rbp+6Ch]
  char v139; // [rsp+178h] [rbp+70h] BYREF

  v105 = 0LL;
  v8 = a1;
  v99 = 0;
  v92 = 0;
  LOBYTE(v95) = 0;
  v108 = 0LL;
  LOWORD(v96) = 0;
  v103 = 0LL;
  v104 = 0LL;
  LOWORD(v97) = 0;
  v93[0] = 0;
  v101 = 0;
  v100 = 0;
  v98 = 0;
  v91 = 0;
  v94[0] = 0;
  v110 = a4;
  v102 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_140C5451C || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v100 = *(_DWORD *)(a1 + 192);
    v101 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v8 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v100,
           (unsigned int)&v95,
           (unsigned int)&v101,
           0LL);
    if ( !v8 )
      return;
    v92 = 1;
  }
  if ( a7 )
  {
    v10 = L"Permissive";
    v11 = L"Adminless Permissive";
    v12 = a8 != 0 ? 42 : 22;
  }
  else
  {
    v10 = L"Normal";
    v11 = L"Adminless";
    v12 = a8 != 0 ? 20 : 14;
  }
  UserData.Size = v12;
  UserData.Reserved = 0;
  if ( !a8 )
    v11 = v10;
  UserData.Ptr = (ULONGLONG)v11;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v93, v12, v10);
  v109 = LearningModeObjectInformation;
  v14 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v15 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v16 = *v15;
    v17 = v16 + 2;
    if ( v16 + 2 >= (unsigned __int64)v15[1] )
      v17 = v15[1];
    v18 = (const size_t *)*((_QWORD *)v15 + 1);
  }
  else
  {
    v17 = 2;
    v18 = &cchOriginalDestLength;
  }
  v113 = v18;
  v114 = v17;
  v115 = 0;
  if ( v14 && (v19 = *(unsigned __int16 **)(v14 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v14 + 32) && (v20 = *(const size_t **)(v14 + 48)) != 0LL )
    {
      LODWORD(v21) = *(unsigned __int16 *)(v14 + 42);
    }
    else
    {
      v22 = *v19;
      v21 = v19[1];
      if ( v22 + 2 < v21 )
        LODWORD(v21) = v22 + 2;
      v20 = (const size_t *)*((_QWORD *)v19 + 1);
    }
  }
  else
  {
    LODWORD(v21) = 2;
    v20 = &cchOriginalDestLength;
  }
  v118 = 0;
  v116 = v20;
  v117 = v21;
  v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( v23 )
  {
    v24 = *(unsigned __int16 *)(v23 + 2);
    v25 = *(const size_t **)(v23 + 8);
  }
  else
  {
    v24 = 2;
    v25 = &cchOriginalDestLength;
  }
  v119 = v25;
  v120 = v24;
  v124 = &a6;
  v126 = &v100;
  v128 = &v101;
  v130 = v8 + 120;
  v121 = 0;
  v122 = &cchOriginalDestLength;
  v123 = 2LL;
  v125 = 4LL;
  v127 = 4LL;
  v129 = 4LL;
  v131 = 4LL;
  v26 = *(_QWORD *)(v8 + 1080);
  if ( v26 )
    v27 = (int *)(v26 + 40);
  else
    v27 = &v98;
  v132 = v27;
  v133 = 4LL;
  v106 = 1;
  v28 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x69536553u);
  P = PoolWithTag;
  v30 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v8 + 152) + 8LL);
    memmove(
      PoolWithTag + 1,
      **(const void ***)(v8 + 152),
      4LL * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 8);
    v136 = v30;
    v31 = &v106;
    v32 = 13;
    v137 = v28;
    v33 = (int **)&v139;
    v138 = 0;
  }
  else
  {
    v31 = &v98;
    v32 = 12;
    v33 = &v136;
  }
  v135 = 4LL;
  v134 = v31;
  v34 = *(_QWORD *)(v8 + 784);
  v33[1] = (int *)4;
  if ( v34 )
  {
    *v33 = &v102;
    v35 = 2LL * v32;
    v36 = *(_QWORD *)(v8 + 784);
    ++v32;
    v37 = *(unsigned __int8 *)(v36 + 1);
    *(&UserData.Ptr + v35) = v36;
    *(&UserData.Reserved + 2 * v35) = 0;
    *(&UserData.Size + 2 * v35) = 4 * v37 + 8;
  }
  else
  {
    *v33 = &v98;
  }
  if ( *(_DWORD *)(v8 + 800) )
  {
    v38 = *(unsigned int *)(v8 + 800);
    v39 = 0;
    v40 = *(__int64 **)(v8 + 792);
    do
    {
      v41 = *v40;
      v40 += 2;
      v39 += 4 * *(unsigned __int8 *)(v41 + 1) + 12;
      --v38;
    }
    while ( v38 );
    v42 = ExAllocatePoolWithTag(PagedPool, v39, 0x69536553u);
    v105 = v42;
    v43 = v42;
    if ( v42 )
    {
      v44 = *(_DWORD *)(v8 + 800);
      v107 = 0;
      v99 = v44;
      if ( v44 )
      {
        v45 = v107;
        do
        {
          v46 = 2LL * v45;
          *v43 = *(_DWORD *)(*(_QWORD *)(v8 + 792) + 16LL * v45 + 8);
          v47 = *(unsigned __int8 **)(*(_QWORD *)(v8 + 792) + 16LL * v45);
          memmove(v43 + 1, v47, 4LL * v47[1] + 8);
          ++v45;
          v44 = v99;
          v43 += *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 792) + 8 * v46) + 1LL) + 3;
        }
        while ( v45 < v99 );
        v14 = v109;
        v43 = v105;
      }
      else
      {
        v43 = v42;
      }
    }
    else
    {
      v44 = v99;
    }
    v48 = 2LL * v32;
    v49 = v32 + 1;
    *(&UserData.Reserved + 2 * v48) = 0;
    *(&UserData.Ptr + v48) = (ULONGLONG)&v99;
    *(&UserData.Size + 2 * v48) = 4;
    if ( v44 )
    {
      v50 = 2LL * v49;
      *(&UserData.Ptr + v50) = (ULONGLONG)v43;
      *(&UserData.Reserved + 2 * v50) = 0;
      ++v49;
      *(&UserData.Size + 2 * v50) = v39;
    }
  }
  else
  {
    v51 = 2LL * v32;
    v49 = v32 + 1;
    *(&UserData.Ptr + v51) = (ULONGLONG)&v98;
    *((_QWORD *)&UserData.Size + v51) = 4LL;
  }
  v52 = v110;
  v53 = v49 + 1;
  *((_QWORD *)&UserData.Size + 2 * v49) = 4LL;
  if ( v52 )
  {
    *(&UserData.Ptr + 2 * v49) = (ULONGLONG)&v102;
    v54 = 2LL * v53;
    v53 = v49 + 2;
    v55 = 4 * *(unsigned __int8 *)(v52 + 1) + 8;
    *(&UserData.Ptr + v54) = v52;
    *(&UserData.Size + 2 * v54) = v55;
    *(&UserData.Reserved + 2 * v54) = 0;
  }
  else
  {
    *(&UserData.Ptr + 2 * v49) = (ULONGLONG)&v98;
  }
  v56 = v53;
  v57 = v53 + 1;
  v56 *= 2LL;
  v58 = 2LL * v57;
  v59 = v57 + 1;
  *(&UserData.Ptr + v56) = a5;
  *((_QWORD *)&UserData.Size + v56) = 1LL;
  v60 = *(_WORD *)(a5 + 2);
  *(&UserData.Ptr + v58) = a5 + 2;
  *((_QWORD *)&UserData.Size + v58) = 2LL;
  if ( v60 >= 0 )
  {
    v62 = *(unsigned __int8 **)(a5 + 8);
LABEL_61:
    if ( v62 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v61 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v61 )
  {
    v62 = (unsigned __int8 *)(a5 + v61);
    goto LABEL_61;
  }
LABEL_62:
  v62 = (unsigned __int8 *)SeNullSid;
LABEL_63:
  v63 = v59;
  v64 = v59 + 1;
  v63 *= 2LL;
  v65 = 4 * v62[1] + 8;
  *(&UserData.Ptr + v63) = (ULONGLONG)v62;
  *(&UserData.Size + 2 * v63) = v65;
  *(&UserData.Reserved + 2 * v63) = 0;
  if ( v60 >= 0 )
  {
    v67 = *(unsigned __int8 **)(a5 + 8);
LABEL_67:
    if ( v67 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v66 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v66 )
  {
    v67 = (unsigned __int8 *)(a5 + v66);
    goto LABEL_67;
  }
LABEL_68:
  v67 = (unsigned __int8 *)SeNullSid;
LABEL_69:
  v68 = 2LL * v64;
  v69 = v64 + 1;
  v70 = 4 * v67[1] + 8;
  *(&UserData.Ptr + v68) = (ULONGLONG)v67;
  *(&UserData.Size + 2 * v68) = v70;
  *(&UserData.Reserved + 2 * v68) = 0;
  if ( (v60 & 4) == 0 )
  {
LABEL_73:
    v72 = 0LL;
    goto LABEL_75;
  }
  if ( v60 < 0 )
  {
    v71 = *(unsigned int *)(a5 + 16);
    if ( (_DWORD)v71 )
    {
      v72 = a5 + v71;
      goto LABEL_75;
    }
    goto LABEL_73;
  }
  v72 = *(_QWORD *)(a5 + 32);
LABEL_75:
  v73 = v69 + 1;
  v74 = 2LL * v69;
  if ( v72 )
  {
    v75 = SepFlattenAcl(v72, &v108, &v103, &v96);
    *((_QWORD *)&UserData.Size + v74) = 1LL;
    v76 = v108;
    if ( v75 < 0 )
    {
      *(&UserData.Ptr + v74) = (ULONGLONG)&v91;
      v79 = 2LL * v73;
      *(&UserData.Ptr + v79) = (ULONGLONG)v94;
      *((_QWORD *)&UserData.Size + v79) = 2LL;
    }
    else
    {
      *(&UserData.Ptr + v74) = v72;
      v77 = v73++;
      v77 *= 2LL;
      *(&UserData.Ptr + v77) = (ULONGLONG)&v96;
      *((_QWORD *)&UserData.Size + v77) = 2LL;
      LODWORD(v77) = v103;
      v78 = 2LL * v73;
      *(&UserData.Ptr + v78) = (ULONGLONG)v76;
      *(&UserData.Size + 2 * v78) = v77;
      *(&UserData.Reserved + 2 * v78) = 0;
    }
    v60 = *(_WORD *)(a5 + 2);
  }
  else
  {
    v76 = v108;
    *(&UserData.Ptr + 2 * v69) = (ULONGLONG)&v91;
    *((_QWORD *)&UserData.Size + 2 * v69) = 1LL;
    v80 = 2LL * v73;
    *(&UserData.Ptr + v80) = (ULONGLONG)v94;
    *((_QWORD *)&UserData.Size + v80) = 2LL;
  }
  v81 = v73 + 1;
  if ( (v60 & 0x10) == 0 )
  {
LABEL_85:
    v83 = 0LL;
    goto LABEL_87;
  }
  if ( v60 < 0 )
  {
    v82 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v82 )
    {
      v83 = a5 + v82;
      goto LABEL_87;
    }
    goto LABEL_85;
  }
  v83 = *(_QWORD *)(a5 + 24);
LABEL_87:
  v84 = v73 + 2;
  v85 = 2LL * v81;
  if ( !v83 )
  {
    *((_QWORD *)&UserData.Size + 2 * v81) = 1LL;
    goto LABEL_91;
  }
  v86 = SepFlattenAcl(v83, &v104, (char *)&v103 + 4, &v97);
  *((_QWORD *)&UserData.Size + v85) = 1LL;
  if ( v86 < 0 )
  {
LABEL_91:
    v87 = v104;
    *(&UserData.Ptr + v85) = (ULONGLONG)&v91;
    v90 = 2LL * v84;
    *((_QWORD *)&UserData.Size + v90) = 2LL;
    *(&UserData.Ptr + v90) = (ULONGLONG)v94;
    goto LABEL_92;
  }
  *(&UserData.Ptr + v85) = v83;
  v87 = v104;
  v88 = v84++;
  v88 *= 2LL;
  *(&UserData.Ptr + v88) = (ULONGLONG)&v97;
  *((_QWORD *)&UserData.Size + v88) = 2LL;
  LODWORD(v88) = HIDWORD(v103);
  v89 = 2LL * v84;
  *(&UserData.Ptr + v89) = (ULONGLONG)v87;
  *(&UserData.Size + 2 * v89) = v88;
  *(&UserData.Reserved + 2 * v89) = 0;
LABEL_92:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v84 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v105 )
    ExFreePoolWithTag(v105, 0);
  if ( v76 )
    ExFreePoolWithTag(v76, 0);
  if ( v87 )
    ExFreePoolWithTag(v87, 0);
  if ( v92 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v8);
  if ( v93[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v14 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v14 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v14 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v14 + 24), 0);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
}
