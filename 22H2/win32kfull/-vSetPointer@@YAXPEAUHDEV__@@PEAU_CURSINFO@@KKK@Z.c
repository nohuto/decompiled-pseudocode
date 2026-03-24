/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00820E0
 * Callers:
 *     GreSetPointer @ 0x1C0081D88 (GreSetPointer.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B121C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00CABE0 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     EngSetPointerShape @ 0x1C00EB470 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, int a3, unsigned int a4, unsigned int a5)
{
  int v5; // eax
  int v6; // r14d
  int v7; // r15d
  char v8; // r12
  signed __int32 v11; // ett
  signed __int32 v12; // ett
  signed __int32 v13; // ett
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // r13
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  struct PALETTE *v22; // rdx
  HDEV v23; // rax
  int v24; // eax
  unsigned int v25; // eax
  LONG v26; // r8d
  LONG v27; // r9d
  LONG v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  _DWORD *v32; // r15
  LONG v33; // eax
  LONG v34; // ecx
  LONG v35; // edx
  LONG v36; // r8d
  int v37; // eax
  RECTL *p_prcl; // rcx
  int v39; // edx
  int v40; // eax
  int v41; // r8d
  bool v42; // zf
  int v43; // ecx
  unsigned int v44; // edx
  LONG x; // r10d
  int v46; // r13d
  LONG y; // r11d
  int v48; // ebx
  int v49; // r14d
  int v50; // eax
  unsigned __int8 v51; // al
  int v52; // ecx
  char v53; // al
  int v54; // ecx
  int v55; // ecx
  __int64 v56; // r12
  __int64 (__fastcall *v57)(SURFOBJ *, unsigned __int64, __int64, XLATEOBJ *); // r11
  int v58; // eax
  unsigned int v59; // eax
  SURFOBJ *v60; // rsi
  signed __int32 v61; // eax
  signed __int32 v62; // edx
  signed __int32 v63; // eax
  signed __int32 v64; // edx
  __int64 v65; // r8
  signed __int32 v66; // eax
  signed __int32 v67; // edx
  signed __int32 v68; // eax
  __int64 v69; // rdx
  LONG yHot; // ecx
  FLONG fl; // r13d
  LONG xHot; // r9d
  LONG v73; // [rsp+60h] [rbp-A0h]
  SURFOBJ *pso; // [rsp+68h] [rbp-98h]
  LONG v75; // [rsp+70h] [rbp-90h]
  struct PALETTE *v76; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v77; // [rsp+80h] [rbp-80h]
  int v78; // [rsp+84h] [rbp-7Ch]
  int v79; // [rsp+88h] [rbp-78h]
  int v80; // [rsp+8Ch] [rbp-74h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v83; // [rsp+A0h] [rbp-60h]
  __int64 v84; // [rsp+A8h] [rbp-58h]
  XLATEOBJ *v85; // [rsp+B0h] [rbp-50h] BYREF
  int v86; // [rsp+B8h] [rbp-48h]
  int v87; // [rsp+BCh] [rbp-44h]
  int v88; // [rsp+C0h] [rbp-40h]
  int v89; // [rsp+C4h] [rbp-3Ch]
  int v90; // [rsp+C8h] [rbp-38h]
  int v91; // [rsp+CCh] [rbp-34h]
  int v92; // [rsp+D0h] [rbp-30h]
  int v93; // [rsp+D4h] [rbp-2Ch]
  _BYTE v94[32]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v95; // [rsp+F8h] [rbp-8h]
  _BYTE v96[32]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v97; // [rsp+120h] [rbp+20h]
  _BYTE v98[32]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v99; // [rsp+148h] [rbp+48h]
  RECTL prcl; // [rsp+150h] [rbp+50h] BYREF
  RECTL v101; // [rsp+160h] [rbp+60h] BYREF
  RECTL v102; // [rsp+170h] [rbp+70h]

  v77 = a4;
  v80 = a3;
  v78 = a3 & 0x20;
  v5 = *((_DWORD *)a1 + 10);
  v6 = a3 & 0x10;
  v7 = 0;
  v8 = a3;
  if ( (v5 & 0x400) != 0 )
    return;
  if ( a2 )
  {
    SURFREF::SURFREF((SURFREF *)v96, *((HSURF *)a2 + 1));
    v15 = v97;
    if ( !v97 )
    {
LABEL_113:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v96);
      return;
    }
    if ( v97[24] != 1 || (v97[15] & 1) != 0 )
    {
LABEL_111:
      if ( v15 )
        DEC_SHARE_REF_CNT(v15, v14);
      goto LABEL_113;
    }
    v16 = 0LL;
    v82 = 0LL;
    v81 = 0LL;
    v83 = 0LL;
    v85 = 0LL;
    SURFREF::SURFREF((SURFREF *)v94);
    SURFREF::SURFREF((SURFREF *)v98);
    v18 = *((_QWORD *)a1 + 319);
    v76 = 0LL;
    pso = (SURFOBJ *)((v18 + 24) & -(__int64)(v18 != 0));
    if ( *((_QWORD *)a2 + 2) || *((_QWORD *)a2 + 6) )
    {
      v19 = *((_QWORD *)a2 + 6);
      LOBYTE(v17) = 5;
      if ( v19 )
      {
        v20 = HmgShareLockCheck(v19, v17);
        v7 = 1;
      }
      else
      {
        v20 = HmgShareLockCheck(*((_QWORD *)a2 + 2), v17);
      }
      v95 = v20;
      v21 = v20;
      if ( !v20 )
      {
LABEL_33:
        if ( *((_DWORD *)a2 + 11) )
        {
          if ( (*(_DWORD *)a2 & 0x400) != 0 )
          {
            if ( v6 )
              goto LABEL_42;
          }
          else if ( !v6 )
          {
            goto LABEL_42;
          }
        }
        vProcessCursorShape(
          (HDEV)v97 + 6,
          v6,
          v7,
          (struct _SURFOBJ *)((unsigned __int64)(v97 + 6) & -(__int64)(v97 != 0LL)),
          (struct _SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0)),
          v76,
          (struct _RECTL *)a2 + 2,
          (HBITMAP *)a2 + 3);
        v24 = *(_DWORD *)a2;
        v21 = v95;
        if ( v6 )
          v25 = v24 | 0x400;
        else
          v25 = v24 & 0xFFFFFBFF;
        *(_DWORD *)a2 = v25;
LABEL_42:
        v26 = *((_DWORD *)a2 + 10);
        if ( *((_DWORD *)a2 + 8) > v26 || (v27 = *((_DWORD *)a2 + 9), v28 = *((_DWORD *)a2 + 11), v27 > v28) )
        {
LABEL_105:
          v31 = v99;
LABEL_106:
          if ( v31 )
            DEC_SHARE_REF_CNT(v31, v17);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v98);
          if ( v95 )
            DEC_SHARE_REF_CNT(v95, v69);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v94);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
          v15 = v97;
          goto LABEL_111;
        }
        v101.left = *((_DWORD *)a2 + 8);
        v29 = *((_QWORD *)a2 + 3);
        v101.top = v27;
        v101.right = v26;
        v101.bottom = v28;
        if ( v29 && *((_DWORD *)a1 + 527) > 3u )
        {
          LOBYTE(v17) = 5;
          v30 = HmgShareLockCheck(v29, v17);
          v21 = v95;
          v31 = v30;
          v99 = v30;
        }
        else
        {
          v31 = v99;
        }
        v32 = v97;
        if ( v31 )
        {
          v33 = *((_DWORD *)a2 + 8);
          v34 = *((_DWORD *)a2 + 9);
          v35 = *((_DWORD *)a2 + 10);
          v36 = *((_DWORD *)a2 + 11);
          prcl.left = v33;
          prcl.top = v34;
          prcl.right = v35;
          prcl.bottom = v36;
          v81 = v31;
          if ( v6 )
          {
            prcl.left = v33 + 1;
            prcl.top = v34 + 1;
            prcl.right = v35 + 8;
            prcl.bottom = v36 + 6;
          }
          v37 = *(_DWORD *)(v31 + 56);
          v86 = 0;
          p_prcl = &prcl;
          v87 = 0;
          v88 = v37;
          v89 = *(_DWORD *)(v31 + 60);
        }
        else
        {
          v39 = v97[14];
          if ( v21 && v39 >= *(_DWORD *)(v21 + 56) )
            v39 = *(_DWORD *)(v21 + 56);
          v90 = 0;
          p_prcl = &v101;
          v91 = 0;
          v40 = (int)v97[15] >> 1;
          v92 = v39;
          v93 = v40;
        }
        ERECTL::operator*=(p_prcl);
        v102 = 0LL;
        v41 = v6 != 0 ? 3 : 0;
        v42 = ((_DWORD)a1[10] & 0x400) == 0;
        v79 = v41;
        if ( !v42 )
          goto LABEL_106;
        v43 = *((__int16 *)a2 + 3);
        v44 = v77;
        x = *((_DWORD *)a1 + 18);
        v46 = v8 & 0xC | 1;
        y = *((_DWORD *)a1 + 19);
        v48 = 0;
        *((_DWORD *)a1 + 20) = *((__int16 *)a2 + 2);
        v49 = 1;
        v50 = 0;
        *((_DWORD *)a1 + 21) = v43;
        v84 = 0LL;
        v75 = x;
        v73 = y;
        if ( v44 )
        {
          v84 = 0LL;
          if ( a5 )
          {
            v51 = -1;
            v84 = 1LL;
            if ( a5 < 0xFF )
              v51 = a5;
            v52 = v51;
            v53 = 16;
            v54 = 16 * v52;
            if ( v44 < 0x10 )
              v53 = v44;
            v55 = v53 & 0xF | v54;
            v50 = 1;
            v46 |= v55 << 8;
          }
        }
        v56 = 0LL;
        if ( v78 )
          goto LABEL_117;
        v57 = (__int64 (__fastcall *)(SURFOBJ *, unsigned __int64, __int64, XLATEOBJ *))*((_QWORD *)a1 + 365);
        if ( !v57 || v50 && ((_DWORD)a1[532] & 0x200) == 0 )
        {
LABEL_116:
          y = v73;
LABEL_117:
          yHot = *((__int16 *)a2 + 3);
          fl = v80 & 0x40 | v46;
          xHot = *((__int16 *)a2 + 2);
          v60 = pso;
          if ( v81 )
            EngSetPointerShape(pso, 0LL, (SURFOBJ *)(v81 + 24), 0LL, xHot + v41, yHot + v41, x, y, &prcl, fl | 0x10);
          else
            EngSetPointerShape(
              pso,
              (SURFOBJ *)((unsigned __int64)(v32 + 6) & -(__int64)(v32 != 0LL)),
              (SURFOBJ *)((v82 + 24) & -(__int64)(v82 != 0)),
              v83,
              xHot,
              yHot,
              x,
              y,
              &v101,
              fl);
LABEL_85:
          if ( !v48 && ((_DWORD)a1[10] & 2) != 0 && *((_QWORD *)a1 + 366) )
            (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 366))(
              v60,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL,
              0LL);
          _m_prefetchw(a1 + 10);
          do
          {
            v62 = *((_DWORD *)a1 + 10) | 4;
            if ( !v49 )
              v62 = (_DWORD)a1[10] & 0xFFFFFFFB;
            v61 = *((_DWORD *)a1 + 10);
          }
          while ( v61 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v62, v61) );
          _m_prefetchw(a1 + 10);
          do
          {
            v64 = *((_DWORD *)a1 + 10) | 2;
            if ( !v48 )
              v64 = (_DWORD)a1[10] & 0xFFFFFFFD;
            v63 = *((_DWORD *)a1 + 10);
          }
          while ( v63 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v64, v63) );
          _m_prefetchw(a1 + 10);
          v65 = v84;
          do
          {
            v67 = *((_DWORD *)a1 + 10) | 0x100000;
            if ( !v65 )
              v67 = (_DWORD)a1[10] & 0xFFEFFFFF;
            v66 = *((_DWORD *)a1 + 10);
          }
          while ( v66 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v67, v66) );
          _m_prefetchw(a1 + 10);
          do
          {
            v17 = (_DWORD *)*((unsigned int *)a1 + 10);
            LODWORD(v17) = (unsigned int)v17 | 0x200000;
            if ( !v56 )
              v17 = (_DWORD *)((_DWORD)a1[10] & 0xFFDFFFFF);
            v68 = *((_DWORD *)a1 + 10);
          }
          while ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, (signed __int32)v17, v68) );
          goto LABEL_105;
        }
        if ( v81 )
        {
          v56 = 0LL;
          if ( ((_DWORD)a1[532] & 0x20) == 0 )
            goto LABEL_81;
          v102 = prcl;
          v58 = v57(pso, 0LL, v81 + 24, 0LL);
          if ( v58 != 3 )
            v48 = ((unsigned __int8)v58 >> 1) & 1;
          v32 = v97;
          v49 = v48 ^ 1;
          if ( (v58 & 4) == 0 )
            goto LABEL_81;
        }
        else
        {
          v102 = v101;
          v59 = v57(pso, (unsigned __int64)(v32 + 6) & -(__int64)(v32 != 0LL), (v82 + 24) & -(__int64)(v82 != 0), v83);
          if ( v59 == 3 )
          {
            if ( *((_QWORD *)a1 + 366) )
              (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 366))(
                pso,
                0xFFFFFFFFLL,
                0xFFFFFFFFLL,
                0LL);
            v59 = 1;
          }
          v32 = v97;
          v48 = (v59 >> 1) & 1;
          v49 = (v59 & 2) == 0;
          if ( (v59 & 4) == 0 )
          {
            v56 = 0LL;
            goto LABEL_81;
          }
        }
        v56 = 1LL;
LABEL_81:
        if ( !v49 )
        {
          if ( ((_DWORD)a1[10] & 4) != 0 )
            EngSetPointerShape(
              (SURFOBJ *)((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL)),
              0LL,
              0LL,
              0LL,
              0,
              0,
              0,
              0,
              0LL,
              0);
          v60 = pso;
          goto LABEL_85;
        }
        v41 = v79;
        x = v75;
        goto LABEL_116;
      }
      v17 = v97;
      if ( *(_DWORD *)(v20 + 60) != (int)v97[15] >> 1 || *(_DWORD *)(v20 + 56) < v97[14] )
        goto LABEL_105;
      v22 = *(struct PALETTE **)(v20 + 128);
      v76 = v22;
      if ( !v22 )
      {
        v23 = (HDEV)*((_QWORD *)a1 + 3);
        if ( v23 != a1 )
        {
          v22 = (struct PALETTE *)*((_QWORD *)v23 + 226);
          v76 = v22;
        }
      }
      if ( !(unsigned int)bIsCompatible(&v76, v22, v21, a1, 1) )
        goto LABEL_105;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v85, 0LL, 0LL) )
      {
        v21 = v95;
        v16 = v95;
        v83 = v85;
        v82 = v95;
        goto LABEL_33;
      }
    }
    v21 = v95;
    goto LABEL_33;
  }
  if ( (v5 & 4) != 0 )
  {
    EngSetPointerShape(
      (SURFOBJ *)((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL)),
      0LL,
      0LL,
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0);
    v5 = *((_DWORD *)a1 + 10);
  }
  if ( (v5 & 2) != 0 && *((_QWORD *)a1 + 366) )
    (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD))a1 + 366))(
      (*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL),
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      0LL);
  _m_prefetchw(a1 + 10);
  do
    v11 = *((_DWORD *)a1 + 10);
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v11 & 0xFFFFFFFD, v11) );
  _m_prefetchw(a1 + 10);
  do
    v12 = *((_DWORD *)a1 + 10);
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v12 & 0xFFFFFFFB, v12) );
  _m_prefetchw(a1 + 10);
  do
    v13 = *((_DWORD *)a1 + 10);
  while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v13 & 0xFFEFFFFF, v13) );
}
