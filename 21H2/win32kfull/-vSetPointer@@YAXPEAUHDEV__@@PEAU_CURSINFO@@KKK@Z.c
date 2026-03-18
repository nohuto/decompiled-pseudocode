/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C008EE28
 * Callers:
 *     GreSetPointer @ 0x1C0073040 (GreSetPointer.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C008E868 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00FB048 (-SETFLAG@@YAXHAECKK@Z.c)
 *     EngSetPointerShape @ 0x1C0153BE0 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  HDEV v5; // rdi
  volatile unsigned int v6; // eax
  int v7; // r12d
  int v10; // r13d
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD); // rax
  volatile unsigned int v12; // ett
  volatile unsigned int v13; // ett
  volatile unsigned int v14; // ett
  _DWORD *v15; // rcx
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct PALETTE *v23; // rdx
  HDEV v24; // rax
  int inited; // eax
  struct _SURFOBJ *v26; // r8
  int v27; // eax
  unsigned int v28; // eax
  signed int v29; // r8d
  LONG v30; // r9d
  LONG v31; // r10d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  _DWORD *v35; // r13
  LONG v36; // eax
  LONG v37; // ecx
  LONG v38; // edx
  LONG v39; // r8d
  RECTL *v40; // rcx
  int v41; // eax
  int v42; // edx
  int v43; // r8d
  bool v44; // zf
  int v45; // ebx
  int v46; // ecx
  unsigned int v47; // edx
  LONG v48; // r11d
  int v49; // r12d
  LONG v50; // r10d
  int v51; // eax
  unsigned __int8 v52; // al
  int v53; // ecx
  char v54; // al
  int v55; // ecx
  int v56; // ecx
  __int64 (__fastcall *v57)(SURFOBJ *, unsigned __int64, __int64, __int64); // r10
  unsigned int v58; // ecx
  BOOL v59; // eax
  __int64 v60; // r8
  int v61; // eax
  SURFOBJ *v62; // rsi
  volatile unsigned int *v63; // rdx
  volatile unsigned int *v64; // rdx
  volatile unsigned int *v65; // rdx
  int v66; // r12d
  LONG v67; // eax
  LONG v68; // ecx
  SURFOBJ *v69; // r8
  XLATEOBJ *v70; // r9
  SURFOBJ *v71; // rdx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  LONG v78; // [rsp+60h] [rbp-A0h]
  BOOL v79; // [rsp+64h] [rbp-9Ch]
  __int64 v80; // [rsp+68h] [rbp-98h]
  SURFOBJ *pso; // [rsp+70h] [rbp-90h]
  int v83; // [rsp+7Ch] [rbp-84h]
  struct PALETTE *v84; // [rsp+80h] [rbp-80h] BYREF
  int v85[2]; // [rsp+88h] [rbp-78h] BYREF
  int v86; // [rsp+90h] [rbp-70h]
  int v87; // [rsp+94h] [rbp-6Ch]
  unsigned int v88; // [rsp+98h] [rbp-68h]
  int v89; // [rsp+9Ch] [rbp-64h]
  int v90; // [rsp+A0h] [rbp-60h]
  LONG v91; // [rsp+A4h] [rbp-5Ch]
  __int64 v92; // [rsp+A8h] [rbp-58h]
  __int64 v93; // [rsp+B0h] [rbp-50h]
  __int64 v94; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v95[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-20h]
  _BYTE v97[32]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v98; // [rsp+108h] [rbp+8h]
  _BYTE v99[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v100; // [rsp+130h] [rbp+30h]
  RECTL v101; // [rsp+140h] [rbp+40h] BYREF
  RECTL v102; // [rsp+150h] [rbp+50h] BYREF
  RECTL v103; // [rsp+160h] [rbp+60h]

  v88 = a4;
  v5 = a1 + 10;
  v89 = a3 & 0x20;
  v6 = *((_DWORD *)a1 + 10);
  v7 = a3 & 0x10;
  v10 = 0;
  if ( (v6 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    SURFREF::SURFREF((SURFREF *)v97, *((HSURF *)a2 + 1));
    v15 = v98;
    if ( !v98 )
    {
LABEL_107:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v97);
      return;
    }
    v16 = 1;
    if ( v98[24] != 1 || (v98[15] & 1) != 0 )
    {
LABEL_105:
      if ( v15 )
        DEC_SHARE_REF_CNT(v15);
      goto LABEL_107;
    }
    v80 = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    v94 = 0LL;
    SURFREF::SURFREF((SURFREF *)v95);
    SURFREF::SURFREF((SURFREF *)v99);
    v18 = *((_QWORD *)a1 + 316);
    v84 = 0LL;
    pso = (SURFOBJ *)((v18 + 24) & -(__int64)(v18 != 0));
    if ( *((_QWORD *)a2 + 2) || *((_QWORD *)a2 + 6) )
    {
      v21 = *((_QWORD *)a2 + 6);
      LOBYTE(v17) = 5;
      if ( v21 )
      {
        v22 = HmgShareLockCheck(v21, v17);
        v10 = 1;
      }
      else
      {
        v22 = HmgShareLockCheck(*((_QWORD *)a2 + 2), v17);
      }
      v96 = v22;
      v19 = v22;
      if ( !v22 )
        goto LABEL_33;
      if ( *(_DWORD *)(v22 + 60) != (int)v98[15] >> 1 || *(_DWORD *)(v22 + 56) < v98[14] )
        goto LABEL_99;
      v23 = *(struct PALETTE **)(v22 + 128);
      v84 = v23;
      if ( !v23 )
      {
        v24 = (HDEV)*((_QWORD *)a1 + 3);
        if ( v24 != a1 )
        {
          v23 = (struct PALETTE *)*((_QWORD *)v24 + 222);
          v84 = v23;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v84, v23, v19, a1, 1) )
        goto LABEL_99;
      inited = EXLATEOBJ::bInitXlateObj(
                 &v94,
                 0LL,
                 0,
                 (__int64)v84,
                 *((_QWORD *)a1 + 222),
                 (__int64)ppalDefault,
                 (__int64)ppalDefault,
                 0,
                 0xFFFFFF,
                 0,
                 0);
      v19 = v96;
      if ( inited )
      {
        v20 = v96;
        v93 = v94;
        v80 = v96;
      }
      else
      {
LABEL_33:
        v20 = 0LL;
      }
    }
    else
    {
      v19 = v96;
      v20 = 0LL;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      if ( (*(_DWORD *)a2 & 0x400) != 0 )
      {
        if ( v7 )
          goto LABEL_46;
      }
      else if ( !v7 )
      {
        goto LABEL_46;
      }
    }
    if ( v20 )
      v26 = (struct _SURFOBJ *)(v20 + 24);
    else
      v26 = 0LL;
    vProcessCursorShape(
      (HDEV)v98 + 6,
      v7,
      v10,
      (struct _SURFOBJ *)((unsigned __int64)(v98 + 6) & -(__int64)(v98 != 0LL)),
      v26,
      v84,
      (struct _RECTL *)a2 + 2,
      (HBITMAP *)a2 + 3);
    v27 = *(_DWORD *)a2;
    v19 = v96;
    if ( v7 )
      v28 = v27 | 0x400;
    else
      v28 = v27 & 0xFFFFFBFF;
    *(_DWORD *)a2 = v28;
LABEL_46:
    v29 = *((_DWORD *)a2 + 10);
    if ( *((_DWORD *)a2 + 8) > v29 || (v30 = *((_DWORD *)a2 + 9), v31 = *((_DWORD *)a2 + 11), v30 > v31) )
    {
LABEL_99:
      v34 = v100;
LABEL_100:
      if ( v34 )
        DEC_SHARE_REF_CNT(v34);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v99);
      if ( v96 )
        DEC_SHARE_REF_CNT(v96);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v95);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v94);
      v15 = v98;
      goto LABEL_105;
    }
    v102.left = *((_DWORD *)a2 + 8);
    v32 = *((_QWORD *)a2 + 3);
    *(_QWORD *)&v102.top = __PAIR64__(v29, v30);
    v102.bottom = v31;
    if ( v32 && *((_DWORD *)a1 + 519) > 3u )
    {
      LOBYTE(v20) = 5;
      v33 = HmgShareLockCheck(v32, v20);
      v19 = v96;
      v34 = v33;
      v100 = v33;
    }
    else
    {
      v34 = v100;
    }
    v35 = v98;
    if ( v34 )
    {
      v36 = *((_DWORD *)a2 + 8);
      v37 = *((_DWORD *)a2 + 9);
      v38 = *((_DWORD *)a2 + 10);
      v39 = *((_DWORD *)a2 + 11);
      v101.left = v36;
      v101.top = v37;
      v101.right = v38;
      v101.bottom = v39;
      v92 = v34;
      if ( v7 )
      {
        v101.left = v36 + 1;
        v101.top = v37 + 1;
        v101.right = v38 + 8;
        v101.bottom = v39 + 6;
      }
      v40 = &v101;
      v86 = *(_DWORD *)(v34 + 56);
      v41 = *(_DWORD *)(v34 + 60);
    }
    else
    {
      v42 = v98[14];
      if ( v19 && v42 >= *(_DWORD *)(v19 + 56) )
        v42 = *(_DWORD *)(v19 + 56);
      v40 = &v102;
      v41 = (int)v98[15] >> 1;
      v86 = v42;
    }
    v85[0] = 0;
    v85[1] = 0;
    v87 = v41;
    ERECTL::operator*=(&v40->left, v85);
    v103 = 0LL;
    v43 = v7 != 0 ? 3 : 0;
    v44 = (*(_DWORD *)v5 & 0x400) == 0;
    v90 = v43;
    if ( !v44 )
      goto LABEL_100;
    v45 = 0;
    v46 = *((__int16 *)a2 + 3);
    v47 = v88;
    v48 = *((_DWORD *)a1 + 16);
    v49 = a3 & 0xC | 1;
    v50 = *((_DWORD *)a1 + 17);
    *((_DWORD *)a1 + 18) = *((__int16 *)a2 + 2);
    v51 = 0;
    v79 = 0;
    *((_DWORD *)a1 + 19) = v46;
    v91 = v48;
    v78 = v50;
    v83 = 0;
    if ( v47 && a5 )
    {
      v52 = -1;
      if ( a5 < 0xFF )
        v52 = a5;
      v53 = v52;
      v54 = 16;
      v55 = 16 * v53;
      if ( v47 < 0x10 )
        v54 = v47;
      v56 = v54 & 0xF | v55;
      v51 = 1;
      v49 |= v56 << 8;
      v83 = 1;
    }
    if ( v89 )
      goto LABEL_111;
    v57 = (__int64 (__fastcall *)(SURFOBJ *, unsigned __int64, __int64, __int64))*((_QWORD *)a1 + 362);
    if ( !v57 || v51 && ((_DWORD)a1[524] & 0x200) == 0 )
      goto LABEL_110;
    if ( v92 )
    {
      if ( ((_DWORD)a1[524] & 0x20) != 0 )
      {
        v103 = v101;
        v58 = v57(pso, 0LL, v92 + 24, 0LL);
        if ( v58 == 3 )
        {
          v45 = 0;
          v59 = 1;
        }
        else
        {
          v45 = (v58 >> 1) & 1;
          v59 = (v58 & 2) == 0;
          if ( (v58 & 4) != 0 )
          {
            v79 = 1;
            goto LABEL_77;
          }
        }
        v79 = 0;
LABEL_77:
        v16 = v59;
LABEL_90:
        if ( !v16 )
        {
          if ( (*(_DWORD *)v5 & 4) != 0 )
            EngSetPointerShape(
              (SURFOBJ *)((*((_QWORD *)a1 + 316) + 24LL) & -(__int64)(*((_QWORD *)a1 + 316) != 0LL)),
              0LL,
              0LL,
              0LL,
              0,
              0,
              0,
              0,
              0LL,
              0);
          v62 = pso;
          goto LABEL_94;
        }
        v35 = v98;
        v43 = v90;
        v48 = v91;
      }
LABEL_110:
      v50 = v78;
LABEL_111:
      v66 = a3 & 0x40 | v49;
      if ( v92 )
      {
        v67 = *((__int16 *)a2 + 3) + v43;
        fl = v66 | 0x10;
        v68 = *((__int16 *)a2 + 2) + v43;
        v69 = (SURFOBJ *)(v92 + 24);
        v70 = 0LL;
        prcl = &v101;
        v71 = 0LL;
        y = v50;
        x = v48;
        yHot = v67;
        xHot = v68;
      }
      else
      {
        if ( v80 )
          v69 = (SURFOBJ *)(v80 + 24);
        else
          v69 = 0LL;
        fl = v66;
        v71 = (SURFOBJ *)((unsigned __int64)(v35 + 6) & -(__int64)(v35 != 0LL));
        prcl = &v102;
        y = v50;
        x = v48;
        yHot = *((__int16 *)a2 + 3);
        xHot = *((__int16 *)a2 + 2);
        v70 = (XLATEOBJ *)v93;
      }
      v62 = pso;
      EngSetPointerShape(pso, v71, v69, v70, xHot, yHot, x, y, prcl, fl);
LABEL_94:
      if ( !v45 && (*(_DWORD *)v5 & 2) != 0 && *((_QWORD *)a1 + 363) )
        (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 363))(v62, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
      SETFLAG(v16, (volatile unsigned int *)v5, 4u);
      SETFLAG(v45, v63, 2u);
      SETFLAG(v83, v64, 0x100000u);
      SETFLAG(v79, v65, 0x200000u);
      goto LABEL_99;
    }
    v60 = v80;
    v103 = v102;
    if ( v80 )
      v60 = v80 + 24;
    v61 = v57(pso, (unsigned __int64)(v35 + 6) & -(__int64)(v35 != 0LL), v60, v93);
    if ( v61 == 3 )
    {
      if ( *((_QWORD *)a1 + 363) )
        (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 363))(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
      LOBYTE(v61) = 1;
    }
    else if ( (v61 & 2) != 0 )
    {
      v45 = 1;
      goto LABEL_87;
    }
    v45 = 0;
LABEL_87:
    v79 = (v61 & 4) != 0;
    v16 = v45 ^ 1;
    goto LABEL_90;
  }
  if ( (v6 & 4) != 0 )
  {
    EngSetPointerShape(
      (SURFOBJ *)((*((_QWORD *)a1 + 316) + 24LL) & -(__int64)(*((_QWORD *)a1 + 316) != 0LL)),
      0LL,
      0LL,
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0);
    v6 = *(_DWORD *)v5;
  }
  if ( (v6 & 2) != 0 )
  {
    v11 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*((_QWORD *)a1 + 363);
    if ( v11 )
      v11((*((_QWORD *)a1 + 316) + 24LL) & -(__int64)(*((_QWORD *)a1 + 316) != 0LL), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  _m_prefetchw(v5);
  do
    v12 = *(_DWORD *)v5;
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFD, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v13 = *(_DWORD *)v5;
  while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFFFFFFB, *(_DWORD *)v5) );
  _m_prefetchw(v5);
  do
    v14 = *(_DWORD *)v5;
  while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)v5, *(_DWORD *)v5 & 0xFFEFFFFF, *(_DWORD *)v5) );
}
