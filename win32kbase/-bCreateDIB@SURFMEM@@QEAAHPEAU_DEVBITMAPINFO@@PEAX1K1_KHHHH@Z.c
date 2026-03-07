__int64 __fastcall SURFMEM::bCreateDIB(
        unsigned __int64 this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v12; // rdx
  PVOID *v14; // rdi
  int v15; // r9d
  unsigned int v16; // r11d
  __int64 v17; // r8
  char v18; // r12
  int v19; // r14d
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // eax
  NSInstrumentation::CLeakTrackingAllocator *v24; // rbx
  unsigned __int64 v25; // rsi
  int v26; // eax
  __int64 Pool2; // rsi
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v31; // rcx
  __int64 v32; // r12
  __int64 *v33; // r13
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ebx
  __int64 v40; // r14
  __int64 v41; // r14
  unsigned int v42; // edx
  __int64 v43; // r14
  unsigned __int16 *v44; // rsi
  _QWORD *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edx
  char v48; // al
  __int64 v49; // rax
  unsigned int v50; // ebx
  __int64 v51; // r14
  __int64 v52; // rdx
  unsigned int v53; // r9d
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r12
  __int64 v57; // rax
  unsigned int v58; // ebx
  __int64 v59; // r14
  __int64 v60; // rdx
  unsigned int v61; // r9d
  __int64 v62; // r8
  _DWORD *v63; // rax
  unsigned int v64; // ebx
  __int64 v65; // rdx
  unsigned int v66; // r8d
  __int64 v67; // r10
  _QWORD *v68; // rcx
  _BYTE *v69; // rax
  unsigned int CurrentProcessId; // eax
  void *v71; // rsi
  int v72; // r14d
  char *v73; // rbx
  _QWORD *v74; // rax
  _QWORD *v75; // rcx
  char *v76; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _WORD *v81; // rax
  _DWORD *v82; // rcx
  _QWORD *v83; // rcx
  __int64 v84; // rax
  _DWORD *v85; // rdx
  unsigned int *v86; // r15
  unsigned int v87; // r14d
  __int64 *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // r13
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rsi
  struct _ERESOURCE *v95; // rbx
  __int64 v96; // rbx
  __int64 v97; // rcx
  int v98; // r8d
  int v99; // r13d
  __int64 v100; // r12
  __int64 v101; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v103; // rcx
  _DWORD *v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // r14
  struct _ERESOURCE *v107; // rsi
  __int64 v108; // rsi
  int v109; // edx
  __int64 v110; // rcx
  int v111; // r8d
  int v112; // r8d
  unsigned int v113; // r9d
  unsigned int v114; // r8d
  unsigned int v115; // esi
  __int64 v116; // rbx
  __int64 v117; // rsi
  __int64 v118; // rcx
  __int64 v119; // rcx
  int v120; // r8d
  struct _ERESOURCE *v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r14
  __int64 v125; // r12
  __int64 v126; // rsi
  __int64 v127; // rbx
  char v128; // r12
  unsigned int v129; // esi
  __int64 v130; // r11
  __int64 v131; // r10
  unsigned int v132; // edx
  GdiHandleEntryTable *v133; // r11
  __int64 v134; // r9
  unsigned int v135; // r14d
  __int64 *v136; // r13
  __int64 v137; // rsi
  __int64 v138; // r9
  unsigned int v139; // edx
  GdiHandleEntryTable *v140; // r9
  __int64 v141; // rsi
  __int64 v142; // rax
  __int64 v143; // rdx
  bool v144; // zf
  char v145; // al
  int v146; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v148; // rcx
  unsigned __int64 v149; // r12
  __int64 v150; // rsi
  __int64 v151; // rdx
  unsigned int v152; // r9d
  __int64 v153; // r8
  __int64 v154; // rsi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v155; // rbx
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v159; // r14
  char v160; // bl
  __int64 v161; // rbx
  __int64 v162; // rsi
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  struct _ERESOURCE *v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rcx
  int v171; // eax
  _QWORD *v172; // rcx
  struct OBJECT *v173; // r12
  __int64 CurrentProcess; // rax
  __int64 v175; // rcx
  __int64 v176; // r14
  __int64 v177; // rax
  int v178; // eax
  __int64 v179; // rcx
  __int64 v180; // rsi
  struct _ERESOURCE *v181; // rbx
  __int64 v182; // rbx
  int v183; // edx
  __int64 v184; // rcx
  int v185; // r8d
  __int64 v186; // rcx
  __int64 v187; // rsi
  unsigned int v188; // ebx
  __int64 v189; // r13
  unsigned int v190; // r12d
  unsigned int v191; // eax
  __int64 v192; // r9
  unsigned int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // rsi
  __int64 v196; // r8
  struct OBJECT *v197; // rax
  __int64 v198; // rbx
  __int64 v199; // rsi
  __int64 v200; // rcx
  __int64 v201; // rcx
  int v202; // r8d
  struct _ERESOURCE *v203; // rcx
  __int64 v204; // rdx
  __int64 v205; // rcx
  unsigned __int64 v207; // r13
  _QWORD *v208; // rax
  struct _ENTRY *EntryFromObject; // rax
  __int128 v210; // xmm0
  _OWORD *v211; // rax
  __int128 v212; // xmm1
  __int128 v213; // xmm0
  __int64 v214; // r8
  PVOID v215; // rdx
  int v216; // r8d
  void *v217; // rax
  __int64 *v218; // rdx
  void *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rax
  struct OBJECT *v220; // rax
  int v221; // eax
  _QWORD *v222; // rax
  unsigned int v223; // edx
  void *v224; // rax
  int v225; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v227; // rax
  __int64 v228; // rax
  _QWORD *ProcessWin32Process; // rax
  int v230; // eax
  int v232; // r8d
  int v233; // r9d
  int v234; // r8d
  int v235; // r9d
  unsigned int v236; // eax
  unsigned int v237; // ebx
  GdiHandleEntryTable *v238; // rsi
  __int64 v239; // rcx
  void *v240; // rax
  _DWORD *v241; // rax
  int v242; // r8d
  int v243; // r8d
  int v244; // r9d
  int v245; // eax
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // rdi
  __int64 v249; // r8
  __int64 v250; // r9
  __int64 v251; // rax
  __int64 v252; // rax
  PVOID v253; // rcx
  signed __int32 v254[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v256; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v258; // [rsp+60h] [rbp-A0h]
  int v259; // [rsp+68h] [rbp-98h]
  unsigned int v260; // [rsp+6Ch] [rbp-94h]
  unsigned int v261; // [rsp+70h] [rbp-90h] BYREF
  PEPROCESS v262; // [rsp+78h] [rbp-88h] BYREF
  char *v263; // [rsp+80h] [rbp-80h]
  unsigned int v264; // [rsp+88h] [rbp-78h] BYREF
  struct OBJECT *v265; // [rsp+90h] [rbp-70h]
  __int64 *v266; // [rsp+98h] [rbp-68h]
  void *v267; // [rsp+A0h] [rbp-60h] BYREF
  struct OBJECT *v268; // [rsp+A8h] [rbp-58h] BYREF
  int v269; // [rsp+B0h] [rbp-50h] BYREF
  int v270; // [rsp+B4h] [rbp-4Ch] BYREF
  int v271; // [rsp+B8h] [rbp-48h] BYREF
  PEPROCESS Process; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v273; // [rsp+C8h] [rbp-38h] BYREF
  int v274; // [rsp+D0h] [rbp-30h]
  int v275; // [rsp+D4h] [rbp-2Ch]
  _DWORD v276[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v277; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v278; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v279; // [rsp+F8h] [rbp-8h]
  __int128 v280; // [rsp+100h] [rbp+0h] BYREF
  __int128 v281; // [rsp+110h] [rbp+10h]
  __int128 v282; // [rsp+120h] [rbp+20h]
  unsigned __int64 v283; // [rsp+130h] [rbp+30h]
  __int64 v284; // [rsp+138h] [rbp+38h] BYREF
  __int64 v285; // [rsp+140h] [rbp+40h] BYREF
  __int64 v286; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v287[2]; // [rsp+150h] [rbp+50h] BYREF
  PVOID BackTrace[28]; // [rsp+160h] [rbp+60h] BYREF
  char v289; // [rsp+250h] [rbp+150h]
  unsigned int v290; // [rsp+250h] [rbp+150h]
  unsigned int v291; // [rsp+258h] [rbp+158h]
  __int64 v292; // [rsp+258h] [rbp+158h]
  unsigned __int16 v293; // [rsp+258h] [rbp+158h]
  PVOID pv; // [rsp+260h] [rbp+160h] BYREF
  void *v295; // [rsp+268h] [rbp+168h]

  v295 = a4;
  pv = a3;
  *(_BYTE *)(this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v12 = *((unsigned int *)a2 + 1);
  v260 = 1;
  v259 = 0;
  v14 = (PVOID *)this;
  v291 = 0;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)v12 > 0x7FFFFFFF )
    return 0LL;
  v17 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v17 > 0x7FFFFFFF )
    return 0LL;
  if ( *(_DWORD *)a2 == 6 )
  {
    if ( (unsigned int)v12 >= 0x3FFFFFFF )
      return 0LL;
    v16 = 4 * v12;
  }
  else
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v16 = ((unsigned int)(v12 + 31) >> 3) & 0x1FFFFFFC;
        break;
      case 2:
        v16 = ((unsigned int)(v12 + 7) >> 1) & 0x7FFFFFFC;
        break;
      case 3:
        v16 = (v12 + 3) & 0xFFFFFFFC;
        break;
      case 4:
        if ( (unsigned int)(v12 + 1) >= 0x7FFFFFFF )
          return 0LL;
        v16 = (2 * v12 + 2) & 0xFFFFFFFC;
        break;
      case 5:
        if ( (unsigned int)v12 >= 0x55555554 )
          return 0LL;
        v16 = (3 * (v12 + 1)) & 0xFFFFFFFC;
        break;
      case 7:
      case 8:
      case 9:
      case 0xA:
        v15 = 1;
        goto LABEL_7;
      default:
        return 0LL;
    }
  }
  v291 = v16;
LABEL_7:
  Object = 0LL;
  v18 = 0;
  v256 = 0;
  v267 = 0LL;
  v19 = 0;
  v289 = 0;
  v280 = 0LL;
  v281 = 0LL;
  v282 = 0LL;
  if ( a3 )
  {
    if ( !a9 || (v15 ? (this = *((unsigned int *)a2 + 3)) : (this = v16 * v17), this <= 0x7FFFFFFF) )
    {
      if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
        goto LABEL_21;
      W32PIDLOCK::vInit((W32PIDLOCK *)&v280);
      if ( *((_QWORD *)&v282 + 1) )
      {
        v259 = 2048;
        v19 = 1;
        v256 = 1;
        goto LABEL_21;
      }
    }
    return 0LL;
  }
  if ( v15 )
    v20 = *((unsigned int *)a2 + 3);
  else
    v20 = v16 * v17;
  v21 = v20 + 856;
  if ( v20 + 856 < v20 || (unsigned __int64)v21 > 0x7FFFFFFF )
    return 0LL;
  v22 = *((_DWORD *)a2 + 6);
  if ( (v22 & 0x40000) != 0 && v21 > 4096 )
  {
    v22 |= 8u;
    *((_DWORD *)a2 + 6) = v22;
  }
  if ( (v22 & 8) != 0 )
  {
    if ( (v22 & 0x80u) == 0 )
      v221 = EngAllocUserMemEx((int)v21, v12, &pv);
    else
      v221 = AllocateSharedSection(v21, v12, &Object, &v267, &pv);
    if ( v221 < 0 )
      return 0LL;
    v215 = pv;
    this = (unsigned __int64)Object;
  }
  else
  {
    this = 2064LL;
    if ( (v22 & 0x810) == 0 )
      goto LABEL_15;
    if ( (v22 & 0x800) != 0 )
    {
      W32PIDLOCK::vInit((W32PIDLOCK *)&v280);
      if ( !*((_QWORD *)&v282 + 1) )
        return 0LL;
      v276[1] = 0;
      v276[0] = v21 - 856;
      Win32CreateSection(&Object, 6LL, v214, (__int64)v276, BugCheckParameter4, 138412032);
      this = (unsigned __int64)Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v280);
        return 0LL;
      }
    }
    else
    {
      AllocateKernelSection(v21, v12, &pv);
      this = (unsigned __int64)Object;
    }
    v215 = pv;
    if ( !pv && !this )
    {
LABEL_15:
      v23 = v21 - 856;
      if ( (*((_DWORD *)a2 + 6) & 2) != 0 )
      {
        if ( (_DWORD)v21 != 856 )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                                                                             gpLeakTrackingAllocator,
                                                                                             0x104uLL,
                                                                                             v23,
                                                                                             0x6D627047u);
          goto LABEL_252;
        }
      }
      else if ( (_DWORD)v21 != 856 )
      {
        v24 = gpLeakTrackingAllocator;
        v25 = v23;
        v264 = 1835167815;
        v277 = 260LL;
        v26 = *(_DWORD *)gpLeakTrackingAllocator;
        v268 = (struct OBJECT *)v25;
        if ( !v26 )
        {
          Pool2 = ExAllocatePool2(260LL, (unsigned int)v25, 1835167815LL);
          if ( Pool2 )
            _InterlockedIncrement64((volatile signed __int64 *)v24 + 14);
          goto LABEL_20;
        }
        if ( v26 != 1 )
        {
          if ( v26 == 2 )
          {
            v262 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                    gpLeakTrackingAllocator,
                    0x6D627047u,
                    (unsigned __int64 *)&v262) )
            {
              v287[0] = &v277;
              v287[1] = &v264;
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(v24, v287, &v268);
              goto LABEL_252;
            }
            if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
            {
              v25 += 16LL;
              LOBYTE(v19) = 1;
              v268 = (struct OBJECT *)v25;
            }
            Pool2 = ExAllocatePool2(260LL, v25, v223);
            if ( !Pool2 )
            {
              Pool2 = 0LL;
              v19 = 0;
              goto LABEL_20;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v24 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( (_BYTE)v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v24,
                                      Pool2,
                                      v262,
                                      BackTrace) )
              {
                Pool2 += 16LL;
                v19 = 0;
                goto LABEL_20;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v24,
                                         Pool2,
                                         v262,
                                         BackTrace) )
            {
              v19 = 0;
              goto LABEL_20;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v24 + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            v19 = 0;
          }
          Pool2 = 0LL;
          goto LABEL_20;
        }
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6D627047u)
          && v25 + 16 >= v25 )
        {
          v222 = (_QWORD *)ExAllocatePool2(v277 & 0xFFFFFFFFFFFFFFFDuLL, v25 + 16, v264);
          Pool2 = (__int64)v222;
          if ( !v222
            || (_InterlockedIncrement64((volatile signed __int64 *)v24 + 14),
                *v222 = 1835167815LL,
                Pool2 = (__int64)(v222 + 2),
                v222 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v24 + 1),
              (const void *)0x6D627047);
          }
LABEL_20:
          pv = (PVOID)Pool2;
          v18 = 1;
          v289 = 1;
          if ( Pool2 )
            goto LABEL_21;
          return 0LL;
        }
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_252:
      Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      goto LABEL_20;
    }
    v216 = 16;
    if ( (*((_DWORD *)a2 + 6) & 0x800) != 0 )
      v216 = 2064;
    v259 = v216;
  }
  if ( !v215 && !this )
    goto LABEL_15;
LABEL_21:
  v28 = **(_QWORD **)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL);
  if ( !v28 || (v30 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v28 + 48))) == 0LL )
  {
    LODWORD(v31) = 0;
    *v14 = 0LL;
LABEL_254:
    v260 = (unsigned int)v31;
    v220 = (struct _DEVBITMAPINFO *)((char *)a2 + 24);
    goto LABEL_425;
  }
  v31 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(SGDGetSessionState(v29) + 24)
                                                                        + 8040LL);
  if ( v31 )
  {
    v224 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v31, v30);
    if ( v224 )
    {
      v30[85] = v224;
      LODWORD(v31) = 0;
    }
    else
    {
      FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<221184,864>>(v30);
      LODWORD(v31) = 0;
      v30 = 0LL;
    }
  }
  else
  {
    v30[85] = 0LL;
  }
  *v14 = v30;
  if ( !v30 )
    goto LABEL_254;
  v258 = *(_QWORD *)((char *)a2 + 4);
  v30[7] = v258;
  *((_WORD *)*v14 + 50) = 0;
  *((_QWORD *)*v14 + 18) = 0LL;
  *((_QWORD *)*v14 + 28) = 0LL;
  v32 = *((_QWORD *)a2 + 2);
  if ( !v32 )
  {
    *((_QWORD *)*v14 + 16) = 0LL;
    goto LABEL_76;
  }
  v33 = 0LL;
  v266 = 0LL;
  v278 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v278);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v225 = *(_DWORD *)SGDGetUserSessionState(v36, v35, v37, v38),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v225 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v279 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v279 = 0LL;
  }
  v274 = 1;
  v39 = (unsigned __int16)v32 | ((unsigned int)v32 >> 8) & 0xFF0000;
  v40 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v36) + 24) + 8008LL);
  if ( v39 >= 0x10000 )
  {
    if ( *(_DWORD *)v40 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v40 + 16),
                                  (unsigned __int16)v32,
                                  1)
           + 13) == ((unsigned __int16)v32 | ((unsigned int)v32 >> 8) & 0xFF0000) >> 16 )
        v39 = (unsigned __int16)v32;
    }
    else
    {
      v39 = (unsigned __int16)v32;
    }
  }
  v41 = *(_QWORD *)(v40 + 16);
  v42 = *(_DWORD *)(v41 + 2056);
  if ( v39 < v42 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
  {
    if ( v39 >= v42 )
    {
      v43 = *(_QWORD *)(v41 + 8LL * (((v39 - v42) >> 16) + 1) + 8);
      v39 += -65536 * ((v39 - v42) >> 16) - v42;
    }
    else
    {
      v43 = *(_QWORD *)(v41 + 8);
    }
    v44 = 0LL;
    if ( v39 < *(_DWORD *)(v43 + 20) )
    {
      v265 = (struct OBJECT *)(16LL * (unsigned __int8)v39);
      v45 = *(_QWORD **)(v43 + 24);
      v283 = 8 * ((unsigned __int64)v39 >> 8);
      v263 = (char *)v265 + *(_QWORD *)(*v45 + v283);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v263, 0LL);
      if ( v39 < *(_DWORD *)(v43 + 20) && *(_QWORD *)((char *)v265 + *(_QWORD *)(**(_QWORD **)(v43 + 24) + v283) + 8) )
      {
        *(_DWORD *)(24LL * v39 + *(_QWORD *)v43 + 8) |= 1u;
        v44 = (unsigned __int16 *)(24LL * v39 + *(_QWORD *)v43);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v263, 0LL);
        KeLeaveCriticalRegion();
      }
      v33 = v266;
    }
    v273 = v44;
    if ( v44 )
    {
      _m_prefetchw(v44 + 4);
      v46 = *((unsigned int *)v44 + 2);
      v47 = *((_DWORD *)v44 + 2) & 0xFFFFFFFE;
      v275 = v46;
      if ( (((unsigned int)v46 ^ v278 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0 && v47 && (!v279 || v47 != *(_DWORD *)(v279 + 8)) )
        goto LABEL_320;
      v48 = *((_BYTE *)v44 + 15);
      if ( (v48 & 0x20) != 0 )
        goto LABEL_320;
      if ( (v48 & 0x40) == 0 )
        goto LABEL_47;
      v46 = (__int64)HANDLELOCK::pObj((HANDLELOCK *)&v273);
      if ( !*(_WORD *)(v46 + 12) || *(struct _KTHREAD **)(v46 + 16) != KeGetCurrentThread() )
      {
LABEL_320:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v273);
        if ( !v274 )
          goto LABEL_74;
      }
      v44 = v273;
LABEL_47:
      if ( *((_BYTE *)v44 + 14) == 8 && v44[6] == WORD1(v32) )
      {
        v49 = SGDGetSessionState(v46);
        v50 = *(_DWORD *)v44 & 0xFFFFFF;
        v46 = *(_QWORD *)(v49 + 24);
        v51 = *(_QWORD *)(v46 + 8008);
        if ( v50 >= 0x10000 )
        {
          if ( *(_DWORD *)v51 > 0x10000u )
          {
            v46 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                         *(GdiHandleEntryDirectory **)(v51 + 16),
                                         *v44,
                                         1)
                  + 13);
            if ( (_DWORD)v46 == HIWORD(v50) )
              v50 = (unsigned __int16)v50;
          }
          else
          {
            v50 = *v44;
          }
        }
        v52 = *(_QWORD *)(v51 + 16);
        v53 = *(_DWORD *)(v52 + 2056);
        if ( v50 >= v53 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16)
          || (v50 >= v53
            ? (v46 = ((v50 - v53) >> 16) + 1,
               v54 = *(_QWORD *)(v52 + 8 * v46 + 8),
               v50 += -65536 * ((v50 - v53) >> 16) - v53)
            : (v54 = *(_QWORD *)(v52 + 8)),
              v50 >= *(_DWORD *)(v54 + 20)) )
        {
          v33 = 0LL;
        }
        else
        {
          v46 = 2LL * (unsigned __int8)v50;
          v33 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * ((unsigned __int64)v50 >> 8))
                            + 16LL * (unsigned __int8)v50
                            + 8);
        }
        ++*((_DWORD *)v33 + 2);
      }
      v55 = *(_QWORD *)(SGDGetSessionState(v46) + 24);
      v56 = *(_QWORD *)(v55 + 8008);
      v57 = SGDGetSessionState(v55);
      v58 = *(_DWORD *)v44 & 0xFFFFFF;
      v59 = *(_QWORD *)(*(_QWORD *)(v57 + 24) + 8008LL);
      if ( v58 >= 0x10000 )
      {
        if ( *(_DWORD *)v59 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v59 + 16), *v44, 1)
               + 13) == HIWORD(v58) )
            v58 = (unsigned __int16)v58;
        }
        else
        {
          v58 = *v44;
        }
      }
      v60 = *(_QWORD *)(v59 + 16);
      v61 = *(_DWORD *)(v60 + 2056);
      if ( v58 >= v61 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16)
        || (v58 >= v61
          ? (v62 = *(_QWORD *)(v60 + 8LL * (((v58 - v61) >> 16) + 1) + 8), v58 += -65536 * ((v58 - v61) >> 16) - v61)
          : (v62 = *(_QWORD *)(v60 + 8)),
            v58 >= *(_DWORD *)(v62 + 20)) )
      {
        v63 = 0LL;
      }
      else
      {
        v63 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * ((unsigned __int64)v58 >> 8))
                         + 16LL * (unsigned __int8)v58
                         + 8);
      }
      v64 = (unsigned __int16)*v63 | (*v63 >> 8) & 0xFF0000;
      if ( v64 >= 0x10000 )
      {
        if ( *(_DWORD *)v56 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v56 + 16),
                                      (unsigned __int16)*v63,
                                      1)
               + 13) == HIWORD(v64) )
            v64 = (unsigned __int16)v64;
        }
        else
        {
          v64 = (unsigned __int16)*v63;
        }
      }
      v65 = *(_QWORD *)(v56 + 16);
      v66 = *(_DWORD *)(v65 + 2056);
      if ( v64 < v66 + ((*(unsigned __int16 *)(v65 + 2) + 0xFFFF) << 16) )
      {
        if ( v64 >= v66 )
        {
          v67 = *(_QWORD *)(v65 + 8LL * (((v64 - v66) >> 16) + 1) + 8);
          v64 += -65536 * ((v64 - v66) >> 16) - v66;
        }
        else
        {
          v67 = *(_QWORD *)(v65 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v67 + 24LL * v64 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v67 + 24) + 8 * ((unsigned __int64)v64 >> 8)) + 16LL * (unsigned __int8)v64,
          0LL);
        KeLeaveCriticalRegion();
      }
      v273 = 0LL;
      v274 = 0;
      KeLeaveCriticalRegion();
LABEL_74:
      if ( v33 )
      {
        *((_QWORD *)*v14 + 16) = v33;
        goto LABEL_76;
      }
      goto LABEL_334;
    }
  }
  KeLeaveCriticalRegion();
LABEL_334:
  *((_QWORD *)*v14 + 16) = 0LL;
LABEL_76:
  v68 = *v14;
  v265 = (struct _DEVBITMAPINFO *)((char *)a2 + 24);
  v68[9] = pv;
  v69 = *v14;
  pv = 0LL;
  v69[688] = v289;
  *((_DWORD *)*v14 + 24) = *(_DWORD *)a2;
  *((_WORD *)*v14 + 51) = v259 | *((_WORD *)a2 + 12) & 0x89;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v71 = a6;
  v72 = a10;
  *((_DWORD *)*v14 + 52) = CurrentProcessId & 0xFFFFFFFC;
  *((_QWORD *)*v14 + 23) = v295;
  *((_DWORD *)*v14 + 53) = a5;
  *((_QWORD *)*v14 + 24) = v71;
  *((_QWORD *)*v14 + 25) = a7;
  *((_DWORD *)*v14 + 54) = v72;
  *((_QWORD *)*v14 + 3) = 0LL;
  v73 = (char *)*v14;
  *((_QWORD *)v73 + 90) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(0LL) + 24) + 6088LL);
  *(_OWORD *)(v73 + 792) = 0LL;
  *(_OWORD *)(v73 + 808) = 0LL;
  *(_OWORD *)(v73 + 824) = 0LL;
  *(_OWORD *)(v73 + 840) = 0LL;
  RtlCaptureStackBackTrace(0, 8u, (PVOID *)v73 + 99, 0LL);
  *((_QWORD *)v73 + 5) = 0LL;
  *((_QWORD *)v73 + 88) = 0LL;
  *((_DWORD *)*v14 + 28) = *((_DWORD *)a2 + 6) & 0x40000;
  if ( (*((_DWORD *)a2 + 6) & 0x4000000) != 0 )
    *((_DWORD *)*v14 + 28) |= 0x4000000u;
  v74 = *v14;
  v258 = 0LL;
  v74[17] = 0LL;
  v75 = *v14;
  v75[19] = 0LL;
  *((_QWORD *)*v14 + 20) = 0LL;
  *((_DWORD *)*v14 + 42) = 0;
  *((_QWORD *)*v14 + 22) = 0LL;
  v76 = (char *)*v14;
  *((_QWORD *)v76 + 89) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v75) + 24) + 6088LL);
  *(_OWORD *)(v76 + 728) = 0LL;
  *(_OWORD *)(v76 + 744) = 0LL;
  *(_OWORD *)(v76 + 760) = 0LL;
  *(_OWORD *)(v76 + 776) = 0LL;
  RtlCaptureStackBackTrace(0, 8u, (PVOID *)v76 + 91, 0LL);
  *((_QWORD *)v76 + 6) = 0LL;
  *((_QWORD *)v76 + 87) = 0LL;
  *((_QWORD *)*v14 + 13) = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v78 = *ThreadWin32Thread;
    if ( v78 )
      *(_QWORD *)(v78 + 304) = 0LL;
  }
  *((_QWORD *)*v14 + 31) = 0LL;
  *((_QWORD *)*v14 + 32) = 0LL;
  *((_QWORD *)*v14 + 33) = 0LL;
  *((_QWORD *)*v14 + 81) = 0LL;
  *((_DWORD *)*v14 + 164) = 0;
  *((_DWORD *)*v14 + 29) = 0;
  *((_DWORD *)*v14 + 30) = 0;
  *((_QWORD *)*v14 + 71) = 0LL;
  *((_QWORD *)*v14 + 70) = 0LL;
  v79 = (char *)*v14 + 232;
  v79[1] = v79;
  *v79 = v79;
  *((_DWORD *)*v14 + 80) = 0;
  *((_DWORD *)*v14 + 81) = 0;
  *((_QWORD *)*v14 + 79) = 0LL;
  v80 = (char *)*v14 + 528;
  v80[1] = v80;
  *v80 = v80;
  *((_QWORD *)*v14 + 78) = 0LL;
  if ( v256 )
    *((_DWORD *)*v14 + 29) |= 1u;
  if ( v71 && !v72 )
    *((_WORD *)*v14 + 51) |= 4u;
  v81 = *v14;
  if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
  {
    v81[51] &= ~0x800u;
    *((_DWORD *)*v14 + 22) = 0;
    *((_DWORD *)*v14 + 16) = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
      *((_QWORD *)*v14 + 10) = 0LL;
    else
      *((_QWORD *)*v14 + 10) = *((_QWORD *)*v14 + 9);
  }
  else
  {
    *((_DWORD *)v81 + 16) = *((_DWORD *)a2 + 2) * v291;
    v82 = *v14;
    if ( (*((_DWORD *)a2 + 6) & 1) != 0 )
    {
      v82[22] = v291;
      *((_QWORD *)*v14 + 10) = *((_QWORD *)*v14 + 9);
    }
    else
    {
      v82[22] = -v291;
      *((_QWORD *)*v14 + 10) = *((_QWORD *)*v14 + 9) + *((_DWORD *)*v14 + 16) - v291;
    }
  }
  v83 = *v14;
  if ( *((char *)*v14 + 102) < 0 )
  {
    v83[73] = Object;
    *((_QWORD *)*v14 + 74) = v267;
    *((_QWORD *)*v14 + 75) = (char *)v267 + *((_QWORD *)*v14 + 10) - *((_QWORD *)*v14 + 9);
    *((_DWORD *)*v14 + 152) = 1;
    v227 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v227 && (v228 = *(_QWORD *)(v227 + 72)) != 0 )
    {
      v83 = *v14;
      *((_DWORD *)*v14 + 153) = *(_DWORD *)(v228 + 8);
      *((_DWORD *)*v14 + 154) = 1;
    }
    else
    {
      *((_DWORD *)*v14 + 153) = 0;
      *((_DWORD *)*v14 + 154) = 0;
    }
  }
  v84 = SGDGetSessionState(v83);
  v85 = *v14;
  LODWORD(v84) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v84 + 24) + 6492LL));
  v258 = 0LL;
  v85[23] = v84;
  v86 = (unsigned int *)*v14;
  v87 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v263 = (char *)v87;
  v88 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v88 )
  {
    v90 = *v88;
    if ( v90 )
    {
      v89 = *(_QWORD *)(v90 + 72);
      if ( v89 )
      {
        v87 = *(_DWORD *)(v89 + 8);
        v263 = (char *)v87;
      }
    }
  }
  v91 = *(_QWORD *)(SGDGetSessionState(v89) + 24);
  v292 = v91;
  v94 = *(_QWORD *)(SGDGetSessionState(v92) + 24);
  v95 = *(struct _ERESOURCE **)(v94 + 1912);
  if ( v95 )
  {
    PsEnterPriorityRegion(v93);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v95);
  }
  v96 = *(_QWORD *)(v94 + 1912);
  v97 = *(_QWORD *)(SGDGetSessionState(v93) + 24);
  if ( *(_DWORD *)(v97 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v97,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v98,
      v96,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  if ( a8 )
    goto LABEL_118;
  v99 = 1;
  v100 = *(_QWORD *)(SGDGetSessionState(v97) + 24);
  if ( v87 && v87 != -2147483630 )
  {
    Process = 0LL;
    if ( v87 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v101);
      v104 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v104 = 0LL;
    }
    else
    {
      if ( PsLookupProcessByProcessId((HANDLE)(int)v87, &Process) < 0 )
      {
LABEL_114:
        v97 = (__int64)Process;
        if ( Process )
          ObfDereferenceObject(Process);
        goto LABEL_116;
      }
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
      v104 = ProcessWin32Process;
      if ( ProcessWin32Process && !*ProcessWin32Process )
        v104 = 0LL;
    }
    if ( v104 )
    {
      v106 = *(_QWORD *)(SGDGetSessionState(v103) + 24);
      v107 = *(struct _ERESOURCE **)(v106 + 1912);
      if ( v107 )
      {
        PsEnterPriorityRegion(v105);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v107);
      }
      v108 = *(_QWORD *)(v106 + 1912);
      v110 = *(_QWORD *)(SGDGetSessionState(v105) + 24);
      if ( *(_DWORD *)(v110 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz_EtwWriteTransfer(v110, v109, v111, v108, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
      v112 = v104[15];
      if ( v112 >= *(_DWORD *)(v100 + 2376) )
      {
        v99 = 0;
        v230 = v104[72];
        if ( (v230 & 0x20) == 0 )
        {
          v104[72] = v230 | 0x20;
          if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
          {
            v284 = 0x1000000LL;
            v269 = v232;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1C02C93D8,
              (unsigned int)&unk_1C029563A,
              v232,
              v233,
              (__int64)&v269,
              (__int64)&v284);
          }
        }
      }
      else
      {
        v113 = v104[16];
        v114 = v112 + 1;
        v104[15] = v114;
        v115 = v113;
        if ( v114 > v113 )
          v115 = v114;
        v110 = (unsigned int)(1000 * ((int)v114 / 1000));
        if ( v114 == (_DWORD)v110
          && v113 != v115
          && (unsigned int)dword_1C02C93D8 > 5
          && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
        {
          v285 = 0x1000000LL;
          v270 = v234;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1C02C93D8,
            (unsigned int)&unk_1C02955F8,
            v234,
            v235,
            (__int64)&v270,
            (__int64)&v285);
        }
        v104[16] = v115;
      }
      v116 = *(_QWORD *)(SGDGetSessionState(v110) + 24);
      v117 = *(_QWORD *)(v116 + 1912);
      v119 = *(_QWORD *)(SGDGetSessionState(v118) + 24);
      if ( *(_DWORD *)(v119 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v119,
          (unsigned int)&LockRelease,
          v120,
          v117,
          (__int64)L"GreBaseGlobals.hsemHmgr");
      v121 = *(struct _ERESOURCE **)(v116 + 1912);
      if ( v121 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v121);
        PsLeavePriorityRegion(v123, v122);
      }
    }
    goto LABEL_114;
  }
LABEL_116:
  if ( !v99 )
    goto LABEL_167;
  v91 = v292;
LABEL_118:
  v124 = *(_QWORD *)(v91 + 8008);
  if ( *(_DWORD *)(v124 + 4) >= *(_DWORD *)(v124 + 8) )
  {
LABEL_398:
    if ( !a8 )
      HmgDecProcessHandleCount((unsigned int)v263);
    if ( !*(_BYTE *)(v91 + 8096) )
    {
      v97 = *(_QWORD *)(v91 + 8008);
      if ( *(_DWORD *)(v97 + 4) >= *(_DWORD *)(v97 + 8) )
      {
        *(_BYTE *)(v91 + 8096) = 1;
        if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
        {
          v271 = *(_DWORD *)(v91 + 1904);
          v286 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1C02C93D8,
            (unsigned int)&unk_1C02955A9,
            v243,
            v244,
            (__int64)&v271,
            (__int64)&v286);
        }
      }
    }
    goto LABEL_167;
  }
  while ( 1 )
  {
    v125 = *(_QWORD *)(v124 + 16);
    if ( *(_BYTE *)v125 )
      goto LABEL_397;
    v126 = *(_QWORD *)(v125 + 8);
    v261 = 0;
    if ( *(_DWORD *)(v126 + 16) < *(_DWORD *)(v126 + 8) )
    {
      v127 = *(unsigned int *)(v126 + 12);
      if ( (_DWORD)v127 != -1 )
      {
        v97 = *(unsigned int *)(*(_QWORD *)v126 + 24 * v127);
        *(_DWORD *)(v126 + 12) = v97;
LABEL_123:
        ++*(_DWORD *)(v126 + 16);
        goto LABEL_124;
      }
      LODWORD(v127) = *(_DWORD *)(v126 + 20);
      v266 = *(__int64 **)(v126 + 24);
      v97 = *v266;
      v207 = 8 * ((unsigned __int64)(unsigned int)v127 >> 8);
      if ( *(_QWORD *)(*v266 + v207)
        || (v217 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                     gpLeakTrackingAllocator,
                     0x104uLL,
                     0x1000uLL,
                     0x636C6547u),
            v218 = v266,
            *(_QWORD *)(*v266 + v207) = v217,
            v97 = *v218,
            *(_QWORD *)(*v218 + v207)) )
      {
        v208 = (_QWORD *)(*(_QWORD *)(v97 + v207) + 16LL * (unsigned __int8)v127);
        *v208 = 0LL;
        v208[1] = 0LL;
        _InterlockedOr(v254, 0);
        ++*(_DWORD *)(v126 + 20);
        goto LABEL_123;
      }
    }
    v97 = *(_QWORD *)(v125 + 8);
    if ( *(_DWORD *)(v97 + 16) != *(_DWORD *)(v97 + 8) )
      goto LABEL_397;
    LOWORD(v236) = *(_WORD *)(v125 + 2);
    v237 = 1;
    if ( (unsigned __int16)v236 <= 1u )
    {
LABEL_366:
      v97 = 256LL;
      if ( (_WORD)v236 == 256 )
      {
        *(_BYTE *)v125 = 1;
LABEL_397:
        v91 = v292;
        goto LABEL_398;
      }
      *(_QWORD *)(v125 + 8LL * *(unsigned __int16 *)(v125 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
      v97 = *(_QWORD *)(v125 + 8LL * *(unsigned __int16 *)(v125 + 2) + 8);
      if ( !v97 )
        goto LABEL_397;
      GdiHandleEntryTable::AcquireEntryIndex((GdiHandleEntryTable *)v97, &v261);
      v237 = *(unsigned __int16 *)(v125 + 2);
      *(_WORD *)(v125 + 2) = v237 + 1;
    }
    else
    {
      while ( 1 )
      {
        v238 = *(GdiHandleEntryTable **)(v125 + 8LL * v237 + 8);
        if ( GdiHandleEntryTable::AcquireEntryIndex(v238, &v261) )
          break;
        if ( *((_DWORD *)v238 + 4) != *((_DWORD *)v238 + 2) )
          goto LABEL_397;
        v236 = *(unsigned __int16 *)(v125 + 2);
        if ( ++v237 >= v236 )
          goto LABEL_366;
      }
    }
    LODWORD(v127) = v261 + *(_DWORD *)(v125 + 2056) + ((v237 + 0xFFFF) << 16);
LABEL_124:
    v128 = 0;
    v129 = *(_DWORD *)(v124 + 4) + 1;
    *(_DWORD *)(v124 + 4) = v129;
    if ( v129 > *(_DWORD *)v124 )
    {
      *(_DWORD *)v124 = v129;
      v128 = 1;
      v97 = *(_QWORD *)(SGDGetSessionState(v97) + 24);
      *(_DWORD *)(v97 + 1948) = v129;
    }
    v130 = *(_QWORD *)(v124 + 16);
    v131 = (unsigned __int16)v127;
    v132 = *(_DWORD *)(v130 + 2056);
    if ( (unsigned __int16)v127 >= v132 + ((*(unsigned __int16 *)(v130 + 2) + 0xFFFF) << 16) )
    {
      v134 = 0LL;
    }
    else
    {
      if ( (unsigned __int16)v127 >= v132 )
      {
        v133 = *(GdiHandleEntryTable **)(v130 + 8LL * ((((unsigned __int16)v127 - v132) >> 16) + 1) + 8);
        v131 = -65536 * (((unsigned __int16)v127 - v132) >> 16) - v132 + (unsigned __int16)v127;
      }
      else
      {
        v133 = *(GdiHandleEntryTable **)(v130 + 8);
      }
      if ( (unsigned int)v131 < *((_DWORD *)v133 + 5) || GdiHandleEntryTable::GetEntryObject(v133, v131) )
      {
        v97 = 3 * v131;
        v134 = *(_QWORD *)v133 + 24 * v131;
      }
    }
    if ( (unsigned int)v127 < 0x10000 )
      break;
    v239 = *(unsigned __int8 *)(v134 + 13);
    if ( (_DWORD)v239 != WORD1(v127) )
    {
      v135 = v127;
      v136 = (__int64 *)(*(_QWORD *)(SGDGetSessionState(v239) + 24) + 8008LL);
      v137 = *v136;
      goto LABEL_136;
    }
    if ( *(_QWORD *)(v124 + 24) )
      goto LABEL_377;
    v240 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
             gpLeakTrackingAllocator,
             0x104uLL,
             0x40000uLL,
             0x636D6847u);
    *(_QWORD *)(v124 + 24) = v240;
    if ( v240 )
    {
      memset(v240, 0, 0x40000uLL);
LABEL_377:
      v97 = (unsigned __int16)v127;
      *(_DWORD *)(*(_QWORD *)(v124 + 24) + 4LL * (unsigned __int16)v127) = v127;
    }
    if ( *(_DWORD *)(v124 + 4) >= *(_DWORD *)(v124 + 8) )
      goto LABEL_397;
  }
  if ( v128 || *(_DWORD *)v124 > 0x10000u )
    *(_BYTE *)(v134 + 13) = 0;
  else
    LODWORD(v127) = ((unsigned __int8)++*(_BYTE *)(v134 + 13) << 16) + v127;
  v135 = v127;
  v136 = (__int64 *)(*(_QWORD *)(SGDGetSessionState(v97) + 24) + 8008LL);
  v137 = *v136;
  if ( (unsigned int)v127 < 0x10000 )
    goto LABEL_138;
LABEL_136:
  if ( *(_DWORD *)v137 > 0x10000u )
  {
    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                *(GdiHandleEntryDirectory **)(v137 + 16),
                                (unsigned __int16)v127,
                                1)
         + 13) == WORD1(v127) )
      v135 = (unsigned __int16)v127;
  }
  else
  {
    v135 = (unsigned __int16)v127;
  }
LABEL_138:
  v138 = *(_QWORD *)(v137 + 16);
  v139 = *(_DWORD *)(v138 + 2056);
  if ( v135 >= v139 + ((*(unsigned __int16 *)(v138 + 2) + 0xFFFF) << 16) )
  {
    v141 = 0LL;
  }
  else
  {
    if ( v135 >= v139 )
    {
      v140 = *(GdiHandleEntryTable **)(v138 + 8LL * (((v135 - v139) >> 16) + 1) + 8);
      v135 += -65536 * ((v135 - v139) >> 16) - v139;
    }
    else
    {
      v140 = *(GdiHandleEntryTable **)(v138 + 8);
    }
    v141 = 0LL;
    if ( v135 < *((_DWORD *)v140 + 5) || GdiHandleEntryTable::GetEntryObject(v140, v135) )
      v141 = *(_QWORD *)v140 + 24LL * v135;
  }
  v142 = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v142 && *(_QWORD *)v142 )
    v143 = *(_QWORD *)(*(_QWORD *)v142 + 72LL);
  else
    v143 = 0LL;
  v144 = a8 == 0;
  v145 = 11;
  *(_WORD *)(v141 + 14) = 5;
  if ( v144 )
    v145 = 3;
  *(_QWORD *)(v141 + 16) = 0LL;
  v146 = *(_DWORD *)(v141 + 8) & 1;
  if ( (v145 & 8) != 0 )
  {
    if ( v143 )
      goto LABEL_388;
LABEL_152:
    CurrentThread = KeGetCurrentThread();
  }
  else
  {
    if ( !v143 )
    {
      v146 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      goto LABEL_152;
    }
    v146 |= *(_DWORD *)(v143 + 8) & 0xFFFFFFFE;
LABEL_388:
    CurrentThread = *(struct _KTHREAD **)v143;
  }
  *((_WORD *)v86 + 6) = 1;
  v86[2] = 1;
  *((_QWORD *)v86 + 2) = CurrentThread;
  *(_DWORD *)(v141 + 8) = v146;
  *(_QWORD *)(v141 + 16) = 0LL;
  HIBYTE(v293) = BYTE2(v127);
  *(_QWORD *)v141 = v127 | 0xFFFFFFFFFF000000uLL;
  LOBYTE(v293) = 5;
  *(_WORD *)(v141 + 12) = v293;
  v148 = (unsigned __int16)v127;
  v149 = (unsigned __int16)v127 | (unsigned __int64)(v293 << 16);
  v258 = v149;
  *(_QWORD *)v86 = v149;
  _InterlockedOr(v254, 0);
  v150 = *v136;
  if ( (unsigned int)v127 >= 0x10000 )
  {
    if ( *(_DWORD *)v150 > 0x10000u )
    {
      v148 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v150 + 16),
                                    (unsigned __int16)v127,
                                    1)
             + 13);
      if ( (_DWORD)v148 == WORD1(v127) )
        LODWORD(v127) = (unsigned __int16)v127;
    }
    else
    {
      LODWORD(v127) = (unsigned __int16)v127;
    }
    LODWORD(v149) = v258;
  }
  v151 = *(_QWORD *)(v150 + 16);
  v152 = *(_DWORD *)(v151 + 2056);
  if ( (unsigned int)v127 < v152 + ((*(unsigned __int16 *)(v151 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v127 >= v152 )
    {
      v148 = (((unsigned int)v127 - v152) >> 16) + 1;
      v153 = *(_QWORD *)(v151 + 8 * v148 + 8);
      LODWORD(v127) = -65536 * (((unsigned int)v127 - v152) >> 16) - v152 + v127;
    }
    else
    {
      v153 = *(_QWORD *)(v151 + 8);
    }
    if ( (unsigned int)v127 < *(_DWORD *)(v153 + 20) )
    {
      v148 = 2LL * (unsigned __int8)v127;
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v153 + 24) + 8 * ((unsigned __int64)(unsigned int)v127 >> 8))
                + 16LL * (unsigned __int8)v127
                + 8) = v86;
    }
  }
  v154 = v86[2];
  v155 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v86 + 85);
  v97 = *(_QWORD *)(SGDGetSessionState(v148) + 24);
  v159 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v97 + 8040);
  if ( v155 && v159 && (_DWORD)v154 )
  {
    do
    {
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v159, v155, 1);
      --v154;
    }
    while ( v154 );
  }
  v160 = 0;
  if ( !a8 )
    v160 = (char)v263;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v241 = (_DWORD *)SGDGetUserSessionState(v97, v156, v157, v158);
    McTemplateK0pqqq_EtwWriteTransfer(*v241, (unsigned int)&GdiCreateHandle, v242, v149, 5, *v241, v160);
  }
LABEL_167:
  v161 = *(_QWORD *)(SGDGetSessionState(v97) + 24);
  v162 = *(_QWORD *)(v161 + 1912);
  v165 = *(_QWORD *)(SGDGetSessionState(v163) + 24);
  if ( *(_DWORD *)(v165 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v165, (unsigned int)&LockRelease, v166, v162, (__int64)L"GreBaseGlobals.hsemHmgr");
  v168 = *(struct _ERESOURCE **)(v161 + 1912);
  if ( v168 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v168);
    PsLeavePriorityRegion(v170, v169);
  }
  if ( v258 )
  {
    v171 = a11;
    *((_DWORD *)v14 + 3) = a11;
    if ( v171 )
      _InterlockedIncrement((volatile signed __int32 *)*v14 + 3);
    v172 = *v14;
    v172[4] = *(_QWORD *)*v14;
    v173 = (struct OBJECT *)*v14;
    v265 = (struct OBJECT *)*v14;
    CurrentProcess = PsGetCurrentProcess(v172, v164, v166, v167);
    v176 = CurrentProcess;
    if ( CurrentProcess )
    {
      if ( (v177 = PsGetProcessWin32Process(CurrentProcess)) == 0
        || !*(_QWORD *)v177
        || (!*(_DWORD *)(v177 + 868)
         || (v175 = *(unsigned int *)(v177 + 812), (*(_DWORD *)(v177 + 812) & 0x30) != 0x10)
         || (v175 & 0x200) != 0
          ? (v178 = 0)
          : (v178 = 1),
            !v178) )
      {
        v176 = 0LL;
      }
    }
    v180 = *(_QWORD *)(SGDGetSessionState(v175) + 24);
    v181 = *(struct _ERESOURCE **)(v180 + 1912);
    if ( v181 )
    {
      PsEnterPriorityRegion(v179);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v181);
    }
    v182 = *(_QWORD *)(v180 + 1912);
    v184 = *(_QWORD *)(SGDGetSessionState(v179) + 24);
    if ( *(_DWORD *)(v184 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(v184, v183, v185, v182, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
    v186 = *(_QWORD *)(SGDGetSessionState(v184) + 24);
    if ( v176 )
    {
      EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleEntryDirectory ***)(v186 + 8008), v173);
      *((_BYTE *)EntryFromObject + 15) |= 0x80u;
    }
    else
    {
      v187 = *(_QWORD *)(v186 + 8008);
      v188 = (unsigned __int16)*(_DWORD *)v173 | (*(_DWORD *)v173 >> 8) & 0xFF0000;
      v266 = (__int64 *)v187;
      if ( v188 >= 0x10000 )
      {
        if ( *(_DWORD *)v187 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v187 + 16),
                                      (unsigned __int16)v188,
                                      1)
               + 13) == HIWORD(v188) )
            v188 = (unsigned __int16)v188;
        }
        else
        {
          v188 = (unsigned __int16)v188;
        }
      }
      v189 = *(_QWORD *)(v187 + 16);
      v190 = *(_DWORD *)(v189 + 2056);
      v191 = v190 + ((*(unsigned __int16 *)(v189 + 2) + 0xFFFF) << 16);
      v290 = v191;
      if ( v188 >= v191 )
      {
        v194 = 0LL;
        v195 = 0LL;
      }
      else
      {
        if ( v188 >= v190 )
        {
          v192 = *(_QWORD *)(v189 + 8LL * (((v188 - v190) >> 16) + 1) + 8);
          v193 = v188 + -65536 * ((v188 - v190) >> 16) - v190;
        }
        else
        {
          v192 = *(_QWORD *)(v189 + 8);
          v193 = v188;
        }
        v194 = 0LL;
        v195 = 0LL;
        if ( v193 < *(_DWORD *)(v192 + 20) )
        {
          v194 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v192 + 24) + 8 * ((unsigned __int64)v193 >> 8))
                           + 16LL * (unsigned __int8)v193
                           + 8);
          if ( v194 )
          {
            v194 = 3LL * v193;
            v195 = *(_QWORD *)v192 + 24LL * v193;
          }
        }
        v191 = v290;
      }
      if ( v188 >= 0x10000 )
      {
        v194 = (__int64)v266;
        if ( *(_DWORD *)v266 > 0x10000u )
        {
          v194 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        (GdiHandleEntryDirectory *)v189,
                                        (unsigned __int16)v188,
                                        1)
                 + 13);
          v191 = v290;
          if ( (_DWORD)v194 == HIWORD(v188) )
            v188 = (unsigned __int16)v188;
        }
        else
        {
          v188 = (unsigned __int16)v188;
        }
      }
      if ( v188 >= v191
        || (v188 >= v190
          ? (v194 = ((v188 - v190) >> 16) + 1,
             v196 = *(_QWORD *)(v189 + 8 * v194 + 8),
             v188 += -65536 * ((v188 - v190) >> 16) - v190)
          : (v196 = *(_QWORD *)(v189 + 8)),
            v188 >= *(_DWORD *)(v196 + 20)) )
      {
        v197 = 0LL;
      }
      else
      {
        v194 = 2LL * (unsigned __int8)v188;
        v197 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v196 + 24) + 8 * ((unsigned __int64)v188 >> 8))
                                 + 16LL * (unsigned __int8)v188
                                 + 8);
      }
      v173 = v265;
      if ( v197 != v265 )
        v195 = 0LL;
      *(_BYTE *)(v195 + 15) &= ~0x80u;
    }
    *((_QWORD *)v173 + 80) = v176;
    v198 = *(_QWORD *)(SGDGetSessionState(v194) + 24);
    v199 = *(_QWORD *)(v198 + 1912);
    v201 = *(_QWORD *)(SGDGetSessionState(v200) + 24);
    if ( *(_DWORD *)(v201 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v201, (unsigned int)&LockRelease, v202, v199, (__int64)L"GreBaseGlobals.hsemHmgr");
    v203 = *(struct _ERESOURCE **)(v198 + 1912);
    if ( v203 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v203);
      PsLeavePriorityRegion(v205, v204);
    }
    if ( v86 )
      _InterlockedDecrement((volatile signed __int32 *)v86 + 3);
    else
      v260 = 1;
    if ( _bittest16((const signed __int16 *)*v14 + 51, 0xBu) )
    {
      if ( *((_QWORD *)&v282 + 1) )
      {
        v210 = v280;
        *((_QWORD *)*v14 + 31) = Object;
        v211 = *v14;
        v212 = v281;
        v211[17] = v210;
        v213 = v282;
        v211[18] = v212;
        v211[19] = v213;
        *((_QWORD *)*v14 + 9) = 0LL;
        *((_QWORD *)*v14 + 10) = 0LL;
        *((_DWORD *)*v14 + 28) |= 0x200u;
      }
    }
    return v260;
  }
  if ( *((_QWORD *)*v14 + 16) )
  {
    v268 = (struct OBJECT *)*((_QWORD *)*v14 + 16);
    XEPALOBJ::vUnrefPalette(&v268);
    *((_QWORD *)*v14 + 16) = 0LL;
  }
  SURFACE::Free(*v14);
  v220 = v265;
  v18 = v289;
  v19 = v256;
  *v14 = 0LL;
  v260 = 0;
LABEL_425:
  if ( !pv && !Object )
    return v260;
  v245 = *(_DWORD *)v220;
  if ( (v245 & 8) != 0 )
  {
    if ( (v245 & 0x80u) == 0 )
    {
      EngFreeUserMem(pv);
      return v260;
    }
    v248 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( !*(_QWORD *)(v248 + 72) )
      return v260;
    v251 = PsGetCurrentProcess(v247, v246, v249, v250);
    MmUnmapViewOfSection(v251);
    v252 = *(_QWORD *)(v248 + 72);
    v262 = 0LL;
    if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v252 + 8), &v262) >= 0 )
    {
      MmUnmapViewOfSection(v262);
      ObfDereferenceObject(v262);
    }
    v253 = Object;
    if ( !Object )
      KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
LABEL_439:
    ObfDereferenceObject(v253);
    return v260;
  }
  if ( (v259 & 0x800) != 0 )
  {
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v280);
    if ( v19 )
      return v260;
    v253 = Object;
    if ( !Object )
      KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
    goto LABEL_439;
  }
  if ( (v259 & 0x10) != 0 )
  {
    vFreeKernelSection(pv);
  }
  else if ( v18 && pv )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, pv);
  }
  return v260;
}
