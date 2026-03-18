/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C01359C8
 * Callers:
 *     GreSetPointer @ 0x1C00FAA98 (GreSetPointer.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00B5658 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00F3FD0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FA390 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C0131CD0 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     EngSetPointerShape @ 0x1C0133970 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C0222EF4 (--$Write@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0264DD4 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

void __fastcall vSetPointer(__int64 *a1, struct _CURSINFO *a2, int a3, LONG a4, unsigned int a5)
{
  char v5; // di
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  int v9; // r15d
  int v10; // r14d
  int v11; // eax
  HDEV v12; // rdi
  int v13; // eax
  void (__fastcall *v14)(__int64, __int64, __int64, _QWORD); // rax
  signed __int32 v15; // ett
  signed __int32 v16; // ett
  signed __int32 v17; // ett
  int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct PALETTE *v26; // rdx
  HDEV v27; // rax
  int inited; // eax
  struct _SURFOBJ *v29; // r8
  int v30; // eax
  unsigned int v31; // eax
  LONG v32; // r9d
  LONG v33; // r10d
  signed int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  _DWORD *v38; // r14
  LONG v39; // eax
  LONG v40; // ecx
  LONG v41; // edx
  LONG v42; // r8d
  RECTL *v43; // rcx
  int v44; // eax
  int v45; // edx
  int v46; // r8d
  bool v47; // zf
  int v48; // ebx
  int v49; // ecx
  unsigned int v50; // r9d
  LONG v51; // r10d
  int v52; // r11d
  LONG v53; // edx
  int v54; // eax
  unsigned __int8 v55; // al
  int v56; // ecx
  char v57; // al
  int v58; // ecx
  int v59; // ecx
  __int64 (__fastcall *v60)(SURFOBJ *, unsigned __int64, __int64, Gre::Base *); // r10
  const char *v61; // rax
  const char *v62; // rax
  unsigned int v63; // ecx
  BOOL v64; // eax
  __int64 v65; // r8
  int v66; // eax
  void (__fastcall *v67)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  int v68; // r14d
  __int64 *v69; // r12
  SURFOBJ *v70; // r15
  void (__fastcall *v71)(SURFOBJ *, __int64, __int64, _QWORD); // rax
  volatile unsigned int *v72; // rdx
  volatile unsigned int *v73; // rdx
  volatile unsigned int *v74; // rdx
  int v75; // r11d
  LONG v76; // eax
  LONG v77; // ecx
  SURFOBJ *v78; // r8
  XLATEOBJ *v79; // r9
  SURFOBJ *v80; // rdx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  int v87; // [rsp+60h] [rbp-A0h]
  LONG v88; // [rsp+64h] [rbp-9Ch]
  LONG v89[2]; // [rsp+68h] [rbp-98h] BYREF
  LONG v90[2]; // [rsp+70h] [rbp-90h] BYREF
  LONG v91; // [rsp+78h] [rbp-88h]
  int v92; // [rsp+7Ch] [rbp-84h]
  int v93; // [rsp+80h] [rbp-80h]
  __int64 v94; // [rsp+88h] [rbp-78h]
  SURFOBJ *pso; // [rsp+90h] [rbp-70h]
  int v96; // [rsp+98h] [rbp-68h]
  int v97; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v98; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v99; // [rsp+A8h] [rbp-58h]
  Gre::Base *v100; // [rsp+B0h] [rbp-50h] BYREF
  int v101[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v102; // [rsp+C0h] [rbp-40h]
  int v103; // [rsp+C4h] [rbp-3Ch]
  __int64 v104; // [rsp+C8h] [rbp-38h]
  Gre::Base *v105; // [rsp+D0h] [rbp-30h]
  _BYTE v106[32]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v107; // [rsp+F8h] [rbp-8h]
  _BYTE v108[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v109; // [rsp+120h] [rbp+20h]
  _BYTE v110[32]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v111; // [rsp+148h] [rbp+48h]
  RECTL v112; // [rsp+150h] [rbp+50h] BYREF
  RECTL v113; // [rsp+160h] [rbp+60h] BYREF
  RECTL v114; // [rsp+170h] [rbp+70h]

  v90[0] = a4;
  v5 = a3;
  v96 = a3;
  v99 = a1;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  v9 = v5 & 0x10;
  v10 = 0;
  v11 = v5 & 0x20;
  v12 = (HDEV)(a1 + 5);
  v89[0] = v11;
  v13 = *((_DWORD *)a1 + 10);
  if ( (v13 & 0x400) != 0 )
    return;
  if ( !a2 )
  {
    if ( (v13 & 4) != 0 )
      EngSetPointerShape((SURFOBJ *)((a1[316] + 24) & -(__int64)(a1[316] != 0)), 0LL, 0LL, 0LL, 0, 0, 0, 0, 0LL, 0);
    if ( (*(_DWORD *)v12 & 2) != 0 )
    {
      v14 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))a1[363];
      if ( v14 )
        v14((a1[316] + 24) & -(__int64)(a1[316] != 0), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
    }
    _m_prefetchw(v12);
    do
      v15 = *(_DWORD *)v12;
    while ( v15 != _InterlockedCompareExchange(
                     (volatile signed __int32 *)v12,
                     *(_DWORD *)v12 & 0xFFFFFFFD,
                     *(_DWORD *)v12) );
    _m_prefetchw(v12);
    do
      v16 = *(_DWORD *)v12;
    while ( v16 != _InterlockedCompareExchange(
                     (volatile signed __int32 *)v12,
                     *(_DWORD *)v12 & 0xFFFFFFFB,
                     *(_DWORD *)v12) );
    _m_prefetchw(v12);
    do
      v17 = *(_DWORD *)v12;
    while ( v17 != _InterlockedCompareExchange(
                     (volatile signed __int32 *)v12,
                     *(_DWORD *)v12 & 0xFFEFFFFF,
                     *(_DWORD *)v12) );
    return;
  }
  SURFREF::SURFREF((SURFREF *)v106, *((HSURF *)a2 + 1));
  if ( !v107 || (v18 = 1, v107[24] != 1) || (v107[15] & 1) != 0 )
  {
LABEL_138:
    SURFREF::~SURFREF((SURFREF *)v106);
    return;
  }
  v19 = *((_QWORD *)v8 + 750);
  v94 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v100 = 0LL;
  SURFREF::SURFREF((SURFREF *)v108);
  SURFREF::SURFREF((SURFREF *)v110);
  v21 = a1[316];
  v98 = 0LL;
  pso = (SURFOBJ *)((v21 + 24) & -(__int64)(v21 != 0));
  if ( *((_QWORD *)a2 + 2) || *((_QWORD *)a2 + 6) )
  {
    v24 = *((_QWORD *)a2 + 6);
    LOBYTE(v20) = 5;
    if ( v24 )
    {
      v25 = HmgShareLockCheck(v24, v20);
      v10 = 1;
    }
    else
    {
      v25 = HmgShareLockCheck(*((_QWORD *)a2 + 2), v20);
    }
    v109 = v25;
    v22 = v25;
    if ( !v25 )
      goto LABEL_33;
    if ( *(_DWORD *)(v25 + 60) != (int)v107[15] >> 1 || *(_DWORD *)(v25 + 56) < v107[14] )
      goto LABEL_137;
    v26 = *(struct PALETTE **)(v25 + 128);
    v98 = v26;
    if ( !v26 )
    {
      v27 = (HDEV)a1[3];
      if ( v27 != (HDEV)a1 )
      {
        v26 = (struct PALETTE *)*((_QWORD *)v27 + 222);
        v98 = v26;
      }
    }
    if ( !(unsigned int)bIsCompatible(&v98, v26, v22, a1, 1) )
      goto LABEL_137;
    inited = EXLATEOBJ::bInitXlateObj((Gre::Base *)&v100, 0LL, 0, (__int64)v98, a1[222], v19, v19, 0, 0xFFFFFF, 0, 0);
    v22 = v109;
    if ( inited )
    {
      v23 = v109;
      v105 = v100;
      v94 = v109;
    }
    else
    {
LABEL_33:
      v23 = v94;
    }
  }
  else
  {
    v22 = v109;
    v23 = 0LL;
  }
  if ( *((_DWORD *)a2 + 11) )
  {
    if ( (*(_DWORD *)a2 & 0x400) != 0 )
    {
      if ( v9 )
        goto LABEL_46;
    }
    else if ( !v9 )
    {
      goto LABEL_46;
    }
  }
  if ( v23 )
    v29 = (struct _SURFOBJ *)(v23 + 24);
  else
    v29 = 0LL;
  vProcessCursorShape(
    (Gre::Base *)(v107 + 6),
    v9,
    v10,
    (struct _SURFOBJ *)((unsigned __int64)(v107 + 6) & -(__int64)(v107 != 0LL)),
    v29,
    v98,
    (struct _RECTL *)a2 + 2,
    (HBITMAP *)a2 + 3);
  v30 = *(_DWORD *)a2;
  v22 = v109;
  if ( v9 )
    v31 = v30 | 0x400;
  else
    v31 = v30 & 0xFFFFFBFF;
  *(_DWORD *)a2 = v31;
LABEL_46:
  v32 = *((_DWORD *)a2 + 8);
  v33 = *((_DWORD *)a2 + 10);
  if ( v32 > v33 || (v34 = *((_DWORD *)a2 + 11), *((_DWORD *)a2 + 9) > v34) )
  {
LABEL_137:
    SURFREF::~SURFREF((SURFREF *)v110);
    SURFREF::~SURFREF((SURFREF *)v108);
    EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v100);
    goto LABEL_138;
  }
  v113.top = *((_DWORD *)a2 + 9);
  v35 = *((_QWORD *)a2 + 3);
  v113.left = v32;
  *(_QWORD *)&v113.right = __PAIR64__(v34, v33);
  if ( v35 && *((_DWORD *)a1 + 519) > 3u )
  {
    LOBYTE(v23) = 5;
    v36 = HmgShareLockCheck(v35, v23);
    v22 = v109;
    v37 = v36;
    v111 = v36;
  }
  else
  {
    v37 = v111;
  }
  v38 = v107;
  if ( v37 )
  {
    v39 = *((_DWORD *)a2 + 8);
    v40 = *((_DWORD *)a2 + 9);
    v41 = *((_DWORD *)a2 + 10);
    v42 = *((_DWORD *)a2 + 11);
    v112.left = v39;
    v112.top = v40;
    v112.right = v41;
    v112.bottom = v42;
    v104 = v37;
    if ( v9 )
    {
      v112.left = v39 + 1;
      v112.top = v40 + 1;
      v112.right = v41 + 8;
      v112.bottom = v42 + 6;
    }
    v43 = &v112;
    v102 = *(_DWORD *)(v37 + 56);
    v44 = *(_DWORD *)(v37 + 60);
  }
  else
  {
    v45 = v107[14];
    if ( v22 && v45 >= *(_DWORD *)(v22 + 56) )
      v45 = *(_DWORD *)(v22 + 56);
    v43 = &v113;
    v44 = (int)v107[15] >> 1;
    v102 = v45;
  }
  v101[0] = 0;
  v101[1] = 0;
  v103 = v44;
  ERECTL::operator*=(&v43->left, v101);
  v114 = 0LL;
  v46 = v9 != 0 ? 3 : 0;
  v47 = (*(_DWORD *)v12 & 0x400) == 0;
  v93 = v46;
  if ( !v47 )
    goto LABEL_118;
  v48 = 0;
  v49 = *((__int16 *)a2 + 3);
  v50 = v90[0];
  v51 = *((_DWORD *)a1 + 16);
  v52 = v96 & 0xC | 1;
  v53 = *((_DWORD *)a1 + 17);
  *((_DWORD *)a1 + 18) = *((__int16 *)a2 + 2);
  v54 = 0;
  v87 = 0;
  *((_DWORD *)a1 + 19) = v49;
  v91 = v51;
  v88 = v53;
  v92 = v52;
  v97 = 0;
  if ( v50 && a5 )
  {
    v55 = -1;
    if ( a5 < 0xFF )
      v55 = a5;
    v56 = v55;
    v57 = 16;
    v58 = 16 * v56;
    if ( v50 < 0x10 )
      v57 = v50;
    v59 = v57 & 0xF | v58;
    v54 = 1;
    v52 |= v59 << 8;
    v97 = 1;
    v92 = v52;
  }
  if ( !v89[0] )
  {
    v60 = (__int64 (__fastcall *)(SURFOBJ *, unsigned __int64, __int64, Gre::Base *))a1[362];
    if ( !v60 )
    {
      if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
      {
        v61 = "NoDriverEntryPoint";
LABEL_73:
        *(_QWORD *)v89 = v61;
        v62 = "Software";
        goto LABEL_107;
      }
      goto LABEL_109;
    }
    if ( v54 && (a1[262] & 0x200) == 0 )
    {
      if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
      {
        v61 = "MouseTrails";
        goto LABEL_73;
      }
LABEL_109:
      if ( !v18 )
      {
        v68 = v87;
        v69 = v99;
        if ( (*(_DWORD *)v12 & 4) != 0 )
          EngSetPointerShape(
            (SURFOBJ *)((v99[316] + 24) & -(__int64)(v99[316] != 0)),
            0LL,
            0LL,
            0LL,
            0,
            0,
            0,
            0,
            0LL,
            0);
        v70 = pso;
        goto LABEL_113;
      }
      goto LABEL_128;
    }
    if ( v104 )
    {
      if ( (a1[262] & 0x20) == 0 )
        goto LABEL_101;
      v114 = v112;
      v63 = v60(pso, 0LL, v104 + 24, 0LL);
      if ( v63 == 3 )
      {
        v64 = 1;
LABEL_83:
        v18 = v64;
LABEL_98:
        v87 = 0;
        goto LABEL_99;
      }
      v48 = (v63 >> 1) & 1;
      v64 = (v63 & 2) == 0;
      if ( (v63 & 4) == 0 )
        goto LABEL_83;
      v87 = 1;
      v18 = (v63 & 2) == 0;
LABEL_99:
      if ( !v18 )
      {
        if ( (unsigned int)dword_1C0359080 <= 4 || !tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
          goto LABEL_108;
        *(_QWORD *)v89 = &unk_1C031F02C;
        v62 = "Hardware";
LABEL_107:
        *(_QWORD *)v90 = v62;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
          (int)&dword_1C0359080,
          (int)&dword_1C031D480,
          (__int64)v90,
          (__int64)v89);
LABEL_108:
        v38 = v107;
        goto LABEL_109;
      }
      v38 = v107;
LABEL_101:
      if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
      {
        v61 = "IncompatibleFormat";
        goto LABEL_73;
      }
      goto LABEL_109;
    }
    v65 = v94;
    v114 = v113;
    if ( v94 )
      v65 = v94 + 24;
    v66 = v60(pso, (unsigned __int64)(v38 + 6) & -(__int64)(v38 != 0LL), v65, v105);
    if ( v66 == 3 )
    {
      v67 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))a1[363];
      if ( v67 )
        v67(pso, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
      LOBYTE(v66) = 1;
    }
    else if ( (v66 & 2) != 0 )
    {
      v48 = 1;
      goto LABEL_93;
    }
    v48 = 0;
LABEL_93:
    if ( (v66 & 4) == 0 )
    {
      v18 = v48 ^ 1;
      goto LABEL_98;
    }
    v87 = 1;
    v18 = v48 ^ 1;
    goto LABEL_99;
  }
  if ( (unsigned int)dword_1C0359080 > 4 )
  {
    if ( !tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
    {
LABEL_129:
      v46 = v93;
      v53 = v88;
      goto LABEL_130;
    }
    *(_QWORD *)v89 = "RequestedByInputStack";
    *(_QWORD *)v90 = "Software";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
      (int)&dword_1C0359080,
      (int)&dword_1C031D480,
      (__int64)v90,
      (__int64)v89);
    v38 = v107;
LABEL_128:
    v51 = v91;
    v52 = v92;
    goto LABEL_129;
  }
LABEL_130:
  v75 = v96 & 0x40 | v52;
  if ( v104 )
  {
    v76 = *((__int16 *)a2 + 3) + v46;
    fl = v75 | 0x10;
    v77 = *((__int16 *)a2 + 2) + v46;
    prcl = &v112;
    v78 = (SURFOBJ *)(v104 + 24);
    y = v53;
    v79 = 0LL;
    x = v51;
    v80 = 0LL;
    yHot = v76;
    xHot = v77;
  }
  else
  {
    if ( v94 )
      v78 = (SURFOBJ *)(v94 + 24);
    else
      v78 = 0LL;
    fl = v75;
    v80 = (SURFOBJ *)((unsigned __int64)(v38 + 6) & -(__int64)(v38 != 0LL));
    prcl = &v113;
    y = v88;
    x = v51;
    yHot = *((__int16 *)a2 + 3);
    xHot = *((__int16 *)a2 + 2);
    v79 = (XLATEOBJ *)v105;
  }
  v70 = pso;
  EngSetPointerShape(pso, v80, v78, v79, xHot, yHot, x, y, prcl, fl);
  v68 = v87;
  v69 = v99;
LABEL_113:
  if ( !v48 && (*(_DWORD *)v12 & 2) != 0 )
  {
    v71 = (void (__fastcall *)(SURFOBJ *, __int64, __int64, _QWORD))v69[363];
    if ( v71 )
      v71(v70, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
  }
  SETFLAG(v18, (volatile unsigned int *)v12, 4);
  SETFLAG(v48, v72, 2);
  SETFLAG(v97, v73, 0x100000);
  SETFLAG(v68, v74, 0x200000);
  v37 = v111;
LABEL_118:
  if ( v37 )
    DEC_SHARE_REF_CNT(v37);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v110);
  if ( v109 )
    DEC_SHARE_REF_CNT(v109);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v108);
  EXLATEOBJ::vAltUnlock(&v100);
  if ( v107 )
    DEC_SHARE_REF_CNT(v107);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v106);
}
