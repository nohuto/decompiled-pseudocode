/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C01299C8
 * Callers:
 *     GreSetPointer @ 0x1C0062EF4 (GreSetPointer.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00ED8B8 (-SETFLAG@@YAXHAECKK@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C012739C (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     EngSetPointerShape @ 0x1C0127EE0 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C0225C04 (--$Write@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0267A60 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(Gre::Base *a1, struct _CURSINFO *a2, int a3, unsigned int a4, unsigned int a5)
{
  char v5; // si
  HDEV v8; // r15
  __int64 v9; // rdx
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD); // rax
  signed __int32 v12; // ett
  signed __int32 v13; // ett
  signed __int32 v14; // ett
  __int64 v15; // rax
  _DWORD *v16; // rsi
  int v17; // r12d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // rcx
  struct PALETTE *v23; // rdx
  struct PALETTE **v24; // rax
  struct _SURFOBJ *v25; // r8
  int v26; // eax
  unsigned int v27; // eax
  LONG v28; // r8d
  LONG v29; // r9d
  LONG v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  LONG v33; // ecx
  LONG v34; // edx
  LONG v35; // r8d
  LONG v36; // eax
  int v37; // eax
  RECTL *v38; // rdx
  RECTL *p_prcl; // rcx
  LONG v40; // ecx
  LONG v41; // eax
  int v42; // r8d
  bool v43; // zf
  Gre::Base *v44; // rdx
  int v45; // ebx
  int v46; // ecx
  LONG v47; // r9d
  LONG v48; // r10d
  int v49; // r11d
  int v50; // eax
  unsigned __int8 v51; // al
  int v52; // ecx
  char v53; // al
  int v54; // ecx
  int v55; // ecx
  __int64 (__fastcall *v56)(SURFOBJ *, unsigned __int64, __int64, XLATEOBJ *, int, int, LONG, LONG, RECTL *, unsigned int); // r11
  const char *v57; // rax
  const char *v58; // rax
  int v59; // edx
  int v60; // ecx
  unsigned int v61; // ecx
  BOOL v62; // eax
  __int64 v63; // r8
  int v64; // r9d
  int v65; // r10d
  SURFOBJ *v66; // rbx
  int v67; // eax
  void (__fastcall *v68)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  int v69; // r13d
  LONG yHot; // r9d
  FLONG fl; // r11d
  LONG xHot; // r10d
  SURFOBJ *v73; // r8
  void (__fastcall *v74)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v75; // rdx
  volatile unsigned int *v76; // rdx
  volatile unsigned int *v77; // rdx
  int v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+60h] [rbp-A0h]
  int v80; // [rsp+64h] [rbp-9Ch]
  LONG v81; // [rsp+68h] [rbp-98h]
  LONG x; // [rsp+68h] [rbp-98h]
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v84; // [rsp+78h] [rbp-88h]
  __int64 v85; // [rsp+80h] [rbp-80h] BYREF
  int v86; // [rsp+88h] [rbp-78h]
  int v87; // [rsp+8Ch] [rbp-74h]
  Gre::Base *v88; // [rsp+90h] [rbp-70h]
  int v89; // [rsp+98h] [rbp-68h]
  LONG y[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v91; // [rsp+A8h] [rbp-58h]
  int v92[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct PALETTE *v93; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-40h]
  SURFOBJ *pso; // [rsp+C8h] [rbp-38h]
  __int64 v96; // [rsp+D0h] [rbp-30h]
  XLATEOBJ *v97; // [rsp+D8h] [rbp-28h] BYREF
  XLATEOBJ *pxlo; // [rsp+E0h] [rbp-20h]
  RECTL prcl; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v100; // [rsp+100h] [rbp+0h] BYREF
  RECTL v101; // [rsp+110h] [rbp+10h] BYREF

  v84 = a4;
  v5 = a3;
  v91 = a3;
  v88 = a1;
  v8 = (HDEV)((char *)a1 + 40);
  v10 = Gre::Base::Globals(a1);
  v81 = 0;
  v78 = v5 & 0x10;
  LODWORD(v83) = v5 & 0x20;
  if ( (*(_DWORD *)v8 & 0x400) != 0 )
    return;
  if ( !a2 )
  {
    if ( (*(_DWORD *)v8 & 4) != 0 )
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
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v11 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*((_QWORD *)a1 + 363);
      if ( v11 )
        v11((*((_QWORD *)a1 + 316) + 24LL) & -(__int64)(*((_QWORD *)a1 + 316) != 0LL), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
    }
    _m_prefetchw(v8);
    do
      v12 = *(_DWORD *)v8;
    while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFFFFFFD, *(_DWORD *)v8) );
    _m_prefetchw(v8);
    do
      v13 = *(_DWORD *)v8;
    while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFFFFFFB, *(_DWORD *)v8) );
    _m_prefetchw(v8);
    do
      v14 = *(_DWORD *)v8;
    while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)v8, *(_DWORD *)v8 & 0xFFEFFFFF, *(_DWORD *)v8) );
    return;
  }
  LOBYTE(v9) = 5;
  v15 = HmgShareLockCheck(*((_QWORD *)a2 + 1), v9);
  *(_QWORD *)v92 = v15;
  v16 = (_DWORD *)v15;
  if ( !v15 || (v17 = 1, *(_DWORD *)(v15 + 96) != 1) || (*(_DWORD *)(v15 + 60) & 1) != 0 )
  {
LABEL_130:
    EPALOBJ::~EPALOBJ((EPALOBJ *)v92);
    return;
  }
  v18 = *((_QWORD *)v10 + 750);
  v19 = 0LL;
  v96 = 0LL;
  v20 = 0LL;
  pxlo = 0LL;
  v21 = 0LL;
  v97 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v85 = 0LL;
  *(_QWORD *)y = 0LL;
  pso = (SURFOBJ *)((*((_QWORD *)v88 + 316) + 24LL) & -(__int64)(*((_QWORD *)v88 + 316) != 0LL));
  if ( *((_QWORD *)a2 + 2) || *((_QWORD *)a2 + 6) )
  {
    v22 = *((_QWORD *)a2 + 6);
    LOBYTE(v19) = 5;
    if ( v22 )
      v81 = 1;
    else
      v22 = *((_QWORD *)a2 + 2);
    v85 = HmgShareLockCheck(v22, v19);
    v20 = v85;
    if ( !v85 )
      goto LABEL_32;
    if ( *(_DWORD *)(v85 + 60) != (int)v16[15] >> 1 || *(_DWORD *)(v85 + 56) < v16[14] )
      goto LABEL_129;
    v23 = *(struct PALETTE **)(v85 + 128);
    v93 = v23;
    if ( !v23 )
    {
      v24 = (struct PALETTE **)*((_QWORD *)v88 + 3);
      if ( v24 != (struct PALETTE **)v88 )
      {
        v23 = v24[222];
        v93 = v23;
      }
    }
    if ( !(unsigned int)bIsCompatible(&v93, v23, v85, v88, 1) )
      goto LABEL_129;
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         (Gre::Base *)&v97,
                         0LL,
                         0,
                         (__int64)v93,
                         *((_QWORD *)v88 + 222),
                         v18,
                         v18,
                         0,
                         0xFFFFFF,
                         0,
                         0) )
    {
      v19 = v85;
      pxlo = v97;
      v94 = v85;
    }
    else
    {
LABEL_32:
      v19 = 0LL;
    }
  }
  if ( *((_DWORD *)a2 + 11) )
  {
    if ( (*(_DWORD *)a2 & 0x400) != 0 )
    {
      if ( v78 )
        goto LABEL_45;
    }
    else if ( !v78 )
    {
      goto LABEL_45;
    }
  }
  if ( v19 )
    v25 = (struct _SURFOBJ *)(v19 + 24);
  else
    v25 = 0LL;
  vProcessCursorShape(
    (Gre::Base *)(v16 + 6),
    v78,
    v81,
    (struct _SURFOBJ *)((unsigned __int64)(v16 + 6) & -(__int64)(v16 != 0LL)),
    v25,
    v93,
    (struct _RECTL *)a2 + 2,
    (HBITMAP *)a2 + 3);
  v26 = *(_DWORD *)a2;
  if ( v78 )
    v27 = v26 | 0x400;
  else
    v27 = v26 & 0xFFFFFBFF;
  *(_DWORD *)a2 = v27;
LABEL_45:
  v28 = *((_DWORD *)a2 + 8);
  v29 = *((_DWORD *)a2 + 10);
  if ( v28 > v29 || (v30 = *((_DWORD *)a2 + 9), v30 > *((_DWORD *)a2 + 11)) )
  {
LABEL_129:
    EPALOBJ::~EPALOBJ((EPALOBJ *)y);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v85);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v97);
    goto LABEL_130;
  }
  v100.bottom = *((_DWORD *)a2 + 11);
  v31 = *((_QWORD *)a2 + 3);
  v100.left = v28;
  v100.top = v30;
  v100.right = v29;
  if ( v31 && *((_DWORD *)v88 + 519) > 3u && (LOBYTE(v19) = 5, v32 = HmgShareLockCheck(v31, v19), (v21 = v32) != 0) )
  {
    v33 = *((_DWORD *)a2 + 9);
    v34 = *((_DWORD *)a2 + 10);
    v35 = *((_DWORD *)a2 + 11);
    v96 = v32;
    v36 = *((_DWORD *)a2 + 8);
    prcl.left = v36;
    prcl.top = v33;
    prcl.right = v34;
    prcl.bottom = v35;
    if ( v78 )
    {
      prcl.left = v36 + 1;
      prcl.top = v33 + 1;
      prcl.right = v34 + 8;
      prcl.bottom = v35 + 6;
    }
    v37 = *(_DWORD *)(v21 + 56);
    v38 = (RECTL *)&v85;
    v85 = 0LL;
    p_prcl = &prcl;
    v86 = v37;
    v87 = *(_DWORD *)(v21 + 60);
  }
  else
  {
    v40 = v16[14];
    if ( v20 && v40 >= *(_DWORD *)(v20 + 56) )
      v40 = *(_DWORD *)(v20 + 56);
    *(_QWORD *)&prcl.left = 0LL;
    v38 = &prcl;
    v41 = (int)v16[15] >> 1;
    prcl.right = v40;
    p_prcl = &v100;
    prcl.bottom = v41;
  }
  ERECTL::operator*=(&p_prcl->left, &v38->left);
  v101 = 0LL;
  v42 = v78 != 0 ? 3 : 0;
  v43 = (*(_DWORD *)v8 & 0x400) == 0;
  v89 = v42;
  if ( !v43 )
    goto LABEL_124;
  v44 = v88;
  v45 = 0;
  v46 = *((__int16 *)a2 + 3);
  v47 = *((_DWORD *)v88 + 16);
  v48 = *((_DWORD *)v88 + 17);
  v49 = v91 & 0xC | 1;
  *((_DWORD *)v88 + 18) = *((__int16 *)a2 + 2);
  v50 = 0;
  v80 = 0;
  *((_DWORD *)v44 + 19) = v46;
  x = v47;
  y[0] = v48;
  v79 = v49;
  v92[0] = 0;
  if ( v84 && a5 )
  {
    v51 = -1;
    if ( a5 < 0xFF )
      v51 = a5;
    v52 = v51;
    v53 = 16;
    v54 = 16 * v52;
    if ( v84 < 0x10 )
      v53 = v84;
    v55 = v53 & 0xF | v54;
    v50 = 1;
    v49 |= v55 << 8;
    v92[0] = 1;
    v79 = v49;
  }
  if ( !(_DWORD)v83 )
  {
    v56 = (__int64 (__fastcall *)(SURFOBJ *, unsigned __int64, __int64, XLATEOBJ *, int, int, LONG, LONG, RECTL *, unsigned int))*((_QWORD *)v44 + 362);
    if ( !v56 )
    {
      if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
      {
        v57 = "NoDriverEntryPoint";
LABEL_70:
        v85 = (__int64)v57;
        v58 = "Software";
LABEL_103:
        v83 = (__int64)v58;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
          (int)&dword_1C035C080,
          (int)&dword_1C031ED00,
          (__int64)&v83,
          (__int64)&v85);
        goto LABEL_104;
      }
      goto LABEL_104;
    }
    if ( v50 && (*((_DWORD *)v44 + 524) & 0x200) == 0 )
    {
      if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
      {
        v57 = "MouseTrails";
        goto LABEL_70;
      }
LABEL_104:
      if ( !v17 )
      {
        v69 = v80;
        if ( (*(_DWORD *)v8 & 4) != 0 )
          EngSetPointerShape(
            (SURFOBJ *)((*((_QWORD *)v88 + 316) + 24LL) & -(__int64)(*((_QWORD *)v88 + 316) != 0LL)),
            0LL,
            0LL,
            0LL,
            0,
            0,
            0,
            0,
            0LL,
            0);
        goto LABEL_119;
      }
      goto LABEL_110;
    }
    if ( v96 )
    {
      if ( (*((_DWORD *)v44 + 524) & 0x20) == 0 )
      {
LABEL_97:
        if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
        {
          v57 = "IncompatibleFormat";
          goto LABEL_70;
        }
        goto LABEL_104;
      }
      v59 = v42 + *((__int16 *)a2 + 3);
      v60 = v42 + *((__int16 *)a2 + 2);
      v101 = prcl;
      v61 = v56(pso, 0LL, v96 + 24, 0LL, v60, v59, v47, v48, &v101, v79 | 0x10u);
      if ( v61 == 3 )
      {
        v62 = 1;
      }
      else
      {
        v45 = (v61 >> 1) & 1;
        v62 = (v61 & 2) == 0;
        if ( (v61 & 4) != 0 )
        {
          v80 = 1;
          v17 = (v61 & 2) == 0;
          goto LABEL_96;
        }
      }
      v17 = v62;
      goto LABEL_95;
    }
    v63 = v94;
    v64 = *((__int16 *)a2 + 3);
    v65 = *((__int16 *)a2 + 2);
    v101 = v100;
    if ( v94 )
      v63 = v94 + 24;
    v66 = pso;
    v67 = v56(pso, (unsigned __int64)(v16 + 6) & -(__int64)(v16 != 0LL), v63, pxlo, v65, v64, x, y[0], &v101, v79);
    if ( v67 == 3 )
    {
      v68 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)v88 + 363);
      if ( v68 )
        v68(v66, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
      LOBYTE(v67) = 1;
    }
    else if ( (v67 & 2) != 0 )
    {
      v45 = 1;
      goto LABEL_90;
    }
    v45 = 0;
LABEL_90:
    if ( (v67 & 4) != 0 )
    {
      v80 = 1;
      v17 = v45 ^ 1;
      goto LABEL_96;
    }
    v17 = v45 ^ 1;
LABEL_95:
    v80 = 0;
LABEL_96:
    if ( !v17 )
    {
      if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
      {
        v85 = (__int64)&unk_1C03206E9;
        v58 = "Hardware";
        goto LABEL_103;
      }
      goto LABEL_104;
    }
    goto LABEL_97;
  }
  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( !tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
    {
LABEL_111:
      v42 = v89;
      goto LABEL_112;
    }
    v85 = (__int64)"RequestedByInputStack";
    v83 = (__int64)"Software";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
      (int)&dword_1C035C080,
      (int)&dword_1C031ED00,
      (__int64)&v83,
      (__int64)&v85);
LABEL_110:
    v49 = v79;
    goto LABEL_111;
  }
LABEL_112:
  yHot = *((__int16 *)a2 + 3);
  fl = v91 & 0x40 | v49;
  xHot = *((__int16 *)a2 + 2);
  if ( v96 )
  {
    EngSetPointerShape(pso, 0LL, (SURFOBJ *)(v96 + 24), 0LL, v42 + xHot, v42 + yHot, x, y[0], &prcl, fl | 0x10);
  }
  else
  {
    if ( v94 )
      v73 = (SURFOBJ *)(v94 + 24);
    else
      v73 = 0LL;
    EngSetPointerShape(
      pso,
      (SURFOBJ *)((unsigned __int64)(v16 + 6) & -(__int64)(v16 != 0LL)),
      v73,
      pxlo,
      xHot,
      yHot,
      x,
      y[0],
      &v100,
      fl);
  }
  v69 = v80;
LABEL_119:
  if ( !v45 && (*(_DWORD *)v8 & 2) != 0 )
  {
    v74 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)v88 + 363);
    if ( v74 )
      v74(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  SETFLAG(v17, (volatile unsigned int *)v8, 4);
  SETFLAG(v45, v75, 2);
  SETFLAG(v92[0], v76, 0x100000);
  SETFLAG(v69, v77, 0x200000);
LABEL_124:
  if ( v21 )
    DEC_SHARE_REF_CNT(v21);
  if ( v20 )
    DEC_SHARE_REF_CNT(v20);
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v97);
  DEC_SHARE_REF_CNT(v16);
}
