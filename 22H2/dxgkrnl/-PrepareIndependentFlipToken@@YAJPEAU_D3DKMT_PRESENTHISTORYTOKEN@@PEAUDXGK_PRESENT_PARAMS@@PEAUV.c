/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01BC948
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01BC080 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C03765C8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000AEB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B784 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0024B40 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C0049AFC (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0053ED8 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0055C54 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0169F30 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01A1DDC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0231C36 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C0231C8A (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0232260 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBVCIFlipPresentHistoryTokenData@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0232462 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBVCIFlipPresentHistoryTokenData@@PEAPEAVCRefCo.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C02BD9BC (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C02C0414 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C02EB994 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ??0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0320BD0 (--0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1C0320C34 (--1CIFlipPresentHistoryToken@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0323738 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0323F80 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0324F40 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct DXGK_PRESENT_PARAMS *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3,
        struct DXGCONTEXT *a4,
        UINT64 **a5,
        struct CRefCountedBuffer *a6)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // r15
  struct DXGK_PRESENT_PARAMS *v8; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v9; // rdx
  D3DKMT_PRESENT_MODEL Model; // ecx
  UINT64 FenceValue; // rsi
  unsigned int v12; // r14d
  __int64 v13; // rdi
  __int64 v15; // rcx
  UINT64 *v16; // rdi
  struct DXGPROCESS *Current; // r9
  UINT64 v18; // r13
  UINT64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned int v21; // eax
  struct _EX_RUNDOWN_REF *v22; // rax
  ULONG_PTR Count; // rdx
  __int64 v24; // rdx
  __int64 v25; // rbx
  UINT64 CompositionBindingId; // rdi
  __int64 v27; // rax
  struct _LUID *v28; // rax
  unsigned int v29; // ecx
  struct DXGCONTEXT *v30; // rbx
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  DXGADAPTER *v35; // rdi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdi
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  _DWORD *v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rbx
  unsigned int v56; // eax
  __int64 v57; // rdx
  unsigned __int8 PostCompositionStretching; // al
  bool v59; // r9
  __int128 *v60; // rax
  char *v61; // rdi
  __int64 v62; // rax
  __int128 v63; // xmm1
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  _DWORD *v73; // rdx
  UINT v74; // edi
  _QWORD *Pool2; // rsi
  int *v76; // r10
  UINT v77; // r9d
  char *v78; // r8
  __int64 v79; // rax
  _DWORD *v80; // rcx
  _DWORD *v81; // rdx
  char *v82; // r11
  DXGADAPTER *v83; // rax
  char *v84; // rcx
  char *v85; // r8
  unsigned int v86; // r9d
  struct _EX_RUNDOWN_REF *v87; // r10
  __int64 v88; // rdx
  _DWORD *v89; // r8
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v91; // rbx
  int v92; // eax
  const struct DXGADAPTER *v93; // rcx
  __int64 v94; // rax
  struct _EX_RUNDOWN_REF **v95; // r9
  _DWORD *v96; // r11
  char *v97; // rdx
  __int64 v98; // rax
  char *v99; // rdx
  unsigned __int64 v100; // r8
  ULONG_PTR v101; // rcx
  bool v102; // al
  __int64 v103; // r8
  UINT64 v104; // rsi
  __int64 v105; // rdi
  unsigned int v106; // ebx
  __int64 v107; // rax
  _DWORD *v108; // rax
  _DWORD *v109; // rbx
  int v110; // ecx
  char v111; // r11
  enum _D3DDDI_HDR_METADATA_TYPE v112; // edx
  __int64 v113; // rsi
  __int64 v114; // r15
  _QWORD *v115; // r8
  __int16 v116; // r9
  struct _EX_RUNDOWN_REF *v117; // rdx
  __int64 v118; // rax
  void *v119; // rdx
  int v120; // edi
  int v121; // eax
  __int64 v122; // rbx
  __int64 v123; // rbx
  __int64 v124; // rdi
  char *v125; // rsi
  UINT64 v126; // rsi
  __int64 v127; // rdi
  unsigned int v128; // ebx
  __int64 v129; // rax
  __int64 v130; // rdx
  int v131; // [rsp+30h] [rbp-458h]
  int v132; // [rsp+30h] [rbp-458h]
  unsigned __int8 v133; // [rsp+80h] [rbp-408h]
  char v134; // [rsp+80h] [rbp-408h]
  _QWORD v135[2]; // [rsp+88h] [rbp-400h] BYREF
  unsigned int v136; // [rsp+98h] [rbp-3F0h] BYREF
  __int64 v137; // [rsp+A0h] [rbp-3E8h]
  unsigned int v138; // [rsp+A8h] [rbp-3E0h]
  DXGADAPTER *v139; // [rsp+B0h] [rbp-3D8h]
  unsigned int v140; // [rsp+B8h] [rbp-3D0h]
  unsigned int v141; // [rsp+BCh] [rbp-3CCh] BYREF
  enum _D3DDDI_HDR_METADATA_TYPE v142; // [rsp+C0h] [rbp-3C8h] BYREF
  struct _EX_RUNDOWN_REF *v143; // [rsp+C8h] [rbp-3C0h] BYREF
  __int64 v144; // [rsp+D0h] [rbp-3B8h]
  struct _EX_RUNDOWN_REF **v145; // [rsp+D8h] [rbp-3B0h]
  int v146; // [rsp+E0h] [rbp-3A8h] BYREF
  int v147; // [rsp+E4h] [rbp-3A4h]
  int v148; // [rsp+E8h] [rbp-3A0h] BYREF
  unsigned __int64 v149; // [rsp+F0h] [rbp-398h]
  int v150; // [rsp+F8h] [rbp-390h]
  char *v151; // [rsp+100h] [rbp-388h]
  int *v152; // [rsp+108h] [rbp-380h]
  UINT64 *v153; // [rsp+110h] [rbp-378h] BYREF
  unsigned __int64 v154; // [rsp+118h] [rbp-370h]
  UINT64 *p_CompositionBindingId; // [rsp+120h] [rbp-368h]
  _DWORD *v156; // [rsp+128h] [rbp-360h]
  _BYTE *v157; // [rsp+130h] [rbp-358h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v158; // [rsp+138h] [rbp-350h]
  int v159; // [rsp+140h] [rbp-348h] BYREF
  int v160; // [rsp+144h] [rbp-344h] BYREF
  int v161; // [rsp+148h] [rbp-340h] BYREF
  __int64 v162; // [rsp+150h] [rbp-338h] BYREF
  struct DXGCONTEXT *v163; // [rsp+158h] [rbp-330h]
  struct _EX_RUNDOWN_REF *v164; // [rsp+160h] [rbp-328h]
  int v165; // [rsp+168h] [rbp-320h] BYREF
  int v166; // [rsp+16Ch] [rbp-31Ch] BYREF
  struct CRefCountedBuffer *v167; // [rsp+170h] [rbp-318h]
  __int64 v168; // [rsp+178h] [rbp-310h]
  _DWORD *v169; // [rsp+180h] [rbp-308h] BYREF
  __int128 *v170; // [rsp+188h] [rbp-300h] BYREF
  struct DXGPROCESS *v171; // [rsp+190h] [rbp-2F8h] BYREF
  int v172; // [rsp+198h] [rbp-2F0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v173; // [rsp+1A0h] [rbp-2E8h]
  D3DDDI_FLIPINTERVAL_TYPE *v174; // [rsp+1A8h] [rbp-2E0h]
  struct CRefCountedBuffer *v175; // [rsp+1B0h] [rbp-2D8h] BYREF
  _QWORD v176[3]; // [rsp+1B8h] [rbp-2D0h] BYREF
  _BYTE v177[16]; // [rsp+1D0h] [rbp-2B8h] BYREF
  PVOID P; // [rsp+1E0h] [rbp-2A8h]
  _BYTE v179[32]; // [rsp+1E8h] [rbp-2A0h] BYREF
  UINT v180; // [rsp+208h] [rbp-280h]
  __int64 v181; // [rsp+210h] [rbp-278h] BYREF
  int v182; // [rsp+218h] [rbp-270h]
  char v183[8]; // [rsp+220h] [rbp-268h] BYREF
  UINT64 v184; // [rsp+228h] [rbp-260h]
  _QWORD *v185; // [rsp+230h] [rbp-258h]
  struct DXGCONTEXT *v186; // [rsp+238h] [rbp-250h]
  struct VIDSCH_SUBMIT_DATA_BASE *v187; // [rsp+240h] [rbp-248h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v188; // [rsp+248h] [rbp-240h]
  struct DXGK_PRESENT_PARAMS *v189; // [rsp+250h] [rbp-238h]
  struct DXGK_PRESENT_PARAMS *v190; // [rsp+258h] [rbp-230h]
  struct tagRECT v191; // [rsp+260h] [rbp-228h] BYREF
  struct _D3DDDI_HDR_METADATA_HDR10 v192; // [rsp+270h] [rbp-218h] BYREF
  __int64 v193; // [rsp+290h] [rbp-1F8h]
  struct _EX_RUNDOWN_REF *v194; // [rsp+298h] [rbp-1F0h]
  __int64 v195; // [rsp+2A0h] [rbp-1E8h]
  __int64 v196; // [rsp+2A8h] [rbp-1E0h]
  _DXGKARG_PRESENT v197; // [rsp+2B0h] [rbp-1D8h] BYREF
  __int128 v198; // [rsp+360h] [rbp-128h] BYREF
  struct tagRECT v199; // [rsp+370h] [rbp-118h] BYREF
  _QWORD v200[5]; // [rsp+380h] [rbp-108h] BYREF
  int v201; // [rsp+3A8h] [rbp-E0h]
  PVOID v202; // [rsp+3B0h] [rbp-D8h] BYREF
  _BYTE v203[128]; // [rsp+3B8h] [rbp-D0h] BYREF
  int v204; // [rsp+438h] [rbp-50h]

  v163 = a4;
  v7 = a3;
  v173 = a3;
  v8 = a2;
  v149 = (unsigned __int64)a2;
  v9 = a1;
  v158 = a1;
  v188 = a1;
  v189 = v8;
  v190 = v8;
  v187 = a3;
  v186 = a4;
  v167 = a6;
  Model = a1->Model;
  if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    v12 = 0;
  }
  else
  {
    if ( Model != D3DKMT_PM_FLIPMANAGER )
      return 0LL;
    FenceValue = v9->Token.Flip.FenceValue;
    v12 = 0;
    if ( !FenceValue )
      return 0LL;
    if ( (v9->Token.Gdi.ScrollRect.left & 4) == 0 )
      return 0LL;
    if ( (int)CPushLock::AcquireLockShared((CPushLock *)(FenceValue + 72)) < 0 )
      return 0LL;
    v13 = *(_QWORD *)(FenceValue + 96);
    CPushLock::ReleaseLock((CPushLock *)(FenceValue + 72));
    if ( !v13 )
      return 0LL;
    if ( !*(_DWORD *)(v13 + 28) && !*(_DWORD *)(v13 + 32) || !*(_QWORD *)(v13 + 40) )
      return 0LL;
    v8 = (struct DXGK_PRESENT_PARAMS *)v149;
    v9 = v158;
  }
  if ( a4 && !v8 )
    return 0LL;
  CIFlipPresentHistoryToken::CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v135, v9);
  p_CompositionBindingId = 0LL;
  if ( a4 )
  {
    v15 = *((_QWORD *)a4 + 2);
    v153 = (UINT64 *)v15;
    v16 = *(UINT64 **)(*(_QWORD *)(v15 + 16) + 16LL);
  }
  else
  {
    p_CompositionBindingId = *a5;
    v16 = a5[2];
    v153 = a5[3];
  }
  v176[1] = v16;
  v139 = (DXGADAPTER *)v16;
  if ( !a4 && !*((_BYTE *)v16 + 2874) )
  {
LABEL_53:
    CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v135);
    return 0LL;
  }
  *((_QWORD *)v7 + 3) = 0LL;
  Current = DXGPROCESS::GetCurrent(v15);
  v171 = Current;
  v18 = v16[366];
  v184 = v18;
  v19 = 0LL;
  if ( v16[365] )
    v19 = v16[365];
  v20 = v149;
  v162 = v149 & -(__int64)(a4 != 0LL);
  if ( a4 )
    v21 = *(_DWORD *)((v149 & -(__int64)(a4 != 0LL)) + 0x14);
  else
    v21 = *((_DWORD *)p_CompositionBindingId + 275);
  v140 = v21;
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v143, v21);
  v22 = v143;
  if ( !v143 || *(_QWORD *)(*(_QWORD *)(v143[1].Count + 16) + 16LL) != *(_QWORD *)(v153[2] + 16) )
    goto LABEL_52;
  Count = v143[5].Count;
  if ( v167 && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
    *((_QWORD *)v7 + 3) = *(_QWORD *)(*(_QWORD *)(Count + 56) + 176LL);
  if ( a4 )
    v24 = *(_QWORD *)(v20 + 1496);
  else
    v24 = 0LL;
  v176[2] = v24;
  v168 = v24;
  v141 = (*(_DWORD *)(v22[6].Count + 4) >> 6) & 0xF;
  v159 = 0;
  v148 = 0;
  v160 = 0;
  v161 = 0;
  v136 = 0;
  v176[0] = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 24LL))(v135);
  v146 = 0;
  v198 = 0LL;
  v199 = 0LL;
  v151 = (char *)v7 + (*((_BYTE *)v7 + 356) != 0 ? 760LL : 528LL);
  v25 = *(_QWORD *)(v18 + 736);
  p_CompositionBindingId = &v158->CompositionBindingId;
  CompositionBindingId = v158->CompositionBindingId;
  v27 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, UINT64, char *, int *, int *, unsigned int *, _QWORD *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(v25 + 8) + 408LL))(
    *(_QWORD *)(v18 + 744),
    &v141,
    v27,
    CompositionBindingId,
    v151,
    &v159,
    &v148,
    &v136,
    v176,
    &v160,
    &v161,
    &v146,
    &v198,
    &v199);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v135[0] + 32LL))(v135, v176[0]);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v135[0] + 48LL))(v135, v141);
  *((_DWORD *)v7 + 29) = v141;
  v28 = (struct _LUID *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
  RtlCopyLuid((PLUID)((char *)v7 + 156), v28);
  *((_QWORD *)v7 + 21) = *p_CompositionBindingId;
  v29 = *(_DWORD *)v7 & 0xFFFEFFFF;
  *(_DWORD *)v7 = v29;
  v30 = v163;
  if ( v163 )
  {
    v31 = v162;
    v32 = (*(_DWORD *)(v162 + 88) ^ v29) & 4 ^ v29;
    *(_DWORD *)v7 = v32;
    v33 = (v32 ^ (4 * *(_DWORD *)(v31 + 88))) & 0x80000 ^ v32;
    *(_DWORD *)v7 = v33;
    v34 = (v33 ^ (4 * *(_DWORD *)(v31 + 88))) & 0x100000 ^ v33;
    *(_DWORD *)v7 = v34;
    *(_DWORD *)v7 = v34 ^ (v34 ^ (4 * *(_DWORD *)(v31 + 88))) & 0x200000;
  }
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ (8 * (*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 200LL))(v135))) & 8;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ (16 * (*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 208LL))(v135))) & 0x10;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 216LL))(v135) << 28)) & 0x10000000;
  *((_DWORD *)v7 + 1) ^= (*((_DWORD *)v7 + 1) ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 224LL))(v135) << 6)) & 0x40;
  *((_DWORD *)v7 + 1) ^= (*((_DWORD *)v7 + 1) ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 320LL))(v135) << 8)) & 0x100;
  v35 = v139;
  (*(void (__fastcall **)(_QWORD *, DXGADAPTER *))(v135[0] + 56LL))(v135, v139);
  *((_DWORD *)v7 + 28) = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 64LL))(v135);
  *((_DWORD *)v7 + 48) = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 72LL))(v135);
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 192LL))(v135) << 25)) & 0x2000000;
  *((_DWORD *)v7 + 36) = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 80LL))(v135);
  *((_DWORD *)v7 + 37) = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 88LL))(v135);
  if ( v30 )
    v36 = *((_DWORD *)v30 + 99);
  else
    v36 = 1;
  *((_DWORD *)v7 + 34) = v36;
  if ( *((_BYTE *)v7 + 356) )
    *((_DWORD *)v7 + 160) = -1;
  if ( bTracingEnabled )
    *((_QWORD *)v7 + 23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 760) + 8LL) + 336LL))(
                             *(_QWORD *)(v18 + 768),
                             v140);
  v37 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 96LL))(v135);
  v174 = (D3DDDI_FLIPINTERVAL_TYPE *)((char *)v7 + 124);
  *((_DWORD *)v7 + 31) = v37;
  v152 = (int *)((char *)v7 + 124);
  v172 = 1;
  if ( !v37
    && (!(*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 216LL))(v135) || (*((_DWORD *)v35 + 569) & 0x40) == 0) )
  {
    v152 = &v172;
  }
  v38 = (*(__int64 (__fastcall **)(UINT64, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(v18 + 736) + 8LL) + 512LL))(
          v153[100],
          v141,
          v152);
  v40 = v38;
  *((_DWORD *)v7 + 30) = v38;
  if ( v38 != 5 && *v174 )
  {
    v41 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 64LL))(v135);
    v42 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 104LL))(v135);
    WdLogSingleEntry4(8LL, v158, v42, v41, v40);
    goto LABEL_52;
  }
  if ( !v159 )
  {
    if ( v160 )
    {
      v165 = 0;
      v181 = 0LL;
      v44 = *(_QWORD *)(v18 + 736);
      v45 = *((_QWORD *)v7 + 21);
      v46 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
      LOBYTE(v131) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(v44 + 8) + 400LL))(
        *(_QWORD *)(v18 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v46,
        v45,
        &v136,
        0,
        v131,
        &v165,
        &v181);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v19, *((_DWORD *)v7 + 29), v136, 0);
    }
    else if ( !v161 )
    {
      goto LABEL_52;
    }
    LOBYTE(v39) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v135[0] + 232LL))(v135, v39);
LABEL_52:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v143);
    goto LABEL_53;
  }
  *((_QWORD *)v7 + 22) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 24LL))(v135);
  LODWORD(v137) = 0;
  v147 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 240LL))(v135) )
  {
    v166 = 0;
    v169 = 0LL;
    v47 = *(_QWORD *)(v18 + 736);
    v48 = *((_QWORD *)v7 + 21);
    v49 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
    LOBYTE(v131) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, int *, _DWORD **))(*(_QWORD *)(v47 + 8) + 400LL))(
      *(_QWORD *)(v18 + 744),
      (unsigned int)(1 << *((_DWORD *)v7 + 29)),
      v49,
      v48,
      &v136,
      0,
      v131,
      &v166,
      &v169);
    LOBYTE(v50) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v135[0] + 232LL))(v135, v50);
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v19, *((_DWORD *)v7 + 29), v136, 0);
    WdLogSingleEntry1(8LL, 2143LL);
    goto LABEL_52;
  }
  if ( v148 || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(v18 + 16)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 248LL))(v135) )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v177, (struct ADAPTER_DISPLAY *)v19);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v177);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    (DXGADAPTER **)v19,
                                    *((_DWORD *)v7 + 29));
      v133 = PostCompositionStretching;
      if ( PostCompositionStretching )
      {
        if ( IsYUVAllocation(*(void **)(v143[6].Count + 16), (struct ADAPTER_RENDER *)v18)
          || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v19 + 128)
                                                                         + 4000LL * *((unsigned int *)v7 + 29))) > 1 )
        {
          PostCompositionStretching = 0;
          v133 = 0;
        }
        else
        {
          PostCompositionStretching = v133;
        }
      }
      v191 = 0LL;
      if ( v136 || (v59 = 1, !PostCompositionStretching) )
        v59 = 0;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v7 + 29),
              v136,
              (struct CIFlipPresentHistoryTokenData *)v135,
              v59,
              (struct ADAPTER_RENDER *)v18,
              (struct ADAPTER_DISPLAY *)v19,
              &v191) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v177);
        LODWORD(v153) = 0;
        v171 = 0LL;
        v65 = *(_QWORD *)(v18 + 736);
        v66 = *((_QWORD *)v7 + 21);
        v67 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
        LOBYTE(v132) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, UINT64 **, struct DXGPROCESS **))(*(_QWORD *)(v65 + 8) + 400LL))(
          *(_QWORD *)(v18 + 744),
          (unsigned int)(1 << *((_DWORD *)v7 + 29)),
          v67,
          v66,
          &v136,
          0,
          v132,
          &v153,
          &v171);
        WdLogSingleEntry1(3LL, v136);
        LOBYTE(v68) = 1;
        (*(void (__fastcall **)(_QWORD *, __int64))(v135[0] + 232LL))(v135, v68);
        ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v19, *((_DWORD *)v7 + 29), v136, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v177);
        goto LABEL_52;
      }
      v60 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 8LL))(v135);
      v170 = v60;
      v61 = v151;
      *(_WORD *)v151 = *(_WORD *)v60;
      *((_WORD *)v61 + 2) = *((_WORD *)v60 + 2);
      *((_WORD *)v61 + 1) = *((_WORD *)v60 + 4);
      *((_WORD *)v61 + 3) = *((_WORD *)v60 + 6);
      *((_DWORD *)v61 + 6) = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 112LL))(v135);
      if ( v133 )
      {
        v62 = *(_QWORD *)v61;
        *((_QWORD *)v61 + 1) = *(_QWORD *)v61;
        *((_QWORD *)v61 + 2) = v62;
        v63 = *v170;
        v198 = v63;
        v199 = v191;
        if ( (_DWORD)v63 != v191.left
          || __PAIR64__(DWORD2(v198), DWORD1(v63)) != *(_QWORD *)&v191.top
          || (v64 = 0LL, HIDWORD(v198) != v191.bottom) )
        {
          v64 = 1LL;
        }
        v146 = v64;
        if ( !(_DWORD)v64 )
        {
          v198 = 0LL;
          v199 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(v18 + 736)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
          *(_QWORD *)(v18 + 744),
          *((unsigned int *)v7 + 29),
          v64,
          &v198,
          &v199);
        UpdatePostComposition(
          *((_DWORD *)v7 + 29),
          v146 != 0,
          DWORD2(v198) - v198,
          HIDWORD(v198) - DWORD1(v198),
          (struct ADAPTER_DISPLAY *)v19);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 736) + 8LL) + 416LL))(
        *(_QWORD *)(v18 + 744),
        *((unsigned int *)v7 + 29),
        v61,
        v136);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v177);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v177);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v19, *((_DWORD *)v7 + 29), v136, 1u);
    }
    *(_DWORD *)v7 = (v146 << 31) | (*(_DWORD *)v7 ^ (*(_DWORD *)v7 ^ (v148 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)v7 + 436) = v198;
    *(struct tagRECT *)((char *)v7 + 452) = v199;
  }
  else
  {
    v51 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 8LL))(v135);
    v169 = v51;
    if ( v51[2] - *v51 != (*(unsigned int (__fastcall **)(_QWORD *))(v135[0] + 120LL))(v135)
      || v51[3] - v51[1] != (*(unsigned int (__fastcall **)(_QWORD *))(v135[0] + 128LL))(v135)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 248LL))(v135) )
    {
      LODWORD(v162) = 0;
      v170 = 0LL;
      v52 = *(_QWORD *)(v18 + 736);
      v53 = *((_QWORD *)v7 + 21);
      v54 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
      LOBYTE(v131) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, __int64 *, __int128 **))(*(_QWORD *)(v52 + 8) + 400LL))(
        *(_QWORD *)(v18 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v54,
        v53,
        &v136,
        0,
        v131,
        &v162,
        &v170);
      v55 = (*(unsigned int (__fastcall **)(_QWORD *))(v135[0] + 128LL))(v135);
      v56 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 120LL))(v135);
      WdLogSingleEntry4(8LL, v169[2] - *v169, v169[3] - v169[1], v56, v55);
      LOBYTE(v57) = 1;
      (*(void (__fastcall **)(_QWORD *, __int64))(v135[0] + 232LL))(v135, v57);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v19, *((_DWORD *)v7 + 29), 0, 0);
LABEL_131:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v143);
      CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v135);
      return v12;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v19, *((_DWORD *)v7 + 29), 0, 1u);
  }
  if ( v19 && (*(_DWORD *)(v19 + 24) & 0x10) != 0 )
  {
    if ( !ADAPTER_DISPLAY::IsHdrEnabled((ADAPTER_DISPLAY *)v19, v141) )
    {
      *((_DWORD *)v7 + 90) = 0;
      goto LABEL_112;
    }
    *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 256LL))(v135) << 30)) & 0x40000000;
    v69 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 136LL))(v135);
    *((_DWORD *)v7 + 90) = v69;
    if ( (*(_DWORD *)v7 & 0x40000000) != 0 )
    {
      if ( v69 )
      {
        v70 = v69 - 1;
        if ( v70 )
        {
          if ( v70 == 1 )
          {
            v71 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 152LL))(v135);
            *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v71;
            *(_OWORD *)((char *)v7 + 380) = *(_OWORD *)(v71 + 16);
            *(_OWORD *)((char *)v7 + 396) = *(_OWORD *)(v71 + 32);
            *(_OWORD *)((char *)v7 + 412) = *(_OWORD *)(v71 + 48);
            *(_QWORD *)((char *)v7 + 428) = *(_QWORD *)(v71 + 64);
          }
          else
          {
            WdLogSingleEntry1(1LL, 2348LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 2348LL, 0LL, 0LL, 0LL, 0LL);
            *(_DWORD *)v7 &= ~0x40000000u;
          }
        }
        else
        {
          v72 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 144LL))(v135);
          *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v72;
          *(_QWORD *)((char *)v7 + 380) = *(_QWORD *)(v72 + 16);
          *((_DWORD *)v7 + 97) = *(_DWORD *)(v72 + 24);
        }
      }
    }
    else
    {
      if ( v69 > 2 )
      {
        WdLogSingleEntry1(1LL, 2356LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR1"
                    "0PLUS == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pVidSchSubmitData->HDRMetaDataType",
          2356LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)v7 |= 0x40000000u;
      if ( *((_DWORD *)v7 + 90) == 1 )
      {
        *((_DWORD *)v7 + 90) = 134217729;
      }
      else if ( *((_DWORD *)v7 + 90) == 2 )
      {
        *((_DWORD *)v7 + 90) = -2147483646;
      }
    }
    if ( !*((_DWORD *)v7 + 90) )
    {
      v142 = D3DDDI_HDR_METADATA_TYPE_NONE;
      memset(&v192, 0, sizeof(v192));
      if ( !(unsigned int)PopulateHDRMetadataFromDisplay(
                            *((_DWORD *)v7 + 29),
                            (struct ADAPTER_DISPLAY *)v19,
                            &v192,
                            &v142) )
      {
        *((struct _D3DDDI_HDR_METADATA_HDR10 *)v7 + 13) = v192;
        *((_DWORD *)v7 + 90) = v142;
LABEL_112:
        *(_DWORD *)v7 |= 0x40000000u;
      }
    }
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v135[0] + 160LL))(v135, v136);
  v73 = (_DWORD *)((char *)v7 + 600);
  if ( !*((_BYTE *)v7 + 356) )
    v73 = (_DWORD *)((char *)v7 + 496);
  *v73 ^= (*v73 ^ (1 << v136)) & 0x3FF;
  v74 = 1;
  v150 = 1;
  if ( DXGADAPTER::IsDxgmms2(v139) && v30 )
  {
    v74 = *(_DWORD *)(v162 + 92) + 1;
    v150 = v74;
  }
  v140 = 0;
  Pool2 = 0LL;
  v157 = 0LL;
  P = 0LL;
  v180 = 0;
  if ( v74 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v74 < 8 )
      goto LABEL_125;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v74, 1265072196LL);
    P = Pool2;
    goto LABEL_123;
  }
  Pool2 = v179;
  v157 = v179;
  P = v179;
  if ( v74 )
  {
    memset(v179, 0, 8LL * v74);
    Pool2 = P;
LABEL_123:
    v157 = Pool2;
  }
  v180 = v74;
LABEL_125:
  v185 = Pool2;
  if ( !Pool2 )
  {
LABEL_130:
    P = 0LL;
    v180 = 0;
    v12 = -1073741801;
    goto LABEL_131;
  }
  v200[0] = 0LL;
  v201 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::AllocateElements(v200, v74);
  v76 = (int *)v200[0];
  v152 = (int *)v200[0];
  if ( !v200[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v200);
    if ( P != v179 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    goto LABEL_130;
  }
  v77 = 0;
  v138 = 0;
  v78 = (char *)v7 + 600;
  while ( 1 )
  {
    v151 = v78;
    if ( v77 >= v74 )
      break;
    if ( v77 )
    {
      v144 = v77;
      v88 = 2LL * v77;
      LODWORD(v154) = *(_DWORD *)(*(_QWORD *)(v88 * 4 + *(_QWORD *)(v149 + 1496)) + 400LL);
      v89 = (_DWORD *)(*(_QWORD *)(v162 + 1456) + 4LL * (v77 - 1));
      if ( v89 + 1 < v89 || (unsigned __int64)(v89 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v137) = *v89;
      v182 = v137;
      v145 = (struct _EX_RUNDOWN_REF **)&v76[v88];
      AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v171,
                                                    (DXGALLOCATIONREFERENCE *)v183,
                                                    v137);
      DXGALLOCATIONREFERENCE::MoveAssign(v145, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v183);
      v87 = *v145;
      v164 = v87;
      if ( !v87 )
      {
        v91 = (unsigned int)v137;
        WdLogSingleEntry3(2LL, (unsigned int)v137, -1073741811LL, 2470LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
          v91,
          -1073741811LL,
          2470LL,
          0LL,
          0LL);
        v92 = -1073741811;
        LODWORD(v137) = -1073741811;
        v147 = -1073741811;
        v30 = v163;
        v93 = v139;
        goto LABEL_188;
      }
      v193 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v149 + 1496) + 8 * v144) + 16LL);
      v194 = v87;
      v195 = *(_QWORD *)(v87[1].Count + 16);
      v196 = *(_QWORD *)(v193 + 16);
      if ( *(_QWORD *)(v195 + 16) != *(_QWORD *)(v196 + 16) )
      {
        _mm_lfence();
        WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v149 + 1496) + 8 * v144) + 16LL), v87, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v149 + 1496) + 8 * v144) + 16LL),
          (__int64)*v145,
          -1073741811LL,
          0LL,
          0LL);
        v92 = -1073741811;
        LODWORD(v137) = -1073741811;
        v147 = -1073741811;
        v93 = v139;
        goto LABEL_188;
      }
      v94 = *(_QWORD *)(v87[6].Count + 16);
      v137 = v94;
      v85 = v151;
      v95 = (struct _EX_RUNDOWN_REF **)(v151 + 8);
      v96 = v151 + 4;
      v145 = (struct _EX_RUNDOWN_REF **)(v151 + 8);
      v156 = v151 + 4;
      if ( *((_BYTE *)v7 + 356) )
      {
        v97 = &v151[64 * (unsigned __int64)(v138 * *v96) + 24 + *v96 * ((8 * *(_DWORD *)v95 + 231) & 0xFFFFFFF8)];
        v94 = v137;
      }
      else
      {
        v97 = (char *)v7 + 512;
      }
      *(_QWORD *)v97 = v94;
      if ( !*((_BYTE *)v139 + 2874) )
      {
        v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v149 + 1496) + 8 * v144) + 184LL);
        v137 = v98;
        if ( *((_BYTE *)v7 + 356) )
        {
          v99 = &v85[64 * (unsigned __int64)(v138 * *v96) + 16 + *v96 * ((8 * *(_DWORD *)v95 + 231) & 0xFFFFFFF8)];
          v98 = v137;
        }
        else
        {
          v99 = (char *)v7 + 568;
        }
        *(_QWORD *)v99 = v98;
      }
      *((_DWORD *)v7 + 34) |= 1 << v154;
      v154 = *(_QWORD *)(8 * v144 + *(_QWORD *)(v149 + 1496));
      if ( (*(_DWORD *)(v154 + 404) & 0x10) == 0 )
      {
        *(_QWORD *)((char *)v7 + 8 * v144 + *((unsigned int *)v7 + 138)) = *(_QWORD *)(v154 + 256);
        v145 = v95;
        v156 = v96;
      }
      v86 = v138;
    }
    else
    {
      v164 = v143;
      v79 = *(_QWORD *)(v143[6].Count + 16);
      v144 = v79;
      v80 = v78 + 8;
      v81 = v78 + 4;
      v145 = (struct _EX_RUNDOWN_REF **)(v78 + 8);
      v156 = v78 + 4;
      if ( *((_BYTE *)v7 + 356) )
      {
        v82 = &v78[*v81 * ((8 * *v80 + 231) & 0xFFFFFFF8) + 24];
        v79 = v144;
      }
      else
      {
        v82 = (char *)v7 + 512;
      }
      *(_QWORD *)v82 = v79;
      v83 = v139;
      if ( !*((_BYTE *)v139 + 2874) )
      {
        if ( *((_BYTE *)v7 + 356) )
        {
          v84 = &v78[*v81 * ((8 * *v80 + 231) & 0xFFFFFFF8) + 16];
          v83 = v139;
        }
        else
        {
          v84 = (char *)v7 + 568;
        }
        *(_QWORD *)v84 = *((_QWORD *)v30 + 23);
      }
      if ( DXGADAPTER::IsDxgmms2(v83) && v30 && (*((_DWORD *)v30 + 101) & 0x10) == 0 )
        *(_QWORD *)((char *)v7 + *((unsigned int *)v7 + 138)) = *((_QWORD *)v30 + 32);
      v144 = v86;
    }
    if ( *((_BYTE *)v7 + 356) )
      v100 = (unsigned __int64)&v85[64 * (unsigned __int64)(v86 * *v156)
                                  + 48
                                  + *v156 * ((8 * *(_DWORD *)v145 + 231) & 0xFFFFFFF8)];
    else
      v100 = (unsigned __int64)v7 + 504;
    v154 = v100;
    LODWORD(v137) = (*(__int64 (__fastcall **)(UINT64, ULONG_PTR, unsigned __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 760) + 8LL)
                                                                                           + 416LL))(
                      v153[99],
                      v87[3].Count,
                      v100,
                      *(_QWORD *)(v18 + 768));
    v147 = v137;
    if ( (int)v137 < 0 )
    {
      WdLogSingleEntry2(2LL, v164, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference allocation for submission (0x%I64x). Returning 0x%I64x",
        (__int64)v164,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      break;
    }
    Pool2[v144] = *(_QWORD *)v154;
    ++v140;
    v101 = v164[5].Count;
    if ( v101 )
      v102 = (*(_DWORD *)(v101 + 4) & 8) != 0;
    else
      v102 = 0;
    if ( v102 )
      v103 = *(_QWORD *)(*(_QWORD *)(v101 + 56) + 184LL);
    else
      v103 = 0LL;
    if ( *((_BYTE *)v7 + 356) )
      *(_QWORD *)&v151[64 * (unsigned __int64)(v138 * *v156) + 56 + *v156 * ((8 * *(_DWORD *)v145 + 231) & 0xFFFFFFF8)] = v103;
    else
      *((_QWORD *)v7 + 72) = v103;
    *(_DWORD *)v7 |= 0x1000000u;
    v104 = *p_CompositionBindingId;
    v105 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
    v106 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 64LL))(v135);
    v107 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 104LL))(v135);
    WdLogSingleEntry5(8LL, v158, v107, v106, v105, v104);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v135[0] + 336LL))(v135) )
    {
      *((_DWORD *)v7 + 1) |= 2u;
      *((_QWORD *)v7 + 60) = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 344LL))(v135);
      v108 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 352LL))(v135);
      v109 = v108;
      *((_QWORD *)v7 + 61) = v108;
      if ( v108 )
      {
        if ( !v108[1] )
        {
          if ( *v108 != 56 )
          {
            WdLogSingleEntry1(1LL, 2564LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pAuxiliaryPresentInfo->size == sizeof(D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO)",
              2564LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v109[6] = *((_DWORD *)v7 + 29);
          *((_QWORD *)v109 + 2) = *(_QWORD *)((char *)v139 + 404);
        }
      }
    }
    v77 = ++v138;
    v74 = v150;
    Pool2 = v157;
    v30 = v163;
    v78 = v151;
    v76 = v152;
  }
  v93 = v139;
  v92 = v137;
LABEL_188:
  *((_DWORD *)v7 + 35) = v74;
  if ( v92 < 0 || (*((_DWORD *)v93 + 569) & 0x20) == 0 )
  {
    v120 = v137;
    goto LABEL_218;
  }
  memset(&v197, 0, sizeof(v197));
  v197.Flags.Value = 0x2000;
  if ( v167 )
  {
    v197.PrivateDriverDataSize = *((_DWORD *)v167 + 2);
    v197.pPrivateDriverData = (char *)v167 + 16;
  }
  v202 = 0LL;
  v204 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v202, v74);
  v197.pAllocationList = (DXGK_ALLOCATIONLIST *)v202;
  if ( v202 )
  {
    v110 = *((_DWORD *)v139 + 571);
    if ( (v110 & 0x80u) == 0 || (v111 = 1, (v110 & 0x40) != 0) )
      v111 = 0;
    v134 = v111;
    v112 = D3DDDI_HDR_METADATA_TYPE_NONE;
    v142 = D3DDDI_HDR_METADATA_TYPE_NONE;
    if ( v74 )
    {
      v113 = 0LL;
      v114 = 0LL;
      do
      {
        if ( v30 )
        {
          v115 = (_QWORD *)(v149 + 1496);
          v116 = *(_WORD *)(*(_QWORD *)(v114 * 4 + *(_QWORD *)(v149 + 1496)) + 400LL);
        }
        else
        {
          v116 = 0;
          v115 = (_QWORD *)((char *)v190 + 1496);
        }
        *(_WORD *)((char *)&v197.pAllocationList[1].hDeviceSpecificAllocation + v113 + 2) = v116;
        if ( v112 )
          v117 = *(struct _EX_RUNDOWN_REF **)&v152[v114];
        else
          v117 = v143;
        if ( v30 )
        {
          v111 = *(_BYTE *)(*(_QWORD *)(v114 * 4 + *v115) + 439LL);
          v134 = v111;
        }
        *(struct _EX_RUNDOWN_REF *)((char *)&v197.pAllocationList->hDeviceSpecificAllocation + v113) = v117[4];
        LOBYTE(v115) = v111;
        v118 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 760) + 8LL)
                                                                              + 240LL))(
                 *(_QWORD *)(v18 + 768),
                 v117[3].Count,
                 v115,
                 *(unsigned __int16 *)((char *)&v197.pAllocationList[1].hDeviceSpecificAllocation + v113 + 2));
        *(_QWORD *)((char *)&v197.pAllocationList->8 + v113) = v118;
        v112 = v142 + 1;
        v142 = v112;
        v114 += 2LL;
        v113 += 32LL;
        v111 = v134;
      }
      while ( v112 < v74 );
      v7 = v173;
      Pool2 = v157;
    }
    v197.FlipInterval = *v174;
    v197.Flags.Value ^= (*(_WORD *)&v197.Flags.0 ^ (unsigned __int16)(*(_DWORD *)v7 >> 11)) & 0x1700;
    v197.NumSrcAllocations = v74;
    v119 = 0LL;
    if ( !*((_BYTE *)v139 + 2874) )
      v119 = (void *)*((_QWORD *)v30 + 23);
    v120 = ADAPTER_RENDER::DdiPresent((ADAPTER_RENDER *)v18, v119, &v197);
    v93 = (const struct DXGADAPTER *)v202;
    if ( v120 < 0 )
    {
      if ( v202 != v203 && v202 )
        ExFreePoolWithTag(v202, 0);
      goto LABEL_225;
    }
    if ( v202 != v203 && v202 )
      ExFreePoolWithTag(v202, 0);
LABEL_218:
    if ( v148 && (*(_DWORD *)v7 & 0x1000000) != 0 )
    {
      v175 = 0LL;
      if ( *((int *)v139 + 705) < 2500
        || (v121 = ReadPresentDirtyRectsData(v93, v136, (const struct CIFlipPresentHistoryTokenData *)v135, &v175),
            v121 >= 0) )
      {
        *((_QWORD *)v7 + 4) = v175;
      }
      else
      {
        v122 = v121;
        WdLogSingleEntry1(2LL, v121);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to read dirty rects data. Returning 0x%I64x",
          v122,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    goto LABEL_225;
  }
  v120 = v137;
LABEL_225:
  if ( v120 < 0 )
  {
    if ( v140 )
    {
      v123 = v140;
      if ( v163 )
      {
        v124 = v168;
        v125 = (char *)Pool2 - v168;
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 760) + 8LL) + 424LL))(
            *(_QWORD *)(v18 + 768),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v124 + 400LL)),
            *(_QWORD *)&v125[v124],
            0LL);
          v124 += 8LL;
          --v123;
        }
        while ( v123 );
      }
      else
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 760) + 8LL) + 424LL))(
            *(_QWORD *)(v18 + 768),
            1LL,
            *Pool2++,
            0LL);
          --v123;
        }
        while ( v123 );
      }
    }
    v126 = *p_CompositionBindingId;
    v127 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 16LL))(v135);
    v128 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 64LL))(v135);
    v129 = (*(__int64 (__fastcall **)(_QWORD *))(v135[0] + 104LL))(v135);
    WdLogSingleEntry5(8LL, v158, v129, v128, v127, v126);
    LOBYTE(v130) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v135[0] + 232LL))(v135, v130);
    *(_DWORD *)v7 &= ~0x1000000u;
    v120 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v200);
  if ( P != v179 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v180 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v143);
  CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v135);
  return (unsigned int)v120;
}
