/*
 * XREFs of LdrpLoadDependentModule @ 0x180017BE0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 * Callees:
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18001A8AC (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     RtlUTF8ToUnicodeN @ 0x18005A9B0 (RtlUTF8ToUnicodeN.c)
 *     LdrpProcessWork @ 0x1800600EC (LdrpProcessWork.c)
 *     LdrpGetFullPath @ 0x18006096C (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x180060DA0 (LdrpFreeUnicodeString.c)
 *     LdrpFreeReplacedModule @ 0x180067AD8 (LdrpFreeReplacedModule.c)
 *     LdrpAllocatePlaceHolder @ 0x18006C32C (LdrpAllocatePlaceHolder.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 *     LdrpDestroyNode @ 0x18006F5B4 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x180071DB0 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18007F030 (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CD620 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800CF110 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D48B8 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 **a5,
        __int64 a6)
{
  __int64 v6; // r9
  __int64 v7; // r13
  volatile signed __int32 **v9; // r12
  _WORD *v10; // rbx
  unsigned __int16 v11; // dx
  unsigned int v12; // esi
  int FullPath; // edi
  int Length; // eax
  int v15; // r8d
  char *Buffer; // r9
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  int v22; // esi
  char v23; // r14
  int *v24; // r12
  struct _PEB *v25; // r13
  char v26; // r15
  int v27; // ebx
  void *ApiSetMap; // rdi
  char v29; // si
  unsigned __int16 v30; // bx
  unsigned __int16 v31; // ax
  __int64 v32; // r9
  int *SharedData; // rcx
  __int64 v34; // r14
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  __int16 v37; // ax
  unsigned int v38; // ecx
  int v39; // edi
  unsigned int v40; // ecx
  int v41; // ebx
  char *v42; // rdx
  size_t v43; // rbx
  unsigned int v44; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int *v46; // rbx
  unsigned __int64 v47; // rdx
  _WORD *v48; // rax
  __int16 v49; // cx
  unsigned int v50; // r14d
  signed __int64 v51; // rdx
  _QWORD **v52; // rdi
  __int64 v53; // rcx
  _QWORD *v54; // r15
  volatile signed __int32 *v55; // rsi
  unsigned __int16 *v56; // rax
  unsigned __int16 *v57; // r9
  unsigned __int64 v58; // r10
  unsigned __int64 v59; // r11
  __int64 v60; // rax
  signed __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // ebx
  __int64 v65; // r14
  __int64 v66; // r15
  volatile signed __int32 *v67; // rbx
  signed __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  signed __int64 v71; // rax
  int v72; // esi
  volatile signed __int32 *v73; // rax
  volatile signed __int32 *v74; // r14
  __int64 v75; // rcx
  __int64 *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // r15
  int v80; // edx
  int v81; // ecx
  __int64 v82; // rax
  signed __int64 v83; // rax
  volatile signed __int32 *v84; // rbx
  __int64 v85; // rdx
  volatile signed __int32 **v86; // rcx
  _QWORD *v87; // rbx
  _QWORD *v88; // rdi
  volatile signed __int32 *v89; // rcx
  _QWORD *v90; // rdx
  _QWORD *v91; // rax
  __int64 *v92; // rdx
  _QWORD *v93; // rdx
  _QWORD *v94; // r8
  bool v95; // zf
  int v96; // eax
  signed __int64 v97; // r8
  __int64 v98; // rdx
  signed __int64 v99; // rdx
  signed __int64 v100; // rtt
  __int64 v101; // rdx
  signed __int64 v102; // rtt
  signed __int64 v103; // rcx
  __int64 v104; // rdx
  signed __int64 v105; // rtt
  _WORD *v106; // rcx
  _QWORD *v107; // rbx
  char *i; // r9
  char *v109; // rcx
  __int16 v110; // cx
  int v111; // r10d
  int v112; // r11d
  int v113; // eax
  unsigned __int64 v114; // r8
  __int64 Heap; // rax
  int v116; // ebx
  _WORD *v117; // rax
  unsigned int v118; // r12d
  unsigned int v119; // eax
  void *v120; // r13
  unsigned int v121; // edi
  unsigned int v122; // eax
  void *v123; // rsi
  unsigned int v124; // r14d
  unsigned int v125; // eax
  void *v126; // r12
  const char *v127; // rax
  char *v128; // rcx
  char v129; // al
  __int64 v130; // rbx
  __int64 v131; // rax
  _WORD *v132; // rbx
  __int64 v134; // rax
  _WORD *StringRoutine; // rax
  __int64 v136; // [rsp+30h] [rbp-528h]
  char v137; // [rsp+52h] [rbp-506h] BYREF
  char v138; // [rsp+53h] [rbp-505h]
  int v139; // [rsp+54h] [rbp-504h]
  int v140; // [rsp+58h] [rbp-500h]
  char v141; // [rsp+5Ch] [rbp-4FCh]
  char v142; // [rsp+5Dh] [rbp-4FBh]
  char v143; // [rsp+5Eh] [rbp-4FAh]
  char v144; // [rsp+5Fh] [rbp-4F9h]
  char v145; // [rsp+60h] [rbp-4F8h]
  char v146; // [rsp+61h] [rbp-4F7h]
  __int16 v147; // [rsp+62h] [rbp-4F6h]
  __int16 v148; // [rsp+64h] [rbp-4F4h]
  __int16 v149; // [rsp+66h] [rbp-4F2h]
  int appended; // [rsp+68h] [rbp-4F0h]
  int v151; // [rsp+6Ch] [rbp-4ECh]
  int v152; // [rsp+70h] [rbp-4E8h] BYREF
  unsigned int v153; // [rsp+74h] [rbp-4E4h]
  struct _PEB *v154; // [rsp+78h] [rbp-4E0h]
  int v155; // [rsp+80h] [rbp-4D8h]
  int v156; // [rsp+84h] [rbp-4D4h] BYREF
  int v157; // [rsp+88h] [rbp-4D0h]
  int v158; // [rsp+90h] [rbp-4C8h]
  int v159; // [rsp+94h] [rbp-4C4h]
  int v160; // [rsp+98h] [rbp-4C0h]
  int v161; // [rsp+9Ch] [rbp-4BCh]
  int *v162; // [rsp+A0h] [rbp-4B8h]
  __int64 v163; // [rsp+A8h] [rbp-4B0h]
  __int64 v164; // [rsp+B0h] [rbp-4A8h]
  __int64 v165; // [rsp+B8h] [rbp-4A0h]
  int v166; // [rsp+C0h] [rbp-498h]
  int v167; // [rsp+C4h] [rbp-494h]
  int v168; // [rsp+C8h] [rbp-490h]
  int v169; // [rsp+CCh] [rbp-48Ch]
  int v170; // [rsp+D0h] [rbp-488h]
  int v171; // [rsp+D4h] [rbp-484h]
  int v172; // [rsp+D8h] [rbp-480h]
  int v173; // [rsp+DCh] [rbp-47Ch]
  char *v174; // [rsp+E0h] [rbp-478h]
  volatile signed __int32 **v175; // [rsp+E8h] [rbp-470h]
  __int64 v176; // [rsp+F0h] [rbp-468h]
  __int64 v177; // [rsp+F8h] [rbp-460h]
  __int64 v178; // [rsp+100h] [rbp-458h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp-450h] BYREF
  __int64 v180; // [rsp+118h] [rbp-440h]
  __int64 v181; // [rsp+120h] [rbp-438h]
  unsigned __int16 v182; // [rsp+128h] [rbp-430h] BYREF
  void *Src; // [rsp+130h] [rbp-428h]
  void *v184; // [rsp+138h] [rbp-420h]
  void *v185; // [rsp+140h] [rbp-418h]
  void *v186; // [rsp+148h] [rbp-410h]
  int *v187; // [rsp+150h] [rbp-408h]
  _WORD *v188; // [rsp+158h] [rbp-400h]
  _WORD *v189; // [rsp+160h] [rbp-3F8h]
  int v190; // [rsp+168h] [rbp-3F0h]
  char *v191; // [rsp+170h] [rbp-3E8h]
  unsigned __int16 *v192; // [rsp+178h] [rbp-3E0h]
  unsigned __int16 *v193; // [rsp+180h] [rbp-3D8h]
  volatile signed __int32 *v194; // [rsp+188h] [rbp-3D0h]
  __int64 v195; // [rsp+190h] [rbp-3C8h]
  volatile signed __int32 *v196; // [rsp+198h] [rbp-3C0h]
  _WORD *v197; // [rsp+1A0h] [rbp-3B8h]
  __int64 v198; // [rsp+1A8h] [rbp-3B0h]
  int v199; // [rsp+1B0h] [rbp-3A8h]
  __int64 v200; // [rsp+1C0h] [rbp-398h] BYREF
  int v201; // [rsp+1C8h] [rbp-390h]
  __int128 v202; // [rsp+1D0h] [rbp-388h] BYREF
  __int128 v203; // [rsp+1E0h] [rbp-378h]
  __int128 v204; // [rsp+1F0h] [rbp-368h]
  __int64 v205; // [rsp+200h] [rbp-358h]
  _BYTE v206[16]; // [rsp+210h] [rbp-348h] BYREF
  __int16 v207; // [rsp+220h] [rbp-338h]
  __int16 v208; // [rsp+222h] [rbp-336h]
  char *v209; // [rsp+228h] [rbp-330h]
  __int64 v210; // [rsp+230h] [rbp-328h]
  struct _TEB *v211; // [rsp+238h] [rbp-320h]
  __int128 v212; // [rsp+240h] [rbp-318h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+250h] [rbp-308h] BYREF
  int v214; // [rsp+2F0h] [rbp-268h] BYREF
  void *v215; // [rsp+2F8h] [rbp-260h]
  _WORD v216[128]; // [rsp+300h] [rbp-258h] BYREF
  int v217; // [rsp+400h] [rbp-158h] BYREF
  void *v218; // [rsp+408h] [rbp-150h]
  _WORD v219[128]; // [rsp+410h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+558h] [rbp+0h]

  v170 = a4;
  v6 = a3;
  v163 = a3;
  v7 = a2;
  v177 = a2;
  v9 = a5;
  v175 = a5;
  v164 = a6;
  v215 = v216;
  v214 = 0x1000000;
  v216[0] = 0;
  v10 = v219;
  v218 = v219;
  v11 = 0;
  v217 = 0x1000000;
  LOWORD(v12) = 256;
  v219[0] = 0;
  FullPath = 0;
  Length = SourceString->Length;
  if ( !(_WORD)Length )
    goto LABEL_10;
  v15 = SourceString->Length;
  Buffer = SourceString->Buffer;
  v17 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v152, (_DWORD)Buffer, Length);
    v10 = v218;
    LOWORD(v12) = HIWORD(v217);
    v11 = v217;
    v17 = v152;
    goto LABEL_6;
  }
  if ( !NlsMbCodePageTag )
  {
    v17 = 2 * Length;
    goto LABEL_5;
  }
  while ( 1 )
  {
    --v15;
    v134 = (unsigned __int8)*Buffer++;
    if ( NlsLeadByteInfoTable[v134] )
      break;
LABEL_335:
    v17 += 2;
    if ( !v15 )
      goto LABEL_5;
  }
  if ( v15 )
  {
    --v15;
    ++Buffer;
    goto LABEL_335;
  }
  v17 += 2;
LABEL_5:
  v152 = v17;
LABEL_6:
  v18 = v17 + (unsigned int)v11 + 2;
  if ( (unsigned int)v18 > (unsigned __int16)v12 )
  {
    if ( (unsigned int)v18 > 0xFFFE )
    {
      FullPath = -1073741562;
      goto LABEL_7;
    }
    v12 = (v18 + 63) & 0xFFFFFFC0;
    if ( v12 > 0xFFFE )
      v12 = 65534;
    if ( v10 == v219 )
    {
      StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v12);
      v10 = StringRoutine;
      if ( StringRoutine )
      {
        v11 = v217;
        if ( !(_WORD)v217 )
          goto LABEL_348;
        memmove(StringRoutine, v218, (unsigned __int16)v217);
      }
    }
    else
    {
      v10 = (_WORD *)NtdllpReallocateStringRoutine(v12, v10, v18, Buffer);
    }
    v11 = v217;
LABEL_348:
    if ( v10 )
    {
      v218 = v10;
      HIWORD(v217) = v12;
    }
    else
    {
      FullPath = -1073741801;
      v10 = v218;
      LOWORD(v12) = HIWORD(v217);
    }
  }
LABEL_7:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v217) = DestinationString.Length + v217;
  }
  v6 = v163;
LABEL_10:
  if ( FullPath < 0 )
    goto LABEL_352;
  v200 = 72LL;
  v201 = 1;
  v202 = 0LL;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v19 = *(_QWORD *)(v6 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  *((_QWORD *)&v203 + 1) = ~ActiveFrame;
  *(_QWORD *)&v204 = ~v19;
  *((_QWORD *)&v204 + 1) = retaddr;
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    LODWORD(v6) = v163;
    goto LABEL_17;
  }
  *(_QWORD *)&v202 = ActiveFrame;
  *((_QWORD *)&v202 + 1) = v19;
  LODWORD(v203) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v19 )
      goto LABEL_16;
  }
  else if ( !v19 )
  {
LABEL_16:
    LODWORD(v203) = 48;
    goto LABEL_17;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v202;
LABEL_17:
  v22 = *(_DWORD *)(v7 + 32) & 0x1800800;
  v140 = v22;
  FullPath = 0;
  appended = 0;
  v23 = 0;
  if ( (v22 & 0x800008) == 0 )
  {
    v24 = &v217;
    v162 = &v217;
    v25 = NtCurrentPeb();
    v154 = v25;
    v26 = 1;
    v141 = 1;
    v27 = v6 + 88;
    ApiSetMap = v25->ApiSetMap;
    LdrpLogDllState(0LL, &v217, 5328LL);
    FullPath = ApiSetResolveToHost((_DWORD)ApiSetMap, (unsigned int)&v217, v27, (unsigned int)&v137, (__int64)&v182);
    v29 = v137;
    if ( FullPath >= 0 && v137 )
    {
      v30 = v182;
      if ( v182 )
        v31 = 5329;
      else
        v31 = 5330;
    }
    else
    {
      v31 = 5331;
      v30 = v182;
    }
    LdrpLogDllState(0LL, &v217, v31);
    v155 = FullPath;
    if ( !v29 )
      goto LABEL_49;
    if ( v30 )
    {
      LOWORD(v214) = 0;
      SharedData = (int *)NtCurrentPeb()->SharedData;
      if ( !SharedData )
      {
        v171 = 0;
        goto LABEL_26;
      }
      v171 = *SharedData;
      if ( v171 )
        v34 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
LABEL_26:
        v34 = 2147352624LL;
      v198 = v34;
      v180 = 0LL;
      v181 = v34;
      if ( v34 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( *(_WORD *)(v34 + 2 * v35) );
        v36 = 2 * v35;
        v176 = v36;
        v37 = v36;
        if ( v36 >= 0xFFFE )
        {
          LOWORD(v36) = -4;
          v176 = 65532LL;
          v37 = -4;
        }
        LOWORD(v180) = v36;
        WORD1(v180) = v37 + 2;
      }
      else
      {
        LOWORD(v36) = v180;
      }
      v172 = 0;
      if ( (_WORD)v36 )
      {
        v38 = (unsigned __int16)v36 + 2;
        v157 = v38;
        v39 = 0;
        v158 = 0;
        if ( v38 > HIWORD(v214) )
        {
          if ( v38 <= 0xFFFE )
          {
            v118 = ((unsigned __int16)v36 + 65) & 0xFFFFFFC0;
            v157 = v118;
            v119 = v118;
            if ( v118 > 0xFFFE )
            {
              LOWORD(v118) = -2;
              v157 = 65534;
              v119 = 65534;
            }
            if ( v215 == v216 )
            {
              v120 = (void *)NtdllpAllocateStringRoutine(v119);
              v184 = v120;
              if ( v120 && (_WORD)v214 )
                memmove(v120, v215, (unsigned __int16)v214);
            }
            else
            {
              v120 = (void *)NtdllpReallocateStringRoutine(v119, v215, 0LL, v32);
              v184 = v120;
            }
            if ( v120 )
            {
              v215 = v120;
              HIWORD(v214) = v118;
            }
            else
            {
              v39 = -1073741801;
              v158 = -1073741801;
            }
            v25 = v154;
            LODWORD(v24) = (_DWORD)v162;
          }
          else
          {
            v39 = -1073741562;
            v158 = -1073741562;
          }
        }
        v172 = v39;
        if ( v39 >= 0 )
        {
          memmove((char *)v215 + (unsigned __int16)v214, (const void *)v34, (unsigned __int16)v36);
          LOWORD(v214) = v36 + v214;
          *((_WORD *)v215 + ((unsigned __int64)(unsigned __int16)v214 >> 1)) = 0;
        }
      }
      v173 = 0;
      v40 = (unsigned __int16)v214 + 22;
      LODWORD(v165) = v40;
      v41 = 0;
      v159 = 0;
      if ( v40 > HIWORD(v214) )
      {
        if ( v40 <= 0xFFFE )
        {
          v121 = ((unsigned __int16)v214 + 85) & 0xFFFFFFC0;
          LODWORD(v165) = v121;
          v122 = v121;
          if ( v121 > 0xFFFE )
          {
            LOWORD(v121) = -2;
            LODWORD(v165) = 65534;
            v122 = 65534;
          }
          if ( v215 == v216 )
          {
            v123 = (void *)NtdllpAllocateStringRoutine(v122);
            v185 = v123;
            if ( v123 && (_WORD)v214 )
              memmove(v123, v215, (unsigned __int16)v214);
          }
          else
          {
            v123 = (void *)NtdllpReallocateStringRoutine(v122, v215, 0LL, v32);
            v185 = v123;
          }
          if ( v123 )
          {
            v215 = v123;
            HIWORD(v214) = v121;
          }
          else
          {
            v41 = -1073741801;
            v159 = -1073741801;
          }
        }
        else
        {
          v41 = -1073741562;
          v159 = -1073741562;
        }
      }
      v173 = v41;
      if ( v41 >= 0 )
      {
        v42 = (char *)v215 + (unsigned __int16)v214;
        *(_OWORD *)v42 = *(_OWORD *)L"\\SYSTEM32\\";
        *((_DWORD *)v42 + 4) = *(_DWORD *)L"2\\";
        LOWORD(v214) = v214 + 20;
        *((_WORD *)v215 + ((unsigned __int64)(unsigned __int16)v214 >> 1)) = 0;
      }
      v166 = 0;
      v43 = v182;
      v44 = v182 + (unsigned __int16)v214 + 2;
      LODWORD(v154) = v44;
      FullPath = 0;
      v160 = 0;
      if ( v44 > HIWORD(v214) )
      {
        if ( v44 <= 0xFFFE )
        {
          v124 = (v44 + 63) & 0xFFFFFFC0;
          LODWORD(v154) = v124;
          v125 = v124;
          if ( v124 > 0xFFFE )
          {
            LOWORD(v124) = -2;
            LODWORD(v154) = 65534;
            v125 = 65534;
          }
          if ( v215 == v216 )
          {
            v126 = (void *)NtdllpAllocateStringRoutine(v125);
            v186 = v126;
            if ( v126 && (_WORD)v214 )
              memmove(v126, v215, (unsigned __int16)v214);
          }
          else
          {
            v126 = (void *)NtdllpReallocateStringRoutine(v125, v215, 0LL, v32);
            v186 = v126;
          }
          if ( v126 )
          {
            v215 = v126;
            HIWORD(v214) = v124;
          }
          else
          {
            FullPath = -1073741801;
            v160 = -1073741801;
          }
          LODWORD(v24) = (_DWORD)v162;
        }
        else
        {
          FullPath = -1073741562;
          v160 = -1073741562;
        }
      }
      v166 = FullPath;
      if ( FullPath >= 0 )
      {
        memmove((char *)v215 + (unsigned __int16)v214, Src, v43);
        LOWORD(v214) = v43 + v214;
        *((_WORD *)v215 + ((unsigned __int64)(unsigned __int16)v214 >> 1)) = 0;
      }
      v155 = FullPath;
      if ( FullPath >= 0 )
      {
        ProcessParameters = v25->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v26 = 0;
        v141 = v26;
        v24 = &v214;
        v162 = &v214;
      }
      v23 = 0;
LABEL_49:
      if ( FullPath >= 0 && v26 && !LdrpIsSecureProcess )
      {
        v116 = RtlDosApplyFileIsolationRedirection_Ustr(
                 1,
                 (_DWORD)v24,
                 (unsigned int)L"\b\n",
                 0,
                 (__int64)v206,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
        if ( v116 >= 0 )
        {
          v23 = 1;
          LdrpGetFullPath(v206, &v214);
          LdrpFreeUnicodeString(v206);
        }
        if ( v116 != -1072365560 )
        {
          FullPath = v116;
          v155 = v116;
        }
      }
    }
    else
    {
      FullPath = -1073740671;
      v155 = -1073740671;
    }
    appended = FullPath;
    v22 = v140;
    v9 = v175;
    v7 = v177;
  }
  if ( FullPath < 0 )
    goto LABEL_283;
  v46 = &v217;
  v187 = &v217;
  if ( !(_WORD)v214 )
  {
    v117 = (char *)v218 + (unsigned __int16)v217;
    v188 = v117;
    while ( 1 )
    {
      v188 = --v117;
      if ( v117 < v218 )
        break;
      if ( *v117 == 92 || *v117 == 47 )
      {
        v142 = 0;
        if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v217) != 5 )
        {
          FullPath = LdrpGetFullPath(&v217, &v214);
          appended = FullPath;
          if ( FullPath >= 0 )
          {
            v22 |= 0x600u;
            v140 = v22;
          }
          goto LABEL_58;
        }
LABEL_231:
        appended = LdrpAppendUnicodeStringToFilenameBuffer(&v214, &v217);
        FullPath = appended;
        goto LABEL_58;
      }
    }
    v142 = 1;
    v22 |= 0x20u;
    v140 = v22;
    goto LABEL_231;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
  {
    v127 = "SxS";
    if ( !v23 )
      v127 = "API set";
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2680,
      (unsigned int)"LdrpPreprocessDllName",
      2,
      (__int64)"DLL %wZ was redirected to %wZ by %s\n",
      &v217,
      &v214,
      v127);
  }
  v22 |= 0x200u;
  v140 = v22;
  if ( v23 )
  {
    v22 |= 4u;
    v140 = v22;
  }
  v46 = &v214;
  v187 = &v214;
LABEL_58:
  if ( FullPath < 0 )
    goto LABEL_283;
  v47 = *((_QWORD *)v46 + 1);
  v48 = (_WORD *)(v47 + *(unsigned __int16 *)v46);
  v189 = v48;
  v143 = 0;
  while ( 1 )
  {
    v189 = --v48;
    if ( (unsigned __int64)v48 < v47 )
    {
LABEL_232:
      FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v214, L"\b\n");
      appended = FullPath;
      goto LABEL_197;
    }
    v49 = *v48;
    if ( *v48 == 46 )
      break;
    if ( v49 == 47 || v49 == 92 )
      goto LABEL_232;
  }
  v143 = 1;
  v106 = (char *)v215 + (unsigned __int16)v214;
  v197 = v106;
  while ( 1 )
  {
    v197 = --v106;
    if ( v106 < v215 || *v106 != 46 )
      break;
    LOWORD(v214) = v214 - 2;
  }
  v106[1] = 0;
LABEL_197:
  if ( FullPath < 0 )
  {
LABEL_283:
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v136) = FullPath;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2738,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        &v217,
        v136);
    }
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
  }
  v139 = FullPath;
  if ( FullPath < 0 )
    goto LABEL_321;
  if ( (v22 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v7 + 168),
                 (unsigned int)&v214,
                 *(_QWORD *)(v7 + 16),
                 v22,
                 v163,
                 (__int64)v9,
                 *(_QWORD *)(v7 + 40));
    v139 = FullPath;
    goto LABEL_321;
  }
  v107 = (_QWORD *)v164;
  if ( !*(_QWORD *)v164 )
  {
    v190 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
    *v107 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v139 = -1073741801;
      goto LABEL_321;
    }
  }
  v65 = *(_QWORD *)(v7 + 40);
  v176 = v65;
  v64 = v22;
  LODWORD(v154) = v22;
  v66 = *(_QWORD *)(v7 + 16);
  v165 = v66;
  *v9 = 0LL;
  v156 = 0;
  if ( (v22 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName((unsigned int)&v214, 0, v22, (_DWORD)v9, (__int64)&v156);
    v151 = FullPath;
    goto LABEL_100;
  }
  if ( (v22 & 0x200) == 0 )
  {
    v151 = -1073741515;
    goto LABEL_170;
  }
  v174 = (char *)v215 + (unsigned __int16)v214;
  for ( i = v174 - 2; ; i -= 2 )
  {
    v109 = i;
    v174 = i;
    if ( i <= v215 )
      break;
    if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
    {
      i += 2;
      v174 = v109 + 2;
      LOWORD(v109) = (_WORD)v109 + 2;
      break;
    }
  }
  v110 = (_WORD)v109 - (_WORD)v215;
  v209 = i;
  v207 = v214 - v110;
  v208 = HIWORD(v214) - v110;
  v111 = 0;
  v168 = 0;
  v191 = i;
  v153 = 0;
  v112 = (unsigned __int16)(v214 - v110) >> 1;
  v167 = v112;
  while ( 2 )
  {
    v113 = v112--;
    v167 = v112;
    if ( v113 )
    {
      v114 = *(unsigned __int16 *)i;
      i += 2;
      v191 = i;
      if ( (unsigned int)v114 < 0x61 )
        goto LABEL_214;
      if ( (unsigned int)v114 <= 0x7A )
      {
        LOWORD(v114) = v114 - 32;
        goto LABEL_214;
      }
      if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v114 >= 0xC0u )
      {
        LOWORD(v114) = v114
                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                + 2
                                * ((v114 & 0xF)
                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                       + 2LL
                                                       * (((unsigned __int8)v114 >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                            + 2 * (v114 >> 8))))));
        v147 = v114;
      }
      else
      {
LABEL_214:
        v147 = v114;
      }
      v111 = (unsigned __int16)v114 + 65599 * v111;
      v168 = v111;
      continue;
    }
    break;
  }
  v153 = v111;
  v50 = v111;
  if ( !v111 )
  {
    v50 = 0x80000000;
    v153 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v52 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v50 & 0x1F));
  LOBYTE(v53) = 0;
  v54 = *v52;
  while ( 2 )
  {
    if ( v54 == v52 )
    {
      v9 = v175;
      goto LABEL_91;
    }
    v55 = (volatile signed __int32 *)(v54 - 14);
    if ( v50 != *((_DWORD *)v54 + 38) || ((unsigned __int8)v154 & 8) != 0 && (v55[26] & 1) == 0 )
    {
LABEL_85:
      v54 = (_QWORD *)*v54;
      continue;
    }
    break;
  }
  v53 = (unsigned __int16)v214;
  if ( (unsigned __int16)v214 != *((unsigned __int16 *)v55 + 36) )
  {
LABEL_84:
    LOBYTE(v53) = 0;
    goto LABEL_85;
  }
  v56 = (unsigned __int16 *)v215;
  v192 = (unsigned __int16 *)v215;
  v57 = (unsigned __int16 *)*((_QWORD *)v55 + 10);
  v193 = v57;
  while ( v56 < (unsigned __int16 *)((char *)v215 + (unsigned __int16)v214) )
  {
    v58 = *v56;
    v59 = *v57;
    if ( (_WORD)v58 == (_WORD)v59 )
      goto LABEL_75;
    if ( (unsigned int)v58 < 0x61 )
      goto LABEL_79;
    if ( (unsigned int)v58 <= 0x7A )
    {
      LOWORD(v58) = v58 - 32;
LABEL_79:
      v53 = 192LL;
LABEL_80:
      v148 = v58;
      goto LABEL_81;
    }
    if ( !Nls844UnicodeUpcaseTable )
      goto LABEL_79;
    v53 = 192LL;
    if ( (unsigned __int16)v58 < 0xC0u )
      goto LABEL_80;
    v51 = *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                              + 2
                              * ((v58 & 0xF)
                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                     + 2LL
                                                     * (((unsigned __int8)v58 >> 4)
                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                          + 2 * (v58 >> 8))))));
    LOWORD(v51) = v58 + v51;
    LOWORD(v58) = v51;
    v148 = v51;
    v53 = 192LL;
LABEL_81:
    if ( (unsigned int)v59 < 0x61 )
      goto LABEL_82;
    if ( (unsigned int)v59 <= 0x7A )
    {
      LOWORD(v59) = v59 - 32;
LABEL_82:
      v149 = v59;
      goto LABEL_83;
    }
    if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v59 < 0xC0u )
      goto LABEL_82;
    v53 = (unsigned __int8)v59 >> 4;
    v51 = *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                              + 2
                              * ((v59 & 0xF)
                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                     + 2LL
                                                     * ((unsigned int)v53
                                                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v59 >> 8))))));
    LOWORD(v51) = v59 + v51;
    LOWORD(v59) = v51;
    v149 = v51;
LABEL_83:
    if ( (_WORD)v58 != (_WORD)v59 )
      goto LABEL_84;
LABEL_75:
    v192 = ++v56;
    v193 = ++v57;
  }
  LOBYTE(v53) = 1;
  v60 = *((_QWORD *)v55 + 19);
  if ( *(_DWORD *)(v60 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v60 - 56LL) & 0x20) != 0 )
  {
    v144 = 1;
  }
  else
  {
    v144 = 0;
    _InterlockedIncrement(v55 + 69);
  }
  v9 = v175;
  *v175 = v55;
LABEL_91:
  if ( (_BYTE)v53 )
  {
    FullPath = 0;
    v53 = (__int64)&v156;
    v156 = *(_DWORD *)(*((_QWORD *)*v9 + 19) + 56LL);
  }
  else
  {
    FullPath = -1073741515;
  }
  v61 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v61 != 1 )
  {
    do
    {
      v53 = v61 & 6;
      v101 = 3LL;
      if ( v53 != 2 )
        v101 = -1LL;
      v51 = v61 + v101;
      v102 = v61;
      v61 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v51, v61);
    }
    while ( v102 != v61 );
    if ( v53 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v51, 0);
  }
  if ( FullPath < 0 )
    v161 = 3;
  else
    v161 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v51) )
    v63 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v63 = 2147353476LL;
  if ( *(_BYTE *)v63 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v128 = (unsigned int)RtlGetCurrentServiceSessionId(v63, v62)
         ? (char *)NtCurrentPeb()->SharedData + 555
         : (char *)2147353477;
    if ( (*v128 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v161, (__int64)&v214, 0LL);
  }
  v151 = FullPath;
  LOWORD(v22) = v140;
  v64 = (int)v154;
  v65 = v176;
  LODWORD(v66) = v165;
  v7 = v177;
LABEL_100:
  if ( FullPath != -1073741515 )
  {
    if ( v156 < 0 )
    {
      v129 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v212 = *(_OWORD *)(*v9 + 18);
        LODWORD(v136) = v156;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          2979,
          (unsigned int)"LdrpFindOrPrepareLoadingModule",
          0,
          (__int64)"Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
          &v212,
          v136);
        v129 = LdrpDebugFlags;
      }
      if ( (v129 & 0x10) != 0 )
        __debugbreak();
      FullPath = -1073741595;
      v151 = -1073741595;
      LdrpDereferenceModule(*v9);
      *v9 = 0LL;
    }
    else
    {
      v67 = *v9;
      v169 = 0;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v69 = *((_QWORD *)v67 + 19);
      v70 = *(_DWORD *)(v69 + 24);
      if ( v70 != -1 )
      {
        if ( v70 )
        {
          *(_DWORD *)(v69 + 24) = v70 + 1;
        }
        else
        {
          v211 = NtCurrentTeb();
          v68 = 4096LL;
          if ( (v211->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v69 + 28);
          else
            v169 = -1073741515;
        }
      }
      v71 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v71 != 1 )
      {
        do
        {
          v103 = v71 & 6;
          v104 = 3LL;
          if ( v103 != 2 )
            v104 = -1LL;
          v68 = v71 + v104;
          v105 = v71;
          v71 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v68, v71);
        }
        while ( v105 != v71 );
        if ( v103 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v68, 0);
      }
      LOWORD(v22) = v140;
    }
    goto LABEL_105;
  }
LABEL_170:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&v214, v66, v64, v170, v163, (__int64)v9, v65);
  v151 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*((_BYTE **)*v9 + 22));
    v151 = FullPath;
  }
LABEL_105:
  v139 = FullPath;
  if ( *v9 )
  {
    v72 = v22 & 0x400;
    if ( v72 && FullPath == -1073741515 )
    {
      v130 = *((_QWORD *)*v9 + 22);
      v210 = v130;
      *(_DWORD *)(v130 + 32) |= 0x4000000u;
      LOBYTE(v68) = 1;
      LdrpProcessWork(v130, v68);
      FullPath = **(_DWORD **)(v130 + 40);
      v139 = FullPath;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v73 = *v9;
    v74 = v73;
    v194 = *v9;
    if ( v73 )
    {
      v75 = *((_QWORD *)v73 + 22);
      if ( v75 )
      {
        if ( (*(_DWORD *)(v75 + 32) & 0x80000) == 0 && *(volatile signed __int32 **)(v75 + 56) != v73 )
        {
          v74 = *(volatile signed __int32 **)(v75 + 56);
          v194 = v74;
          *(_QWORD *)(v75 + 56) = v73;
        }
      }
    }
    v196 = v74;
    v76 = (__int64 *)v164;
    *(_DWORD *)(*(_QWORD *)v164 + 24LL) &= ~1u;
    v77 = *v76;
    v178 = *v76;
    v78 = *((_QWORD *)v74 + 19);
    v79 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL);
    if ( v79 == v78 )
      goto LABEL_113;
    if ( *(_DWORD *)(v78 + 56) != 9 )
      goto LABEL_146;
    if ( *(_DWORD *)(v78 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v78 - 56LL) & 0x20) != 0 )
    {
      v145 = 1;
      goto LABEL_113;
    }
    v145 = 0;
LABEL_146:
    v90 = *(_QWORD **)(v79 + 40);
    if ( v90 )
    {
      v91 = *(_QWORD **)(v79 + 40);
      while ( 1 )
      {
        v91 = (_QWORD *)*v91;
        if ( v91[1] == v78 )
          break;
        if ( v91 == v90 )
          goto LABEL_150;
      }
LABEL_113:
      v138 = 1;
      v80 = *(_DWORD *)(v78 + 24);
      if ( (unsigned int)(v80 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v78 + 24) = v80 - 1;
    }
    else
    {
LABEL_150:
      v138 = 0;
      if ( !v77 )
      {
        v199 = NtdllBaseTag + 2359296;
        v131 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
        v77 = v131;
        v178 = v131;
        if ( !v131 )
        {
          MEMORY[0] = -1073741801;
          v77 = 0LL;
          v76 = (__int64 *)v164;
          goto LABEL_115;
        }
        *(_DWORD *)(v131 + 24) |= 1u;
      }
      v92 = *(__int64 **)(v79 + 40);
      if ( v92 )
      {
        *(_QWORD *)v77 = *v92;
        *v92 = v77;
      }
      else
      {
        *(_QWORD *)v77 = v77;
      }
      *(_QWORD *)(v79 + 40) = v77;
      *(_QWORD *)(v77 + 8) = v78;
      v93 = (_QWORD *)(v77 + 16);
      v94 = *(_QWORD **)(v78 + 48);
      if ( v94 )
      {
        *v93 = *v94;
        *v94 = v93;
      }
      else
      {
        *v93 = v93;
      }
      *(_QWORD *)(v78 + 48) = v93;
      v95 = (*(_DWORD *)(v77 + 24) & 1) == 0;
      v96 = *(_DWORD *)(v77 + 24) & 1;
      *(_QWORD *)(v77 + 24) = v79;
      if ( !v95 )
        *(_DWORD *)(v77 + 24) = v96 | v79 & 0xFFFFFFFE;
      v77 = 0LL;
      v178 = 0LL;
      v76 = (__int64 *)v164;
    }
LABEL_115:
    v195 = v77;
    *v76 = v77;
    if ( FullPath != -1073741515 )
    {
      if ( FullPath != -1073741267 )
        goto LABEL_117;
      v139 = 0;
      goto LABEL_118;
    }
    FullPath = -1073741515;
    if ( !v72 )
    {
      LdrpQueueWork(*((_QWORD *)v74 + 22));
      v139 = 0;
      v76 = (__int64 *)v164;
      goto LABEL_118;
    }
LABEL_117:
    if ( FullPath >= 0 )
    {
LABEL_118:
      v81 = *(_DWORD *)(v7 + 100);
      if ( v81 )
      {
        if ( *v76 || *(int *)(*((_QWORD *)v74 + 19) + 56LL) >= 2 )
          *(_DWORD *)(v7 + 100) = v81 - 1;
      }
      else if ( *(int *)(*((_QWORD *)v74 + 19) + 56LL) < 2 )
      {
        *(_QWORD *)(v7 + 80) = v74;
        *(_DWORD *)(v7 + 100) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL) + 56LL) = 3;
        v139 = 259;
      }
    }
    v82 = *((_QWORD *)v74 + 19);
    if ( *(_DWORD *)(v82 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v82 - 56LL) & 0x20) != 0 )
    {
      v146 = 1;
    }
    else
    {
      v146 = 0;
      if ( _InterlockedExchangeAdd(v74 + 69, 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v85 = *((_QWORD *)v74 + 20);
        v86 = (volatile signed __int32 **)*((_QWORD *)v74 + 21);
        if ( *(volatile signed __int32 **)(v85 + 8) != v74 + 40 || *v86 != v74 + 40 )
          __fastfail(3u);
        *v86 = (volatile signed __int32 *)v85;
        *(_QWORD *)(v85 + 8) = v86;
        v87 = (_QWORD *)*((_QWORD *)v74 + 19);
        v88 = (_QWORD *)*v87;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)v74 + 55) )
          LdrpReleaseTlsEntry(v74, 0LL);
        LdrpUnmapModule(v74);
        v89 = (volatile signed __int32 *)*((_QWORD *)v74 + 17);
        if ( (unsigned __int64)v89 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v89);
        if ( *((_QWORD *)v74 + 10) )
          LdrpFreeUnicodeString(v74 + 18);
        RtlFreeHeap(LdrpHeap, 0LL, v74);
        if ( v88 == v87 )
          LdrpDestroyNode(v87);
      }
    }
    v83 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
    if ( v83 != 1 )
    {
      do
      {
        v97 = v83 & 6;
        v98 = 3LL;
        if ( v97 != 2 )
          v98 = -1LL;
        v99 = v83 + v98;
        v100 = v83;
        v83 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v99, v83);
      }
      while ( v100 != v83 );
      if ( v97 == 2 )
        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v99, 0);
    }
    v84 = v196;
    if ( v196 != *v9 )
    {
      LdrpFreeReplacedModule();
      *v9 = v84;
    }
    FullPath = v139;
  }
LABEL_321:
  RtlDeactivateActivationContextUnsafeFast(&v200);
  v132 = v218;
  if ( FullPath < 0 )
  {
LABEL_352:
    *v9 = 0LL;
    **(_DWORD **)(v7 + 40) = FullPath;
    v132 = v218;
  }
  if ( v219 != v132 )
    NtdllpFreeStringRoutine(v132);
  v218 = v219;
  v217 = 0x1000000;
  v219[0] = 0;
  if ( v216 != v215 )
    NtdllpFreeStringRoutine(v215);
  return (unsigned int)FullPath;
}
