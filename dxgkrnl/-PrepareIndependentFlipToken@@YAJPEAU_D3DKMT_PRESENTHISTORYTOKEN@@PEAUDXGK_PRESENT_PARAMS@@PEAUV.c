/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01CA148
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0371F08 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C002508C (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C0048A9C (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0051E98 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0053038 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0054DB4 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0164970 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0223696 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C02236EA (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0223CC0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBVCIFlipPresentHistoryTokenData@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0223EC2 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBVCIFlipPresentHistoryTokenData@@PEAPEAVCRefCo.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C02B8A9C (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C02BB4F4 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C02E6C04 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ??0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C031C120 (--0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1C031C184 (--1CIFlipPresentHistoryToken@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C031ECF8 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C031F540 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0320500 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
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
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v16; // rcx
  UINT64 *v17; // rdi
  struct DXGPROCESS *Current; // r9
  UINT64 v19; // r13
  UINT64 v20; // rsi
  struct DXGK_PRESENT_PARAMS *v21; // rdi
  unsigned int v22; // eax
  struct _EX_RUNDOWN_REF *v23; // rax
  ULONG_PTR Count; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  UINT64 CompositionBindingId; // rdi
  __int64 v28; // rax
  struct _LUID *v29; // rax
  unsigned int v30; // ecx
  struct DXGCONTEXT *v31; // rbx
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  DXGADAPTER *v36; // rdi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdi
  unsigned int v42; // ebx
  __int64 v43; // rax
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
  struct _EX_RUNDOWN_REF *v61; // rdi
  ULONG_PTR v62; // rax
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
  _BYTE *Pool2; // rcx
  const struct DXGADAPTER *v76; // rcx
  int *v77; // r9
  UINT v78; // r11d
  char *v79; // rsi
  __int64 v80; // r10
  _DWORD *v81; // rcx
  _DWORD *v82; // rdx
  char *v83; // r9
  DXGADAPTER *v84; // rax
  char *v85; // rcx
  struct _EX_RUNDOWN_REF *v86; // r8
  unsigned int v87; // r11d
  __int64 v88; // rax
  __int64 v89; // rdx
  _DWORD *v90; // r8
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v92; // rbx
  int v93; // esi
  DXGADAPTER *v94; // rax
  __int64 v95; // rax
  _DWORD *v96; // r9
  _DWORD *v97; // r10
  char *v98; // rdx
  __int64 v99; // rax
  char *v100; // rdx
  unsigned __int64 v101; // r11
  char *pAllocationList; // r9
  int v103; // eax
  char v104; // r11
  enum _D3DDDI_HDR_METADATA_TYPE v105; // r8d
  struct DXGK_PRESENT_PARAMS *v106; // r15
  __int64 v107; // rdx
  _QWORD *v108; // r10
  __int16 v109; // ax
  ULONG_PTR v110; // rcx
  bool v111; // al
  __int64 v112; // r8
  UINT64 v113; // rsi
  __int64 v114; // rdi
  unsigned int v115; // ebx
  __int64 v116; // rax
  _DWORD *v117; // rax
  _DWORD *v118; // rbx
  __int64 v119; // rsi
  struct _EX_RUNDOWN_REF *v120; // r8
  ULONG_PTR v121; // rdx
  __int64 v122; // rax
  DXGADAPTER *v123; // rdi
  void *v124; // rdx
  int v125; // eax
  __int64 v126; // rbx
  unsigned int v127; // edi
  struct DXGCONTEXT *v128; // rbx
  _BYTE *v129; // r15
  unsigned int v130; // esi
  int v131; // ecx
  UINT64 v132; // rsi
  __int64 v133; // rdi
  unsigned int v134; // ebx
  __int64 v135; // rax
  __int64 v136; // rdx
  int v137; // [rsp+30h] [rbp-458h]
  int v138; // [rsp+30h] [rbp-458h]
  unsigned __int8 v139; // [rsp+80h] [rbp-408h]
  char v140; // [rsp+80h] [rbp-408h]
  _QWORD v141[2]; // [rsp+88h] [rbp-400h] BYREF
  unsigned int v142; // [rsp+98h] [rbp-3F0h] BYREF
  DXGADAPTER *v143; // [rsp+A0h] [rbp-3E8h]
  unsigned int v144; // [rsp+A8h] [rbp-3E0h]
  unsigned int v145; // [rsp+ACh] [rbp-3DCh] BYREF
  unsigned int v146; // [rsp+B0h] [rbp-3D8h]
  enum _D3DDDI_HDR_METADATA_TYPE v147; // [rsp+B4h] [rbp-3D4h] BYREF
  struct _EX_RUNDOWN_REF **v148; // [rsp+B8h] [rbp-3D0h]
  struct _EX_RUNDOWN_REF *v149; // [rsp+C0h] [rbp-3C8h] BYREF
  int v150; // [rsp+C8h] [rbp-3C0h] BYREF
  int v151; // [rsp+CCh] [rbp-3BCh]
  int v152; // [rsp+D0h] [rbp-3B8h] BYREF
  __int64 v153; // [rsp+D8h] [rbp-3B0h]
  struct DXGK_PRESENT_PARAMS *v154; // [rsp+E0h] [rbp-3A8h]
  __int64 v155; // [rsp+E8h] [rbp-3A0h]
  int v156; // [rsp+F0h] [rbp-398h]
  struct _EX_RUNDOWN_REF *v157; // [rsp+F8h] [rbp-390h]
  UINT64 *v158; // [rsp+100h] [rbp-388h] BYREF
  unsigned __int64 v159; // [rsp+108h] [rbp-380h]
  UINT64 *p_CompositionBindingId; // [rsp+110h] [rbp-378h]
  _DWORD *v161; // [rsp+118h] [rbp-370h]
  _BYTE *v162; // [rsp+120h] [rbp-368h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v163; // [rsp+128h] [rbp-360h]
  int *v164; // [rsp+130h] [rbp-358h]
  int v165; // [rsp+138h] [rbp-350h] BYREF
  int v166; // [rsp+13Ch] [rbp-34Ch] BYREF
  int v167; // [rsp+140h] [rbp-348h] BYREF
  __int64 v168; // [rsp+148h] [rbp-340h] BYREF
  struct DXGCONTEXT *v169; // [rsp+150h] [rbp-338h]
  int v170; // [rsp+158h] [rbp-330h] BYREF
  int v171; // [rsp+15Ch] [rbp-32Ch] BYREF
  int v172; // [rsp+160h] [rbp-328h] BYREF
  __int128 *v173; // [rsp+168h] [rbp-320h] BYREF
  struct CRefCountedBuffer *v174; // [rsp+170h] [rbp-318h]
  struct VIDSCH_SUBMIT_DATA_BASE *v175; // [rsp+178h] [rbp-310h]
  struct DXGPROCESS *v176; // [rsp+180h] [rbp-308h] BYREF
  _DWORD *v177; // [rsp+188h] [rbp-300h] BYREF
  __int64 v178; // [rsp+190h] [rbp-2F8h]
  _QWORD v179[3]; // [rsp+198h] [rbp-2F0h] BYREF
  D3DDDI_FLIPINTERVAL_TYPE *v180; // [rsp+1B0h] [rbp-2D8h]
  struct CRefCountedBuffer *v181; // [rsp+1B8h] [rbp-2D0h] BYREF
  _BYTE v182[16]; // [rsp+1C0h] [rbp-2C8h] BYREF
  PVOID P; // [rsp+1D0h] [rbp-2B8h]
  _BYTE v184[32]; // [rsp+1D8h] [rbp-2B0h] BYREF
  UINT v185; // [rsp+1F8h] [rbp-290h]
  char *v186; // [rsp+200h] [rbp-288h]
  UINT64 v187; // [rsp+208h] [rbp-280h]
  _BYTE *v188; // [rsp+210h] [rbp-278h]
  struct DXGCONTEXT *v189; // [rsp+218h] [rbp-270h]
  struct VIDSCH_SUBMIT_DATA_BASE *v190; // [rsp+220h] [rbp-268h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v191; // [rsp+228h] [rbp-260h]
  struct DXGK_PRESENT_PARAMS *v192; // [rsp+230h] [rbp-258h]
  struct DXGK_PRESENT_PARAMS *v193; // [rsp+238h] [rbp-250h]
  struct tagRECT v194; // [rsp+240h] [rbp-248h] BYREF
  int v195; // [rsp+250h] [rbp-238h]
  __int64 v196; // [rsp+258h] [rbp-230h] BYREF
  struct _D3DDDI_HDR_METADATA_HDR10 v197; // [rsp+260h] [rbp-228h] BYREF
  struct _EX_RUNDOWN_REF *v198; // [rsp+280h] [rbp-208h] BYREF
  __int64 v199; // [rsp+288h] [rbp-200h]
  __int64 v200; // [rsp+290h] [rbp-1F8h]
  __int64 v201; // [rsp+298h] [rbp-1F0h]
  struct _EX_RUNDOWN_REF *v202; // [rsp+2A0h] [rbp-1E8h]
  _DXGKARG_PRESENT v203; // [rsp+2B0h] [rbp-1D8h] BYREF
  __int128 v204; // [rsp+360h] [rbp-128h] BYREF
  struct tagRECT v205; // [rsp+370h] [rbp-118h] BYREF
  _QWORD v206[5]; // [rsp+380h] [rbp-108h] BYREF
  int v207; // [rsp+3A8h] [rbp-E0h]
  PVOID v208; // [rsp+3B0h] [rbp-D8h] BYREF
  _BYTE v209[128]; // [rsp+3B8h] [rbp-D0h] BYREF
  int v210; // [rsp+438h] [rbp-50h]

  v169 = a4;
  v7 = a3;
  v175 = a3;
  v8 = a2;
  v154 = a2;
  v9 = a1;
  v163 = a1;
  v191 = a1;
  v192 = v8;
  v193 = v8;
  v190 = a3;
  v189 = a4;
  v174 = a6;
  Model = a1->Model;
  if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    v13 = 0;
  }
  else
  {
    if ( Model != D3DKMT_PM_FLIPMANAGER )
      return 0LL;
    FenceValue = v9->Token.Flip.FenceValue;
    v13 = 0;
    if ( !FenceValue )
      return 0LL;
    if ( (int)CPushLock::AcquireLockShared((CPushLock *)(FenceValue + 72)) < 0 )
      return 0LL;
    v14 = *(_QWORD *)(FenceValue + 96);
    CPushLock::ReleaseLock((CPushLock *)(FenceValue + 72));
    if ( !v14 )
      return 0LL;
    if ( !*(_DWORD *)(v14 + 28) && !*(_DWORD *)(v14 + 32) || !*(_QWORD *)(v14 + 40) )
      return 0LL;
    v8 = v154;
    v9 = v163;
  }
  if ( a4 && !v8 )
    return 0LL;
  CIFlipPresentHistoryToken::CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v141, v9);
  p_CompositionBindingId = 0LL;
  if ( a4 )
  {
    v16 = *((_QWORD *)a4 + 2);
    v158 = (UINT64 *)v16;
    v17 = *(UINT64 **)(*(_QWORD *)(v16 + 16) + 16LL);
  }
  else
  {
    p_CompositionBindingId = *a5;
    v17 = a5[2];
    v158 = a5[3];
  }
  v179[1] = v17;
  v143 = (DXGADAPTER *)v17;
  if ( !a4 && !*((_BYTE *)v17 + 2874) )
  {
LABEL_53:
    CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v141);
    return 0LL;
  }
  *((_QWORD *)v7 + 3) = 0LL;
  Current = DXGPROCESS::GetCurrent(v16);
  v176 = Current;
  v19 = v17[366];
  v187 = v19;
  v20 = 0LL;
  if ( v17[365] )
    v20 = v17[365];
  v21 = v154;
  v168 = (unsigned __int64)v154 & -(__int64)(a4 != 0LL);
  if ( a4 )
    v22 = *(_DWORD *)(((unsigned __int64)v154 & -(__int64)(a4 != 0LL)) + 0x14);
  else
    v22 = *((_DWORD *)p_CompositionBindingId + 275);
  v144 = v22;
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v149, v22);
  v23 = v149;
  if ( !v149 || *(_QWORD *)(*(_QWORD *)(v149[1].Count + 16) + 16LL) != *(_QWORD *)(v158[2] + 16) )
    goto LABEL_52;
  Count = v149[5].Count;
  if ( v174 && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
  {
    Count = *(_QWORD *)(*(_QWORD *)(Count + 56) + 176LL);
    *((_QWORD *)v7 + 3) = Count;
  }
  if ( a4 )
    v25 = *((_QWORD *)v21 + 187);
  else
    v25 = 0LL;
  v179[2] = v25;
  v178 = v25;
  v145 = (*(_DWORD *)(v23[6].Count + 4) >> 6) & 0xF;
  v165 = 0;
  v152 = 0;
  v166 = 0;
  v167 = 0;
  v142 = 0;
  v179[0] = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, ULONG_PTR))(v141[0] + 24LL))(v141, Count);
  v150 = 0;
  v204 = 0LL;
  v205 = 0LL;
  v157 = (struct _EX_RUNDOWN_REF *)((char *)v7 + (*((_BYTE *)v7 + 356) != 0 ? 760LL : 528LL));
  v26 = *(_QWORD *)(v19 + 736);
  p_CompositionBindingId = &v163->CompositionBindingId;
  CompositionBindingId = v163->CompositionBindingId;
  v28 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, UINT64, struct _EX_RUNDOWN_REF *, int *, int *, unsigned int *, _QWORD *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(v26 + 8) + 408LL))(
    *(_QWORD *)(v19 + 744),
    &v145,
    v28,
    CompositionBindingId,
    v157,
    &v165,
    &v152,
    &v142,
    v179,
    &v166,
    &v167,
    &v150,
    &v204,
    &v205);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v141[0] + 32LL))(v141, v179[0]);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v141[0] + 48LL))(v141, v145);
  *((_DWORD *)v7 + 29) = v145;
  v29 = (struct _LUID *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
  RtlCopyLuid((PLUID)((char *)v7 + 156), v29);
  *((_QWORD *)v7 + 21) = *p_CompositionBindingId;
  v30 = *(_DWORD *)v7 & 0xFFFEFFFF;
  *(_DWORD *)v7 = v30;
  v31 = v169;
  if ( v169 )
  {
    v32 = v168;
    v33 = (*(_DWORD *)(v168 + 88) ^ v30) & 4 ^ v30;
    *(_DWORD *)v7 = v33;
    v34 = (v33 ^ (4 * *(_DWORD *)(v32 + 88))) & 0x80000 ^ v33;
    *(_DWORD *)v7 = v34;
    v35 = (v34 ^ (4 * *(_DWORD *)(v32 + 88))) & 0x100000 ^ v34;
    *(_DWORD *)v7 = v35;
    *(_DWORD *)v7 = v35 ^ (v35 ^ (4 * *(_DWORD *)(v32 + 88))) & 0x200000;
  }
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ (8 * (*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 200LL))(v141))) & 8;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ (16 * (*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 208LL))(v141))) & 0x10;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 216LL))(v141) << 28)) & 0x10000000;
  *((_DWORD *)v7 + 1) ^= (*((_DWORD *)v7 + 1) ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 224LL))(v141) << 6)) & 0x40;
  *((_DWORD *)v7 + 1) ^= (*((_DWORD *)v7 + 1) ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 320LL))(v141) << 8)) & 0x100;
  v36 = v143;
  (*(void (__fastcall **)(_QWORD *, DXGADAPTER *))(v141[0] + 56LL))(v141, v143);
  *((_DWORD *)v7 + 28) = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 64LL))(v141);
  *((_DWORD *)v7 + 48) = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 72LL))(v141);
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 192LL))(v141) << 25)) & 0x2000000;
  *((_DWORD *)v7 + 36) = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 80LL))(v141);
  *((_DWORD *)v7 + 37) = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 88LL))(v141);
  if ( v31 )
    v37 = *((_DWORD *)v31 + 99);
  else
    v37 = 1;
  *((_DWORD *)v7 + 34) = v37;
  if ( *((_BYTE *)v7 + 356) )
    *((_DWORD *)v7 + 160) = -1;
  if ( bTracingEnabled )
    *((_QWORD *)v7 + 23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 760) + 8LL) + 336LL))(
                             *(_QWORD *)(v19 + 768),
                             v144);
  v38 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 96LL))(v141);
  v180 = (D3DDDI_FLIPINTERVAL_TYPE *)((char *)v7 + 124);
  *((_DWORD *)v7 + 31) = v38;
  v164 = (int *)((char *)v7 + 124);
  v170 = 1;
  if ( !v38
    && (!(*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 216LL))(v141) || (*((_DWORD *)v36 + 569) & 0x40) == 0) )
  {
    v164 = &v170;
  }
  v39 = (*(__int64 (__fastcall **)(UINT64, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(v19 + 736) + 8LL) + 512LL))(
          v158[100],
          v145,
          v164);
  v41 = v39;
  *((_DWORD *)v7 + 30) = v39;
  if ( v39 != 5 && *v180 )
  {
    v42 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 64LL))(v141);
    v43 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 104LL))(v141);
    WdLogSingleEntry4(8LL, v163, v43, v42, v41);
    goto LABEL_52;
  }
  if ( !v165 )
  {
    if ( v166 )
    {
      v171 = 0;
      v196 = 0LL;
      v44 = *(_QWORD *)(v19 + 736);
      v45 = *((_QWORD *)v7 + 21);
      v46 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
      LOBYTE(v137) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(v44 + 8) + 400LL))(
        *(_QWORD *)(v19 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v46,
        v45,
        &v142,
        0,
        v137,
        &v171,
        &v196);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v20, *((_DWORD *)v7 + 29), v142, 0);
    }
    else if ( !v167 )
    {
      goto LABEL_52;
    }
    LOBYTE(v40) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v141[0] + 232LL))(v141, v40);
LABEL_52:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v149);
    goto LABEL_53;
  }
  *((_QWORD *)v7 + 22) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 24LL))(v141);
  LODWORD(v153) = 0;
  v151 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 240LL))(v141) )
  {
    v172 = 0;
    v177 = 0LL;
    v47 = *(_QWORD *)(v19 + 736);
    v48 = *((_QWORD *)v7 + 21);
    v49 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
    LOBYTE(v137) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, int *, _DWORD **))(*(_QWORD *)(v47 + 8) + 400LL))(
      *(_QWORD *)(v19 + 744),
      (unsigned int)(1 << *((_DWORD *)v7 + 29)),
      v49,
      v48,
      &v142,
      0,
      v137,
      &v172,
      &v177);
    LOBYTE(v50) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v141[0] + 232LL))(v141, v50);
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v20, *((_DWORD *)v7 + 29), v142, 0);
    WdLogSingleEntry1(8LL, 2143LL);
    goto LABEL_52;
  }
  if ( v152 || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(v19 + 16)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 248LL))(v141) )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v182, (struct ADAPTER_DISPLAY *)v20);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v182);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    (DXGADAPTER **)v20,
                                    *((_DWORD *)v7 + 29));
      v139 = PostCompositionStretching;
      if ( PostCompositionStretching )
      {
        if ( IsYUVAllocation(*(void **)(v149[6].Count + 16), (struct ADAPTER_RENDER *)v19)
          || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v20 + 128)
                                                                         + 4000LL * *((unsigned int *)v7 + 29))) > 1 )
        {
          PostCompositionStretching = 0;
          v139 = 0;
        }
        else
        {
          PostCompositionStretching = v139;
        }
      }
      v194 = 0LL;
      if ( v142 || (v59 = 1, !PostCompositionStretching) )
        v59 = 0;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v7 + 29),
              v142,
              (struct CIFlipPresentHistoryTokenData *)v141,
              v59,
              (struct ADAPTER_RENDER *)v19,
              (struct ADAPTER_DISPLAY *)v20,
              &v194) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v182);
        LODWORD(v158) = 0;
        v176 = 0LL;
        v65 = *(_QWORD *)(v19 + 736);
        v66 = *((_QWORD *)v7 + 21);
        v67 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
        LOBYTE(v138) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, UINT64 **, struct DXGPROCESS **))(*(_QWORD *)(v65 + 8) + 400LL))(
          *(_QWORD *)(v19 + 744),
          (unsigned int)(1 << *((_DWORD *)v7 + 29)),
          v67,
          v66,
          &v142,
          0,
          v138,
          &v158,
          &v176);
        WdLogSingleEntry1(3LL, v142);
        LOBYTE(v68) = 1;
        (*(void (__fastcall **)(_QWORD *, __int64))(v141[0] + 232LL))(v141, v68);
        ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v20, *((_DWORD *)v7 + 29), v142, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v182);
        goto LABEL_52;
      }
      v60 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 8LL))(v141);
      v173 = v60;
      v61 = v157;
      LOWORD(v157->Count) = *(_WORD *)v60;
      WORD2(v61->Ptr) = *((_WORD *)v60 + 2);
      WORD1(v61->Ptr) = *((_WORD *)v60 + 4);
      HIWORD(v61->Ptr) = *((_WORD *)v60 + 6);
      LODWORD(v61[3].Count) = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 112LL))(v141);
      if ( v139 )
      {
        v62 = v61->Count;
        v61[1].Count = v61->Count;
        v61[2].Count = v62;
        v63 = *v173;
        v204 = v63;
        v205 = v194;
        if ( (_DWORD)v63 != v194.left
          || __PAIR64__(DWORD2(v204), DWORD1(v63)) != *(_QWORD *)&v194.top
          || (v64 = 0LL, HIDWORD(v204) != v194.bottom) )
        {
          v64 = 1LL;
        }
        v150 = v64;
        if ( !(_DWORD)v64 )
        {
          v204 = 0LL;
          v205 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(v19 + 736)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
          *(_QWORD *)(v19 + 744),
          *((unsigned int *)v7 + 29),
          v64,
          &v204,
          &v205);
        UpdatePostComposition(
          *((_DWORD *)v7 + 29),
          v150 != 0,
          DWORD2(v204) - v204,
          HIDWORD(v204) - DWORD1(v204),
          (struct ADAPTER_DISPLAY *)v20);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 736) + 8LL)
                                                                               + 416LL))(
        *(_QWORD *)(v19 + 744),
        *((unsigned int *)v7 + 29),
        v61,
        v142);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v182);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v182);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v20, *((_DWORD *)v7 + 29), v142, 1u);
    }
    *(_DWORD *)v7 = (v150 << 31) | (*(_DWORD *)v7 ^ (*(_DWORD *)v7 ^ (v152 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)v7 + 436) = v204;
    *(struct tagRECT *)((char *)v7 + 452) = v205;
  }
  else
  {
    v51 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 8LL))(v141);
    v177 = v51;
    if ( v51[2] - *v51 != (*(unsigned int (__fastcall **)(_QWORD *))(v141[0] + 120LL))(v141)
      || v51[3] - v51[1] != (*(unsigned int (__fastcall **)(_QWORD *))(v141[0] + 128LL))(v141)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 248LL))(v141) )
    {
      LODWORD(v168) = 0;
      v173 = 0LL;
      v52 = *(_QWORD *)(v19 + 736);
      v53 = *((_QWORD *)v7 + 21);
      v54 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
      LOBYTE(v137) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, __int64 *, __int128 **))(*(_QWORD *)(v52 + 8) + 400LL))(
        *(_QWORD *)(v19 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v54,
        v53,
        &v142,
        0,
        v137,
        &v168,
        &v173);
      v55 = (*(unsigned int (__fastcall **)(_QWORD *))(v141[0] + 128LL))(v141);
      v56 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 120LL))(v141);
      WdLogSingleEntry4(8LL, v177[2] - *v177, v177[3] - v177[1], v56, v55);
      LOBYTE(v57) = 1;
      (*(void (__fastcall **)(_QWORD *, __int64))(v141[0] + 232LL))(v141, v57);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v20, *((_DWORD *)v7 + 29), 0, 0);
LABEL_130:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v149);
      CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v141);
      return v13;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v20, *((_DWORD *)v7 + 29), 0, 1u);
  }
  if ( v20 && (*(_DWORD *)(v20 + 24) & 0x10) != 0 )
  {
    if ( !ADAPTER_DISPLAY::IsHdrEnabled((ADAPTER_DISPLAY *)v20, v145) )
    {
      *((_DWORD *)v7 + 90) = 0;
      goto LABEL_111;
    }
    *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 256LL))(v141) << 30)) & 0x40000000;
    v69 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 136LL))(v141);
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
            v71 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 152LL))(v141);
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
          v72 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 144LL))(v141);
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
      v147 = D3DDDI_HDR_METADATA_TYPE_NONE;
      memset(&v197, 0, sizeof(v197));
      if ( !(unsigned int)PopulateHDRMetadataFromDisplay(
                            *((_DWORD *)v7 + 29),
                            (struct ADAPTER_DISPLAY *)v20,
                            &v197,
                            &v147) )
      {
        *((struct _D3DDDI_HDR_METADATA_HDR10 *)v7 + 13) = v197;
        *((_DWORD *)v7 + 90) = v147;
LABEL_111:
        *(_DWORD *)v7 |= 0x40000000u;
      }
    }
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v141[0] + 160LL))(v141, v142);
  v73 = (_DWORD *)((char *)v7 + 600);
  if ( !*((_BYTE *)v7 + 356) )
    v73 = (_DWORD *)((char *)v7 + 496);
  *v73 ^= (*v73 ^ (1 << v142)) & 0x3FF;
  v74 = 1;
  v156 = 1;
  if ( DXGADAPTER::IsDxgmms2(v143) && v31 )
  {
    v74 = *(_DWORD *)(v168 + 92) + 1;
    v156 = v74;
  }
  v144 = 0;
  Pool2 = 0LL;
  v162 = 0LL;
  P = 0LL;
  v185 = 0;
  if ( v74 <= 4 )
  {
    Pool2 = v184;
    v162 = v184;
    P = v184;
    if ( !v74 )
    {
LABEL_123:
      v185 = v74;
      goto LABEL_124;
    }
    memset(v184, 0, 8LL * v74);
    Pool2 = P;
LABEL_122:
    v162 = Pool2;
    goto LABEL_123;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v74 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v74, 1265072196LL);
    P = Pool2;
    goto LABEL_122;
  }
LABEL_124:
  v188 = Pool2;
  if ( !Pool2 )
  {
LABEL_129:
    P = 0LL;
    v185 = 0;
    v13 = -1073741801;
    goto LABEL_130;
  }
  v206[0] = 0LL;
  v207 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::AllocateElements(v206, v74);
  v77 = (int *)v206[0];
  v164 = (int *)v206[0];
  if ( !v206[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v206);
    if ( P != v184 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    goto LABEL_129;
  }
  v78 = 0;
  v146 = 0;
  v79 = (char *)v7 + 600;
  while ( 1 )
  {
    v186 = v79;
    if ( v78 >= v74 )
      break;
    if ( !v78 )
    {
      v157 = v149;
      v80 = *(_QWORD *)(v149[6].Count + 16);
      v81 = v79 + 8;
      v82 = v79 + 4;
      v148 = (struct _EX_RUNDOWN_REF **)(v79 + 8);
      v161 = v79 + 4;
      if ( *((_BYTE *)v7 + 356) )
        v83 = &v79[*v82 * ((8 * *v81 + 231) & 0xFFFFFFF8) + 24];
      else
        v83 = (char *)v7 + 512;
      *(_QWORD *)v83 = v80;
      v84 = v143;
      if ( !*((_BYTE *)v143 + 2874) )
      {
        if ( *((_BYTE *)v7 + 356) )
        {
          v85 = &v79[*v82 * ((8 * *v81 + 231) & 0xFFFFFFF8) + 16];
          v84 = v143;
        }
        else
        {
          v85 = (char *)v7 + 568;
        }
        *(_QWORD *)v85 = *((_QWORD *)v31 + 23);
      }
      if ( DXGADAPTER::IsDxgmms2(v84) && v31 && (*((_DWORD *)v31 + 101) & 0x10) == 0 )
        *(_QWORD *)((char *)v7 + *((unsigned int *)v7 + 138)) = *((_QWORD *)v31 + 32);
      v88 = v87;
      goto LABEL_164;
    }
    v155 = v78;
    v89 = 2LL * v78;
    LODWORD(v159) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v154 + 187) + v89 * 4) + 400LL);
    v90 = (_DWORD *)(*(_QWORD *)(v168 + 1456) + 4LL * (v78 - 1));
    if ( v90 + 1 < v90 || (unsigned __int64)(v90 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    LODWORD(v153) = *v90;
    v195 = v153;
    v148 = (struct _EX_RUNDOWN_REF **)&v77[v89];
    AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                  (__int64)v176,
                                                  (DXGALLOCATIONREFERENCE *)&v198,
                                                  v153);
    DXGALLOCATIONREFERENCE::MoveAssign(v148, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v198);
    v86 = *v148;
    v157 = v86;
    if ( !v86 )
    {
      v92 = (unsigned int)v153;
      v93 = -1073741811;
      WdLogSingleEntry3(2LL, (unsigned int)v153, -1073741811LL, 2470LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
        v92,
        -1073741811LL,
        2470LL,
        0LL,
        0LL);
      v151 = -1073741811;
      v31 = v169;
      v94 = v143;
      goto LABEL_171;
    }
    v201 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v154 + 187) + 8 * v155) + 16LL);
    v202 = v86;
    v199 = *(_QWORD *)(v86[1].Count + 16);
    v200 = *(_QWORD *)(v201 + 16);
    if ( *(_QWORD *)(v199 + 16) != *(_QWORD *)(v200 + 16) )
    {
      _mm_lfence();
      v93 = -1073741811;
      WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v154 + 187) + 8 * v155) + 16LL), v86, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v154 + 187) + 8 * v155) + 16LL),
        (__int64)*v148,
        -1073741811LL,
        0LL,
        0LL);
      v151 = -1073741811;
      v94 = v143;
      goto LABEL_171;
    }
    v95 = *(_QWORD *)(v86[6].Count + 16);
    v153 = v95;
    v96 = v79 + 8;
    v97 = v79 + 4;
    v87 = v146;
    v148 = (struct _EX_RUNDOWN_REF **)(v79 + 8);
    v161 = v79 + 4;
    if ( *((_BYTE *)v7 + 356) )
    {
      v98 = &v79[64 * (unsigned __int64)(v146 * *v97) + 24 + *v97 * ((8 * *v96 + 231) & 0xFFFFFFF8)];
      v95 = v153;
    }
    else
    {
      v98 = (char *)v7 + 512;
    }
    *(_QWORD *)v98 = v95;
    if ( !*((_BYTE *)v143 + 2874) )
    {
      v99 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v154 + 187) + 8 * v155) + 184LL);
      v153 = v99;
      if ( *((_BYTE *)v7 + 356) )
      {
        v100 = &v79[64 * (unsigned __int64)(v87 * *v97) + 16 + *v97 * ((8 * *v96 + 231) & 0xFFFFFFF8)];
        v99 = v153;
      }
      else
      {
        v100 = (char *)v7 + 568;
      }
      *(_QWORD *)v100 = v99;
    }
    *((_DWORD *)v7 + 34) |= 1 << v159;
    v159 = *(_QWORD *)(8 * v155 + *((_QWORD *)v154 + 187));
    if ( (*(_DWORD *)(v159 + 404) & 0x10) == 0 )
    {
      *(_QWORD *)((char *)v7 + 8 * v155 + *((unsigned int *)v7 + 138)) = *(_QWORD *)(v159 + 256);
      v88 = v155;
      v148 = (struct _EX_RUNDOWN_REF **)(v79 + 8);
      v161 = v79 + 4;
LABEL_164:
      v155 = v88;
    }
    if ( *((_BYTE *)v7 + 356) )
      v101 = (unsigned __int64)&v79[64 * (unsigned __int64)(v87 * *v161)
                                  + 48
                                  + *v161 * ((8 * *(_DWORD *)v148 + 231) & 0xFFFFFFF8)];
    else
      v101 = (unsigned __int64)v7 + 504;
    v159 = v101;
    LODWORD(v153) = (*(__int64 (__fastcall **)(UINT64, ULONG_PTR, unsigned __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 760) + 8LL)
                                                                                           + 416LL))(
                      v158[99],
                      v86[3].Count,
                      v101,
                      *(_QWORD *)(v19 + 768));
    v151 = v153;
    if ( (int)v153 < 0 )
    {
      WdLogSingleEntry2(2LL, v157, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference allocation for submission (0x%I64x). Returning 0x%I64x",
        (__int64)v157,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      break;
    }
    *(_QWORD *)&v162[8 * v155] = *(_QWORD *)v159;
    ++v144;
    v110 = v157[5].Count;
    if ( v110 )
      v111 = (*(_DWORD *)(v110 + 4) & 8) != 0;
    else
      v111 = 0;
    if ( v111 )
      v112 = *(_QWORD *)(*(_QWORD *)(v110 + 56) + 184LL);
    else
      v112 = 0LL;
    if ( *((_BYTE *)v7 + 356) )
      *(_QWORD *)&v79[64 * (unsigned __int64)(v146 * *v161) + 56 + *v161 * ((8 * *(_DWORD *)v148 + 231) & 0xFFFFFFF8)] = v112;
    else
      *((_QWORD *)v7 + 72) = v112;
    *(_DWORD *)v7 |= 0x1000000u;
    v113 = *p_CompositionBindingId;
    v114 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
    v115 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 64LL))(v141);
    v116 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 104LL))(v141);
    WdLogSingleEntry5(8LL, v163, v116, v115, v114, v113);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v141[0] + 336LL))(v141) )
    {
      *((_DWORD *)v7 + 1) |= 2u;
      *((_QWORD *)v7 + 60) = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 344LL))(v141);
      v117 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 352LL))(v141);
      v118 = v117;
      *((_QWORD *)v7 + 61) = v117;
      if ( v117 )
      {
        if ( !v117[1] )
        {
          if ( *v117 != 56 )
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
          v118[6] = *((_DWORD *)v7 + 29);
          *((_QWORD *)v118 + 2) = *(_QWORD *)((char *)v143 + 404);
        }
      }
    }
    v78 = ++v146;
    v74 = v156;
    v31 = v169;
    v79 = v186;
    v77 = v164;
  }
  v94 = v143;
  v93 = v153;
LABEL_171:
  *((_DWORD *)v7 + 35) = v74;
  if ( v93 < 0 || (*((_DWORD *)v94 + 569) & 0x20) == 0 )
  {
    v123 = v143;
    goto LABEL_216;
  }
  memset(&v203, 0, sizeof(v203));
  v203.Flags.Value = 0x2000;
  if ( v174 )
  {
    v203.PrivateDriverDataSize = *((_DWORD *)v174 + 2);
    v203.pPrivateDriverData = (char *)v174 + 16;
  }
  v208 = 0LL;
  v210 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v208, v74);
  pAllocationList = (char *)v208;
  v203.pAllocationList = (DXGK_ALLOCATIONLIST *)v208;
  if ( v208 )
  {
    v103 = *((_DWORD *)v143 + 571);
    if ( (v103 & 0x80u) == 0 || (v104 = 1, (v103 & 0x40) != 0) )
      v104 = 0;
    v140 = v104;
    v105 = D3DDDI_HDR_METADATA_TYPE_NONE;
    v106 = v154;
    while ( 1 )
    {
      v147 = v105;
      if ( v105 >= v74 )
        break;
      v107 = 8LL * (unsigned int)v105;
      if ( v31 )
      {
        v108 = (_QWORD *)((char *)v106 + 1496);
        v109 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v106 + 187) + 8LL * (unsigned int)v105) + 400LL);
      }
      else
      {
        v109 = 0;
        v108 = (_QWORD *)((char *)v193 + 1496);
      }
      v119 = 32LL * (unsigned int)v105;
      *(_WORD *)&pAllocationList[v119 + 26] = v109;
      if ( v105 )
        v120 = *(struct _EX_RUNDOWN_REF **)&v164[2 * v105];
      else
        v120 = v149;
      if ( v31 )
      {
        v104 = *(_BYTE *)(*(_QWORD *)(*v108 + v107) + 439LL);
        v140 = v104;
      }
      *(struct _EX_RUNDOWN_REF *)((char *)&v203.pAllocationList->hDeviceSpecificAllocation + v119) = v120[4];
      v121 = v120[3].Count;
      LOBYTE(v120) = v104;
      v122 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 760) + 8LL)
                                                                                            + 240LL))(
               *(_QWORD *)(v19 + 768),
               v121,
               v120,
               *(unsigned __int16 *)((char *)&v203.pAllocationList[1].hDeviceSpecificAllocation + v119 + 2));
      *(_QWORD *)((char *)&v203.pAllocationList->8 + v119) = v122;
      v105 = v147 + 1;
      pAllocationList = (char *)v203.pAllocationList;
      v104 = v140;
    }
    v203.FlipInterval = *v180;
    v7 = v175;
    v203.Flags.Value ^= (*(_WORD *)&v203.Flags.0 ^ (unsigned __int16)(*(_DWORD *)v175 >> 11)) & 0x1700;
    v203.NumSrcAllocations = v74;
    v123 = v143;
    v124 = 0LL;
    if ( !*((_BYTE *)v143 + 2874) )
      v124 = (void *)*((_QWORD *)v31 + 23);
    v93 = ADAPTER_RENDER::DdiPresent((ADAPTER_RENDER *)v19, v124, &v203);
    v76 = (const struct DXGADAPTER *)v208;
    if ( v93 < 0 )
    {
      if ( v208 != v209 && v208 )
        ExFreePoolWithTag(v208, 0);
      goto LABEL_222;
    }
    if ( v208 != v209 && v208 )
      ExFreePoolWithTag(v208, 0);
LABEL_216:
    if ( v152 && (*(_DWORD *)v7 & 0x1000000) != 0 )
    {
      v181 = 0LL;
      if ( *((int *)v123 + 705) < 2500
        || (v125 = ReadPresentDirtyRectsData(v76, v142, (const struct CIFlipPresentHistoryTokenData *)v141, &v181),
            v125 >= 0) )
      {
        *((_QWORD *)v7 + 4) = v181;
      }
      else
      {
        v126 = v125;
        WdLogSingleEntry1(2LL, v125);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to read dirty rects data. Returning 0x%I64x",
          v126,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
LABEL_222:
  if ( v93 < 0 )
  {
    v127 = 0;
    v128 = v169;
    v129 = v162;
    v130 = v144;
    while ( v127 < v130 )
    {
      if ( v128 )
        v131 = *(_DWORD *)(*(_QWORD *)(v178 + 8LL * v127) + 400LL);
      else
        LOBYTE(v131) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 760) + 8LL) + 424LL))(
        *(_QWORD *)(v19 + 768),
        (unsigned int)(1 << v131),
        *(_QWORD *)&v129[8 * v127++],
        0LL);
    }
    v132 = *p_CompositionBindingId;
    v133 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 16LL))(v141);
    v134 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 64LL))(v141);
    v135 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 104LL))(v141);
    WdLogSingleEntry5(8LL, v163, v135, v134, v133, v132);
    LOBYTE(v136) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v141[0] + 232LL))(v141, v136);
    *(_DWORD *)v175 &= ~0x1000000u;
    v93 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v206);
  if ( P != v184 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v185 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v149);
  CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v141);
  return (unsigned int)v93;
}
