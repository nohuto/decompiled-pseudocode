/*
 * XREFs of LocalConvertAclToString @ 0x14074FD70
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1403D8C70 (_ultow_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     LookupAccessMaskInTable @ 0x14075060C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1407506A4 (LookupAceTypeInTable.c)
 *     LocalGetAceCondition @ 0x140750740 (LocalGetAceCondition.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     RtlNtStatusToDosError @ 0x140755BE0 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x1408368E8 (LocalConvertSidToStringSidW.c)
 *     LookupAceFlagsInTable @ 0x14083F7B0 (LookupAceFlagsInTable.c)
 *     SddlpUuidToString @ 0x1409CFD68 (SddlpUuidToString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        __int64 a3,
        wchar_t **a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  unsigned int v11; // edi
  unsigned __int8 *v12; // r13
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  __int64 v20; // rbx
  void *v21; // r15
  unsigned int v22; // r12d
  ULONG AceCondition; // esi
  int v24; // ebx
  _DWORD *v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  wchar_t **v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  PVOID *v34; // r12
  wchar_t *v35; // rdi
  unsigned __int64 v36; // rbx
  unsigned __int8 *v37; // r13
  __int64 v38; // r12
  wchar_t *v39; // rdi
  rsize_t v40; // rbx
  const wchar_t **v41; // rax
  const wchar_t **v42; // rsi
  __int64 v43; // rax
  unsigned int v44; // esi
  wchar_t *v45; // rdi
  rsize_t v46; // rbx
  rsize_t v47; // rbx
  unsigned int v48; // ecx
  wchar_t *v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // rsi
  __int64 v52; // r13
  int v53; // eax
  const wchar_t **v54; // rax
  const wchar_t **v55; // r14
  __int64 v56; // rax
  rsize_t v57; // rbx
  wchar_t *v58; // rdi
  __int64 v59; // rax
  rsize_t v60; // rbx
  wchar_t *v61; // rdi
  _QWORD *v62; // rax
  rsize_t v63; // rbx
  wchar_t *v64; // rdi
  const wchar_t *v65; // r14
  __int64 v66; // rax
  const wchar_t *v67; // r14
  wchar_t *v68; // rdi
  unsigned __int64 v69; // rbx
  unsigned __int8 *v70; // r13
  unsigned int v71; // ebx
  _QWORD *v72; // r12
  _BYTE *v73; // r14
  __int64 result; // rax
  unsigned int v75; // eax
  int v76; // edi
  __int64 *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // ecx
  unsigned int v81; // ecx
  unsigned int v82; // ecx
  unsigned int v83; // ecx
  unsigned int v84; // ecx
  unsigned int v85; // ecx
  unsigned int v86; // ecx
  unsigned int v87; // ecx
  NTSTATUS v88; // eax
  void *v89; // rcx
  __int64 *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  const wchar_t **v93; // rax
  const wchar_t **v94; // r14
  __int64 v95; // rax
  unsigned int v96; // eax
  unsigned int i; // r14d
  const wchar_t **v98; // rax
  const wchar_t **v99; // r15
  __int64 v100; // rax
  wchar_t *v101; // rax
  PVOID v102; // rcx
  unsigned int v103; // ecx
  unsigned int v104; // ecx
  unsigned int v105; // ecx
  unsigned int v106; // ecx
  unsigned int v107; // ecx
  unsigned int v108; // ecx
  unsigned int v109; // ecx
  int v110; // edx
  unsigned int v111; // r8d
  unsigned __int8 *v112; // rax
  wchar_t *v113; // rax
  unsigned int v114; // ecx
  unsigned int v115; // ecx
  unsigned int v116; // ecx
  unsigned int v117; // ecx
  unsigned int v118; // ecx
  int v119; // edx
  unsigned int v120; // r8d
  unsigned int v121; // ecx
  unsigned int v122; // ecx
  int v123; // eax
  wchar_t *v124; // r15
  __int64 v125; // r14
  wchar_t *v126; // r15
  __int64 v127; // r14
  rsize_t v128; // rbx
  wchar_t *v129; // rdi
  __int64 v130; // rax
  unsigned int Val; // [rsp+58h] [rbp-69h]
  unsigned int v132; // [rsp+60h] [rbp-61h]
  unsigned int v133; // [rsp+60h] [rbp-61h]
  ULONG v134; // [rsp+64h] [rbp-5Dh] BYREF
  wchar_t Str2[4]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int8 *v136; // [rsp+70h] [rbp-51h]
  PVOID v137; // [rsp+78h] [rbp-49h] BYREF
  __int64 v138; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int8 *v139; // [rsp+88h] [rbp-39h]
  wchar_t *Src; // [rsp+90h] [rbp-31h] BYREF
  PVOID P; // [rsp+98h] [rbp-29h]
  PVOID v142; // [rsp+A0h] [rbp-21h]
  int v143; // [rsp+A8h] [rbp-19h]
  PVOID v144; // [rsp+B0h] [rbp-11h]
  __int64 v145; // [rsp+B8h] [rbp-9h]
  unsigned int v148; // [rsp+140h] [rbp+7Fh]

  v148 = 0;
  v143 = 0;
  v11 = 0;
  Src = 0LL;
  Val = 0;
  v136 = 0LL;
  v138 = 0LL;
  v137 = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v101 = (wchar_t *)SddlpAlloc(0x24uLL);
    *a4 = v101;
    if ( !v101 )
    {
      result = 8LL;
      goto LABEL_116;
    }
    wcscpy(v101, L"NO_ACCESS_CONTROL");
    return 0LL;
  }
  if ( !*(_WORD *)(a1 + 4) )
  {
    *a4 = 0LL;
    result = 0LL;
LABEL_116:
    *a5 = 0;
    return result;
  }
  P = (PVOID)SddlpAlloc(8LL * *(unsigned __int16 *)(a1 + 4));
  if ( !P )
    return 8LL;
  v144 = (PVOID)SddlpAlloc(*(unsigned __int16 *)(a1 + 4));
  if ( !v144 )
  {
    v102 = P;
LABEL_130:
    ExFreePoolWithTag(v102, 0);
    return 8LL;
  }
  v142 = (PVOID)SddlpAlloc(4LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v142 )
  {
    ExFreePoolWithTag(P, 0);
    v102 = v144;
    goto LABEL_130;
  }
  v132 = 0;
  v12 = (unsigned __int8 *)(a1 + 8);
  v139 = (unsigned __int8 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_193;
  while ( 1 )
  {
    v11 += 2;
    v148 = v11;
    v13 = (__int64 *)LookupAceTypeInTable(0LL);
    if ( !v13 )
    {
LABEL_139:
      AceCondition = 1336;
      goto LABEL_33;
    }
    v14 = *v13;
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v14 + 2 * v15) );
    v16 = 0;
    v17 = v11 + 2 + 2 * v15;
    do
    {
      if ( ((unsigned __int8)(1 << v16) & v12[1]) != 0 )
      {
        v90 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v90 )
        {
          v91 = *v90;
          v92 = -1LL;
          do
            ++v92;
          while ( *(_WORD *)(v91 + 2 * v92) );
          v17 += 2 * v92;
        }
      }
      ++v16;
    }
    while ( v16 < 8 );
    v18 = *v12;
    v11 = v17 + 2;
    v148 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v18 > 9 )
    {
      v80 = v18 - 10;
      if ( !v80 )
        goto LABEL_19;
      v81 = v80 - 1;
      if ( v81 )
      {
        v82 = v81 - 2;
        if ( v82 )
        {
          v83 = v82 - 4;
          if ( v83 )
          {
            v108 = v83 - 1;
            if ( v108 )
            {
              v109 = v108 - 1;
              if ( v109 )
              {
                if ( v109 - 1 > 1 )
                  goto LABEL_139;
              }
            }
          }
        }
LABEL_19:
        v19 = *((_DWORD *)v12 + 1);
        v20 = (__int64)(v12 + 8);
        v136 = v12 + 8;
        Val = v19;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v18 == 9 )
        goto LABEL_19;
      if ( !v18 )
        goto LABEL_19;
      v103 = v18 - 1;
      if ( !v103 )
        goto LABEL_19;
      v104 = v103 - 1;
      if ( !v104 )
        goto LABEL_19;
      v105 = v104 - 1;
      if ( !v105 )
        goto LABEL_19;
      v106 = v105 - 2;
      if ( v106 )
      {
        v107 = v106 - 1;
        if ( v107 )
        {
          if ( v107 - 1 >= 2 )
            goto LABEL_139;
        }
      }
    }
    v19 = *((_DWORD *)v12 + 1);
    v110 = *((_DWORD *)v12 + 2) & 2;
    v111 = *((_DWORD *)v12 + 2) & 1;
    Val = v19;
    v20 = (__int64)&v12[16 * v111 + (v110 != 0 ? 28LL : 12LL)];
    v112 = v12 + 12;
    v136 = (unsigned __int8 *)v20;
    if ( v111 && v12 != (unsigned __int8 *)-12LL )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v110 )
    {
      if ( v111 )
        v112 = v12 + 28;
      if ( v112 )
        *(_DWORD *)Str2 = v11 + 72;
    }
LABEL_20:
    v21 = (void *)v20;
    v22 = v19;
    if ( v137 )
    {
      ExFreePoolWithTag(v137, 0);
      v137 = 0LL;
    }
    v134 = 0;
    AceCondition = LocalGetAceCondition(v12, v20, &v137, &v134);
    if ( AceCondition )
      break;
    v24 = 0;
    v25 = v142;
    *((_DWORD *)v142 + v132) = 0;
    v26 = (__int64 *)LookupAccessMaskInTable(0LL);
    if ( !v26 )
    {
      v75 = Val;
      v76 = 0;
      while ( 1 )
      {
        if ( (v75 & (1 << v76)) != 0 )
        {
          v77 = (__int64 *)LookupAccessMaskInTable(0LL);
          if ( !v77 )
          {
            v24 = 20;
            *((_DWORD *)v142 + v132) = 2;
            goto LABEL_27;
          }
          v78 = *v77;
          v79 = -1LL;
          do
            ++v79;
          while ( *(_WORD *)(v78 + 2 * v79) );
          v24 += 2 * v79;
          v75 = Val;
        }
        if ( (unsigned int)++v76 >= 0x20 )
          goto LABEL_27;
      }
    }
    v25[v132] = 1;
    v28 = -1LL;
    v29 = *v26;
    do
      ++v28;
    while ( *(_WORD *)(v29 + 2 * v28) );
    v24 = 2 * v28;
LABEL_27:
    v11 = v24 + *(_DWORD *)Str2 + 6;
    v148 = v11;
    v30 = LookupSidInTable(0LL, v21, a6, v27, Str2, a9, &v138);
    v31 = (wchar_t **)((char *)P + 8 * v132);
    if ( v30 )
    {
      *v31 = (wchar_t *)(v30 + 2);
      goto LABEL_29;
    }
    if ( v138 )
    {
      v113 = (wchar_t *)SddlpAlloc(6uLL);
      *v31 = v113;
      if ( v113 )
      {
        wcscpy_s(v113, 3uLL, L"SA");
        goto LABEL_106;
      }
      AceCondition = 8;
LABEL_32:
      Val = v22;
      v136 = (unsigned __int8 *)v21;
      goto LABEL_33;
    }
    v88 = LocalConvertSidToStringSidW(v21);
    if ( v88 < 0 )
    {
      AceCondition = RtlNtStatusToDosError(v88);
      goto LABEL_32;
    }
LABEL_106:
    *((_BYTE *)v144 + v132) = 1;
LABEL_29:
    v32 = -1LL;
    do
      ++v32;
    while ( (*v31)[v32] );
    v11 += 2 * v32 + 4;
    v12 += *((unsigned __int16 *)v12 + 1);
    v148 = v11;
    ++v132;
    Val = v22;
    v136 = (unsigned __int8 *)v21;
    if ( v132 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_32;
  }
  v11 = *(_DWORD *)Str2;
  v148 = *(_DWORD *)Str2;
LABEL_33:
  if ( !v11 )
  {
LABEL_193:
    AceCondition = 1336;
    goto LABEL_71;
  }
  if ( AceCondition )
    goto LABEL_71;
  if ( (v11 & 1) != 0 )
    v148 = ++v11;
  v33 = v11;
  v34 = (PVOID *)a4;
  v35 = (wchar_t *)SddlpAlloc(v11);
  *a4 = v35;
  if ( !v35 )
  {
    AceCondition = 8;
    goto LABEL_158;
  }
  v36 = v33 >> 1;
  v133 = 0;
  if ( !*(_WORD *)(a1 + 4) )
  {
LABEL_158:
    v11 = v148;
    goto LABEL_72;
  }
  v37 = v139;
  v38 = 0LL;
  while ( v36 )
  {
    *v35 = 40;
    v39 = v35 + 1;
    v40 = v36 - 1;
    v41 = (const wchar_t **)LookupAceTypeInTable(0LL);
    v42 = v41;
    if ( v41 )
    {
      wcscpy_s(v39, v40, *v41);
      v43 = *((unsigned int *)v42 + 2);
      v40 -= v43;
      v39 += v43;
    }
    if ( !v40 )
      break;
    v44 = v38;
    *v39 = 59;
    v45 = v39 + 1;
    v46 = v40 - 1;
    do
    {
      if ( ((unsigned __int8)(1 << v44) & v37[1]) != 0 )
      {
        v93 = (const wchar_t **)LookupAceFlagsInTable(0LL);
        v94 = v93;
        if ( v93 )
        {
          wcscpy_s(v45, v46, *v93);
          v95 = *((unsigned int *)v94 + 2);
          v46 -= v95;
          v45 += v95;
        }
      }
      ++v44;
    }
    while ( v44 < 8 );
    if ( !v46 )
      break;
    v138 = v38;
    *(_QWORD *)Str2 = 0LL;
    *v45 = 59;
    v47 = v46 - 1;
    v48 = *v37;
    v49 = v45 + 1;
    if ( v48 > 9 )
    {
      v84 = v48 - 10;
      if ( !v84 )
        goto LABEL_51;
      v85 = v84 - 1;
      if ( v85 )
      {
        v86 = v85 - 2;
        if ( !v86 || (v87 = v86 - 4) == 0 || (v121 = v87 - 1) == 0 || (v122 = v121 - 1) == 0 || v122 - 1 < 2 )
        {
LABEL_51:
          v50 = *((_DWORD *)v37 + 1);
          v51 = (__int64)(v37 + 8);
          v136 = v37 + 8;
          Val = v50;
          goto LABEL_52;
        }
LABEL_171:
        v51 = (__int64)v136;
        goto LABEL_52;
      }
    }
    else
    {
      if ( v48 == 9 )
        goto LABEL_51;
      if ( !*v37 )
        goto LABEL_51;
      v114 = v48 - 1;
      if ( !v114 )
        goto LABEL_51;
      v115 = v114 - 1;
      if ( !v115 )
        goto LABEL_51;
      v116 = v115 - 1;
      if ( !v116 )
        goto LABEL_51;
      v117 = v116 - 2;
      if ( v117 )
      {
        v118 = v117 - 1;
        if ( v118 )
        {
          if ( v118 - 1 > 1 )
            goto LABEL_171;
        }
      }
    }
    v119 = *((_DWORD *)v37 + 2) & 2;
    v120 = *((_DWORD *)v37 + 2) & 1;
    Val = *((_DWORD *)v37 + 1);
    v51 = (__int64)&v37[16 * v120 + (v119 != 0 ? 28LL : 12LL)];
    v136 = (unsigned __int8 *)v51;
    if ( v119 )
    {
      if ( !v120 )
      {
        *(_QWORD *)Str2 = v37 + 12;
LABEL_173:
        v38 = 0LL;
        v138 = 0LL;
        goto LABEL_52;
      }
      *(_QWORD *)Str2 = v37 + 28;
    }
    else
    {
      *(_QWORD *)Str2 = 0LL;
      if ( !v120 )
        goto LABEL_173;
    }
    v38 = (__int64)(v37 + 12);
    v138 = (__int64)(v37 + 12);
LABEL_52:
    if ( v137 )
    {
      ExFreePoolWithTag(v137, 0);
      v137 = 0LL;
    }
    v134 = 0;
    v134 = LocalGetAceCondition(v37, v51, &v137, &v134);
    AceCondition = v134;
    if ( v134 )
      goto LABEL_70;
    v52 = v133;
    v145 = v133;
    v53 = *((_DWORD *)v142 + v133);
    if ( v53 == 2 )
    {
      wcscpy_s(v49, v47, L"0x");
      v49 += 2;
      v47 -= 2LL;
      ultow_s(Val, v49, v47, 16);
      v56 = -1LL;
      do
        ++v56;
      while ( v49[v56] );
LABEL_59:
      v49 += v56;
      v47 -= v56;
      goto LABEL_60;
    }
    if ( v53 == 1 )
    {
      v54 = (const wchar_t **)LookupAccessMaskInTable(0LL);
      v55 = v54;
      if ( !v54 )
        goto LABEL_60;
      wcscpy_s(v49, v47, *v54);
      v56 = *((unsigned int *)v55 + 2);
      goto LABEL_59;
    }
    v96 = Val;
    for ( i = 0; i < 0x20; ++i )
    {
      if ( (v96 & (1 << i)) != 0 )
      {
        v98 = (const wchar_t **)LookupAccessMaskInTable(0LL);
        v99 = v98;
        if ( v98 )
        {
          wcscpy_s(v49, v47, *v98);
          v100 = *((unsigned int *)v99 + 2);
          v47 -= v100;
          v49 += v100;
        }
        v96 = Val;
      }
    }
    AceCondition = v134;
    v38 = v138;
    v52 = v145;
LABEL_60:
    if ( !v47 )
      break;
    v57 = v47 - 1;
    *v49 = 59;
    v58 = v49 + 1;
    if ( v38 )
    {
      v123 = SddlpUuidToString(v38, &Src);
      v38 = 0LL;
      if ( !v123 )
        goto LABEL_70;
      v124 = Src;
      v125 = -1LL;
      do
        ++v125;
      while ( Src[v125] );
      wcscpy_s(v58, v57, Src);
      v57 -= v125;
      v58 += v125;
      if ( v124 )
        ExFreePoolWithTag(v124, 0);
    }
    if ( !v57 )
      break;
    v59 = *(_QWORD *)Str2;
    v60 = v57 - 1;
    *v58 = 59;
    v61 = v58 + 1;
    if ( v59 )
    {
      if ( !(unsigned int)SddlpUuidToString(v59, &Src) )
        goto LABEL_70;
      v126 = Src;
      v127 = -1LL;
      do
        ++v127;
      while ( Src[v127] != (_WORD)v38 );
      wcscpy_s(v61, v60, Src);
      v60 -= v127;
      v61 += v127;
      if ( v126 )
        ExFreePoolWithTag(v126, 0);
    }
    if ( !v60 )
      break;
    v62 = P;
    v63 = v60 - 1;
    *v61 = 59;
    v64 = v61 + 1;
    v65 = (const wchar_t *)v62[v52];
    wcscpy_s(v64, v63, v65);
    v66 = -1LL;
    do
      ++v66;
    while ( v65[v66] != (_WORD)v38 );
    v67 = (const wchar_t *)v137;
    v68 = &v64[v66];
    v69 = v63 - v66;
    if ( v137 )
    {
      if ( !v69 )
        break;
      v128 = v69 - 1;
      *v68 = 59;
      v129 = v68 + 1;
      wcscpy_s(v129, v128, v67);
      v130 = -1LL;
      do
        ++v130;
      while ( v67[v130] != (_WORD)v38 );
      v68 = &v129[v130];
      v69 = v128 - v130;
    }
    if ( v69 <= 1 )
      break;
    v70 = v139;
    v36 = v69 - 1;
    *v68 = 41;
    v35 = v68 + 1;
    ++v133;
    *v35 = v38;
    v37 = &v70[*((unsigned __int16 *)v70 + 1)];
    v139 = v37;
    if ( v133 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_70;
  }
  AceCondition = 1336;
LABEL_70:
  v11 = v148;
LABEL_71:
  v34 = (PVOID *)a4;
LABEL_72:
  v71 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v72 = P;
    v73 = v144;
    do
    {
      if ( v73[v71] )
      {
        v89 = (void *)v72[v71];
        if ( v89 )
          ExFreePoolWithTag(v89, 0);
      }
      ++v71;
    }
    while ( v71 < *(unsigned __int16 *)(a1 + 4) );
    v11 = v148;
    v34 = (PVOID *)a4;
  }
  ExFreePoolWithTag(P, 0);
  ExFreePoolWithTag(v144, 0);
  ExFreePoolWithTag(v142, 0);
  if ( v137 )
    ExFreePoolWithTag(v137, 0);
  if ( AceCondition )
  {
    if ( *v34 )
      ExFreePoolWithTag(*v34, 0);
    *v34 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}
