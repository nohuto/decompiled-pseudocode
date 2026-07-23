/*
 * XREFs of SepAccessCheck @ 0x14035A160
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14026A3F0 (SepPrivilegeCheck.c)
 *     SepNormalAccessCheck @ 0x14035B720 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x14035BFF0 (SepMaximumAccessCheck.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepAssemblePrivileges @ 0x1405F68B0 (SepAssemblePrivileges.c)
 */

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
        __int64 a17,
        char *a18,
        char *a19,
        char a20)
{
  unsigned int v20; // ebp
  _QWORD *v21; // r12
  __int64 v23; // r9
  unsigned int v25; // r8d
  unsigned int v26; // r10d
  unsigned int v27; // esi
  __int16 v28; // cx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // r12
  int v32; // edx
  int v33; // r8d
  __int128 *v34; // rcx
  int v35; // edi
  __int128 *v36; // r8
  __int64 v37; // r9
  int v38; // eax
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned __int8 v42; // cl
  int v43; // ebx
  unsigned __int8 v44; // r12
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  _DWORD *v49; // r8
  int v50; // edx
  int v51; // edi
  int v52; // edx
  int v53; // eax
  int v54; // edx
  int v55; // r10d
  char v56; // al
  int v57; // eax
  int v58; // ecx
  unsigned __int8 v59; // r8
  _DWORD *v60; // rax
  int v61; // ecx
  char v62; // dl
  char v63; // r9
  int v64; // r12d
  unsigned int v65; // r10d
  int *v66; // rcx
  __int64 v67; // rdi
  bool v68; // zf
  int v69; // eax
  char *v70; // rdi
  unsigned int v71; // r10d
  unsigned int v72; // esi
  __int64 v73; // rax
  __int64 v74; // rax
  int *v75; // rdi
  unsigned __int64 k; // rcx
  char *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  int *v81; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v83; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v85; // rcx
  __int64 v86; // rax
  int v87; // [rsp+68h] [rbp-100h]
  char v88; // [rsp+70h] [rbp-F8h]
  unsigned __int8 v89; // [rsp+71h] [rbp-F7h]
  char v90; // [rsp+72h] [rbp-F6h]
  unsigned __int8 v91; // [rsp+73h] [rbp-F5h]
  unsigned __int8 v92; // [rsp+74h] [rbp-F4h]
  int v93; // [rsp+78h] [rbp-F0h]
  unsigned int v94; // [rsp+7Ch] [rbp-ECh]
  unsigned int v95; // [rsp+80h] [rbp-E8h]
  __int128 *v96; // [rsp+A0h] [rbp-C8h]
  int v98; // [rsp+C8h] [rbp-A0h]
  __int64 v99; // [rsp+D0h] [rbp-98h] BYREF
  int v100; // [rsp+D8h] [rbp-90h]
  __int128 v101; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v102; // [rsp+F0h] [rbp-78h]
  __int128 v103; // [rsp+100h] [rbp-68h]

  v20 = 0;
  v21 = a12;
  v23 = (__int64)a16;
  if ( !a4 )
    a4 = a3;
  v96 = a6;
  v98 = a3;
  v25 = a5;
  v26 = a5;
  v93 = 0;
  v92 = 0;
  v89 = 0;
  v91 = 0;
  v94 = a5;
  v95 = 1;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  if ( (a5 & 0x1000000) != 0 )
  {
    v99 = (__int64)SeSecurityPrivilege;
    v100 = 0;
    if ( !SepPrivilegeCheck(a4, (__int64)&v99, 1u, 1, a10) )
    {
      v27 = 0;
      v43 = -1073741727;
      v44 = v59;
LABEL_33:
      if ( a14 )
      {
        if ( a7 )
        {
          if ( a7 >= 4 )
          {
            v79 = a7 - 1;
            if ( a11 > (unsigned int *)&a13[v79] || &a11[v79] < (unsigned int *)a13 )
            {
              v80 = a7 & 0xFFFFFFFC;
              do
                v20 += 4;
              while ( v20 < (unsigned int)v80 );
              v81 = a13;
              for ( i = (unsigned __int64)(4 * v80) >> 2; i; --i )
                *v81++ = v43;
              v83 = a11;
              for ( j = (unsigned __int64)(4 * v80) >> 2; j; --j )
                *v83++ = v27;
            }
          }
          if ( v20 < a7 )
          {
            v85 = &a11[v20];
            v86 = a7 - v20;
            do
            {
              *(unsigned int *)((char *)v85 + (char *)a13 - (char *)a11) = v43;
              *v85++ = v27;
              --v86;
            }
            while ( v86 );
          }
        }
        goto LABEL_35;
      }
LABEL_34:
      *a13 = v43;
      *a11 = v27;
LABEL_35:
      if ( v43 < 0 )
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
      return v44;
    }
    v25 = a5;
    v32 = 1;
    v93 = 1;
    v26 = a5 & 0xFEFFFFFF;
    v92 = 1;
    v27 = a9 | 0x1000000;
    v94 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_46;
    v23 = (__int64)a16;
  }
  else
  {
    v27 = a9;
  }
  v28 = *(_WORD *)(a1 + 2);
  if ( (v28 & 4) != 0 )
  {
    if ( v28 >= 0 )
    {
      v30 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v29 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v29 )
        v30 = a1 + v29;
      else
        v30 = 0LL;
    }
  }
  else
  {
    v30 = 0LL;
  }
  if ( (v28 & 0x10) != 0 )
  {
    if ( v28 < 0 )
    {
      v47 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v47 )
        v31 = a1 + v47;
      else
        v31 = 0LL;
    }
    else
    {
      v31 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v31 = 0LL;
  }
  if ( (*(_WORD *)(a1 + 2) & 4) == 0 || !v30 )
  {
    v46 = v27 | v25;
    v27 |= v25;
    if ( (v25 & 0x2000000) != 0 )
      v27 = v46 & 0xFDFFFFFF | a8[3];
    if ( (*(_DWORD *)(a4 + 200) & 0x4000) != 0 )
    {
      v27 = 0;
      *(_DWORD *)(v23 + 4) = 0;
      *(_BYTE *)(v23 + 21) = 0;
      goto LABEL_62;
    }
    v32 = v93;
LABEL_45:
    v21 = a12;
LABEL_46:
    v42 = 0;
    goto LABEL_29;
  }
  if ( (v26 & 0x80000) == 0 )
  {
    v32 = v93;
LABEL_16:
    v33 = 1;
    goto LABEL_17;
  }
  v99 = SeTakeOwnershipPrivilege;
  v100 = 0;
  if ( SepPrivilegeCheck(a4, (__int64)&v99, 1u, 1, a10) )
  {
    v27 |= 0x80000u;
    v26 = v94 & 0xFFF7FFFF;
    v32 = v93 + 1;
    v94 = v26;
    ++v93;
    v42 = 1;
    v89 = 1;
    if ( !v26 )
    {
      v21 = a12;
      goto LABEL_29;
    }
    goto LABEL_16;
  }
  v99 = SeRelabelPrivilege;
  v100 = 0;
  v56 = SepPrivilegeCheck(a4, (__int64)&v99, 1u, 1, a10);
  v26 = v94;
  v32 = v93;
  if ( v56 )
  {
    v26 = v94 & 0xFFF7FFFF;
    v91 = v33;
    v32 = v93 + 1;
    v94 = v26;
    v27 |= 0x80000u;
    ++v93;
    if ( !v26 )
      goto LABEL_45;
  }
LABEL_17:
  if ( !*(_WORD *)(v30 + 4) )
  {
    v60 = a16;
    a16[3] = v26;
    v61 = *(_DWORD *)(a4 + 200);
    if ( (v61 & 0x4000) != 0 )
    {
      v27 &= ~*a16;
      v60 = a16;
    }
    if ( v26 == 0x2000000 )
    {
      if ( v27 )
      {
LABEL_105:
        v21 = a12;
        v42 = v89;
        goto LABEL_29;
      }
    }
    else if ( !v26 && *v60 && v27 && (v61 & 0x6000) == 0 )
    {
      goto LABEL_105;
    }
    v27 = 0;
    goto LABEL_62;
  }
  if ( a7 )
  {
    v34 = a6;
    v33 = a7;
    v95 = a7;
  }
  else
  {
    v34 = &v101;
    DWORD1(v102) = -1;
    v96 = &v101;
  }
  v35 = a5 & 0x2000000;
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v26, a4, v98, v30, v31, a17, a2, v33, (__int64)v34, a7, 0, a15, (__int64)a16, a20);
    v36 = v96;
    v37 = (__int64)a16;
    a16[3] = *((_DWORD *)v96 + 6);
    if ( *((_DWORD *)v96 + 6) )
      goto LABEL_67;
    v38 = *(_DWORD *)(a4 + 200);
    if ( (v38 & 0x10) != 0 )
    {
      if ( (v38 & 8) != 0 )
        v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v55 = a8[3] | 0x1FFFFF;
      v40 = a5;
      v39 = 0;
      if ( (v55 & a5) == 0 )
      {
LABEL_26:
        *(_DWORD *)(v37 + 12) = v39;
        if ( *((_DWORD *)v36 + 6) )
          goto LABEL_67;
        v41 = *(_DWORD *)(a4 + 200);
        if ( (v41 & 0x2000) != 0 )
        {
LABEL_28:
          v32 = v93;
          v27 |= v40;
          v42 = v89;
          v21 = a12;
          goto LABEL_29;
        }
        v51 = v40 | v94;
        if ( (v41 & 0x4000) != 0 )
        {
          v52 = ~(*(_DWORD *)(v37 + 4) | *(_DWORD *)(v37 + 8));
          v53 = v51 | *(_DWORD *)v37;
        }
        else
        {
          if ( !*(_BYTE *)(v37 + 20) )
          {
            v54 = 0;
LABEL_66:
            *((_DWORD *)v36 + 6) = v54;
            if ( !v54 )
              goto LABEL_28;
LABEL_67:
            v43 = -1073741790;
            v27 = 0;
            v44 = 1;
            goto LABEL_34;
          }
          v52 = v51 | *(_DWORD *)v37;
          v53 = ~*(_DWORD *)(v37 + 4);
        }
        v54 = v53 & v52;
        goto LABEL_66;
      }
      LOBYTE(v87) = a20;
      SepNormalAccessCheck(v55 & v94, a4, v98, v30, v31, a17, a2, v95, (__int64)v96, a7, 1, a15, (__int64)a16, v87);
      v36 = v96;
      v37 = (__int64)a16;
      v39 = *((_DWORD *)v96 + 6);
    }
    else
    {
      v39 = 0;
    }
    v40 = a5;
    goto LABEL_26;
  }
  SepMaximumAccessCheck(a4, v98, v30, v31, a17, a2, v33, (__int64)v34, a7, 0, 0, a15, (__int64)a16, a20);
  v48 = *(_DWORD *)(a4 + 200);
  if ( (v48 & 0x10) != 0 )
  {
    if ( (v48 & 8) != 0 )
      v58 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v58 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(a4, v98, v30, v31, a17, a2, v95, (__int64)v96, a7, v58, 1, a15, (__int64)a16, a20);
    v48 = *(_DWORD *)(a4 + 200);
  }
  v49 = (_DWORD *)v96 + 7;
  v50 = *((_DWORD *)v96 + 7);
  if ( (v48 & 0x2000) == 0 )
  {
    if ( (v48 & 0x4000) != 0 )
    {
      v57 = *a16;
      v50 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 20) )
        goto LABEL_54;
      v50 &= a16[1];
      v57 = *a16;
    }
    v27 &= ~v57;
  }
LABEL_54:
  if ( !a14 )
  {
    if ( (~(v50 | 0x2000000) & v94) != 0 )
      goto LABEL_67;
    v21 = a12;
    v27 |= v50;
    v32 = v93;
    v42 = v89;
LABEL_29:
    if ( v27 )
    {
      v43 = 0;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v32 )
        {
          SepAssemblePrivileges(v93, v92, v42, v91, (__int64)v21);
          if ( v21 )
          {
            if ( !*v21 )
            {
              v44 = 0;
              v43 = -1073741801;
              v27 = 0;
              goto LABEL_33;
            }
          }
        }
      }
LABEL_32:
      v44 = 1;
      goto LABEL_33;
    }
LABEL_62:
    v43 = -1073741790;
    goto LABEL_32;
  }
  v62 = 0;
  v63 = 0;
  v64 = v27 | a5;
  if ( v35 )
    v64 = -33554433;
  v65 = (v27 | a5) & 0xFDFFFFFF;
  if ( !v35 )
    v65 = v27 | a5;
  v66 = a13;
  v67 = v95;
  do
  {
    v68 = (v64 & (*v49 | v27)) == 0;
    v69 = v64 & (*v49 | v27);
    *(int *)((char *)v66 + (char *)a11 - (char *)a13) = v69;
    if ( v68 )
    {
      *v66 = -1073741790;
      v63 = 1;
    }
    else if ( (~v69 & v65) != 0 )
    {
      *v66 = -1073741790;
      v63 = 1;
    }
    else
    {
      *v66 = 0;
      v62 = 1;
    }
    v49 += 12;
    ++v66;
    --v67;
  }
  while ( v67 );
  v88 = v63;
  v90 = v62;
  v70 = (char *)a11;
  if ( KeGetCurrentIrql() < 2u && v62 && v93 )
  {
    SepAssemblePrivileges(v93, v92, v89, v91, (__int64)a12);
    if ( a12 && !*a12 )
    {
      v71 = v95;
      v44 = 0;
      v62 = 0;
      v63 = 1;
      v72 = 0;
      if ( v95 >= 4 )
      {
        v73 = v95 - 1;
        if ( a11 > (unsigned int *)&a13[v73] || &a11[v73] < (unsigned int *)a13 )
        {
          v74 = v95 & 0xFFFFFFFC;
          do
            v72 += 4;
          while ( v72 < (unsigned int)v74 );
          v75 = a13;
          for ( k = (unsigned __int64)(4 * v74) >> 2; k; --k )
            *v75++ = -1073741801;
          v70 = (char *)a11;
          memset(a11, 0, 4 * v74);
          v63 = 1;
          v62 = 0;
          v71 = v95;
        }
      }
      if ( v72 < v71 )
      {
        v77 = &v70[4 * v72];
        v78 = v71 - v72;
        do
        {
          *(_DWORD *)&v77[(char *)a13 - v70] = -1073741801;
          *(_DWORD *)v77 = 0;
          v77 += 4;
          --v78;
        }
        while ( v78 );
      }
      goto LABEL_143;
    }
    v63 = v88;
    v62 = v90;
  }
  v44 = 1;
LABEL_143:
  if ( a18 )
    *a18 = v62;
  if ( a19 )
    *a19 = v63;
  return v44;
}
