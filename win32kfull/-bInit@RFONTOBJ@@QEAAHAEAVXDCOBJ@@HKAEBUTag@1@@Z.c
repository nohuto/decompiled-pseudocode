__int64 __fastcall RFONTOBJ::bInit(
        Gre::Base **this,
        struct XDCOBJ *a2,
        int a3,
        unsigned int a4,
        const struct RFONTOBJ::Tag *a5)
{
  unsigned int v5; // r12d
  char v9; // si
  __int64 v10; // rbx
  struct _KEVENT *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // edi
  int v17; // eax
  Gre::Base *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // r8
  int v26; // esi
  __int64 v27; // rcx
  BOOL v28; // r9d
  Gre::Base *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r13
  int v33; // edi
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  Gre::Base *v39; // rax
  unsigned int v40; // ecx
  struct RFONT **v41; // rdi
  int v42; // r12d
  __int64 v43; // rcx
  int InactiveHelper; // r13d
  struct RFONT *v45; // rax
  __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rax
  Gre::Base *v49; // rcx
  struct Gre::Base::SESSION_GLOBALS *v50; // rsi
  struct RFONT *v51; // rdi
  int v52; // r13d
  struct PFE *v53; // rax
  struct PFE *v54; // r12
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // esi
  struct tagLOGFONTW *v59; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // r8d
  Gre::Base *eYY_low; // rcx
  __int64 v63; // rsi
  Gre::Base *v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // r13d
  int v69; // ecx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rdx
  int v73; // ecx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r11
  Gre::Base *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // r10
  _QWORD *v82; // r8
  __int64 v83; // rax
  Gre::Base *v84; // rdx
  Gre::Base **v85; // r8
  _QWORD *v86; // rcx
  int v87; // edi
  Gre::Base *v88; // rcx
  const void *v89; // r12
  Gre::Base *v90; // rax
  __int64 v91; // rbx
  size_t v92; // rsi
  unsigned int v93; // eax
  struct tagLOGFONTW *v94; // rax
  struct tagLOGFONTW *v95; // rdi
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rcx
  __int64 v100; // rbx
  struct _W32THREAD *ThreadWin32Thread; // rax
  _BOOL8 v102; // r8
  unsigned int v103; // eax
  struct Gre::Base::SESSION_GLOBALS *v104; // rdi
  __int64 v105; // rcx
  __int64 *v106; // rbx
  int v107; // eax
  _QWORD *v108; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v110; // rcx
  int v111; // eax
  _QWORD *v112; // rsi
  _QWORD *v113; // rax
  int v114; // esi
  __int64 v115; // rdx
  int v116; // esi
  int v117; // esi
  __int64 v118; // rcx
  __int64 v119; // r13
  unsigned int v120; // eax
  __int64 v121; // rsi
  __int64 v122; // rdx
  __int64 v123; // rsi
  unsigned int v124; // r13d
  bool v125; // al
  unsigned int v126; // edi
  struct PFE *Timeout; // [rsp+20h] [rbp-E0h]
  unsigned int v128; // [rsp+28h] [rbp-D8h]
  char v129; // [rsp+60h] [rbp-A0h]
  bool v130; // [rsp+61h] [rbp-9Fh]
  unsigned int v131; // [rsp+64h] [rbp-9Ch]
  unsigned int v132; // [rsp+64h] [rbp-9Ch]
  __int64 v133; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v134; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v135; // [rsp+74h] [rbp-8Ch]
  int v136; // [rsp+78h] [rbp-88h]
  int v137; // [rsp+7Ch] [rbp-84h]
  struct RFONT *v138; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v139; // [rsp+88h] [rbp-78h] BYREF
  __int64 v140; // [rsp+90h] [rbp-70h] BYREF
  __int64 v141; // [rsp+98h] [rbp-68h]
  struct RFONT *v142; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v143; // [rsp+A8h] [rbp-58h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v144; // [rsp+B0h] [rbp-50h]
  __int64 v145; // [rsp+B8h] [rbp-48h] BYREF
  int v146; // [rsp+C0h] [rbp-40h]
  int v147; // [rsp+C4h] [rbp-3Ch]
  __int64 v148; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v149[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v150; // [rsp+E0h] [rbp-20h]
  __int64 v151; // [rsp+E8h] [rbp-18h] BYREF
  int v152; // [rsp+F0h] [rbp-10h]
  int v153; // [rsp+F4h] [rbp-Ch]
  _QWORD v154[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v155; // [rsp+108h] [rbp+8h] BYREF
  __int64 v156; // [rsp+118h] [rbp+18h] BYREF
  __int64 v157; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v158; // [rsp+138h] [rbp+38h]
  struct _FD_XFORM v159; // [rsp+140h] [rbp+40h] BYREF
  struct RFONT *v160[14]; // [rsp+150h] [rbp+50h] BYREF

  v5 = a4;
  v135 = a4;
  v137 = a3;
  v9 = 0;
  v10 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  v11 = *(struct _KEVENT **)(v10 + 23552);
  if ( !v11 || !*(_QWORD *)(v10 + 23568) )
  {
    v13 = -1073741595;
LABEL_7:
    if ( v13 >= 0 )
      goto LABEL_8;
    return 0LL;
  }
  if ( KeReadStateEvent(v11) )
  {
    v12 = *(_QWORD *)(SGDGetSessionState(v12) + 32);
    if ( *(_BYTE *)(v12 + 23560) )
    {
      if ( KeReadStateEvent(*(PRKEVENT *)(v10 + 23568)) )
      {
        v13 = 0;
        goto LABEL_7;
      }
    }
  }
  v91 = *(_QWORD *)(SGDGetSessionState(v12) + 32);
  if ( KeReadStateEvent(*(PRKEVENT *)(v91 + 23568)) )
    v9 = 1;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
  {
LABEL_8:
    *this = *(Gre::Base **)(*(_QWORD *)a2 + 1760LL);
    v14 = *(int *)a5;
    if ( (_DWORD)v14 && *((_DWORD *)a5 + 1) > 1u )
    {
      v100 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v102 = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread) != 0LL;
      if ( v100 )
        v103 = *(_DWORD *)(v100 + 40);
      else
        v103 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(4LL, v103, v102);
    }
    if ( *this )
    {
      v15 = *((_QWORD *)*this + 63);
      v16 = 0;
      if ( v15 )
      {
        GreAcquireSemaphore(v15);
        v17 = *((_DWORD *)*this + 21);
        if ( (v17 & 8) != 0 )
        {
          v16 = 1;
          *((_DWORD *)*this + 21) = v17 & 0xFFFFFFF7;
        }
        EtwTraceGreLockReleaseSemaphore(L"hsem");
        GreReleaseSemaphoreInternal(v15);
        if ( v16 == 1 )
        {
          v104 = Gre::Base::Globals(v18);
          GreAcquireSemaphore(*((_QWORD *)v104 + 1));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v104 + 1), 16LL);
          v106 = (__int64 *)*((_QWORD *)v104 + 760);
          if ( v106 )
          {
            while ( 1 )
            {
              v107 = *((_DWORD *)v106 + 10);
              if ( (v107 & 0x2000) == 0 )
              {
                if ( (v107 & 0x8000) == 0 )
                  break;
                v108 = *(_QWORD **)(v106[220] + 48);
                CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v105);
                if ( CurrentProcessWin32Process )
                {
                  v105 = 0LL;
                  if ( !*CurrentProcessWin32Process )
                    CurrentProcessWin32Process = 0LL;
                }
                if ( v108 == CurrentProcessWin32Process )
                  break;
              }
              v106 = (__int64 *)*v106;
              if ( !v106 )
              {
                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
                GreReleaseSemaphoreInternal(*((_QWORD *)v104 + 1));
                goto LABEL_15;
              }
            }
            PDEV::IncrementClientReferenceCount((PDEV *)v106);
          }
          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
          GreReleaseSemaphoreInternal(*((_QWORD *)v104 + 1));
          while ( v106 )
          {
            v138 = (struct RFONT *)v106;
            vRemoveAllInactiveRFONTs(v106);
            GreAcquireSemaphore(*((_QWORD *)v104 + 1));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v104 + 1), 16LL);
            v106 = (__int64 *)*v106;
            if ( v106 )
            {
              while ( 1 )
              {
                v111 = *((_DWORD *)v106 + 10);
                if ( (v111 & 0x2000) == 0 )
                {
                  if ( (v111 & 0x8000) == 0 )
                    break;
                  v112 = *(_QWORD **)(v106[220] + 48);
                  v113 = (_QWORD *)PsGetCurrentProcessWin32Process(v110);
                  if ( v113 )
                  {
                    v110 = 0LL;
                    if ( !*v113 )
                      v113 = 0LL;
                  }
                  if ( v112 == v113 )
                    break;
                }
                v106 = (__int64 *)*v106;
                if ( !v106 )
                  goto LABEL_223;
              }
              PDEV::IncrementClientReferenceCount((PDEV *)v106);
            }
LABEL_223:
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
            GreReleaseSemaphoreInternal(*((_QWORD *)v104 + 1));
            PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v138);
          }
        }
      }
    }
LABEL_15:
    v19 = *(_QWORD *)a2;
    LOBYTE(v14) = 10;
    v133 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 976) + 296LL);
    v21 = HmgShareLock(v20, v14);
    v138 = (struct RFONT *)v21;
    v23 = v21;
    if ( v21 )
    {
      if ( (*(_DWORD *)(v21 + 28) & 1) == 0 )
        goto LABEL_17;
      UserGetHDEV(v22);
      v114 = *(_DWORD *)(v23 + 24);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
      v23 = 0LL;
      if ( v133 )
      {
        v116 = v114 - 4;
        if ( v116 )
        {
          v117 = v116 - 1;
          if ( v117 )
          {
            if ( v117 == 1 )
              v20 = *(_QWORD *)(v133 + 1440);
          }
          else
          {
            v20 = *(_QWORD *)(v133 + 1432);
          }
        }
        else
        {
          v20 = *(_QWORD *)(v133 + 1424);
        }
        LOBYTE(v115) = 10;
        v23 = HmgShareLock(v20, v115);
        v138 = (struct RFONT *)v23;
LABEL_17:
        if ( v23 )
        {
          v24 = lNormAngle((unsigned int)-*(_DWORD *)(v23 + 284));
          v25 = *(_QWORD *)a2;
          v26 = v24;
          v146 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
          v147 = *(_DWORD *)(*(_QWORD *)(v25 + 976) + 108LL) & 1;
          if ( (*(_DWORD *)(*(_QWORD *)(v25 + 976) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v145, a2, 0x204u, 0);
            v27 = v145;
          }
          else
          {
            v27 = v25 + 320;
            v145 = v25 + 320;
          }
          v28 = !v26 && (*(_DWORD *)(v27 + 32) & 1) != 0 && *(float *)(v27 + 12) >= 0.0 && *(float *)v27 >= 0.0;
          v29 = *this;
          v136 = v28;
          if ( !v29
            || (v30 = *(_QWORD *)a2,
                v31 = *(_QWORD *)(*(_QWORD *)a2 + 976LL),
                *(_QWORD *)(v31 + 296) != *(_QWORD *)(*(_QWORD *)a2 + 1744LL))
            || !v28 && *((_DWORD *)v29 + 160) )
          {
            *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL);
            goto LABEL_45;
          }
          if ( *((_DWORD *)v29 + 52) == *(_DWORD *)(v31 + 208)
            && a3 == *((_DWORD *)v29 + 164)
            && v5 == (*((_DWORD *)v29 + 21) & 6) )
          {
            if ( (*(_DWORD *)(v30 + 36) & 1) == 0 && *(_DWORD *)(v30 + 32) != 1 )
              goto LABEL_41;
            v32 = *(_QWORD *)(v30 + 1760);
            if ( (*(_DWORD *)(v32 + 12) & 0x200004) == 0 )
              goto LABEL_41;
            v33 = 0;
            v34 = *((unsigned int *)Gre::Base::Globals(v29) + 41);
            if ( (v34 & 2) != 0 )
            {
              v33 = 0x10000;
              if ( (v34 & 0x10) != 0 )
                v33 = 268500992;
            }
            v35 = *(_DWORD *)(v32 + 12);
            if ( (v35 & 4) != 0 )
            {
              v36 = v35 & 0x10010000;
              if ( v33 != v36 )
                goto LABEL_45;
            }
            else
            {
              if ( ((v35 ^ v33) & 0x10000) != 0 )
                goto LABEL_45;
              v36 = v35 & 0x10010000;
            }
            if ( !v36 || !(unsigned int)UserIsRemoteConnection(v34) )
            {
LABEL_41:
              v37 = *(_QWORD *)a2;
              if ( *(float *)(*(_QWORD *)a2 + 452LL) == 0.0 || EFLOAT::bIsZero((EFLOAT *)(v37 + 456)) )
              {
                if ( (*(_DWORD *)(v37 + 252) & 1) == 0 )
                {
LABEL_43:
                  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
                  return 1LL;
                }
                if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v145, (Gre::Base *)((char *)*this + 172)) )
                {
LABEL_152:
                  *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
                  goto LABEL_43;
                }
              }
            }
          }
LABEL_45:
          if ( (*(_DWORD *)(v133 + 40) & 0x40) == 0 )
            PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v133);
          memset_0(v160, 0, sizeof(v160));
          v39 = *this;
          if ( *this && *((_DWORD *)v39 + 165) )
          {
            v40 = *((_DWORD *)v39 + 210);
            if ( v40 > 0xA )
            {
              v118 = 8 * v40 + 32;
              if ( !(_DWORD)v118 )
                goto LABEL_57;
              v41 = (struct RFONT **)Win32AllocPoolZInit(v118, 1718382187LL);
              if ( !v41 )
                goto LABEL_57;
              v42 = 1;
            }
            else
            {
              v41 = v160;
              v42 = 0;
            }
            InactiveHelper = RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)this, v41);
            LODWORD(v141) = InactiveHelper;
            v45 = *v41;
            if ( *v41 )
            {
              v119 = 0LL;
              do
              {
                v142 = v45;
                RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v142, 0LL);
                v142 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v142);
                v45 = v41[++v119];
              }
              while ( v45 );
              InactiveHelper = v141;
            }
            if ( v42 )
              Win32FreePool(v41);
            if ( InactiveHelper )
            {
              v46 = *(_QWORD *)(SGDGetSessionState(v43) + 32);
              GreAcquireSemaphore(*(_QWORD *)(v46 + 13272));
              --*(_DWORD *)(v46 + 13300);
              EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
              GreReleaseSemaphoreInternal(*(_QWORD *)(v46 + 13272));
            }
            LOBYTE(v5) = v135;
          }
LABEL_57:
          v47 = 0;
          if ( *(_BYTE *)(v23 + 297) )
            v47 = 32;
          if ( *(_BYTE *)(v23 + 298) )
            v47 |= 0x80u;
          *(_DWORD *)(*(_QWORD *)a2 + 1752LL) = v47;
          v48 = *(_QWORD *)a2;
          v149[0] = 0LL;
          *(_DWORD *)(v48 + 1756) = v26;
          v159 = 0LL;
          v134 = 0;
          v139 = 0LL;
          v143 = 0;
          v49 = (Gre::Base *)*(unsigned int *)(v133 + 40);
          if ( ((unsigned __int8)v49 & 1) != 0 || (v129 = 1, (*(_DWORD *)(v23 + 28) & 2) == 0) )
            v129 = 0;
          v50 = Gre::Base::Globals(v49);
          v144 = v50;
          v51 = (struct RFONT *)*((_QWORD *)v50 + 6);
          v142 = v51;
          GreAcquireSemaphore(v51);
          v52 = v5 & 4;
          v53 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v138, a2, &v134, &v139, &v143, v52);
          v54 = v53;
          if ( !v53 )
            goto LABEL_255;
          v55 = *(_QWORD *)v53;
          v141 = v55;
          v155 = v55;
          v56 = *(_DWORD *)(v55 + 52);
          if ( (v56 & 0x2000) == 0 )
          {
            if ( (v56 & 0x1000) == 0 )
              goto LABEL_66;
            v120 = 0;
            v132 = 0;
            if ( !*(_DWORD *)(v55 + 36) )
            {
LABEL_252:
              *(_DWORD *)(v55 + 52) &= ~0x1000u;
LABEL_66:
              v57 = *(_QWORD *)a2;
              v58 = 0;
              v144 = (struct PFE *)((char *)v54 + 32);
              v154[0] = *((_QWORD *)v54 + 4);
              if ( v129 )
                v58 = 2;
              v152 = *(_DWORD *)(*(_QWORD *)(v57 + 976) + 208LL);
              v153 = *(_DWORD *)(*(_QWORD *)(v57 + 976) + 108LL) & 1;
              if ( (*(_DWORD *)(*(_QWORD *)(v57 + 976) + 340LL) & 0x1E000) != 0 )
                EXFORMOBJ::vInit((EXFORMOBJ *)&v151, a2, 0x204u, 0);
              else
                v151 = v57 + 320;
              v59 = (struct tagLOGFONTW *)(v23 + 276);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
                NtoD_Win31 = bGetNtoD_Win31(&v159, v59, (struct IFIOBJ *)v154, a2, v58, &v139, 0);
              else
                NtoD_Win31 = bGetNtoD(&v159, v59, (struct IFIOBJ *)v154, a2, &v139);
              if ( NtoD_Win31 )
              {
                eYX = v159.eYX;
                if ( LODWORD(v159.eYX) )
                {
                  LODWORD(eYX) = LODWORD(v159.eYX) ^ 0x80000000;
                  LODWORD(v159.eYX) ^= 0x80000000;
                }
                eYY_low = (Gre::Base *)LODWORD(v159.eYY);
                if ( LODWORD(v159.eYY) )
                {
                  eYY_low = (Gre::Base *)(LODWORD(v159.eYY) ^ 0x80000000);
                  LODWORD(v159.eYY) ^= 0x80000000;
                }
                if ( (*(_DWORD *)(v154[0] + 48LL) & 0x1000000) != 0 )
                {
                  LODWORD(v159.eXX) = (_DWORD)eYY_low;
                  v159.eXY = eYX;
                  if ( eYX != 0.0 )
                    LODWORD(v159.eXY) = LODWORD(eYX) ^ 0x80000000;
                }
                if ( (*(_DWORD *)(v154[0] + 48LL) & 1) != 0 && *(int *)(v23 + 276) <= 0 )
                  v134 |= 0x8000u;
                v149[0] = *(_QWORD *)v54;
                v63 = v149[0];
                Gre::Base::Globals(eYY_low);
                ++*(_DWORD *)(v63 + 68);
                v150 = 0;
                if ( v51 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem");
                  GreReleaseSemaphoreInternal(v51);
                }
                v64 = *(Gre::Base **)(*(_QWORD *)a2 + 976LL);
                LODWORD(v141) = *((_DWORD *)v64 + 52);
                v131 = v134;
                v65 = *((_QWORD *)Gre::Base::Globals(v64) + 3);
                v140 = v65;
                GreAcquireSemaphore(v65);
                v66 = v133;
                if ( (*(_DWORD *)(v133 + 40) & 0x800000) != 0 )
                  v67 = *(_QWORD *)(*(_QWORD *)(v133 + 3496) + 1512LL);
                else
                  v67 = *(_QWORD *)(v133 + 1512);
                v68 = v136;
                *this = (Gre::Base *)v67;
                if ( v67 )
                {
                  while ( 1 )
                  {
                    if ( *(struct PFE **)(v67 + 120) == v54 && v135 == (*(_DWORD *)(v67 + 84) & 6) )
                    {
                      v69 = *(_DWORD *)(v67 + 12);
                      if ( ((v131 ^ v69) & 0xE000) == 0 )
                      {
                        v70 = (v131 ^ v69) & 0x50010000;
                        if ( !v70 )
                          goto LABEL_283;
                        if ( (v131 & 0x10000) != 0 && (v69 & 0x20000) != 0 )
                          v70 = (v131 ^ v69) & 0x50000000;
                        if ( (v131 & 0x10000000) != 0 && (v69 & 0x10000000) == 0 && (v69 & 0x2000000) != 0 || !v70 )
                        {
LABEL_283:
                          if ( !*(_DWORD *)(v67 + 40) )
                          {
                            v71 = *(_QWORD *)&v159.eXX - *(_QWORD *)(v67 + 136);
                            if ( *(_QWORD *)&v159.eXX == *(_QWORD *)(v67 + 136) )
                              v71 = *(_QWORD *)&v159.eYX - *(_QWORD *)(v67 + 144);
                            if ( !v71 && v137 == *(_DWORD *)(v67 + 656) )
                            {
                              if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v145, (struct MATRIX *)(v67 + 172)) )
                              {
                                v90 = *this;
                                if ( *((_DWORD *)*this + 52) == (_DWORD)v141 && (v68 || !*((_DWORD *)v90 + 160)) )
                                  break;
                              }
                            }
                          }
                        }
                      }
                    }
                    v67 = *((_QWORD *)*this + 84);
                    *this = (Gre::Base *)v67;
                    if ( !v67 )
                    {
                      v66 = v133;
                      goto LABEL_96;
                    }
                  }
                  ++*((_DWORD *)v90 + 165);
                  v138 = PDEVOBJ::prfntActive((PDEVOBJ *)&v133);
                  if ( v138 != *this )
                  {
                    RFONTOBJ::vRemove(this, &v138, 1LL);
                    RFONTOBJ::vInsert(this, &v138, 1LL);
                    PDEVOBJ::prfntActive((PDEVOBJ *)&v133, v138);
                  }
                  goto LABEL_143;
                }
LABEL_96:
                if ( (*(_DWORD *)(v66 + 40) & 0x800000) != 0 )
                  v72 = *(_QWORD *)(*(_QWORD *)(v66 + 3496) + 1520LL);
                else
                  v72 = *(_QWORD *)(v66 + 1520);
                *this = (Gre::Base *)v72;
                if ( v72 )
                {
                  while ( 1 )
                  {
                    if ( *(struct PFE **)(v72 + 120) == v54 && v135 == (*(_DWORD *)(v72 + 84) & 6) )
                    {
                      v73 = *(_DWORD *)(v72 + 12);
                      if ( ((v73 ^ v131) & 0xE000) == 0 )
                      {
                        v74 = (v73 ^ v131) & 0x50010000;
                        if ( !v74 )
                          goto LABEL_284;
                        if ( (v131 & 0x10000) != 0 && (v73 & 0x20000) != 0 )
                          v74 = (v73 ^ v131) & 0x50000000;
                        if ( (v131 & 0x10000000) != 0 && (v73 & 0x10000000) == 0 && (v73 & 0x2000000) != 0 || !v74 )
                        {
LABEL_284:
                          if ( !*(_DWORD *)(v72 + 40) )
                          {
                            v75 = *(_QWORD *)&v159.eXX - *(_QWORD *)(v72 + 136);
                            if ( *(_QWORD *)&v159.eXX == *(_QWORD *)(v72 + 136) )
                              v75 = *(_QWORD *)&v159.eYX - *(_QWORD *)(v72 + 144);
                            if ( !v75
                              && v137 == *(_DWORD *)(v72 + 656)
                              && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v145, (struct MATRIX *)(v72 + 172))
                              && *((_DWORD *)*this + 52) == (_DWORD)v141
                              && (v68 || !*((_DWORD *)*this + 160)) )
                            {
                              break;
                            }
                          }
                        }
                      }
                    }
                    v72 = *((_QWORD *)*this + 84);
                    *this = (Gre::Base *)v72;
                    if ( !v72 )
                      goto LABEL_146;
                  }
                  v76 = v133;
                  if ( (*(_DWORD *)(v133 + 40) & 0x800000) != 0 )
                    v77 = *(_QWORD *)(*(_QWORD *)(v133 + 3496) + 1520LL);
                  else
                    v77 = *(_QWORD *)(v133 + 1520);
                  v78 = *this;
                  v79 = *((_QWORD *)*this + 83);
                  v80 = *((_QWORD *)*this + 84);
                  v81 = v79 + 664;
                  if ( !v79 )
                    v81 = 0LL;
                  v82 = (_QWORD *)(v80 + 664);
                  if ( !v80 )
                    v82 = 0LL;
                  if ( v79 )
                  {
                    *(_QWORD *)(v81 + 8) = v80;
                    if ( v82 )
                      *v82 = *((_QWORD *)v78 + 83);
                  }
                  else
                  {
                    v77 = *((_QWORD *)*this + 84);
                    if ( !v82 )
                    {
LABEL_128:
                      if ( (*(_DWORD *)(v76 + 40) & 0x800000) != 0 )
                        *(_QWORD *)(*(_QWORD *)(v76 + 3496) + 1520LL) = v77;
                      else
                        *(_QWORD *)(v76 + 1520) = v77;
                      if ( (*(_DWORD *)(v133 + 40) & 0x800000) != 0 )
                        --*(_DWORD *)(*(_QWORD *)(v133 + 3496) + 1528LL);
                      else
                        --*(_DWORD *)(v133 + 1528);
                      v83 = v133;
                      if ( (*(_DWORD *)(v133 + 40) & 0x800000) != 0 )
                        v84 = *(Gre::Base **)(*(_QWORD *)(v133 + 3496) + 1512LL);
                      else
                        v84 = *(Gre::Base **)(v133 + 1512);
                      v85 = (Gre::Base **)((char *)v84 + 664);
                      if ( !v84 )
                        v85 = 0LL;
                      v86 = (_QWORD *)((char *)*this + 664);
                      if ( *this != (Gre::Base *)-664LL )
                      {
                        *v86 = 0LL;
                        v86[1] = v84;
                        if ( v85 )
                          *v85 = *this;
                        v84 = *this;
                        v83 = v133;
                      }
                      if ( (*(_DWORD *)(v83 + 40) & 0x800000) != 0 )
                        *(_QWORD *)(*(_QWORD *)(v83 + 3496) + 1512LL) = v84;
                      else
                        *(_QWORD *)(v83 + 1512) = v84;
                      *((_DWORD *)*this + 165) = 1;
LABEL_143:
                      SEMOBJ::vUnlock((SEMOBJ *)&v140);
                      *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = *this;
                      *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
                      PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v149);
                      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
                      return 1LL;
                    }
                    *v82 = 0LL;
                  }
                  v76 = v133;
                  goto LABEL_128;
                }
LABEL_146:
                *this = 0LL;
                if ( v65 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem");
                  GreReleaseSemaphoreInternal(v65);
                }
                v87 = v136;
                if ( (unsigned int)RFONTOBJ::bRealizeFont(
                                     (RFONTOBJ *)this,
                                     a2,
                                     (struct PDEVOBJ *)&v133,
                                     (struct tagENUMLOGFONTEXDVW *)(v23 + 276),
                                     v54,
                                     &v159,
                                     &v139,
                                     v134,
                                     0,
                                     v137,
                                     v136,
                                     v135) )
                {
                  v89 = (const void *)(v23 + 276);
LABEL_150:
                  if ( *(_DWORD *)(v23 + 280) )
                  {
                    v140 = *((_QWORD *)Gre::Base::Globals(v88) + 6);
                    GreAcquireSemaphore(v140);
                    v92 = 420LL;
                    v156 = *(_QWORD *)v144;
                    v93 = *(_DWORD *)(v23 + 272);
                    if ( v93 < 0x1A4 )
                      v92 = v93;
                    v94 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v92);
                    v95 = v94;
                    if ( v94 )
                    {
                      memmove(v94, v89, v92);
                      v96 = 0LL;
                      if ( v129 )
                        v96 = 2LL;
                      v95->lfWidth = 0;
                      if ( !PFEOBJ::bSetFontXform(
                              (PFEOBJ *)v96,
                              a2,
                              v95,
                              (struct _FD_XFORM *)((char *)*this + 152),
                              v96,
                              v128,
                              &v139,
                              (struct IFIOBJ *)&v156,
                              0) )
                        *(struct _FD_XFORM *)((char *)*this + 152) = v159;
                      FreeTmpBuffer(v95, v97, v98);
                    }
                    else
                    {
                      *(struct _FD_XFORM *)((char *)*this + 152) = v159;
                    }
                    SEMOBJ::vUnlock((SEMOBJ *)&v140);
                  }
                  *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = *this;
                  goto LABEL_152;
                }
                v130 = 0;
                UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
                  (UmfdClientSideFileViewMapper *)&v157,
                  (struct PFFOBJ *)v149);
                v123 = v157;
                v124 = v158;
                if ( v158 == *(_DWORD *)(v157 + 36) )
                {
                  Timeout = v54;
                  v89 = (const void *)(v23 + 276);
                  v125 = (unsigned int)RFONTOBJ::bRealizeFont(
                                         (RFONTOBJ *)this,
                                         a2,
                                         (struct PDEVOBJ *)&v133,
                                         (struct tagENUMLOGFONTEXDVW *)(v23 + 276),
                                         Timeout,
                                         &v159,
                                         &v139,
                                         v134,
                                         0,
                                         v137,
                                         v87,
                                         v135) != 0;
                  v130 = v125;
                }
                else
                {
                  v125 = 0;
                  v89 = (const void *)(v23 + 276);
                }
                v88 = 0LL;
                v126 = 0;
                if ( v124 )
                {
                  do
                  {
                    if ( v126 >= *(_DWORD *)(v123 + 36) )
                      break;
                    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v123 + 200) + 8LL * v126++));
                  }
                  while ( v126 < v124 );
                  v125 = v130;
                  v88 = 0LL;
                }
                if ( v125 )
                  goto LABEL_150;
                *this = 0LL;
                *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
                goto LABEL_256;
              }
LABEL_255:
              *this = 0LL;
              *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
              SEMOBJ::vUnlock((SEMOBJ *)&v142);
LABEL_256:
              PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v149);
              DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
              return 0LL;
            }
            while ( 1 )
            {
              v140 = 0LL;
              v148 = 0LL;
              v121 = v120;
              Win32FileInfo(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 + 200) + 8LL * v120) + 80LL), &v148, &v140);
              v55 = v141;
              v122 = *(_QWORD *)(*(_QWORD *)(v141 + 200) + 8 * v121);
              if ( *(_QWORD *)v122 != v148 || *(_DWORD *)(v122 + 24) != (_DWORD)v140 )
                break;
              v120 = v132 + 1;
              v132 = v120;
              if ( v120 >= *(_DWORD *)(v141 + 36) )
                goto LABEL_252;
            }
            *(_DWORD *)(v141 + 52) |= 0x2000u;
            v50 = v144;
          }
          if ( !(unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v155) )
            goto LABEL_255;
          GreAcquireSemaphore(*((_QWORD *)v50 + 6));
          v54 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v138, a2, &v134, &v139, &v143, v52);
          if ( !v54 )
            goto LABEL_255;
          goto LABEL_66;
        }
      }
    }
    RFONTOBJ::vMakeInactive((RFONTOBJ *)this);
    *this = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
    if ( v23 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
    return 0LL;
  }
  if ( (v9 || !(unsigned int)UserIsUserCritSecIn())
    && KeWaitForSingleObject(*(PVOID *)(v91 + 23552), Executive, 0, 0, 0LL) >= 0
    && *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v99) + 32) + 23560LL) )
  {
    KeWaitForSingleObject(*(PVOID *)(v91 + 23568), Executive, 0, 0, 0LL);
    goto LABEL_8;
  }
  return 0LL;
}
