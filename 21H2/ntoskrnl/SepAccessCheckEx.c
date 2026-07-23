/*
 * XREFs of SepAccessCheckEx @ 0x140373310
 * Callers:
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14026A3F0 (SepPrivilegeCheck.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x1403736B4 (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x140373714 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037383C (SepNormalAccessCheckEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SepAssemblePrivileges @ 0x1405F68B0 (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
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
        __int64 a14,
        int a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        bool *a20,
        int a21,
        char a22)
{
  unsigned int v22; // edi
  _QWORD *v23; // r15
  __int64 v26; // r8
  _DWORD *v29; // r9
  char v30; // r13
  unsigned int v31; // r11d
  unsigned int v32; // r14d
  unsigned int v33; // r12d
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r15
  int v40; // eax
  int v41; // ecx
  int v42; // ebx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // r14d
  int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r8d
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  char v58; // [rsp+28h] [rbp-D8h]
  char v59; // [rsp+80h] [rbp-80h]
  char v60; // [rsp+81h] [rbp-7Fh]
  char v61; // [rsp+82h] [rbp-7Eh]
  int v62; // [rsp+84h] [rbp-7Ch]
  __int64 v63; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+B0h] [rbp-50h]
  LUID v67; // [rsp+D0h] [rbp-30h] BYREF
  int v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  int v70; // [rsp+E8h] [rbp-18h]
  __int128 v71; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v72; // [rsp+100h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+10h]

  v22 = 0;
  v23 = a12;
  v26 = a1;
  v29 = a8;
  v30 = 1;
  if ( !a4 )
    a4 = a3;
  v66 = a3;
  v31 = a5;
  v32 = a5;
  v62 = 0;
  v59 = 0;
  v61 = 0;
  v60 = 0;
  v63 = a4;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  if ( a7 )
  {
    v33 = a7;
  }
  else
  {
    DWORD1(v72) = -1;
    a6 = &v71;
    v33 = 1;
  }
  v34 = (_QWORD *)a6 + 5;
  v35 = v33;
  do
  {
    *v34 = a14;
    a14 += 128LL;
    v34 += 6;
    --v35;
  }
  while ( v35 );
  if ( (a5 & 0x1000000) == 0 )
  {
    v22 = a9;
    goto LABEL_9;
  }
  v67 = SeSecurityPrivilege;
  v68 = 0;
  if ( !SepPrivilegeCheck(a4, (__int64)&v67, 1u, 1, a10) )
  {
    v42 = -1073741727;
    AuthzBasepSetTypeListAccessReasons(0x1000000, 0x100000, 8, (_DWORD)a6, v33, 0);
    goto LABEL_30;
  }
  v22 = a9 | 0x1000000;
  AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (_DWORD)a6, v33, 0);
  v41 = 1;
  LOBYTE(v37) = 1;
  v62 = 1;
  v59 = 1;
  v32 = a5 & 0xFEFFFFFF;
  if ( (a5 & 0xFEFFFFFF) != 0 )
  {
    a4 = v63;
    v26 = a1;
    v31 = a5;
    v29 = a8;
LABEL_9:
    v36 = *(_WORD *)(v26 + 2);
    LODWORD(v37) = (unsigned __int16)v36;
    LOWORD(v37) = v36 & 4;
    if ( (v36 & 4) != 0 )
    {
      if ( v36 >= 0 )
      {
        v39 = *(_QWORD *)(v26 + 32);
        goto LABEL_13;
      }
      v38 = *(unsigned int *)(v26 + 16);
      v39 = 0LL;
      if ( (_DWORD)v38 )
      {
        v39 = v26 + v38;
LABEL_13:
        v65 = v39;
        goto LABEL_14;
      }
    }
    else
    {
      v39 = 0LL;
    }
    v65 = 0;
LABEL_14:
    if ( (v36 & 0x10) == 0 )
    {
LABEL_15:
      v67 = 0LL;
LABEL_16:
      if ( !(_WORD)v37 || !v39 )
      {
        v57 = v22 | v31;
        v22 |= v31;
        if ( (v31 & 0x2000000) != 0 )
        {
          v22 = v57 & 0xFDFFFFFF | v29[3];
          AuthzBasepSetTypeListAccessReasons(v22, 5242880, 0, (_DWORD)a6, v33, 0);
          if ( (*(_DWORD *)(v63 + 200) & 0x4000) == 0 )
            goto LABEL_25;
          v58 = 1;
        }
        else
        {
          AuthzBasepSetTypeListAccessReasons(v31, 5242880, 0, (_DWORD)a6, v33, 0);
          if ( (*(_DWORD *)(v63 + 200) & 0x4000) == 0 )
            goto LABEL_25;
          v58 = 0;
        }
        v22 = 0;
        AuthzBasepSetTypeListAccessReasons(0, v37, v26, (_DWORD)a6, v33, v58);
        *(_BYTE *)(a18 + 21) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_99;
      }
      if ( (v32 & 0x80000) != 0 )
      {
        v69 = SeTakeOwnershipPrivilege;
        v70 = 0;
        if ( SepPrivilegeCheck(a4, (__int64)&v69, 1u, 1, a10) )
        {
          v22 |= 0x80000u;
          AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (_DWORD)a6, v33, 0);
          v61 = 1;
        }
        else
        {
          v69 = SeRelabelPrivilege;
          v70 = 0;
          if ( !SepPrivilegeCheck(v63, (__int64)&v69, v51, 1, a10) )
            goto LABEL_19;
          v22 |= 0x80000u;
          AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (_DWORD)a6, v33, 0);
          v60 = 1;
        }
        v41 = ++v62;
        v32 &= ~0x80000u;
        if ( !v32 )
          goto LABEL_26;
      }
LABEL_19:
      if ( !*(_WORD *)(v39 + 4) )
      {
        *(_DWORD *)(a18 + 12) = v32;
        v52 = *(_DWORD *)(v63 + 200);
        if ( (v52 & 0x4000) != 0 )
          v22 &= ~*(_DWORD *)a18;
        if ( v32 == 0x2000000 )
        {
          if ( v22 )
            goto LABEL_25;
        }
        else if ( !v32 && *(_DWORD *)a18 && v22 && (v52 & 0x6000) == 0 )
        {
          goto LABEL_25;
        }
        v22 = 0;
        v42 = -1073741790;
        AuthzBasepSetTypeListAccessReasons(-33554433, 6291456, 0, (_DWORD)a6, v33, 0);
        goto LABEL_30;
      }
      if ( (a5 & 0x2000000) != 0 )
      {
        SepMaximumAccessCheckEx(v63, v66, v65, v67.LowPart, a19, 0, v33, (__int64)a6, a7, 0, 0, a16, a17, a18, a22);
        AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (_DWORD)a6, v33, 0);
        v40 = *(_DWORD *)(v63 + 200);
        if ( (v40 & 0x10) != 0 )
        {
          if ( (v40 & 8) != 0 )
            v56 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
          else
            v56 = a8[3] | 0x1FFFFF;
          SepMaximumAccessCheckEx(v63, v66, v65, v67.LowPart, a19, 0, v33, (__int64)a6, a7, v56, 1, a16, a17, a18, a22);
          v40 = *(_DWORD *)(v63 + 200);
        }
        LODWORD(v37) = *((_DWORD *)a6 + 7);
        if ( (v40 & 0x2000) != 0 )
          goto LABEL_23;
        if ( (v40 & 0x4000) != 0 )
        {
          LODWORD(v37) = (*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8)) & v37;
        }
        else
        {
          if ( !*(_BYTE *)(a18 + 20) )
          {
LABEL_23:
            if ( (~((unsigned int)v37 | 0x2000000) & v32) != 0 )
            {
              v42 = -1073741790;
              v22 = 0;
              goto LABEL_30;
            }
            v22 |= v37;
            goto LABEL_25;
          }
          LODWORD(v37) = *(_DWORD *)(a18 + 4) & v37;
        }
        v22 &= ~*(_DWORD *)a18;
        goto LABEL_23;
      }
      SepNormalAccessCheckEx(v32, v63, v66, v65, *(_QWORD *)&v67, a19, 0, v33, (__int64)a6, a7, 0, a16, a17, a18, a22);
      *(_DWORD *)(a18 + 12) = *((_DWORD *)a6 + 6);
      if ( *((_DWORD *)a6 + 6) )
        goto LABEL_44;
      v37 = v63;
      v44 = *(_DWORD *)(v63 + 200);
      if ( (v44 & 0x10) != 0 )
      {
        if ( (v44 & 8) != 0 )
          v53 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
        else
          v53 = a8[3] | 0x1FFFFF;
        LODWORD(v26) = a5;
        LODWORD(v29) = 0;
        v45 = 0;
        if ( (v53 & a5) == 0 )
        {
LABEL_37:
          *(_DWORD *)(a18 + 12) = v45;
          if ( !*((_DWORD *)a6 + 6) )
          {
            v46 = *(_DWORD *)(v37 + 200);
            if ( (v46 & 0x2000) != 0 )
            {
LABEL_42:
              v22 |= v26;
LABEL_25:
              v41 = v62;
LABEL_26:
              LOBYTE(v37) = v59;
              v23 = a12;
              goto LABEL_27;
            }
            v47 = v26 | v32;
            if ( (v46 & 0x4000) != 0 )
            {
              v54 = ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
              v55 = v47 | *(_DWORD *)a18;
            }
            else
            {
              v48 = 0;
              if ( !*(_BYTE *)(a18 + 20) )
                goto LABEL_41;
              v54 = v47 | *(_DWORD *)a18;
              v55 = ~*(_DWORD *)(a18 + 4);
            }
            v48 = v55 & v54;
LABEL_41:
            LODWORD(v37) = 0;
            *((_DWORD *)a6 + 6) = v48;
            if ( v48 )
            {
              v42 = -1073741790;
              v22 = 0;
              goto LABEL_30;
            }
            goto LABEL_42;
          }
LABEL_44:
          v42 = -1073741790;
LABEL_45:
          v22 = 0;
          goto LABEL_30;
        }
        SepNormalAccessCheckEx(
          v32 & v53,
          v63,
          v66,
          v65,
          *(_QWORD *)&v67,
          a19,
          0,
          v33,
          (__int64)a6,
          a7,
          1,
          a16,
          a17,
          a18,
          a22);
        v45 = *((_DWORD *)a6 + 6);
        v37 = v63;
      }
      else
      {
        v45 = 0;
      }
      LODWORD(v26) = a5;
      goto LABEL_37;
    }
    if ( v36 >= 0 )
    {
      v50 = *(_QWORD *)(v26 + 24);
    }
    else
    {
      v49 = *(unsigned int *)(v26 + 12);
      if ( !(_DWORD)v49 )
        goto LABEL_15;
      v50 = v26 + v49;
    }
    v67 = (LUID)v50;
    goto LABEL_16;
  }
LABEL_27:
  if ( !v22 )
  {
LABEL_99:
    v42 = -1073741790;
    goto LABEL_30;
  }
  v42 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v41 )
    {
      LOBYTE(v29) = v60;
      LOBYTE(v26) = v61;
      SepAssemblePrivileges(v41, v37, v26, (_DWORD)v29, (__int64)v23);
      if ( v23 )
      {
        if ( !*v23 )
        {
          v30 = 0;
          v42 = -1073741801;
          goto LABEL_45;
        }
      }
    }
  }
LABEL_30:
  *a13 = v42;
  *a11 = v22;
  if ( a20 )
    *a20 = v42 >= 0;
  return v30;
}
