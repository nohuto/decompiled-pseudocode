/*
 * XREFs of LocalGetAclForString @ 0x14074F18C
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14074E300 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlGetAce @ 0x140245EE0 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D6370 (wcstoul.c)
 *     wcsncpy_s @ 0x1403DA3B0 (wcsncpy_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     RtlAddAce @ 0x1406DB760 (RtlAddAce.c)
 *     LookupAccessMaskInTable @ 0x14075060C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1407506A4 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x140750A70 (LocalGetSidForString.c)
 *     LocalGetSDDLDeliminator @ 0x140750C60 (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x140750CCC (LocalGetAceCount.c)
 *     RtlNtStatusToDosError @ 0x140755BE0 (RtlNtStatusToDosError.c)
 *     LookupAceFlagsInTable @ 0x14083F7B0 (LookupAceFlagsInTable.c)
 *     SddlAddMandatoryAce @ 0x1408A1E92 (SddlAddMandatoryAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409B7F70 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409B7FD0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409B82C0 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409CF6F0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CF92C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFA8C (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1409CFC78 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1409D1B24 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D2214 (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetAclForString(wchar_t *Str, char a2, __int64 *a3, wchar_t **a4)
{
  wchar_t *v7; // r12
  unsigned int AceCount; // esi
  __int64 result; // rax
  wchar_t *v10; // rax
  __int64 v11; // rax
  wchar_t *v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // edi
  _BYTE *v15; // rax
  __int16 v16; // cx
  __int64 v17; // rax
  PVOID v18; // r13
  int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rax
  wchar_t *v23; // rbx
  wchar_t *v24; // rbx
  wchar_t **v25; // r12
  wchar_t v26; // ax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 i; // rdi
  unsigned int SidForString; // eax
  _WORD *v32; // rcx
  _WORD *j; // rbx
  int v34; // edx
  unsigned int v35; // r15d
  unsigned int v36; // edx
  unsigned int v37; // ebx
  unsigned int v38; // edi
  ULONG v39; // r13d
  ULONG v40; // eax
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // eax
  int v44; // ebx
  PVOID v45; // rdi
  _WORD *v46; // rax
  __int64 v47; // rax
  _BYTE *v48; // rax
  unsigned int v49; // eax
  bool v50; // cf
  int v51; // edx
  unsigned __int64 v52; // rcx
  unsigned int v53; // edi
  _WORD *v54; // rax
  void *v55; // rcx
  _WORD *v56; // r15
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  unsigned int v59; // ebx
  unsigned int v60; // ebx
  unsigned int v61; // ebx
  int v62; // edx
  unsigned int v63; // ebx
  unsigned int v64; // ebx
  unsigned int v65; // ebx
  unsigned int v66; // ebx
  unsigned int v67; // ebx
  unsigned int v68; // ebx
  int v69; // eax
  int v70; // ecx
  char *v71; // rdi
  char v72; // al
  PVOID v73; // r15
  PVOID v74; // rcx
  ULONG v75; // eax
  size_t v76; // rbx
  ULONG v77; // eax
  PVOID v78; // rdx
  int v79; // r9d
  PVOID v80; // r15
  PVOID v81; // rcx
  ULONG v82; // eax
  _WORD *v83; // r15
  char v84; // al
  size_t v85; // rbx
  int v86; // edi
  ULONG v87; // eax
  ULONG v88; // eax
  bool v89; // zf
  ULONG v90; // eax
  ULONG AceListLength[2]; // [rsp+20h] [rbp-E0h]
  char v92[8]; // [rsp+28h] [rbp-D8h]
  char v93; // [rsp+28h] [rbp-D8h]
  PVOID v94; // [rsp+30h] [rbp-D0h]
  int v95; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v96; // [rsp+50h] [rbp-B0h]
  char v97; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v98; // [rsp+52h] [rbp-AEh]
  int v99; // [rsp+54h] [rbp-ACh]
  PVOID P; // [rsp+58h] [rbp-A8h]
  size_t v101; // [rsp+60h] [rbp-A0h] BYREF
  int v102; // [rsp+68h] [rbp-98h]
  PVOID Src; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v104; // [rsp+78h] [rbp-88h] BYREF
  __int64 v105; // [rsp+80h] [rbp-80h]
  _WORD *v106; // [rsp+88h] [rbp-78h] BYREF
  char v107[8]; // [rsp+90h] [rbp-70h]
  int v108; // [rsp+98h] [rbp-68h]
  unsigned int Size; // [rsp+9Ch] [rbp-64h]
  int Size_4; // [rsp+A0h] [rbp-60h]
  PVOID v111; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sid; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t *EndPtr; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Ace; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t **v115; // [rsp+C8h] [rbp-38h]
  int v116; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v117; // [rsp+D4h] [rbp-2Ch]
  GUID Guid; // [rsp+D8h] [rbp-28h] BYREF
  GUID v119; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v115 = a4;
  v104 = 0;
  EndPtr = 0LL;
  v97 = 0;
  P = 0LL;
  v7 = Str;
  Sid = 0LL;
  AceCount = 0;
  Src = 0LL;
  v101 = 0LL;
  v111 = 0LL;
  Ace = 0LL;
  v106 = 0LL;
  v116 = 0;
  v117 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v7 + 17;
    goto LABEL_78;
  }
  v108 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v7);
  if ( (_DWORD)result )
    return result;
  v10 = *a4;
  if ( *a4 == v7 )
    return 87LL;
  if ( v10 )
  {
    v12 = v10 - 1;
  }
  else
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v7[v11] );
    v12 = &v7[v11];
  }
  *a4 = v12;
  AceCount = LocalGetAceCount(v7, v12, &v104);
  if ( AceCount )
    goto LABEL_78;
  v13 = v104;
  if ( !v104 )
  {
    v48 = (_BYTE *)SddlpAlloc(8uLL);
    *a3 = (__int64)v48;
    if ( v48 )
    {
      *v48 = 2;
      *(_BYTE *)(*a3 + 1) = 0;
      *(_WORD *)(*a3 + 2) = 8;
      *(_WORD *)(*a3 + 4) = 0;
      *(_WORD *)(*a3 + 6) = 0;
    }
    else
    {
      return 8;
    }
    return AceCount;
  }
  v14 = 84 * v104 + 8;
  if ( v14 > 0xFFFF )
    v14 = 0xFFFF;
  Size = v14;
  v15 = (_BYTE *)SddlpAlloc(v14);
  *a3 = (__int64)v15;
  if ( !v15 )
  {
    AceCount = 8;
    goto LABEL_78;
  }
  *v15 = 2;
  v16 = 8;
  v17 = *a3;
  Size_4 = 0;
  v102 = 8;
  *(_BYTE *)(v17 + 1) = 0;
  *(_WORD *)(*a3 + 2) = v14;
  *(_WORD *)(*a3 + 4) = 0;
  *(_WORD *)(*a3 + 6) = 0;
  v18 = P;
  if ( !v13 )
  {
LABEL_75:
    v46 = (_WORD *)*a3;
    if ( AceCount )
      goto LABEL_231;
    v46[1] = v16;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v96 = 0;
    v99 = 0;
    Guid = 0LL;
    v19 = 0;
    *(_QWORD *)v107 = 0LL;
    v119 = 0LL;
    v105 = 0LL;
    while ( *v7 == 32 )
      ++v7;
    if ( *v7 == 40 )
    {
      do
        ++v7;
      while ( *v7 == 32 );
    }
    v20 = LookupAceTypeInTable(v7);
    if ( !v20 )
    {
      AceCount = 1804;
      goto LABEL_230;
    }
    v21 = *(unsigned __int8 *)(v20 + 12);
    v22 = *(unsigned int *)(v20 + 8);
    v98 = v21;
    v23 = &v7[v22];
    if ( *v23 != 59 && *v23 != 32 )
    {
LABEL_101:
      AceCount = 1336;
LABEL_230:
      v46 = (_WORD *)*a3;
      goto LABEL_231;
    }
    v24 = v23 + 1;
    if ( (unsigned __int8)(v21 - 5) <= 3u || (_BYTE)v21 == 11 )
      *(_BYTE *)*a3 = 4;
    while ( *v24 == 32 )
      ++v24;
    v25 = v115;
    while ( v24 != *v25 )
    {
      if ( *v24 == 59 )
        goto LABEL_29;
      for ( ; *v24 == 32; ++v24 )
        ;
      v47 = LookupAceFlagsInTable(v24);
      if ( !v47 )
      {
        AceCount = 1004;
        goto LABEL_230;
      }
      v96 |= *(_BYTE *)(v47 + 12);
      v24 += *(unsigned int *)(v47 + 8);
    }
    while ( 1 )
    {
      v26 = *v24;
      if ( *v24 != 32 )
        break;
LABEL_29:
      ++v24;
    }
    while ( v26 != 59 )
    {
      if ( v26 == 32 )
      {
        do
          ++v24;
        while ( *v24 == 32 );
      }
      v27 = LookupAccessMaskInTable(v24);
      if ( v27 )
      {
        v19 |= *(_DWORD *)(v27 + 12);
        v28 = *(unsigned int *)(v27 + 8);
        v99 = v19;
        v24 += v28;
      }
      else
      {
        v19 |= wcstoul(v24, &EndPtr, 0);
        v99 = v19;
        if ( EndPtr == v24 )
          goto LABEL_235;
        v24 = EndPtr;
      }
      v26 = *v24;
    }
    v29 = 0;
LABEL_37:
    ++v24;
    do
    {
      if ( *v24 != 59 )
      {
        if ( *v24 == 32 )
          goto LABEL_37;
        if ( (unsigned __int8)(v21 - 5) > 3u && (_BYTE)v21 != 11 )
          goto LABEL_235;
        wcsncpy_s(Dst, 0x25uLL, v24, 0x24uLL);
        Dst[36] = 0;
        if ( v29 )
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &v119) )
            goto LABEL_118;
          v105 = (__int64)&v119;
        }
        else
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
            goto LABEL_118;
          *(_QWORD *)v107 = &Guid;
        }
        v24 += 36;
        if ( *v24 != 59 && *v24 != 32 )
        {
LABEL_118:
          AceCount = 1705;
          goto LABEL_238;
        }
      }
      ++v24;
      ++v29;
    }
    while ( v29 < 2 );
    for ( i = *(_QWORD *)v107; *v24 == 32; ++v24 )
      ;
    SidForString = LocalGetSidForString(v24, &Sid, &v106, &v97, *(_QWORD *)AceListLength, *(_QWORD *)v92, v94, v95);
    v18 = Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_74;
    v32 = v106;
    if ( !v106 )
      goto LABEL_235;
    P = Sid;
    if ( !Sid )
      goto LABEL_235;
    for ( j = v106; *j == 32; ++j )
      ;
    if ( (unsigned __int8)v21 > 0x15u || (v34 = 2371072, !_bittest(&v34, v21)) )
    {
      v35 = v101;
      v36 = HIDWORD(v101);
      goto LABEL_48;
    }
    if ( *j == 59 )
    {
      do
        ++j;
      while ( *j == 32 );
      if ( *j == 40 )
      {
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        LODWORD(v101) = 0;
        if ( v111 )
        {
          ExFreePoolWithTag(v111, 0);
          v111 = 0LL;
        }
        HIDWORD(v101) = 0;
        if ( (_BYTE)v21 == 18 )
        {
          AceCount = LocalGetRelativeAttributeForString(
                       (_DWORD)j,
                       (unsigned int)&v106,
                       (unsigned int)&v111,
                       (unsigned int)&v101 + 4,
                       0LL,
                       0,
                       0,
                       0);
          if ( AceCount )
            goto LABEL_238;
        }
        else
        {
          LOBYTE(v95) = 0;
          v94 = 0LL;
          *(_QWORD *)v92 = 0LL;
          *(_QWORD *)AceListLength = 0LL;
          AceCount = LocalGetConditionForString(j, &v106, &Src, &v101);
        }
        v32 = v106;
      }
      else
      {
        v32 = j;
        v106 = j;
      }
    }
    v35 = v101;
    v36 = HIDWORD(v101);
    if ( !v101 )
      goto LABEL_235;
    if ( AceCount )
      goto LABEL_238;
LABEL_48:
    while ( *v32 == 32 )
      v106 = ++v32;
    if ( *v32 != 41 )
    {
LABEL_235:
      AceCount = 1336;
      goto LABEL_238;
    }
    v37 = v98;
    v7 = v32 + 1;
    if ( v98 > 9u )
    {
      if ( v98 != 10 )
      {
        if ( v98 == 11 )
        {
          v51 = i != 0 ? 48 : 32;
          if ( !v105 )
            v51 = i != 0 ? 32 : 16;
          if ( v35 > 0xFFFFFFFC )
          {
LABEL_239:
            AceCount = 534;
            goto LABEL_78;
          }
          v49 = (v35 + 3) & 0xFFFFFFFC;
          v38 = v49 + v51;
          goto LABEL_158;
        }
        if ( v98 != 13 )
        {
          switch ( v98 )
          {
            case 0x11u:
              goto LABEL_53;
            case 0x12u:
              v38 = v36 + 12;
              v50 = v36 + 12 < v36;
LABEL_159:
              if ( v50 )
              {
                AceCount = 534;
                goto LABEL_230;
              }
              goto LABEL_54;
            case 0x13u:
            case 0x14u:
LABEL_53:
              v38 = 12;
              goto LABEL_54;
          }
          if ( v98 != 21 )
            goto LABEL_101;
        }
      }
LABEL_156:
      if ( v35 > 0xFFFFFFFC )
        goto LABEL_239;
      v49 = (v35 + 3) & 0xFFFFFFFC;
      v38 = v49 + 12;
LABEL_158:
      v50 = v38 < v49;
      goto LABEL_159;
    }
    if ( v98 == 9 )
      goto LABEL_156;
    if ( !v98 || v98 == 1 || v98 == 2 || v98 == 3 )
      goto LABEL_53;
    if ( v98 != 5 && v98 != 6 && (unsigned int)v98 - 7 > 1 )
      goto LABEL_101;
    v38 = i != 0 ? 32 : 16;
    if ( v105 )
      v38 += 16;
LABEL_54:
    v39 = v38 + RtlLengthSid(v18) - 4;
    if ( v39 < v38 || (v40 = v39 + v102, v102 = v40, v40 < v39) )
    {
LABEL_229:
      v18 = P;
      AceCount = 534;
      goto LABEL_230;
    }
    v41 = Size;
    if ( v40 > Size )
      break;
LABEL_57:
    if ( v37 <= 0xA )
    {
      if ( v37 != 10 )
      {
        if ( !v37 )
        {
          v93 = 0;
LABEL_61:
          v42 = v96;
LABEL_62:
          v43 = RtlpAddKnownAce(*a3, 2u, v42, v99, (unsigned __int8 *)P, v93);
LABEL_63:
          v44 = v43;
LABEL_64:
          if ( v44 < 0 )
            goto LABEL_247;
          v45 = P;
          goto LABEL_66;
        }
        v57 = v37 - 1;
        if ( !v57 )
        {
          v93 = 1;
          goto LABEL_61;
        }
        v58 = v57 - 1;
        if ( !v58 )
        {
          v93 = 2;
          v62 = v96 & 0x3F | 0x40;
          if ( (v96 & 0x40) == 0 )
            v62 = v96 & 0x3F;
          v42 = v62 | 0x80;
          if ( (v96 & 0x80u) == 0 )
            v42 = v62;
          goto LABEL_62;
        }
        v59 = v58 - 3;
        if ( !v59 )
        {
          v43 = RtlAddAccessAllowedObjectAce(*a3, 4, v96, v99, v107[0], v105, P);
          goto LABEL_63;
        }
        v60 = v59 - 1;
        if ( !v60 )
        {
          v43 = RtlAddAccessDeniedObjectAce(*a3, 4, v96, v99, *(__int64 *)v107, v105, P);
          goto LABEL_63;
        }
        v61 = v60 - 1;
        if ( !v61 )
        {
          v43 = RtlAddAuditAccessObjectAce(*a3, *(__int64 *)v107, v105, P, v96 & 0x40, v96 & 0x80);
          goto LABEL_63;
        }
        if ( v61 != 2 )
          goto LABEL_178;
      }
LABEL_214:
      if ( v39 >= 0xFFFF )
        goto LABEL_246;
      v71 = (char *)SddlpAlloc(v39);
      if ( v71 )
      {
        v79 = v99;
        v80 = P;
        v81 = P;
        *v71 = v98;
        v71[1] = v96;
        *((_WORD *)v71 + 1) = v39;
        *((_DWORD *)v71 + 1) = v79;
        v82 = RtlLengthSid(v81);
        RtlCopySid(v82, v71 + 8, v80);
        if ( !(_DWORD)v101 )
          goto LABEL_213;
        v76 = (unsigned int)v101;
        v77 = RtlLengthSid(v80);
        v78 = Src;
        goto LABEL_212;
      }
      goto LABEL_218;
    }
    v63 = v37 - 11;
    if ( v63 )
    {
      v64 = v63 - 2;
      if ( !v64 )
        goto LABEL_214;
      v65 = v64 - 4;
      if ( v65 )
      {
        v66 = v65 - 1;
        if ( !v66 )
        {
          if ( v39 < 0xFFFF && (v96 & 0xE0) == 0 && !v99 )
          {
            v70 = *(_DWORD *)((char *)P + 2) - v116;
            if ( !v70 )
              v70 = *((unsigned __int16 *)P + 3) - v117;
            if ( !v70 && *((_BYTE *)P + 1) == 1 && !*((_DWORD *)P + 2) )
            {
              v71 = (char *)SddlpAlloc(v39);
              if ( v71 )
              {
                v72 = v98;
                *((_DWORD *)v71 + 1) = 0;
                v73 = P;
                v74 = P;
                *v71 = v72;
                v71[1] = v96;
                *((_WORD *)v71 + 1) = v39;
                v75 = RtlLengthSid(v74);
                RtlCopySid(v75, v71 + 8, v73);
                if ( !HIDWORD(v101) )
                {
LABEL_213:
                  v44 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v71, v39);
                  ExFreePoolWithTag(v71, 0);
                  goto LABEL_64;
                }
                v76 = HIDWORD(v101);
                v77 = RtlLengthSid(v73);
                v78 = v111;
LABEL_212:
                memmove(&v71[v77 + 8], v78, v76);
                goto LABEL_213;
              }
LABEL_218:
              v44 = -1073741801;
              goto LABEL_64;
            }
          }
LABEL_246:
          v44 = -1073741705;
          goto LABEL_247;
        }
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            if ( v68 == 1 )
            {
              if ( v35 >= 0xFFFF )
                goto LABEL_246;
              LOWORD(v95) = v35;
              v94 = Src;
              *(_DWORD *)v92 = v99;
              v69 = SddlAddAccessFilterAce(*a3, v41, v96, P);
              goto LABEL_211;
            }
LABEL_178:
            v44 = -1073741811;
LABEL_247:
            v90 = RtlNtStatusToDosError(v44);
            v18 = P;
            AceCount = v90;
LABEL_74:
            v16 = v102;
            goto LABEL_75;
          }
          *(_DWORD *)v92 = v99;
          v69 = SddlAddProcessTrustLabelAce(*a3, v41, v96, P);
        }
        else
        {
          v69 = SddlAddScopedPolicyIDAce(*a3, v41, v96, v99, P);
        }
      }
      else
      {
        *(_DWORD *)v92 = v99;
        v69 = SddlAddMandatoryAce(*a3, v41, v96, P);
      }
LABEL_211:
      v44 = v69;
      goto LABEL_64;
    }
    if ( v39 >= 0xFFFF )
      goto LABEL_246;
    v45 = P;
    v44 = RtlAddAccessAllowedObjectAce(*a3, 4, v96, v99, v107[0], v105, P);
    if ( v44 < 0 )
      goto LABEL_247;
    v44 = RtlGetAce((PACL)*a3, *(unsigned __int16 *)(*a3 + 4) - 1, &Ace);
    if ( v44 < 0 )
      goto LABEL_247;
    v83 = Ace;
    v84 = 9;
    if ( *(_BYTE *)Ace == 5 )
      v84 = 11;
    *(_BYTE *)Ace = v84;
    v83[1] = v39;
    if ( (_DWORD)v101 )
    {
      v85 = (unsigned int)v101;
      if ( *(_BYTE *)v83 == 11 )
      {
        v86 = *((_DWORD *)v83 + 2);
        v87 = RtlLengthSid(P);
        memmove((char *)&v83[8 * (v86 & 1) + 6 + 4 * (v86 & 2)] + v87, Src, (unsigned int)v85);
        v45 = P;
      }
      else
      {
        v88 = RtlLengthSid(v45);
        memmove((char *)v83 + v88 + 8, Src, v85);
      }
    }
LABEL_66:
    if ( v97 == 1 && v45 )
      ExFreePoolWithTag(v45, 0);
    v18 = 0LL;
    Sid = 0LL;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    LODWORD(v101) = 0;
    if ( v111 )
    {
      ExFreePoolWithTag(v111, 0);
      v111 = 0LL;
    }
    HIDWORD(v101) = 0;
    if ( *v7 == 40 )
      ++v7;
    if ( ++Size_4 >= v104 )
      goto LABEL_74;
  }
  v52 = v39 * (unsigned __int64)(v104 - Size_4);
  if ( v52 > 0xFFFFFFFF )
    goto LABEL_229;
  v53 = v52 + Size;
  if ( (unsigned int)v52 + Size < (unsigned int)v52 )
    goto LABEL_229;
  v54 = (_WORD *)SddlpAlloc(v53);
  v55 = (void *)*a3;
  v56 = v54;
  if ( v54 )
  {
    memmove(v54, (const void *)*a3, Size);
    v56[1] = v53;
    if ( *a3 )
      ExFreePoolWithTag((PVOID)*a3, 0);
    *a3 = (__int64)v56;
    v35 = v101;
    Size = v53;
    goto LABEL_57;
  }
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  v89 = v97 == 1;
  *a3 = 0LL;
  if ( v89 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    v18 = 0LL;
    v97 = 0;
  }
  else
  {
    v18 = P;
  }
  AceCount = 8;
LABEL_238:
  v46 = (_WORD *)*a3;
LABEL_231:
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  *a3 = 0LL;
LABEL_77:
  if ( v97 && v18 )
    ExFreePoolWithTag(v18, 0);
LABEL_78:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v111 )
    ExFreePoolWithTag(v111, 0);
  return AceCount;
}
