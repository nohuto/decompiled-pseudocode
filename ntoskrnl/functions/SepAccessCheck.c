__int64 __fastcall SepAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        int *a16,
        _QWORD *a17,
        char *a18,
        char *a19)
{
  _DWORD *v20; // r9
  unsigned int v23; // r10d
  unsigned int v24; // esi
  __int16 v25; // r8
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned int v29; // r8d
  int v30; // r11d
  unsigned __int8 v31; // dl
  int v32; // ebp
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // edi
  int v37; // ebx
  unsigned __int8 v38; // r13
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  int v43; // edi
  int *v44; // r9
  int v45; // edx
  int v46; // r8d
  int v47; // edi
  int v48; // ecx
  char v49; // al
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // r8d
  int v54; // ecx
  __int64 v55; // r8
  char v56; // r15
  char v57; // r12
  int v58; // r10d
  unsigned int v59; // edx
  int *v60; // rcx
  bool v61; // zf
  int v62; // eax
  unsigned int v63; // r8d
  unsigned int v64; // edx
  char *v65; // r10
  char *v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // esi
  int *v70; // rdi
  unsigned __int64 k; // rcx
  signed __int64 v72; // r9
  char *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // ecx
  unsigned int v78; // r8d
  int *v79; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v81; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v83; // rcx
  __int64 v84; // rax
  unsigned __int8 v85; // [rsp+70h] [rbp-108h]
  unsigned __int8 v86; // [rsp+71h] [rbp-107h]
  unsigned __int8 v87; // [rsp+72h] [rbp-106h]
  int v88; // [rsp+74h] [rbp-104h]
  unsigned int v89; // [rsp+78h] [rbp-100h]
  unsigned int v90; // [rsp+7Ch] [rbp-FCh]
  unsigned int v93; // [rsp+B0h] [rbp-C8h]
  LUID v94; // [rsp+D0h] [rbp-A8h] BYREF
  int v95; // [rsp+D8h] [rbp-A0h]
  __int64 v96; // [rsp+E0h] [rbp-98h] BYREF
  int v97; // [rsp+E8h] [rbp-90h]
  __int128 v98; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v99; // [rsp+100h] [rbp-78h]
  __int128 v100; // [rsp+110h] [rbp-68h]

  v20 = a8;
  v23 = a5;
  if ( !a4 )
    a4 = a3;
  v93 = 0;
  v88 = 0;
  v87 = 0;
  v85 = 0;
  v86 = 0;
  v89 = a5;
  v90 = 1;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  if ( (a5 & 0x1000000) != 0 )
  {
    v94 = SeSecurityPrivilege;
    v95 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v94, 1, 1, a10) )
    {
      v36 = 0;
      v37 = -1073741727;
      v24 = 0;
      v38 = v53;
LABEL_32:
      if ( a14 )
      {
        if ( a7 )
        {
          if ( a7 < 4 )
            goto LABEL_172;
          v75 = a7 - 1;
          v93 = 0;
          if ( a11 <= (unsigned int *)&a13[v75] && &a11[v75] >= (unsigned int *)a13 )
            goto LABEL_172;
          v76 = a7 & 0xFFFFFFFC;
          v77 = 0;
          do
          {
            v77 += 4;
            v78 = v77;
          }
          while ( v77 < (unsigned int)v76 );
          v79 = a13;
          for ( i = (unsigned __int64)(4 * v76) >> 2; i; --i )
            *v79++ = v37;
          v81 = a11;
          for ( j = (unsigned __int64)(4 * v76) >> 2; j; --j )
            *v81++ = v24;
          v36 = v78;
          v93 = v78;
          if ( v78 < a7 )
          {
LABEL_172:
            v83 = &a11[v36];
            v84 = a7 - v93;
            do
            {
              *(unsigned int *)((char *)v83 + (char *)a13 - (char *)a11) = v37;
              *v83++ = v24;
              --v84;
            }
            while ( v84 );
          }
        }
        goto LABEL_34;
      }
LABEL_33:
      *a13 = v37;
      *a11 = v24;
LABEL_34:
      if ( v37 < 0 )
      {
        if ( a18 )
          *a18 = 0;
        if ( a19 )
          *a19 = 1;
      }
      else
      {
        if ( a18 )
          *a18 = 1;
        if ( a19 )
          *a19 = 0;
      }
      return v38;
    }
    v23 = a5 & 0xFEFFFFFF;
    v88 = 1;
    v24 = a9 | 0x1000000;
    v89 = a5 & 0xFEFFFFFF;
    v87 = 1;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
      v36 = 0;
      v30 = v53;
      v31 = 0;
      goto LABEL_72;
    }
    v20 = a8;
  }
  else
  {
    v24 = a9;
  }
  v25 = *(_WORD *)(a1 + 2);
  v26 = v25 & 0x8000;
  if ( (v25 & 4) != 0 )
  {
    if ( v26 )
    {
      v27 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v27 )
        v28 = v27 + a1;
      else
        v28 = 0LL;
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 32);
    }
  }
  else
  {
    v28 = 0LL;
  }
  if ( (v25 & 0x10) != 0 )
  {
    if ( v26 )
    {
      v40 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v40 )
      {
        v94 = 0LL;
        goto LABEL_11;
      }
      v41 = a1 + v40;
    }
    else
    {
      v41 = *(_QWORD *)(a1 + 24);
    }
    v94 = (LUID)v41;
    goto LABEL_11;
  }
  v94 = 0LL;
LABEL_11:
  if ( (v25 & 4) == 0 || !v28 )
  {
    v24 |= a5;
    if ( (a5 & 0x2000000) != 0 )
      v24 = v20[3] | v24 & 0xFDFFFFFF;
    v52 = *(_DWORD *)(a4 + 200);
    if ( (v52 & 0x4000) != 0 )
    {
      if ( (v52 & 0x3000000) != 0x3000000 )
      {
        v24 = 0;
        *((_BYTE *)a16 + 21) = 0;
        a16[1] = 0;
        v36 = 0;
        goto LABEL_96;
      }
      v36 = 0;
      *((_BYTE *)a16 + 21) = 1;
      *a16 = 0;
      a16[1] = v24;
      *((_BYTE *)a16 + 23) = 1;
    }
    else
    {
      v36 = 0;
    }
    v30 = v88;
    v31 = 0;
    goto LABEL_72;
  }
  v29 = 1;
  if ( (v23 & 0x80000) == 0 )
  {
    v30 = v88;
LABEL_15:
    v31 = 0;
LABEL_16:
    LOBYTE(v20) = 0;
    goto LABEL_17;
  }
  v96 = SeTakeOwnershipPrivilege;
  v97 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v96, 1, 1, a10) )
  {
    v24 |= 0x80000u;
    v23 = v89 & 0xFFF7FFFF;
    v30 = v88 + 1;
    v89 = v23;
    ++v88;
    v31 = v29;
    v85 = v29;
    if ( v23 )
      goto LABEL_16;
    v36 = 0;
LABEL_72:
    LOBYTE(v20) = 0;
    goto LABEL_28;
  }
  v96 = SeRelabelPrivilege;
  v97 = 0;
  v49 = SepPrivilegeCheck(a4, (unsigned int)&v96, v29, v29, a10);
  v23 = v89;
  v30 = v88;
  if ( !v49 )
    goto LABEL_15;
  v23 = v89 & 0xFFF7FFFF;
  v86 = v29;
  v30 = v88 + 1;
  v89 = v23;
  v24 |= 0x80000u;
  ++v88;
  LODWORD(v20) = (unsigned __int8)v29;
  if ( !v23 )
  {
    v36 = 0;
    v31 = 0;
    goto LABEL_28;
  }
  v31 = 0;
LABEL_17:
  if ( !*(_WORD *)(v28 + 4) )
  {
    a16[3] = v23;
    v54 = *(_DWORD *)(a4 + 200);
    if ( (v54 & 0x4000) != 0 )
      v24 &= ~*a16;
    if ( v23 == 0x2000000 )
    {
      if ( v24 )
      {
LABEL_105:
        v37 = 0;
        v36 = 0;
        goto LABEL_29;
      }
    }
    else if ( !v23 && *a16 && v24 && (v54 & 0x6000) == 0 )
    {
      goto LABEL_105;
    }
    v36 = 0;
    v24 = 0;
    goto LABEL_96;
  }
  if ( a7 )
  {
    v29 = a7;
    v90 = a7;
  }
  else
  {
    v99 = 0LL;
    DWORD1(v99) = -1;
    a6 = &v98;
    v98 = 0LL;
    v100 = 0LL;
  }
  v32 = a5 & 0x2000000;
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(
      v23,
      a4,
      a3,
      v28,
      *(_QWORD *)&v94,
      (__int64)a17,
      a2,
      v29,
      (__int64)a6,
      a7,
      0,
      a15,
      (__int64)a16);
    a16[3] = *((_DWORD *)a6 + 6);
    if ( !*((_DWORD *)a6 + 6) )
    {
      v33 = *(_DWORD *)(a4 + 200);
      if ( (v33 & 0x10) != 0 )
      {
        v48 = (v33 & 8) != 0 ? a8[1] & ~(*a8 | a8[2]) | 0x10D0000 : a8[3] | 0x1FFFFF;
        if ( (v48 & a5) != 0 )
          SepNormalAccessCheck(
            v89 & v48,
            a4,
            a3,
            v28,
            *(_QWORD *)&v94,
            (__int64)a17,
            a2,
            v90,
            (__int64)a6,
            a7,
            1,
            a15,
            (__int64)a16);
      }
      v34 = *((_DWORD *)a6 + 6);
      a16[3] = v34;
      if ( !*((_DWORD *)a6 + 6) )
      {
        v35 = *(_DWORD *)(a4 + 200);
        if ( (v35 & 0x2000) != 0 )
          goto LABEL_26;
        v46 = a5 | v89;
        if ( (v35 & 0x4000) != 0 )
        {
          v47 = (*a16 | v46) & ~(a16[1] | a16[2]);
          if ( v47 && !v34 && (v35 & 0x3000000) == 0x3000000 )
          {
            *((_BYTE *)a16 + 23) = 1;
            v47 = 0;
          }
        }
        else
        {
          if ( !*((_BYTE *)a16 + 20) )
          {
            v36 = 0;
            *((_DWORD *)a6 + 6) = 0;
            goto LABEL_27;
          }
          v47 = ~a16[1] & (*a16 | v46);
        }
        *((_DWORD *)a6 + 6) = v47;
        if ( !v47 )
        {
LABEL_26:
          v36 = 0;
LABEL_27:
          v30 = v88;
          v24 |= a5;
          v31 = v85;
          LODWORD(v20) = v86;
          goto LABEL_28;
        }
      }
    }
LABEL_54:
    v37 = -1073741790;
    v24 = 0;
    v38 = 1;
    goto LABEL_33;
  }
  SepMaximumAccessCheck(a4, a3, v28, *(_QWORD *)&v94, a17, a2, v29, (__int64)a6, a7, 0, 0, a15, a16);
  v42 = *(_DWORD *)(a4 + 200);
  if ( (v42 & 0x10) != 0 )
  {
    if ( (v42 & 8) != 0 )
      v51 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v51 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(a4, a3, v28, *(_QWORD *)&v94, a17, a2, v90, (__int64)a6, a7, v51, 1, a15, a16);
  }
  v43 = *(_DWORD *)(a4 + 200);
  v44 = (int *)a6 + 7;
  v45 = *((_DWORD *)a6 + 7);
  if ( (v43 & 0x2000) == 0 )
  {
    if ( (v43 & 0x4000) != 0 )
    {
      v45 &= a16[1] | a16[2];
      if ( v45 != *((_DWORD *)a6 + 7) && (v43 & 0x3000000) == 0x3000000 && (!v45 || !v32) )
      {
        *((_BYTE *)a16 + 23) = 1;
        v45 = *v44;
        goto LABEL_47;
      }
      v50 = *a16;
    }
    else
    {
      if ( !*((_BYTE *)a16 + 20) )
        goto LABEL_47;
      v45 &= a16[1];
      v50 = *a16;
    }
    v24 &= ~v50;
  }
LABEL_47:
  if ( !a14 )
  {
    if ( (~(v45 | 0x2000000) & v89) != 0 )
      goto LABEL_54;
    v30 = v88;
    v24 |= v45;
    v31 = v85;
    v36 = 0;
    LODWORD(v20) = v86;
LABEL_28:
    v37 = 0;
    if ( v24 )
    {
LABEL_29:
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v30 )
        {
          SepAssemblePrivileges(v30, v87, v31, (_DWORD)v20, (__int64)a12);
          if ( a12 )
          {
            if ( !*a12 )
            {
              v38 = 0;
              v37 = -1073741801;
              v24 = 0;
              goto LABEL_32;
            }
          }
        }
      }
LABEL_31:
      v38 = 1;
      goto LABEL_32;
    }
LABEL_96:
    v37 = -1073741790;
    goto LABEL_31;
  }
  v55 = v90;
  v56 = 0;
  v57 = 0;
  v58 = v24 | a5;
  if ( v32 )
    v58 = -33554433;
  v59 = (v24 | a5) & 0xFDFFFFFF;
  if ( !v32 )
    v59 = v24 | a5;
  v60 = a13;
  do
  {
    v61 = (v58 & (*v44 | v24)) == 0;
    v62 = v58 & (*v44 | v24);
    *(int *)((char *)v60 + (char *)a11 - (char *)a13) = v62;
    if ( v61 )
    {
      *v60 = -1073741790;
      v57 = 1;
    }
    else if ( (~v62 & v59) != 0 )
    {
      *v60 = -1073741790;
      v57 = 1;
    }
    else
    {
      *v60 = 0;
      v56 = 1;
    }
    v44 += 12;
    ++v60;
    --v55;
  }
  while ( v55 );
  if ( KeGetCurrentIrql() < 2u && v56 && v88 && (SepAssemblePrivileges(v88, v87, v85, v86, (__int64)a12), a12) && !*a12 )
  {
    v63 = v90;
    v38 = 0;
    v56 = 0;
    v57 = 1;
    v64 = 0;
    v65 = (char *)a11;
    v66 = (char *)a13;
    if ( v90 >= 4 )
    {
      v67 = v90 - 1;
      if ( a11 > (unsigned int *)&a13[v67] || &a11[v67] < (unsigned int *)a13 )
      {
        v68 = v90 & 0xFFFFFFFC;
        do
        {
          v64 += 4;
          v69 = v64;
        }
        while ( v64 < (unsigned int)v68 );
        v70 = a13;
        for ( k = (unsigned __int64)(4 * v68) >> 2; k; --k )
          *v70++ = -1073741801;
        memset(a11, 0, 4 * v68);
        v63 = v90;
        v64 = v69;
        if ( v69 >= v90 )
          goto LABEL_152;
        v66 = (char *)a13;
        v65 = (char *)a11;
      }
    }
    v72 = v66 - v65;
    v73 = &v65[4 * v64];
    v74 = v63 - v64;
    do
    {
      *(_DWORD *)&v73[v72] = -1073741801;
      *(_DWORD *)v73 = 0;
      v73 += 4;
      --v74;
    }
    while ( v74 );
  }
  else
  {
    v38 = 1;
  }
LABEL_152:
  if ( a18 )
    *a18 = v56;
  if ( a19 )
    *a19 = v57;
  return v38;
}
