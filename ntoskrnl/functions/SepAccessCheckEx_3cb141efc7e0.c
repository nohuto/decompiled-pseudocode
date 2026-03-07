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
        bool *a20)
{
  _DWORD *v20; // r11
  unsigned int v21; // edi
  unsigned int v22; // r10d
  __int64 v25; // r8
  __int64 v27; // r13
  char v28; // r12
  unsigned int v29; // r14d
  unsigned int v30; // r15d
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int16 v33; // dx
  __int16 v34; // ax
  LUID v35; // rcx
  __int16 v36; // r9
  __int64 v37; // rcx
  int v38; // edx
  int v39; // r9d
  int v40; // r10d
  __int64 v41; // r10
  int v42; // eax
  int v43; // ebx
  int v45; // eax
  unsigned int v46; // eax
  int v47; // r14d
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // r8d
  char v51; // al
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  char v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+50h] [rbp-B0h]
  char v58; // [rsp+70h] [rbp-90h]
  char v59; // [rsp+71h] [rbp-8Fh]
  char v60; // [rsp+72h] [rbp-8Eh]
  int v61; // [rsp+74h] [rbp-8Ch]
  __int64 v63; // [rsp+78h] [rbp-88h]
  int v64; // [rsp+98h] [rbp-68h]
  LUID v65; // [rsp+C0h] [rbp-40h] BYREF
  int v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h] BYREF
  int v68; // [rsp+D8h] [rbp-28h]
  __int128 v69; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v70; // [rsp+F0h] [rbp-10h]
  __int128 v71; // [rsp+100h] [rbp+0h]

  v20 = a8;
  v21 = 0;
  v22 = a5;
  v25 = a1;
  v27 = a4;
  v28 = 1;
  v29 = a5;
  if ( !a4 )
    v27 = a3;
  v64 = a3;
  v61 = 0;
  v60 = 0;
  v58 = 0;
  v59 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( a7 )
  {
    v30 = a7;
  }
  else
  {
    DWORD1(v70) = -1;
    a6 = &v69;
    v30 = 1;
  }
  v31 = (_QWORD *)a6 + 5;
  v32 = v30;
  do
  {
    *v31 = a14;
    a14 += 128LL;
    v31 += 6;
    --v32;
  }
  while ( v32 );
  if ( (a5 & 0x1000000) != 0 )
  {
    v65 = SeSecurityPrivilege;
    v66 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(v27, (unsigned int)&v65, 1, 1, a10) )
    {
      v43 = -1073741727;
      AuthzBasepSetTypeListAccessReasons(0x1000000, 0x100000, 8, (_DWORD)a6, v30, 0);
      goto LABEL_31;
    }
    v21 = a9 | 0x1000000;
    AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (_DWORD)a6, v30, 0);
    v39 = 0;
    v61 = 1;
    v60 = 1;
    v40 = 1;
    v29 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
      v43 = 0;
      LOBYTE(v38) = 0;
LABEL_114:
      LOBYTE(v25) = 0;
      goto LABEL_28;
    }
    v25 = a1;
    v22 = a5;
    v20 = a8;
  }
  else
  {
    v21 = a9;
  }
  v33 = *(_WORD *)(v25 + 2);
  v34 = v33 & 0x8000;
  v35 = 0LL;
  v36 = v33 & 4;
  if ( (v33 & 4) != 0 )
  {
    if ( v34 )
    {
      v37 = *(unsigned int *)(v25 + 16);
      if ( (_DWORD)v37 )
        v35 = (LUID)(v25 + v37);
      else
        v35 = 0LL;
    }
    else
    {
      v35 = *(LUID *)(v25 + 32);
    }
  }
  v65 = v35;
  if ( (v33 & 0x10) != 0 )
  {
    v38 = 0;
    if ( v34 )
    {
      v48 = *(unsigned int *)(v25 + 12);
      if ( !(_DWORD)v48 )
        goto LABEL_15;
      v49 = v25 + v48;
    }
    else
    {
      v49 = *(_QWORD *)(v25 + 24);
    }
    v63 = v49;
    goto LABEL_16;
  }
  v38 = 0;
LABEL_15:
  v63 = 0LL;
LABEL_16:
  if ( !v36 || (v39 = 0, !*(_QWORD *)&v35) )
  {
    v21 |= v22;
    if ( (v22 & 0x2000000) != 0 )
    {
      v21 = v20[3] | v21 & 0xFDFFFFFF;
      AuthzBasepSetTypeListAccessReasons(v21, 5242880, 0, (_DWORD)a6, v30, 0);
      LODWORD(v25) = *(_DWORD *)(v27 + 200);
      if ( (v25 & 0x4000) != 0 )
      {
        LODWORD(v25) = v25 & 0x3000000;
        if ( (_DWORD)v25 != 50331648 )
        {
          v56 = 1;
LABEL_106:
          v21 = 0;
          AuthzBasepSetTypeListAccessReasons(0, v38, 0, (_DWORD)a6, v30, v56);
          *(_BYTE *)(a18 + 21) = 0;
          *(_DWORD *)(a18 + 4) = 0;
          goto LABEL_107;
        }
LABEL_108:
        v39 = 0;
        *(_BYTE *)(a18 + 21) = 1;
        *(_DWORD *)a18 = 0;
        *(_DWORD *)(a18 + 4) = v21;
        *(_BYTE *)(a18 + 23) = 1;
LABEL_113:
        v40 = v61;
        v43 = 0;
        LOBYTE(v38) = 0;
        goto LABEL_114;
      }
    }
    else
    {
      AuthzBasepSetTypeListAccessReasons(v22, 5242880, 0, (_DWORD)a6, v30, 0);
      LODWORD(v25) = *(_DWORD *)(v27 + 200);
      if ( (v25 & 0x4000) != 0 )
      {
        LODWORD(v25) = v25 & 0x3000000;
        if ( (_DWORD)v25 != 50331648 )
        {
          v56 = 0;
          goto LABEL_106;
        }
        goto LABEL_108;
      }
    }
    v39 = 0;
    goto LABEL_113;
  }
  if ( (v29 & 0x80000) == 0 )
  {
LABEL_19:
    v40 = v61;
    LOBYTE(v38) = 0;
    LOBYTE(v25) = 0;
    goto LABEL_20;
  }
  v67 = SeTakeOwnershipPrivilege;
  v68 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(v27, (unsigned int)&v67, 1, 1, a10) )
  {
    v21 |= 0x80000u;
    AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (_DWORD)a6, v30, 0);
    v39 = 0;
    v40 = v61 + 1;
    LOBYTE(v38) = 1;
    ++v61;
    v58 = 1;
    v29 &= ~0x80000u;
    if ( !v29 )
    {
      v43 = 0;
      LOBYTE(v25) = 0;
      goto LABEL_28;
    }
    v35 = v65;
    LOBYTE(v25) = 0;
LABEL_20:
    if ( *(_WORD *)(*(_QWORD *)&v35 + 4LL) )
    {
      if ( (a5 & 0x2000000) != 0 )
      {
        SepMaximumAccessCheckEx(v27, v64, v35.LowPart, v63, a19, 0, v30, (__int64)a6, a7, 0, 0, a16, a17, a18);
        AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (_DWORD)a6, v30, 0);
        v41 = v27;
        v42 = *(_DWORD *)(v27 + 200);
        if ( (v42 & 0x10) != 0 )
        {
          if ( (v42 & 8) != 0 )
            v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
          else
            v55 = a8[3] | 0x1FFFFF;
          LOBYTE(v57) = 1;
          SepMaximumAccessCheckEx(v27, v64, v65.LowPart, v63, a19, 0, v30, (__int64)a6, a7, v55, v57, a16, a17, a18);
          v41 = v27;
        }
        LODWORD(v25) = *(_DWORD *)(v41 + 200);
        v38 = *((_DWORD *)a6 + 7);
        if ( (v25 & 0x2000) == 0 )
        {
          if ( (v25 & 0x4000) == 0 )
          {
            v39 = 0;
            if ( *(_BYTE *)(a18 + 20) )
            {
              v38 &= *(_DWORD *)(a18 + 4);
              v21 &= ~*(_DWORD *)a18;
            }
LABEL_25:
            if ( (~(v38 | 0x2000000) & v29) == 0 )
            {
              v21 |= v38;
LABEL_27:
              v40 = v61;
              v43 = 0;
              LOBYTE(v38) = v58;
              LOBYTE(v25) = v59;
              goto LABEL_28;
            }
LABEL_46:
            v43 = -1073741790;
            v21 = 0;
            goto LABEL_31;
          }
          v38 &= *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
          if ( v38 == *((_DWORD *)a6 + 7) || (LODWORD(v25) = v25 & 0x3000000, (_DWORD)v25 != 50331648) || v38 )
          {
            v21 &= ~*(_DWORD *)a18;
          }
          else
          {
            *(_BYTE *)(a18 + 23) = 1;
            v38 = *((_DWORD *)a6 + 7);
          }
        }
        v39 = 0;
        goto LABEL_25;
      }
      SepNormalAccessCheckEx(v29, v27, v64, v35.LowPart, v63, a19, 0, v30, (__int64)a6, a7, 0, a16, a17, a18);
      v39 = 0;
      *(_DWORD *)(a18 + 12) = *((_DWORD *)a6 + 6);
      if ( *((_DWORD *)a6 + 6) )
        goto LABEL_46;
      v45 = *(_DWORD *)(v27 + 200);
      if ( (v45 & 0x10) != 0 )
      {
        if ( (v45 & 8) != 0 )
          v53 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
        else
          v53 = a8[3] | 0x1FFFFF;
        v46 = a5;
        if ( (v53 & a5) == 0 )
        {
LABEL_37:
          LODWORD(v25) = *((_DWORD *)a6 + 6);
          *(_DWORD *)(a18 + 12) = v25;
          if ( *((_DWORD *)a6 + 6) )
            goto LABEL_46;
          v38 = *(_DWORD *)(v27 + 200);
          if ( (v38 & 0x2000) == 0 )
          {
            v47 = v46 | v29;
            if ( (v38 & 0x4000) != 0 )
            {
              v54 = (*(_DWORD *)a18 | v47) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
              if ( !v54 || (_DWORD)v25 )
              {
                v46 = a5;
              }
              else
              {
                v38 &= 0x3000000u;
                v46 = a5;
                if ( v38 == 50331648 )
                {
                  *(_BYTE *)(a18 + 23) = 1;
                  v54 = 0;
                }
              }
            }
            else
            {
              if ( !*(_BYTE *)(a18 + 20) )
              {
                *((_DWORD *)a6 + 6) = 0;
                goto LABEL_42;
              }
              v54 = (*(_DWORD *)a18 | v47) & ~*(_DWORD *)(a18 + 4);
            }
            *((_DWORD *)a6 + 6) = v54;
            if ( v54 )
              goto LABEL_46;
          }
LABEL_42:
          v21 |= v46;
          goto LABEL_27;
        }
        SepNormalAccessCheckEx(v29 & v53, v27, v64, v65.LowPart, v63, a19, 0, v30, (__int64)a6, a7, 1, a16, a17, a18);
        v39 = 0;
      }
      v46 = a5;
      goto LABEL_37;
    }
    *(_DWORD *)(a18 + 12) = v29;
    v52 = *(_DWORD *)(v27 + 200);
    if ( (v52 & 0x4000) != 0 )
      v21 &= ~*(_DWORD *)a18;
    if ( v29 == 0x2000000 )
    {
      if ( v21 )
      {
LABEL_73:
        v43 = 0;
        goto LABEL_29;
      }
    }
    else if ( !v29 && *(_DWORD *)a18 && v21 && (v52 & 0x6000) == 0 )
    {
      goto LABEL_73;
    }
    v21 = 0;
    v43 = -1073741790;
    AuthzBasepSetTypeListAccessReasons(-33554433, 6291456, 0, (_DWORD)a6, v30, 0);
    goto LABEL_31;
  }
  v67 = SeRelabelPrivilege;
  v68 = 0;
  v51 = SepPrivilegeCheck(v27, (unsigned int)&v67, v50, 1, a10);
  v39 = 0;
  if ( !v51 )
  {
    v35 = v65;
    goto LABEL_19;
  }
  v21 |= 0x80000u;
  AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (_DWORD)a6, v30, 0);
  v39 = 0;
  v40 = v61 + 1;
  v59 = 1;
  ++v61;
  LOBYTE(v25) = 1;
  v29 &= ~0x80000u;
  if ( v29 )
  {
    v35 = v65;
    LOBYTE(v38) = 0;
    goto LABEL_20;
  }
  v43 = 0;
  LOBYTE(v38) = 0;
LABEL_28:
  if ( !v21 )
  {
LABEL_107:
    v43 = -1073741790;
    goto LABEL_31;
  }
LABEL_29:
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v40 )
    {
      LOBYTE(v39) = v25;
      LOBYTE(v25) = v38;
      LOBYTE(v38) = v60;
      SepAssemblePrivileges(v40, v38, v25, v39, (__int64)a12);
      if ( a12 )
      {
        if ( !*a12 )
        {
          v28 = 0;
          v43 = -1073741801;
          v21 = 0;
        }
      }
    }
  }
LABEL_31:
  *a13 = v43;
  *a11 = v21;
  if ( a20 )
    *a20 = v43 >= 0;
  return v28;
}
