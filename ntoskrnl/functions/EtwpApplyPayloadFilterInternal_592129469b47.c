__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        char *a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  char v10; // r10
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // r8d
  unsigned int v14; // edx
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  void *v22; // rsp
  char *v23; // r9
  __int64 v24; // rax
  void *v25; // rsp
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // rdx
  char *v30; // r10
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  __int64 v33; // r12
  unsigned int v34; // r13d
  unsigned int v35; // edi
  unsigned __int64 v36; // r14
  char *v37; // r15
  char *v38; // r8
  unsigned int v39; // eax
  char v40; // al
  __int64 v41; // rbx
  __int64 v42; // rsi
  int v43; // edx
  char v44; // al
  unsigned int v45; // ecx
  _WORD *v46; // rdx
  unsigned int v47; // ecx
  int v48; // r8d
  unsigned int v49; // eax
  unsigned int v50; // edx
  _BYTE *v51; // rax
  unsigned int v52; // edx
  int v53; // r8d
  unsigned int v54; // ecx
  unsigned int v55; // ebx
  unsigned int v56; // ecx
  __int64 v57; // r15
  char *v58; // r9
  __int64 v59; // r11
  unsigned __int16 *v60; // rsi
  char v61; // di
  char v62; // bl
  unsigned int v63; // r8d
  unsigned __int16 *v64; // r13
  char v65; // r15
  char v66; // r12
  unsigned int v67; // r14d
  __int16 v68; // dx
  __int64 v69; // rax
  char v70; // cl
  char v71; // [rsp+30h] [rbp+0h] BYREF
  char v72; // [rsp+31h] [rbp+1h]
  unsigned int v73; // [rsp+34h] [rbp+4h]
  unsigned int v74; // [rsp+38h] [rbp+8h]
  unsigned int v75; // [rsp+3Ch] [rbp+Ch]
  char *v76; // [rsp+40h] [rbp+10h]
  char *v77; // [rsp+48h] [rbp+18h]
  char v78; // [rsp+50h] [rbp+20h]
  ULONG SubAuthorityCount[2]; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v80; // [rsp+60h] [rbp+30h]
  int v81; // [rsp+64h] [rbp+34h]
  char *v82; // [rsp+68h] [rbp+38h]
  unsigned __int16 v83; // [rsp+70h] [rbp+40h]
  unsigned int v84; // [rsp+74h] [rbp+44h]
  __int64 v85; // [rsp+78h] [rbp+48h]
  unsigned __int64 HighLimit; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 LowLimit; // [rsp+88h] [rbp+58h] BYREF
  _WORD *v88; // [rsp+90h] [rbp+60h]
  _BYTE *v89; // [rsp+98h] [rbp+68h]

  v75 = a2;
  v89 = 0LL;
  v88 = 0LL;
  v81 = 0;
  v80 = 0;
  *(_QWORD *)SubAuthorityCount = 0LL;
  v71 = 0;
  v73 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v83 = *a1;
  v10 = *((_BYTE *)a1 + 2);
  v78 = v10;
  v11 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v11, v83 % 0x3Fu) )
    goto LABEL_124;
  v74 = 0;
  v12 = a6 + *(unsigned __int16 *)(a6 + 32);
  v13 = 0;
  v14 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v85 = v12;
    v15 = v13 == v14;
    if ( v13 >= v14 )
      break;
    if ( *(_WORD *)v12 == v83 && *(_BYTE *)(v12 + 2) == v10 )
    {
      v15 = v13 == v14;
      break;
    }
    if ( *(unsigned __int8 *)(v12 + 3) >= (unsigned int)*(_WORD *)(v12 + 6) )
      return 3221225485LL;
    v12 += 12LL;
    ++v13;
  }
  if ( v15 )
  {
LABEL_124:
    *a7 = 1;
  }
  else
  {
    v77 = 0LL;
    v16 = 16 * a2;
    v84 = *(unsigned __int8 *)(v12 + 3) + 1;
    v17 = 4 * v84;
    HighLimit = 0LL;
    LowLimit = 0LL;
    IoGetStackLimits(&LowLimit, &HighLimit);
    if ( (unsigned __int64)&HighLimit - LowLimit < (unsigned int)(v17 + v16 + 4096) )
      return 3221225626LL;
    v19 = v17 + 15;
    if ( v17 + 15 <= (unsigned __int64)(unsigned int)v17 )
      v19 = 0xFFFFFFFFFFFFFF0LL;
    v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
    v21 = alloca(v20);
    v22 = alloca(v20);
    v23 = &v71;
    v76 = &v71;
    if ( a4 )
    {
      v24 = v16 + 15;
      if ( v16 + 15 <= (unsigned __int64)(unsigned int)v16 )
        v24 = 0xFFFFFFFFFFFFFF0LL;
      v25 = alloca(v24 & 0xFFFFFFFFFFFFFFF0uLL);
      v77 = &v71;
      if ( (_DWORD)v16 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a3[v16] > 0x7FFFFFFF0000LL || &a3[v16] < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(&v71, a3, (unsigned int)v16);
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0LL;
      v30 = v77;
      while ( 1 )
      {
        v80 = v26;
        if ( v27 >= a2 )
          break;
        v31 = *(unsigned int *)&v77[16 * v28 + 8];
        if ( (_DWORD)v31 )
        {
          v32 = *(_QWORD *)&v77[16 * v29];
          if ( v32 + v31 > 0x7FFFFFFF0000LL || v32 + v31 < v32 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v29 = ++v26;
        v27 = v26;
        v28 = v26;
      }
      v23 = v76;
    }
    else
    {
      v30 = a3;
      v77 = a3;
    }
    v33 = a6 + *(unsigned __int16 *)(a6 + 36);
    v34 = 0;
    v35 = 0;
    v36 = (unsigned __int64)v30;
    v37 = (char *)(v33 + 4LL * *(unsigned __int16 *)(v12 + 4));
    v38 = v23;
    v82 = v23;
    v39 = 0;
    while ( 1 )
    {
      v73 = v39;
      if ( v39 >= v84 )
        break;
      if ( v34 == v75 )
        return 3221225990LL;
      v40 = *v37 & 0xF;
      if ( v40 == 7 )
      {
        if ( *((_WORD *)v37 + 1) )
          return 3221225520LL;
        v38[3] = v34;
        *(_DWORD *)v38 = *(_DWORD *)v38 & 0xFF000000 | ((v35 & 0xFFF) << 12);
      }
      else
      {
        v41 = *((unsigned __int16 *)v37 + 1);
        if ( v40 == 8 )
          v41 = a5 != 0 ? 8 : 4;
        if ( (*v37 & 0x10) != 0 )
        {
          if ( (unsigned int)v41 >= v73 )
            return 3221225520LL;
          if ( (unsigned __int8)((*(_BYTE *)(v33 + 4 * v41) & 0xF) - 1) > 1u )
            return 3221225520LL;
          if ( (*(_BYTE *)(v33 + 4 * v41) & 0x30) != 0 )
            return 3221225520LL;
          if ( *(_WORD *)(v33 + 4 * v41 + 2) > 8u )
            return 3221225520LL;
          if ( *(_BYTE *)(v33 + 4 * v41 + 1) != 1 )
            return 3221225520LL;
          _mm_lfence();
          if ( !(unsigned __int8)EtwpGetFieldValue(
                                   *(_QWORD *)&v30[16 * (unsigned __int8)v23[4 * v41 + 3]]
                                 + (((unsigned __int64)*(unsigned int *)&v23[4 * v41] >> 12) & 0xFFF),
                                   *(unsigned __int16 *)(v33 + 4 * v41 + 2),
                                   SubAuthorityCount) )
            return 3221225520LL;
          LODWORD(v41) = SubAuthorityCount[0];
          if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
            return 3221225520LL;
          v30 = v77;
          v23 = v76;
        }
        v42 = (unsigned __int8)v37[1];
        if ( (*v37 & 0x20) != 0 )
        {
          if ( (unsigned int)v42 >= v73 )
            return 3221225520LL;
          if ( (unsigned __int8)((*(_BYTE *)(v33 + 4 * v42) & 0xF) - 1) > 1u )
            return 3221225520LL;
          if ( (*(_BYTE *)(v33 + 4 * v42) & 0x30) != 0 )
            return 3221225520LL;
          if ( *(_WORD *)(v33 + 4 * v42 + 2) > 8u )
            return 3221225520LL;
          if ( *(_BYTE *)(v33 + 4 * v42 + 1) != 1 )
            return 3221225520LL;
          _mm_lfence();
          if ( !(unsigned __int8)EtwpGetFieldValue(
                                   *(_QWORD *)&v30[16 * (unsigned __int8)v23[4 * v42 + 3]]
                                 + ((*(_DWORD *)&v23[4 * v42] >> 12) & 0xFFF),
                                   *(unsigned __int16 *)(v33 + 4 * v42 + 2),
                                   SubAuthorityCount) )
            return 3221225520LL;
          LODWORD(v42) = SubAuthorityCount[0];
          if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
            return 3221225520LL;
        }
        v43 = 0;
        if ( !(_DWORD)v41 )
        {
          v44 = *v37;
          if ( (*v37 & 0x10) != 0 || (_DWORD)v42 != 1 )
            return 3221225520LL;
          switch ( v44 & 0xF )
          {
            case 3:
              v50 = *(_DWORD *)(v36 + 8);
              if ( v35 >= v50 )
                return 3221225485LL;
              v51 = (_BYTE *)(*(_QWORD *)v36 + v35);
              v52 = v50 - v35;
              v53 = 0;
              v54 = 0;
              while ( v54 < v52 && *v51 )
              {
                v54 = ++v53;
                v81 = v53;
                v89 = ++v51;
              }
              if ( v53 == v52 )
              {
                v74 = 1;
                v43 = 0;
              }
              else
              {
                v43 = 1;
              }
              LODWORD(v41) = v53;
              break;
            case 4:
              v45 = *(_DWORD *)(v36 + 8) - v35;
              if ( v45 < 2 )
                return 3221225485LL;
              v46 = (_WORD *)(v35 + *(_QWORD *)v36);
              v47 = v45 >> 1;
              v48 = 0;
              v49 = 0;
              while ( v49 < v47 && *v46 )
              {
                v49 = ++v48;
                v81 = v48;
                v88 = ++v46;
              }
              if ( v48 == v47 )
              {
                v74 = 2;
                v43 = 0;
              }
              else
              {
                v43 = 2;
              }
              if ( v48 == v47 && v35 + 2LL * v47 != *(_DWORD *)(v36 + 8) )
                return 3221225485LL;
              LODWORD(v41) = 2 * v48;
              break;
            case 6:
              if ( *(_DWORD *)(v36 + 8) - v35 < 2 )
                return 3221225485LL;
              if ( !(unsigned __int8)EtwpGetFieldValue(*(_QWORD *)v36 + v35 + 1LL, 1LL, SubAuthorityCount) )
                return 3221225485LL;
              LODWORD(v41) = RtlLengthRequiredSid(SubAuthorityCount[0]);
              if ( (_DWORD)v41 == -1 )
                return 3221225485LL;
              v43 = 0;
              break;
            default:
              return 3221225520LL;
          }
        }
        v55 = v42 * v41;
        if ( *(_DWORD *)(v36 + 8) - v35 < v55 )
          return 3221225990LL;
        v38 = v82;
        v82[3] = v34;
        v56 = v55 & 0xFFF | *(_DWORD *)v38 & 0xFF000000 | ((v35 & 0xFFF) << 12);
        *(_DWORD *)v38 = v56;
        if ( (unsigned __int8)v38[3] != v34 || ((v56 >> 12) & 0xFFF) != v35 || (v56 & 0xFFF) != v55 )
          return 3221225990LL;
        v35 += v43 + v55;
        if ( v35 > *(_DWORD *)(v36 + 8) )
          return 3221225473LL;
        v30 = v77;
        if ( v35 != *(_DWORD *)(v36 + 8) )
          goto LABEL_102;
        if ( ++v34 >= v75 )
          goto LABEL_102;
        v35 = 0;
        v36 += 16LL;
        if ( v36 >= (unsigned __int64)&v77[16 * v75] )
          return 3221225473LL;
        if ( v74 )
        {
          if ( *(_DWORD *)(v36 + 8) < v74 )
            return 3221225990LL;
          v35 = v74;
        }
        v74 = 0;
        if ( v35 == *(_DWORD *)(v36 + 8) )
        {
          ++v34;
          v23 = v76;
          if ( v34 < v75 )
          {
            v35 = 0;
            v36 += 16LL;
          }
        }
        else
        {
LABEL_102:
          v23 = v76;
        }
      }
      v39 = v73 + 1;
      v37 += 4;
      v38 += 4;
      v82 = v38;
    }
    if ( v74 )
      return 3221225990LL;
    v57 = v85;
    v58 = (char *)(v33 + 4LL * *(unsigned __int16 *)(v85 + 4));
    v82 = v58;
    v59 = a6;
    v60 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v85 + 8));
    v61 = 0;
    v62 = 0;
    v72 = 1;
    v63 = 0;
    while ( 1 )
    {
      v75 = v63;
      if ( v63 >= *(unsigned __int16 *)(v57 + 10) )
        break;
      v64 = (unsigned __int16 *)(v59 + 8 * (v60[1] + 2LL * v60[1] + 7));
      v65 = 1;
      v66 = 0;
      v67 = 0;
      while ( 1 )
      {
        v68 = *v60;
        if ( v67 >= ((*v60 >> 2) & 0x3Fu) )
          break;
        v69 = *v64;
        if ( !(unsigned __int8)EtwpApplyPredicate(
                                 v59,
                                 v58[4 * v69] & 0xF,
                                 v64,
                                 *(_QWORD *)&v30[16 * (unsigned __int8)v76[4 * v69 + 3]]
                               + (((unsigned __int64)*(unsigned int *)&v76[4 * v69] >> 12) & 0xFFF),
                                 *(_DWORD *)&v76[4 * v69] & 0xFFF,
                                 &v71) )
          return 3221225520LL;
        v65 &= v71;
        v66 |= v71;
        ++v67;
        v64 += 12;
        v58 = v82;
        v30 = v77;
        v59 = a6;
      }
      v70 = v66;
      if ( (v68 & 2) == 0 )
        v70 = v65;
      if ( (v68 & 1) != 0 )
      {
        if ( v72 )
          v61 = v70;
        else
          v61 &= v70;
        v72 = 0;
      }
      else
      {
        v62 = v70;
        if ( v70 )
          break;
      }
      v63 = v75 + 1;
      v60 += 2;
      v57 = v85;
    }
    *a7 = v61 | v62;
  }
  return 0LL;
}
