__int64 __fastcall SubmitPresentHistoryToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10,
        char *a11)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v12; // r13
  struct _PRESENT_REDIRECTED_PARAMS *v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v21; // rcx
  PVOID *v22; // rax
  struct COREDEVICEACCESS *v23; // rbx
  COREACCESS *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct CWin32kLocks *v28; // rax
  union _LARGE_INTEGER *v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  const char *v37; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v38; // rbx
  union _SLIST_HEADER *v39; // rdi
  PSLIST_ENTRY v40; // rsi
  PLARGE_INTEGER v41; // rbx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  int v45; // ecx
  DWORD LowPart; // eax
  struct CRefCountedBuffer *v47; // rsi
  unsigned int v48; // eax
  union _SLIST_HEADER *v49; // rdi
  int v50; // ecx
  DXGPRESENTHISTORYTOKENQUEUE *v51; // rax
  DXGADAPTER *v52; // rcx
  struct CRefCountedBuffer *v53; // rax
  bool v54; // cc
  struct DXGK_PRESENT_PARAMS *v55; // rdx
  unsigned int v56; // eax
  void *v57; // r8
  int v58; // eax
  int v59; // eax
  struct DXGK_PRESENT_PARAMS *v60; // rcx
  DXGADAPTER *v61; // rax
  struct DXGGLOBAL *Global; // rax
  struct CRefCountedBuffer *v63; // rcx
  DXGSYNCOBJECT *v64; // rdx
  __int64 v65; // rdx
  _BYTE *v67; // rbx
  __int64 v68; // rax
  int v69; // edx
  unsigned int v70; // eax
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  int v74; // ecx
  _DWORD *v75; // rbx
  int v76; // edx
  unsigned int v77; // eax
  const wchar_t *v78; // r9
  int v79; // r9d
  char *v80; // rdx
  int LiveDumpWithWdLogs2; // eax
  unsigned __int8 IsDebuggerPresent; // al
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // eax
  __int64 v87; // r10
  char *v88; // rdx
  unsigned int v89; // ecx
  const wchar_t *v90; // r9
  unsigned int v91; // ecx
  __int64 v92; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v94; // r8d
  struct ADAPTER_RENDER *v95; // rsi
  __int64 v96; // rdi
  struct DXGK_PRESENT_PARAMS *v97; // rbx
  int v98; // r9d
  DWORD v99; // r9d
  union _LARGE_INTEGER v100; // rax
  LONG v101; // r10d
  DWORD v102; // r11d
  __int64 QuadPart; // rdx
  unsigned int *p_HighPart; // r8
  __int128 v105; // xmm1
  DWORD v106; // r12d
  __int64 v107; // rcx
  unsigned int v108; // r11d
  __int64 v109; // rsi
  unsigned __int64 v110; // r10
  int v111; // ecx
  unsigned int v112; // r8d
  int v113; // edx
  struct DXGK_PRESENT_PARAMS *v114; // rdx
  _BYTE *Pool2; // r9
  __int64 v116; // rax
  unsigned int v117; // r8d
  __int64 v118; // r10
  __int64 v119; // r11
  __int64 v120; // rcx
  int v121; // eax
  _BYTE *v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // r9
  int v125; // edx
  char *v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // r8
  int v129; // edx
  DXGSYNCOBJECT *v130; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  DXGSESSIONMGR *v136; // r12
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v139; // r12d
  unsigned int v140; // eax
  __int64 v141; // rdx
  int v142; // ecx
  struct _EX_RUNDOWN_REF *v143; // rdx
  struct _PRESENT_REDIRECTED_PARAMS *v144; // rcx
  bool v145; // zf
  void *v146; // rcx
  __int64 v147; // rcx
  unsigned __int64 v148; // r15
  unsigned int v149; // r12d
  struct _EX_RUNDOWN_REF *v150; // r13
  __int64 v151; // rbx
  struct DXGPROCESS *v152; // rax
  __int64 v153; // rbx
  struct DXGPROCESS *v154; // rax
  _QWORD *v155; // r8
  __int64 WaitMode; // [rsp+20h] [rbp-160h]
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-158h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-150h]
  __int64 v159; // [rsp+40h] [rbp-140h]
  char v160; // [rsp+40h] [rbp-140h]
  __int64 v161; // [rsp+48h] [rbp-138h]
  int v162; // [rsp+100h] [rbp-80h]
  LONG HighPart; // [rsp+100h] [rbp-80h]
  int v164; // [rsp+100h] [rbp-80h]
  unsigned int v165; // [rsp+100h] [rbp-80h]
  struct CRefCountedBuffer *v167; // [rsp+108h] [rbp-78h]
  DXGSYNCOBJECT *v168; // [rsp+110h] [rbp-70h]
  char v169; // [rsp+118h] [rbp-68h]
  unsigned int v170; // [rsp+11Ch] [rbp-64h]
  unsigned int v171; // [rsp+120h] [rbp-60h]
  DXGADAPTER *v172; // [rsp+128h] [rbp-58h]
  __int64 v173; // [rsp+130h] [rbp-50h]
  __int64 v174; // [rsp+130h] [rbp-50h]
  char v175; // [rsp+130h] [rbp-50h]
  struct DXGPROCESS *v177; // [rsp+138h] [rbp-48h]
  unsigned int v178; // [rsp+13Ch] [rbp-44h]
  unsigned int v179; // [rsp+140h] [rbp-40h] BYREF
  struct DXGK_PRESENT_PARAMS *v180; // [rsp+148h] [rbp-38h]
  struct ADAPTER_RENDER *v181; // [rsp+150h] [rbp-30h]
  struct CRefCountedBuffer *v182; // [rsp+158h] [rbp-28h] BYREF
  void *Src; // [rsp+160h] [rbp-20h]
  PVOID v184; // [rsp+168h] [rbp-18h]
  __int16 v185; // [rsp+170h] [rbp-10h] BYREF
  __int16 v186; // [rsp+172h] [rbp-Eh] BYREF
  union _SLIST_HEADER *v187; // [rsp+178h] [rbp-8h]
  struct CRefCountedBuffer *v188; // [rsp+180h] [rbp+0h]
  PLARGE_INTEGER v189; // [rsp+188h] [rbp+8h]
  DXGPRESENTHISTORYTOKENQUEUE *v190; // [rsp+190h] [rbp+10h]
  unsigned __int64 v191; // [rsp+198h] [rbp+18h] BYREF
  struct _PRESENT_REDIRECTED_PARAMS *v192; // [rsp+1A0h] [rbp+20h]
  __int64 v193; // [rsp+1A8h] [rbp+28h]
  struct DXGGLOBAL *v194; // [rsp+1B0h] [rbp+30h] BYREF
  char v195; // [rsp+1B8h] [rbp+38h]
  struct _EX_RUNDOWN_REF *v196; // [rsp+1C0h] [rbp+40h] BYREF
  PVOID Entry; // [rsp+1C8h] [rbp+48h] BYREF
  struct ADAPTER_RENDER *v198; // [rsp+1D0h] [rbp+50h]
  int v199; // [rsp+1D8h] [rbp+58h] BYREF
  int v200; // [rsp+1DCh] [rbp+5Ch] BYREF
  int v201; // [rsp+1E0h] [rbp+60h] BYREF
  int v202; // [rsp+1E4h] [rbp+64h] BYREF
  int v203; // [rsp+1E8h] [rbp+68h] BYREF
  int v204; // [rsp+1ECh] [rbp+6Ch] BYREF
  int Alignment; // [rsp+1F0h] [rbp+70h] BYREF
  int v206; // [rsp+1F4h] [rbp+74h] BYREF
  int v207; // [rsp+1F8h] [rbp+78h] BYREF
  int v208; // [rsp+1FCh] [rbp+7Ch] BYREF
  int v209; // [rsp+200h] [rbp+80h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v210; // [rsp+208h] [rbp+88h]
  int v211; // [rsp+210h] [rbp+90h] BYREF
  __int128 v212; // [rsp+218h] [rbp+98h]
  __int64 v213; // [rsp+228h] [rbp+A8h]
  signed __int64 v214; // [rsp+230h] [rbp+B0h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+238h] [rbp+B8h]
  __int128 v216; // [rsp+240h] [rbp+C0h]
  __int128 v217; // [rsp+250h] [rbp+D0h]
  __int64 v218; // [rsp+260h] [rbp+E0h] BYREF
  __int64 v219; // [rsp+268h] [rbp+E8h] BYREF
  void *v220; // [rsp+270h] [rbp+F0h] BYREF
  __int64 v221; // [rsp+278h] [rbp+F8h] BYREF
  struct CRefCountedBuffer *v222; // [rsp+280h] [rbp+100h] BYREF
  PVOID Object[2]; // [rsp+288h] [rbp+108h] BYREF
  _BYTE v224[24]; // [rsp+298h] [rbp+118h] BYREF
  PVOID P; // [rsp+2B0h] [rbp+130h]
  _BYTE v226[64]; // [rsp+2B8h] [rbp+138h] BYREF
  int v227; // [rsp+2F8h] [rbp+178h]
  _BYTE v229[64]; // [rsp+300h] [rbp+180h] BYREF
  _BYTE v230[64]; // [rsp+340h] [rbp+1C0h] BYREF
  char v231[64]; // [rsp+380h] [rbp+200h] BYREF
  _DWORD v232[16]; // [rsp+3C0h] [rbp+240h] BYREF

  v12 = a8;
  v189 = a6;
  v180 = a7;
  Src = a1;
  v13 = a10;
  v210 = a8;
  v192 = a10;
  if ( !a9 )
  {
    if ( a10 && *((_DWORD *)a10 + 2) && *(_QWORD *)a10 )
    {
      v173 = *(_QWORD *)a10;
      v170 = *((_DWORD *)a10 + 2);
      goto LABEL_4;
    }
    LODWORD(v14) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v78 = L"Sync Object and pPresentRedirected must be specified when context is null, returning 0x%I64x";
LABEL_317:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v78, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v14;
  }
  if ( a10 )
  {
    LODWORD(v14) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v78 = L"Context can not be with sync object, returning 0x%I64x";
    goto LABEL_317;
  }
  v170 = 0;
  v173 = 0LL;
  v13 = *(struct _PRESENT_REDIRECTED_PARAMS **)(*((_QWORD *)a9 + 2) + 16LL);
LABEL_4:
  v14 = *((_QWORD *)v13 + 2);
  v15 = *(_QWORD *)(v14 + 2928);
  v172 = (DXGADAPTER *)v14;
  v181 = (struct ADAPTER_RENDER *)v15;
  v16 = *(_QWORD *)(v15 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    WdLogSingleEntry1(1LL, 3051LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderCore->IsCoreResourceSharedOwner()",
      3051LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v15 != -976 && *(struct _KTHREAD **)(v15 + 984) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 976, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v79 = *(_DWORD *)(v15 + 1000);
      if ( v79 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (const EVENT_DESCRIPTOR *)"g", v18, v79);
    }
    ExAcquirePushLockSharedEx(v15 + 976, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 992));
  CurrentProcess = PsGetCurrentProcess(v17);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v15 + 1008)
    || (v21 = 8LL * ProcessSessionId, !*(_QWORD *)(v21 + *(_QWORD *)(v15 + 1016)))
    || (_mm_lfence(),
        v22 = *(PVOID **)(v21 + *(_QWORD *)(v15 + 1016)),
        (v190 = (DXGPRESENTHISTORYTOKENQUEUE *)v22) == 0LL) )
  {
    WdLogSingleEntry1(4LL, v14);
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 992));
    LODWORD(v14) = -1073741811;
    ExReleasePushLockSharedEx(v15 + 976, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v14;
  }
  v184 = v22[8];
  ObfReferenceObject(v184);
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 992));
  ExReleasePushLockSharedEx(v15 + 976, 0LL);
  KeLeaveCriticalRegion();
  v23 = a2;
  v24 = (struct COREDEVICEACCESS *)((char *)a2 + 8);
  if ( !*((_BYTE *)a2 + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
  v25 = *((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v25 + 184) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v25, *((char **)a2 + 5));
  *((_QWORD *)a2 + 5) = 0LL;
  if ( *((_BYTE *)a2 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
  if ( *((_BYTE *)a3 + 16) )
  {
    v26 = *((_QWORD *)a3 + 1) + 136LL;
    *((_BYTE *)a3 + 16) = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v26 + 16));
    ExReleasePushLockSharedEx(v26, 0LL);
    KeLeaveCriticalRegion();
    v27 = *((_QWORD *)a3 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v27 + 16), (struct DXGADAPTER *)v27);
  }
  v28 = a4;
  if ( a4 )
  {
    if ( *((_QWORD *)a4 + 2) )
    {
      (*(void (**)(void))(*((_QWORD *)a4 + 3) + 24LL))();
      v28 = a4;
      *((_QWORD *)a4 + 2) = 0LL;
    }
    if ( *(_QWORD *)v28 )
    {
      DXGSTABLEVISRGNANDSPRITE::vUnlock((struct CWin32kLocks *)((char *)v28 + 32));
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 288LL))(*(_QWORD *)a4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
      *(_QWORD *)a4 = 0LL;
    }
  }
  Object[0] = (PVOID)(v14 + 2896);
  Object[1] = v184;
  v29 = (union _LARGE_INTEGER *)&v218;
  if ( v189 )
    v29 = v189;
  v218 = -200000000LL;
  v187 = (union _SLIST_HEADER *)v29;
  v30 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v29, 0LL);
  if ( !v30 )
  {
    WdLogSingleEntry1(4LL, v14);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
LABEL_138:
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v80);
    LODWORD(v14) = -1073741130;
    goto LABEL_95;
  }
  if ( v30 != 258 )
    goto LABEL_32;
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v14 + 4740)) <= 2 )
  {
    v213 = 1LL;
    LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2068LL, 0LL, 0LL, 0LL, 1LL);
    LODWORD(v188) = *(_DWORD *)(v14 + 404);
    v31 = *(unsigned int *)(v14 + 408);
    HIDWORD(v188) = *(_DWORD *)(v14 + 408);
    v162 = LiveDumpWithWdLogs2;
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000040000LL) )
      {
        LOBYTE(v31) = 1;
        v199 = *(unsigned __int8 *)(v14 + 209);
        IsDebuggerPresent = WdIsDebuggerPresent(v31);
        v221 = 0x1000000LL;
        v200 = IsDebuggerPresent;
        v201 = *(_DWORD *)(v14 + 3016);
        v202 = *(unsigned __int8 *)(v14 + 2870);
        v203 = *(_DWORD *)(v14 + 4740);
        v204 = v162;
        Alignment = v187->Alignment;
        v186 = *(_WORD *)(v14 + 2820);
        v219 = *(_QWORD *)(v14 + 1824);
        v220 = *(void **)(v14 + 1816);
        v209 = *(_DWORD *)(v14 + 428);
        v208 = *(_DWORD *)(v14 + 424);
        v206 = *(_DWORD *)(v14 + 420);
        v211 = *(_DWORD *)(v14 + 416);
        v207 = *(_DWORD *)(v14 + 412);
        v222 = v188;
        v185 = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v83,
          byte_1C009FAA3,
          v84,
          v85,
          (__int64)&v185,
          (__int64)&v221,
          (__int64)&v222,
          (__int64)&v207,
          (__int64)&v211,
          (__int64)&v206,
          (__int64)&v208,
          (__int64)&v209,
          &v220,
          (__int64)&v219,
          (__int64)&v186,
          (__int64)&Alignment,
          (__int64)&v204,
          (__int64)&v203,
          (__int64)&v202,
          (__int64)&v201,
          (__int64)&v200,
          (__int64)&v199);
      }
    }
  }
  if ( v189 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventPerformanceWarning, v32, 19);
    WdLogSingleEntry1(4LL, 258LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
    v86 = COREDEVICEACCESS::AcquireShared(a2, a11);
    if ( v86 >= 0 )
    {
      LODWORD(v14) = 258;
      goto LABEL_95;
    }
    WdLogSingleEntry1(4LL, v86);
    goto LABEL_138;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventPerformanceWarning, v32, 19);
  WdLogSingleEntry1(2LL, 3140LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Present token is not submitted due to default semaphore timeout of 20 seconds",
    3140LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    WdLogSingleEntry1(4LL, v14);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
    goto LABEL_138;
  }
LABEL_32:
  if ( !*((_BYTE *)a3 + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a3 + 1) + 24LL));
    v33 = *((_QWORD *)a3 + 1);
    *(_QWORD *)a3 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v33 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v33 + 152));
    v23 = a2;
    *((_BYTE *)a3 + 16) = 1;
  }
  if ( *((_BYTE *)v23 + 144) )
  {
    COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)v23 + 72), 0LL);
    if ( *(_DWORD *)(*((_QWORD *)v23 + 11) + 200LL) != 1 )
      goto LABEL_150;
  }
  if ( *((_BYTE *)a2 + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v24, 0LL, 0LL);
  v34 = *((_QWORD *)a2 + 3);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v34 + 184) )
  {
    v37 = a11;
  }
  else
  {
    if ( !KeReadStateEvent((PRKEVENT)(v34 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, (const EVENT_DESCRIPTOR *)"g", v36, 72);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
    }
    v37 = a11;
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), a11);
  }
  *((_QWORD *)a2 + 5) = 0LL;
  if ( v37 && (int)RtlStringCbCopyA((char *)a2 + 48, 17LL, v37) >= 0 )
    *((_QWORD *)a2 + 5) = v87;
  *((_BYTE *)a2 + 32) = 1;
  if ( *(_DWORD *)(*((_QWORD *)v23 + 17) + 608LL) == 1 )
  {
    v38 = v190;
    LODWORD(v14) = 0;
    v39 = (union _SLIST_HEADER *)((char *)v190 + 48);
    v187 = (union _SLIST_HEADER *)((char *)v190 + 48);
    v40 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v190 + 3);
    if ( v40
      || DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v38) && (v40 = ExpInterlockedPopEntrySList(v39)) != 0LL )
    {
      v41 = (PLARGE_INTEGER)&v40[1];
      v189 = (PLARGE_INTEGER)&v40[1];
      if ( v40 != (PSLIST_ENTRY)-16LL )
      {
        if ( a8 )
        {
          v198 = v181;
          Entry = 0LL;
          goto LABEL_46;
        }
        v198 = v181;
        Entry = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v181 + 1424));
        v67 = Entry;
        if ( !Entry )
        {
          KeReleaseSemaphore((PRKSEMAPHORE)v184, 0, 1, 0);
          WdLogSingleEntry1(6LL, 3198LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate VidSchSubmitData",
            3198LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v14) = -1073741801;
LABEL_167:
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
          goto LABEL_95;
        }
        v68 = *((_QWORD *)v181 + 2);
        if ( *(int *)(v68 + 2552) < 0x2000 )
        {
          v69 = 1;
          if ( !*(_BYTE *)(v68 + 2852) )
          {
            v70 = 1304;
LABEL_101:
            memset(Entry, 0, v70);
            v71 = *((_QWORD *)v181 + 2);
            v72 = *(_DWORD *)(v71 + 2760);
            if ( *(int *)(v71 + 2552) < 0x2000 )
            {
              v73 = 1;
              if ( !*(_BYTE *)(v71 + 2852) )
              {
                v67[356] = 0;
                goto LABEL_104;
              }
            }
            else
            {
              v73 = *(_DWORD *)(v71 + 288);
            }
            v67[356] = 1;
            v74 = 8 * v73;
            v75 = Entry;
            *((_DWORD *)Entry + 152) = v73;
            v76 = v73 << 6;
            v75[151] = v72;
            v75[153] = v72 * (v76 + ((v74 + 231) & 0xFFFFFFF8)) + 16;
            v77 = v72 * (v76 + ((v74 + 231) & 0xFFFFFFF8)) + 616;
            v75[138] = v77;
            v75[139] = v74 + v77;
LABEL_104:
            v12 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry;
            v41 = v189;
            v39 = v187;
            v210 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry;
LABEL_46:
            v171 = 1;
            v42 = *(_DWORD *)Src;
            if ( *(_DWORD *)Src == 7 )
            {
LABEL_47:
              v43 = 24;
LABEL_52:
              memmove(v41, Src, v43);
              LowPart = v41->LowPart;
              if ( v41->LowPart != 7 && LowPart != 1 )
              {
                switch ( LowPart )
                {
                  case 2u:
                  case 3u:
                  case 4u:
                  case 5u:
                  case 8u:
                  case 9u:
                    break;
                  default:
                    LODWORD(v14) = -1071775733;
                    ExpInterlockedPushEntrySList(v39, v40);
                    KeReleaseSemaphore((PRKSEMAPHORE)v184, 0, 1, 0);
                    Current = DXGPROCESS::GetCurrent(v92);
                    WdLogSingleEntry1(3LL, Current);
                    goto LABEL_93;
                }
              }
              v47 = 0LL;
              v48 = *(_DWORD *)v12 & 0xFFFFFFDF;
              *((_QWORD *)v12 + 13) = v41;
              *((_DWORD *)v12 + 29) = -1;
              v49 = 0LL;
              v50 = v48 | (32 * (a5 & 1 | 0x2000));
              v188 = 0LL;
              v51 = v190;
              *(_DWORD *)v12 = v50;
              v52 = v172;
              *((_QWORD *)v12 + 12) = v51;
              v53 = 0LL;
              v167 = 0LL;
              v182 = 0LL;
              v54 = *((_DWORD *)v172 + 638) < 0x2000;
              v187 = 0LL;
              if ( v54 && !*((_BYTE *)v172 + 2852) )
              {
                v55 = v180;
                goto LABEL_61;
              }
              if ( a9 )
              {
                v55 = v180;
                if ( !v180 )
                  goto LABEL_61;
                if ( ((*(_DWORD *)Src - 1) & 0xFFFFFFFD) == 0 )
                {
                  v53 = 0LL;
                  goto LABEL_61;
                }
                v56 = *((_DWORD *)v180 + 368);
                v57 = (void *)*((_QWORD *)v180 + 185);
              }
              else
              {
                v56 = *(_DWORD *)(v173 + 1104);
                v57 = *(void **)(v173 + 1112);
              }
              v58 = ReadPresentPrivateDriverData(v172, v56, v57, &v182);
              v14 = v58;
              if ( v58 < 0 )
              {
                WdLogSingleEntry1(2LL, v58);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to read private driver data. Returning 0x%I64x",
                  v14,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_178;
              }
              v53 = v182;
              v52 = v172;
              v55 = v180;
              v167 = v182;
              if ( v182 )
              {
                *((_QWORD *)v12 + 100) = v182;
                v47 = v53;
                *((_DWORD *)v12 + 1) |= 4u;
                v188 = v53;
              }
LABEL_61:
              if ( !*((_BYTE *)v52 + 209) )
              {
                if ( !a9 && !*((_BYTE *)v172 + 2874) )
                  goto LABEL_65;
                v59 = PrepareIndependentFlipToken((struct _D3DKMT_PRESENTHISTORYTOKEN *)v41, v55, v12, a9, v192, v53);
                v49 = (union _SLIST_HEADER *)*((_QWORD *)v12 + 4);
                LODWORD(v14) = v59;
                v187 = v49;
              }
              if ( (int)v14 < 0 )
                goto LABEL_178;
LABEL_65:
              if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
              {
                v14 = (__int64)v181;
                goto LABEL_68;
              }
              v99 = v41->LowPart;
              LOBYTE(v100.LowPart) = 0;
              HighPart = v41->HighPart;
              LOBYTE(v101) = 0;
              v212 = 0LL;
              v178 = 0;
              v102 = 0;
              v169 = 0;
              LODWORD(Src) = 0;
              v216 = 0LL;
              v217 = 0LL;
              switch ( v99 )
              {
                case 1u:
                  QuadPart = v41[2].QuadPart;
                  goto LABEL_188;
                case 2u:
                  QuadPart = v41[3].QuadPart;
                  goto LABEL_190;
                case 3u:
                  QuadPart = v41[2].QuadPart;
                  goto LABEL_203;
                case 4u:
                case 5u:
                case 6u:
                case 7u:
                case 8u:
                  QuadPart = v41[2].QuadPart;
                  goto LABEL_208;
                default:
                  QuadPart = 0LL;
                  switch ( v99 )
                  {
                    case 1u:
LABEL_188:
                      p_HighPart = (unsigned int *)&v41[7];
                      break;
                    case 2u:
LABEL_190:
                      p_HighPart = (unsigned int *)&v41[102].HighPart;
                      goto LABEL_191;
                    case 3u:
LABEL_203:
                      p_HighPart = (unsigned int *)&v41[5];
                      goto LABEL_215;
                    default:
LABEL_208:
                      p_HighPart = 0LL;
                      if ( v99 != 1 )
                      {
                        if ( v99 != 2 )
                        {
                          LOBYTE(v101) = 0;
                          goto LABEL_192;
                        }
LABEL_191:
                        v100 = *(PLARGE_INTEGER)((char *)v41 + 116);
                        v178 = v100.HighPart;
                        v212 = *(_OWORD *)((char *)&v41[12].QuadPart + 4);
                        v101 = v41[94].HighPart;
                        v105 = *(_OWORD *)((char *)&v41[95].QuadPart + 4);
                        v102 = v41[95].LowPart;
                        v216 = *(_OWORD *)((char *)&v41[92].QuadPart + 4);
                        v169 = v101;
                        v217 = v105;
                        LODWORD(Src) = v102;
LABEL_192:
                        if ( v99 == 2 )
                        {
                          v106 = v41[7].HighPart;
                          goto LABEL_216;
                        }
                        v169 = v101;
                        LODWORD(Src) = v102;
                        if ( v99 == 6 )
                        {
                          v106 = v41[3].LowPart;
                          goto LABEL_196;
                        }
                        if ( v99 == 9 )
                        {
                          v106 = v41[4].LowPart;
LABEL_196:
                          v169 = v101;
                          LODWORD(Src) = v102;
LABEL_197:
                          v107 = 0LL;
                          goto LABEL_198;
                        }
LABEL_215:
                        v106 = 0;
                        if ( v99 != 2 )
                          goto LABEL_197;
LABEL_216:
                        v107 = (unsigned int)v41[100].HighPart;
LABEL_198:
                        v175 = v107;
                        if ( !p_HighPart )
                        {
                          LODWORD(v161) = v107;
                          LODWORD(v159) = v106;
                          v14 = (__int64)v181;
                          LODWORD(Timeout) = HighPart;
                          *(_DWORD *)Alertable = v99;
                          McTemplateK0ppqqxdqp_EtwWriteTransfer(
                            v107,
                            &EventSubmitPresentHistory,
                            0LL,
                            v181,
                            v41,
                            *(_QWORD *)Alertable,
                            Timeout,
                            QuadPart,
                            v159,
                            v161,
                            0LL);
LABEL_68:
                          if ( !a9 )
                            goto LABEL_74;
                          v60 = v180;
                          if ( !v180 )
                          {
                            if ( !*((_BYTE *)v172 + 209) && (*((_DWORD *)a9 + 101) & 0x10) != 0 )
                              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(a9, 0LL, 0, 1, v12, 0);
                            v171 = 1;
                            goto LABEL_74;
                          }
                          *((_BYTE *)v180 + 1512) = (*(_DWORD *)v12 & 0x1000000) == 0;
                          v61 = v172;
                          if ( !*((_BYTE *)v172 + 209) )
                          {
                            if ( (*((_DWORD *)a9 + 101) & 0x10) != 0 )
                            {
                              v112 = *((_DWORD *)v60 + 23);
                              v171 = v112 + 1;
                              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
                                a9,
                                *((struct DXGCONTEXT ***)v60 + 187),
                                v112,
                                1,
                                v12,
                                0);
                              goto LABEL_74;
                            }
                            v61 = v172;
                          }
                          if ( !*((_DWORD *)v60 + 23) || !DXGADAPTER::IsDxgmms2(v61) )
                          {
LABEL_74:
                            v168 = 0LL;
                            v174 = 0LL;
                            Global = DXGGLOBAL::GetGlobal();
                            v194 = Global;
                            v195 = 0;
                            if ( !Global )
                            {
                              WdLogSingleEntry1(1LL, 2758LL);
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"m_pGlobal != NULL",
                                2758LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                              Global = v194;
                            }
                            if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
                            {
                              WdLogSingleEntry1(1LL, 2763LL);
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
                                2763LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                            }
                            if ( !v170 )
                            {
                              v63 = v167;
                              v64 = 0LL;
                              goto LABEL_80;
                            }
                            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v194);
                            v165 = (v170 >> 6) & 0xFFFFFF;
                            if ( *((int *)v172 + 705) < 2000 )
                            {
                              v177 = DXGPROCESS::GetCurrent(v123);
                              DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v177 + 248));
                              if ( v165 < *((_DWORD *)v177 + 74) )
                              {
                                v128 = *((_QWORD *)v177 + 35) + 16LL * v165;
                                if ( ((v170 >> 25) & 0x60) == (*(_BYTE *)(v128 + 8) & 0x60)
                                  && (*(_DWORD *)(v128 + 8) & 0x2000) == 0 )
                                {
                                  v129 = *(_DWORD *)(v128 + 8) & 0x1F;
                                  if ( v129 )
                                  {
                                    if ( v129 != 8 )
                                      goto LABEL_258;
                                    v130 = *(DXGSYNCOBJECT **)v128;
                                    _InterlockedDecrement((volatile signed __int32 *)v177 + 66);
                                    v168 = v130;
                                    ExReleasePushLockSharedEx((char *)v177 + 248, 0LL);
                                    KeLeaveCriticalRegion();
                                    v64 = v168;
                                    if ( !v168 )
                                    {
LABEL_263:
                                      LODWORD(v14) = -1073741811;
                                      WdLogSingleEntry2(2LL, v170, -1073741811LL);
                                      DxgkLogInternalTriageEvent(
                                        0LL,
                                        0x40000,
                                        -1,
                                        (__int64)L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                                        v170,
                                        -1073741811LL,
                                        0LL,
                                        0LL,
                                        0LL);
                                      if ( v195 )
                                        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v194);
                                      goto LABEL_178;
                                    }
                                    v63 = v182;
                                    v167 = v182;
                                    goto LABEL_80;
                                  }
                                }
                              }
                            }
                            else
                            {
                              v177 = DXGPROCESS::GetCurrent(v123);
                              DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v177 + 248));
                              if ( v165 < *((_DWORD *)v177 + 74) )
                              {
                                v124 = *((_QWORD *)v177 + 35) + 16LL * v165;
                                if ( ((v170 >> 25) & 0x60) == (*(_BYTE *)(v124 + 8) & 0x60)
                                  && (*(_DWORD *)(v124 + 8) & 0x2000) == 0 )
                                {
                                  v125 = *(_DWORD *)(v124 + 8) & 0x1F;
                                  if ( v125 )
                                  {
                                    if ( v125 != 11 )
                                    {
LABEL_258:
                                      WdLogSingleEntry1(2LL, 267LL);
                                      DxgkLogInternalTriageEvent(
                                        0LL,
                                        0x40000,
                                        -1,
                                        (__int64)L"Handle type mismatch",
                                        267LL,
                                        0LL,
                                        0LL,
                                        0LL,
                                        0LL);
                                      _InterlockedDecrement((volatile signed __int32 *)v177 + 66);
                                      v126 = (char *)v177 + 248;
LABEL_262:
                                      ExReleasePushLockSharedEx(v126, 0LL);
                                      KeLeaveCriticalRegion();
                                      goto LABEL_263;
                                    }
                                    v127 = *(_QWORD *)v124;
                                    _InterlockedDecrement((volatile signed __int32 *)v177 + 66);
                                    v174 = v127;
                                    ExReleasePushLockSharedEx((char *)v177 + 248, 0LL);
                                    KeLeaveCriticalRegion();
                                    if ( !v174 )
                                      goto LABEL_263;
                                    v64 = *(DXGSYNCOBJECT **)(v174 + 32);
                                    v63 = v182;
                                    v168 = v64;
                                    v167 = v182;
LABEL_80:
                                    if ( !*((_BYTE *)v172 + 209) )
                                    {
                                      if ( a9 )
                                      {
                                        if ( *((struct _KTHREAD **)a9 + 57) != KeGetCurrentThread() )
                                        {
                                          WdLogSingleEntry1(1LL, 3448LL);
                                          DxgkLogInternalTriageEvent(
                                            0LL,
                                            262146,
                                            -1,
                                            (__int64)L"pContext->GetContextLock()->IsExclusiveOwner()",
                                            3448LL,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
                                        }
                                        v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a9 + 2) + 16LL) + 736LL)
                                                        + 8LL);
                                        if ( (*((_DWORD *)a9 + 101) & 0x10) != 0 )
                                          LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v65 + 432))(
                                                           *((_QWORD *)a9 + 36),
                                                           v12);
                                        else
                                          LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v65 + 424))(
                                                           *((_QWORD *)a9 + 32),
                                                           v12);
                                      }
                                      else
                                      {
                                        DXGAUTOMUTEX::DXGAUTOMUTEX(
                                          (DXGAUTOMUTEX *)v224,
                                          (DXGSYNCOBJECT *)((char *)v64 + 32),
                                          0);
                                        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v224);
                                        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                                             v168,
                                                             (struct ADAPTER_RENDER *)v14);
                                        LODWORD(v14) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 1008LL))(
                                                         v12,
                                                         *(_QWORD *)(*((_QWORD *)v192 + 3) + 800LL),
                                                         VidSchSyncObject);
                                        if ( v224[8] )
                                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v224);
                                      }
                                      goto LABEL_86;
                                    }
                                    if ( v63 )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)v63 + 3);
                                      v167 = v182;
                                    }
                                    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) < 0x18u
                                      || ((v136 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118)) == 0LL
                                        ? (SessionDataForSpecifiedSession = 0LL)
                                        : (CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                                                       v132,
                                                                       v133,
                                                                       v134,
                                                                       v135),
                                           SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                              v136,
                                                                              CurrentProcessSessionId)),
                                          !*((_DWORD *)SessionDataForSpecifiedSession + 4738)
                                       || v41->LowPart != 2
                                       || !a9
                                       || (v132 = *(_QWORD *)(*((_QWORD *)a9 + 2) + 40LL),
                                           v193 = v132,
                                           (*(_DWORD *)(v132 + 424) & 4) == 0)
                                       || !v180
                                       || (v139 = *((_DWORD *)v180 + 5)) == 0) )
                                    {
                                      v14 = (__int64)v167;
                                      v191 = (unsigned __int64)v172 + 4472;
                                      if ( !a9 )
                                      {
LABEL_303:
                                        v153 = *(_QWORD *)v12;
                                        v154 = DXGPROCESS::GetCurrent(v132);
                                        LODWORD(v14) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                                         v191,
                                                         v154,
                                                         a9,
                                                         v153,
                                                         v190,
                                                         v189,
                                                         v14,
                                                         v174);
                                        goto LABEL_304;
                                      }
LABEL_302:
                                      v174 = 0LL;
                                      goto LABEL_303;
                                    }
                                    v192 = (struct _PRESENT_REDIRECTED_PARAMS *)(v132 + 248);
                                    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v132 + 248));
                                    v140 = (v139 >> 6) & 0xFFFFFF;
                                    if ( v140 < *(_DWORD *)(v193 + 296) )
                                    {
                                      v141 = 16LL * v140 + *(_QWORD *)(v193 + 280);
                                      if ( ((v139 >> 25) & 0x60) == (*(_BYTE *)(v141 + 8) & 0x60)
                                        && (*(_DWORD *)(v141 + 8) & 0x2000) == 0 )
                                      {
                                        v142 = *(_DWORD *)(v141 + 8) & 0x1F;
                                        if ( v142 )
                                        {
                                          if ( v142 == 5 )
                                          {
                                            v143 = *(struct _EX_RUNDOWN_REF **)v141;
LABEL_294:
                                            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                                              (DXGALLOCATIONREFERENCE *)&v196,
                                              v143);
                                            v144 = v192;
                                            _InterlockedDecrement((volatile signed __int32 *)v192 + 4);
                                            ExReleasePushLockSharedEx(v144, 0LL);
                                            KeLeaveCriticalRegion();
                                            if ( v196 )
                                            {
                                              v145 = v41->LowPart == 2;
                                              v179 = 0;
                                              v191 = 0LL;
                                              if ( v145 )
                                              {
                                                v146 = (void *)v41[8].QuadPart;
                                                if ( v146 )
                                                {
                                                  if ( (int)DxgkQueryHostCompSurfInfo(v146, &v179, &v191) >= 0 )
                                                  {
                                                    v148 = v191;
                                                    v149 = v179;
                                                    v150 = v196;
                                                    v151 = *(_QWORD *)v210;
                                                    v152 = DXGPROCESS::GetCurrent(v147);
                                                    v167 = v182;
                                                    LODWORD(v14) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                                                     (char *)v172 + 4472,
                                                                     v152,
                                                                     a9,
                                                                     v151,
                                                                     v190,
                                                                     v189,
                                                                     v182,
                                                                     v168,
                                                                     v150,
                                                                     v149,
                                                                     v148);
                                                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v196);
                                                    v12 = v210;
LABEL_304:
                                                    if ( (int)v14 < 0 && v167 )
                                                      CRefCountedBuffer::RefCountedBufferRelease(v167);
LABEL_86:
                                                    if ( v195 )
                                                      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v194);
                                                    if ( (int)v14 >= 0 )
                                                    {
LABEL_89:
                                                      if ( v49 )
                                                        CRefCountedBuffer::RefCountedBufferRelease(v49);
                                                      if ( v47 )
                                                        CRefCountedBuffer::RefCountedBufferRelease(v47);
LABEL_93:
                                                      if ( Entry )
                                                        ExFreeToLookasideListEx(
                                                          (PLOOKASIDE_LIST_EX)((char *)v181 + 1424),
                                                          Entry);
                                                      goto LABEL_95;
                                                    }
LABEL_178:
                                                    KeReleaseSemaphore((PRKSEMAPHORE)v184, 0, 1, 0);
                                                    if ( (*(_DWORD *)v12 & 0x1000000) != 0 )
                                                    {
                                                      v94 = 0;
                                                      v179 = 0;
                                                      if ( v171 )
                                                      {
                                                        v95 = v181;
                                                        v96 = 0LL;
                                                        v97 = v180;
                                                        do
                                                        {
                                                          if ( a9 )
                                                            v98 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v97 + 187) + v96)
                                                                            + 400LL);
                                                          else
                                                            LOBYTE(v98) = 0;
                                                          if ( *((_BYTE *)v12 + 356) )
                                                            v155 = (_QWORD *)((char *)v12
                                                                            + 64
                                                                            * (unsigned __int64)(v94
                                                                                               * *((_DWORD *)v12 + 151))
                                                                            + *((_DWORD *)v12 + 151)
                                                                            * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8)
                                                                            + 648);
                                                          else
                                                            v155 = (_QWORD *)((char *)v12 + 504);
                                                          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v95 + 95) + 8LL) + 424LL))(
                                                            *((_QWORD *)v95 + 96),
                                                            (unsigned int)(1 << v98),
                                                            *v155,
                                                            0LL);
                                                          v96 += 8LL;
                                                          v94 = v179 + 1;
                                                          v179 = v94;
                                                        }
                                                        while ( v94 < v171 );
                                                        v49 = v187;
                                                        v47 = v188;
                                                      }
                                                    }
                                                    goto LABEL_89;
                                                  }
                                                }
                                              }
                                            }
                                            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v196);
                                            v14 = (__int64)v182;
                                            v191 = (unsigned __int64)v172 + 4472;
                                            v167 = v182;
                                            goto LABEL_302;
                                          }
                                          WdLogSingleEntry1(2LL, 267LL);
                                          DxgkLogInternalTriageEvent(
                                            0LL,
                                            0x40000,
                                            -1,
                                            (__int64)L"Handle type mismatch",
                                            267LL,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
                                        }
                                      }
                                    }
                                    v143 = 0LL;
                                    goto LABEL_294;
                                  }
                                }
                              }
                            }
                            _InterlockedDecrement((volatile signed __int32 *)v177 + 66);
                            v126 = (char *)v177 + 248;
                            goto LABEL_262;
                          }
                          v171 = v113 + 1;
                          v214 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a9 + 2) + 1928LL));
                          BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)a9 + 2));
                          if ( !BroadcastPresentSyncObject )
                          {
                            WdLogSingleEntry2(2LL, -1073741801LL, 3349LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Failed to create present sync object. Returning 0x%I64x",
                              -1073741801LL,
                              3349LL,
                              0LL,
                              0LL,
                              0LL);
                            LODWORD(v14) = -1073741801;
                            goto LABEL_178;
                          }
                          v114 = v180;
                          Pool2 = 0LL;
                          P = 0LL;
                          v227 = 0;
                          v116 = *((unsigned int *)v180 + 23);
                          v164 = v116;
                          if ( (unsigned int)v116 <= 8 )
                          {
                            Pool2 = v226;
                            P = v226;
                            if ( !(_DWORD)v116 )
                            {
LABEL_233:
                              v227 = v116;
LABEL_235:
                              if ( !Pool2 )
                              {
                                LODWORD(v14) = -1073741801;
                                goto LABEL_178;
                              }
                              v117 = 1;
                              if ( v171 > 1 )
                              {
                                v118 = 8LL;
                                while ( 1 )
                                {
                                  v119 = *(_QWORD *)(v118 + *((_QWORD *)v114 + 187));
                                  if ( (*(_DWORD *)(v119 + 404) & 0x10) != 0 )
                                    break;
                                  v120 = v117++ - 1;
                                  *(_QWORD *)&Pool2[8 * v120] = *(_QWORD *)(v119 + 256);
                                  v118 += 8LL;
                                  if ( v117 >= v171 )
                                    goto LABEL_241;
                                }
                                LODWORD(v14) = -1073741811;
                                goto LABEL_248;
                              }
LABEL_241:
                              LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL)
                                                                                               + 640LL))(
                                               0LL,
                                               0LL,
                                               *((unsigned int *)v114 + 23));
                              if ( (int)v14 < 0 )
                              {
LABEL_248:
                                v122 = P;
                                goto LABEL_249;
                              }
                              v121 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v181 + 92) + 8LL) + 624LL))(
                                       *((_QWORD *)a9 + 32),
                                       BroadcastPresentSyncObject,
                                       v214);
                              v122 = P;
                              LODWORD(v14) = v121;
                              if ( v121 < 0 )
                              {
LABEL_249:
                                if ( v122 != v226 && v122 )
                                  ExFreePoolWithTag(v122, 0);
                                goto LABEL_178;
                              }
                              if ( P != v226 && P )
                                ExFreePoolWithTag(P, 0);
                              v167 = v182;
                              v14 = (__int64)v181;
                              goto LABEL_74;
                            }
                            memset(v226, 0, 8 * v116);
                            Pool2 = P;
                          }
                          else
                          {
                            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v116 < 8 )
                            {
                              v114 = v180;
                              goto LABEL_235;
                            }
                            Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * (unsigned int)v116, 1265072196LL);
                            P = Pool2;
                          }
                          LODWORD(v116) = v164;
                          v114 = v180;
                          goto LABEL_233;
                        }
                        v108 = *p_HighPart;
                        if ( *p_HighPart >= 0x10 )
                        {
                          v108 = 16;
                        }
                        else if ( !v108 )
                        {
LABEL_221:
                          v160 = v106;
                          v14 = (__int64)v181;
                          McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
                            v178,
                            QuadPart,
                            (__int64)p_HighPart,
                            (__int64)v181,
                            (char)v41,
                            v99,
                            HighPart,
                            QuadPart,
                            v160,
                            v175,
                            v212,
                            SBYTE8(v212),
                            SBYTE4(v212),
                            SBYTE12(v212),
                            v100.QuadPart,
                            v178,
                            v108,
                            (__int64)v232,
                            (__int64)v231,
                            (__int64)v230,
                            (__int64)v229,
                            v216,
                            SBYTE8(v216),
                            SBYTE4(v216),
                            SBYTE12(v216),
                            v101,
                            (char)Src,
                            v217,
                            SBYTE8(v217),
                            SBYTE4(v217),
                            SBYTE12(v217),
                            0);
                          goto LABEL_68;
                        }
                        p_HighPart += 3;
                        v109 = v108;
                        v110 = 0LL;
                        do
                        {
                          v111 = *(p_HighPart - 2);
                          p_HighPart += 4;
                          v232[v110 / 4] = v111;
                          v110 += 4LL;
                          *(_DWORD *)&v230[v110 + 60] = *(p_HighPart - 4);
                          *(_DWORD *)&v229[v110 + 60] = *(p_HighPart - 5);
                          *(_DWORD *)&v229[v110 - 4] = *(p_HighPart - 3);
                          --v109;
                        }
                        while ( v109 );
                        v47 = v188;
                        LOBYTE(v101) = v169;
                        goto LABEL_221;
                      }
                      LOBYTE(v101) = 0;
                      break;
                  }
                  v100 = v41[6];
                  v178 = v100.HighPart;
                  v212 = *(_OWORD *)&v41[4].LowPart;
                  goto LABEL_215;
              }
            }
            if ( v42 == 1 )
            {
              v44 = *((_DWORD *)Src + 14);
              if ( v44 > 0x10 )
              {
                WdLogSingleEntry1(1LL, 53LL);
                WaitMode = 53LL;
LABEL_163:
                v90 = L"FALSE";
LABEL_165:
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v90, WaitMode, 0LL, 0LL, 0LL, 0LL);
                v43 = 0;
                goto LABEL_166;
              }
              v45 = 16 * v44 + 67;
            }
            else
            {
              switch ( v42 )
              {
                case 2:
                  v89 = *((_DWORD *)Src + 205);
                  if ( v89 > 0x10 )
                  {
                    WdLogSingleEntry1(1LL, 63LL);
                    WaitMode = 63LL;
                    goto LABEL_163;
                  }
                  v45 = 16 * v89 + 831;
                  break;
                case 3:
                  v91 = *((_DWORD *)Src + 10);
                  if ( v91 > 0x10 )
                  {
                    WdLogSingleEntry1(1LL, 73LL);
                    WaitMode = 73LL;
                    goto LABEL_163;
                  }
                  v45 = 16 * v91 + 51;
                  break;
                case 4:
                case 5:
                case 8:
                  goto LABEL_47;
                case 9:
                  v43 = 40;
                  goto LABEL_52;
                default:
                  WdLogSingleEntry1(1LL, 96LL);
                  v90 = L"Unknown type for present history token is found in queue.";
                  WaitMode = 96LL;
                  goto LABEL_165;
              }
            }
            v43 = v45 & 0xFFFFFFF8;
            if ( v43 - 1 <= 0x437 )
              goto LABEL_52;
LABEL_166:
            WdLogSingleEntry1(3LL, v43);
            KeReleaseSemaphore((PRKSEMAPHORE)v184, 0, 1, 0);
            LODWORD(v14) = -1073741811;
            goto LABEL_167;
          }
        }
        else
        {
          v69 = *(_DWORD *)(v68 + 288);
        }
        v70 = *(_DWORD *)(v68 + 2760) * ((v69 << 6) + ((8 * v69 + 231) & 0xFFFFFFF8)) + 8 * (v69 + 77);
        goto LABEL_101;
      }
      v38 = v190;
    }
    LODWORD(v14) = -1073741801;
    KeReleaseSemaphore((PRKSEMAPHORE)v184, 0, 1, 0);
    WdLogSingleEntry2(6LL, v38, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Present token is not submitted due to no memory, PresentHistoryTokenQueue: 0x%I64x, returning 0x%I64x",
      (__int64)v38,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_95;
  }
  COREACCESS::Release(v24);
  if ( *((_BYTE *)v23 + 144) )
LABEL_150:
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v23 + 72));
  KeReleaseSemaphore((PRKSEMAPHORE)v184, 0, 1, 0);
  LODWORD(v14) = -1073741130;
  WdLogSingleEntry1(4LL, -1073741130LL);
  COREDEVICEACCESS::AcquireSharedUncheck(v23, v88);
LABEL_95:
  ObfDereferenceObject(v184);
  return (unsigned int)v14;
}
