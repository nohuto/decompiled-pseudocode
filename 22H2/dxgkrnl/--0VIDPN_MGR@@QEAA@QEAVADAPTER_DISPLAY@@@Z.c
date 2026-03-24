/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C017C358
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C017C2AC (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001AFC0 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C0021708 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C0021758 (--0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C002184C (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C0021918 (-reset@-$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C002194C (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C017CAA0 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C017CB4C (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C017CC20 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C017D184 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C017D4CC (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C017D59C (--0Lockable@@QEAA@XZ.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C017EA00 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0188BC8 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C0188F90 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01890E0 (DpiOpenPnpRegistryKey.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  __int64 v5; // rdx
  void **v6; // rcx
  char *v7; // r12
  char *v8; // r15
  DMMVIDEOPRESENTSOURCESET *v9; // rax
  DMMVIDEOPRESENTSOURCESET *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DMMVIDEOPRESENTTARGETSET *v15; // rax
  DMMVIDEOPRESENTTARGETSET *v16; // rax
  int (__high *v17)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r15
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r14
  void *v54; // r8
  __int64 v55; // rbx
  _QWORD *v56; // r14
  MONITOR_MGR *v57; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v59; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r14
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  HANDLE v81; // rcx
  void ***v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r14
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r14
  _QWORD *v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  unsigned __int64 v103; // r15
  __int64 v104; // rax
  unsigned __int64 v105; // r15
  unsigned int v106; // r12d
  __int64 v107; // rdi
  __int64 v108; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  struct DMMVIDEOPRESENTTARGET *v113; // r13
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // r14
  unsigned int *i; // r14
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r14
  unsigned __int64 v124; // r15
  __int64 v125; // rax
  unsigned __int64 v126; // r15
  unsigned int v127; // r12d
  __int64 v128; // rdi
  __int64 v129; // r14
  struct DMMVIDEOPRESENTTARGET *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  struct DMMVIDEOPRESENTTARGET *v134; // r13
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r14
  __int64 v142; // rax
  HANDLE v143; // rcx
  __int64 v144; // rax
  __int64 v145; // r14
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // r15
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r15
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r14
  __int64 v164; // rax
  __int64 v165; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v167; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v168; // [rsp+50h] [rbp-B0h]
  _QWORD v169[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v170[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD InputBuffer[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v172[2]; // [rsp+88h] [rbp-78h] BYREF
  void **v173; // [rsp+98h] [rbp-68h] BYREF
  __int128 v174; // [rsp+A0h] [rbp-60h]
  void **v175; // [rsp+B0h] [rbp-50h]
  __int64 v176; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v177; // [rsp+C0h] [rbp-40h]
  int v178; // [rsp+C8h] [rbp-38h]
  void **v179; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v180; // [rsp+D8h] [rbp-28h]
  void **v181; // [rsp+E8h] [rbp-18h]
  __int64 v182; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v183; // [rsp+F8h] [rbp-8h]
  int v184; // [rsp+100h] [rbp+0h]
  _OWORD v185[2]; // [rsp+108h] [rbp+8h] BYREF
  int v186; // [rsp+128h] [rbp+28h]
  wchar_t v187; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v188[3]; // [rsp+130h] [rbp+30h] BYREF

  v168 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *((_QWORD *)v3 + 11) = 0LL;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v6 = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v7 = (char *)v3 + 72;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v8 = (char *)v3 + 80;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 12) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 16) = (char *)v3 + 120;
  *((_QWORD *)v3 + 15) = (char *)v3 + 120;
  *((_DWORD *)v3 + 28) = 0;
  *((_QWORD *)v3 + 13) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 17) = 0LL;
  *((_DWORD *)v3 + 36) = 2;
  *((_QWORD *)v3 + 19) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 20) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)v3 + 23) = (char *)v3 + 176;
  *((_QWORD *)v3 + 22) = (char *)v3 + 176;
  *((_DWORD *)v3 + 42) = 0;
  *((_QWORD *)v3 + 24) = 0LL;
  *((_DWORD *)v3 + 50) = 2;
  *((_QWORD *)v3 + 26) = 30LL;
  *((_QWORD *)v3 + 27) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 31) = (char *)v3 + 240;
  *((_QWORD *)v3 + 30) = (char *)v3 + 240;
  *((_DWORD *)v3 + 58) = 0;
  *((_QWORD *)v3 + 28) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 32) = 0LL;
  *((_DWORD *)v3 + 66) = 2;
  *((_QWORD *)v3 + 34) = 5LL;
  *((_QWORD *)v3 + 35) = 0LL;
  *((_QWORD *)v3 + 36) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 37) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)v3 + 40) = (char *)v3 + 312;
  *((_QWORD *)v3 + 39) = (char *)v3 + 312;
  *((_DWORD *)v3 + 76) = 0;
  *((_QWORD *)v3 + 41) = 0LL;
  *((_DWORD *)v3 + 84) = 2;
  *((_QWORD *)v3 + 43) = 40LL;
  *((_QWORD *)v3 + 44) = 0LL;
  *((_QWORD *)v3 + 45) = 0LL;
  *((_QWORD *)v3 + 46) = 0LL;
  *((_QWORD *)v3 + 47) = 0LL;
  *((_QWORD *)v3 + 48) = 0LL;
  *((_QWORD *)v3 + 49) = 0LL;
  *((_QWORD *)v3 + 50) = 0LL;
  *((_QWORD *)v3 + 51) = 0LL;
  *((_QWORD *)v3 + 52) = 0LL;
  *((_QWORD *)v3 + 53) = 0LL;
  *((_QWORD *)v3 + 54) = 0LL;
  *((_QWORD *)v3 + 55) = 0LL;
  *((_QWORD *)v3 + 56) = 0LL;
  *((_QWORD *)v3 + 57) = 0LL;
  *((_QWORD *)v3 + 59) = 0LL;
  *((_BYTE *)v3 + 464) = 0;
  *((_DWORD *)v3 + 120) = 0;
  *((_DWORD *)v3 + 123) = -1;
  *((_DWORD *)v3 + 124) = -1;
  *((_QWORD *)v3 + 63) = 0LL;
  if ( !a2 )
  {
    v61 = WdLogNewEntry5_WdAssertion(
            &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable',
            v5);
    WdLogEvent5_WdAssertion(v61);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v63);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v62 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v62 + 24) = v3;
    *(_QWORD *)(v62 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v62);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v64 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v64 + 24) = v3;
    WdLogEvent5_WdError(v64);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v9 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v10 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v9, v3);
  else
    v10 = 0LL;
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset((__int64 *)v3 + 9, (__int64)v10);
  if ( !*(_QWORD *)v7
    || ((v15 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x80uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v16 = 0LL)
      : (v16 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v15, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 10, (__int64)v16),
        !*(_QWORD *)v8) )
  {
    v65 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    WdLogEvent5_WdLowResource(v65);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  LODWORD(v19) = VIDPN_MGR::_ReadConfiguration(v3);
  if ( (int)v19 < 0
    || (LODWORD(v19) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3), (int)v19 < 0)
    || (LODWORD(v19) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3), (int)v19 < 0) )
  {
LABEL_68:
    v66 = WdLogNewEntry5_WdError(v18, v17);
    v68 = *((_QWORD *)v3 + 1);
    v69 = v66;
    if ( !v68 )
    {
      v70 = WdLogNewEntry5_WdAssertion(0LL, v67);
      WdLogEvent5_WdAssertion(v70);
      v68 = *((_QWORD *)v3 + 1);
    }
    v71 = *(_QWORD *)(v68 + 16);
LABEL_72:
    *(_QWORD *)(v69 + 24) = v71;
    WdLogEvent5_WdError(v69);
    *((_DWORD *)v3 + 14) = v19;
    return v3;
  }
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL), 1u);
  v20 = *(_QWORD **)v7;
  if ( *(_QWORD *)v7 == -112LL )
    InputBuffer[0] = 0LL;
  else
    InputBuffer[0] = *(_QWORD *)v7;
  v21 = *((_QWORD *)v3 + 1);
  InputBuffer[1] = *((_QWORD *)v3 + 44);
  if ( !v21 )
  {
    v73 = WdLogNewEntry5_WdAssertion(0LL, v17);
    WdLogEvent5_WdAssertion(v73);
    v21 = *((_QWORD *)v3 + 1);
  }
  v24 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v21 + 16) + 216LL),
          0x23204Fu,
          InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v24 < 0 )
    goto LABEL_74;
  if ( !v20[5] )
  {
    v84 = WdLogNewEntry5_WdError(v23, v22);
    v86 = *((_QWORD *)v3 + 1);
    v87 = v84;
    if ( !v86 )
    {
      v88 = WdLogNewEntry5_WdAssertion(0LL, v85);
      WdLogEvent5_WdAssertion(v88);
      v86 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v87 + 24) = *(_QWORD *)(v86 + 16);
    WdLogEvent5_WdError(v87);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_82;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), v22);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 72LL));
  v20 = *(_QWORD **)v8;
  if ( *(_QWORD *)v8 == -112LL )
    v172[0] = 0LL;
  else
    v172[0] = *(_QWORD *)v8;
  v26 = *((_QWORD *)v3 + 1);
  v172[1] = *((_QWORD *)v3 + 45);
  if ( !v26 )
  {
    v89 = WdLogNewEntry5_WdAssertion(0LL, v25);
    WdLogEvent5_WdAssertion(v89);
    v26 = *((_QWORD *)v3 + 1);
  }
  v24 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v26 + 16) + 216LL),
          0x232053u,
          v172,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v24 < 0 )
  {
LABEL_74:
    v74 = WdLogNewEntry5_WdError(v23, v22);
    v76 = *((_QWORD *)v3 + 1);
    v77 = v74;
    if ( !v76 )
    {
      v78 = WdLogNewEntry5_WdAssertion(0LL, v75);
      WdLogEvent5_WdAssertion(v78);
      v76 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v77 + 24) = *(_QWORD *)(v76 + 16);
    WdLogEvent5_WdError(v77);
    *((_DWORD *)v3 + 14) = v24;
LABEL_79:
    if ( !v20 )
      return v3;
LABEL_82:
    ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), v79);
    return v3;
  }
  if ( !v20[5] )
  {
    v90 = WdLogNewEntry5_WdError(v23, v22);
    v92 = *((_QWORD *)v3 + 1);
    v93 = v90;
    if ( !v92 )
    {
      v83 = WdLogNewEntry5_WdAssertion(0LL, v91);
      WdLogEvent5_WdAssertion(v83);
      v92 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v93 + 24) = *(_QWORD *)(v92 + 16);
    WdLogEvent5_WdError(v93);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_82;
  }
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)v20[3];
  if ( NextTarget == (const struct DMMVIDEOPRESENTTARGET *)(v20 + 3) )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)((char *)NextTarget - 8);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v20, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v28 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v28 = -1;
  *((_DWORD *)v3 + 124) = v28;
  ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), (__int64)NextTarget);
  v30 = *(_QWORD *)v8;
  if ( *(_QWORD *)(*(_QWORD *)v8 + 40LL) >= *(_QWORD *)(*(_QWORD *)v7 + 40LL) )
  {
    v31 = *((_QWORD *)v3 + 1);
    Handle = 0LL;
    if ( !v31 )
    {
      v99 = WdLogNewEntry5_WdAssertion(v30, v29);
      WdLogEvent5_WdAssertion(v99);
      v31 = *((_QWORD *)v3 + 1);
    }
    v32 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 216LL), 1LL, 131097LL, &Handle);
    v19 = v32;
    if ( v32 < 0 )
    {
      v100 = WdLogNewEntry5_WdError(v34, v33);
      v102 = *((_QWORD *)v3 + 1);
      v69 = v100;
      if ( !v102 )
      {
        v72 = WdLogNewEntry5_WdAssertion(0LL, v101);
        WdLogEvent5_WdAssertion(v72);
        v102 = *((_QWORD *)v3 + 1);
      }
      v71 = *(_QWORD *)(v102 + 16);
      *(_QWORD *)(v69 + 32) = v19;
      goto LABEL_72;
    }
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v8 + 72LL), 1u);
    v20 = *(_QWORD **)v8;
    v186 = *(_DWORD *)L"st";
    v187 = aTargetpriority[18];
    v169[1] = v185;
    v173 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v185[0] = *(_OWORD *)L"TargetPriorityList";
    v175 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v169[0] = 2490404LL;
    v185[1] = *(_OWORD *)L"iorityList";
    v176 = 0LL;
    v174 = 0LL;
    v177 = 0LL;
    v178 = 3;
    v35 = VIDPN_MGR::_ReadTargetPriorityList(v34, Handle, v169, &v173);
    v39 = v35;
    if ( v35 >= 0 )
    {
      v103 = v177;
      if ( !v177 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v37, v36);
        WdLogEvent5_WdAssertion(v104);
      }
      v105 = v103 >> 2;
      v106 = 0;
      if ( v105 )
      {
        v107 = v176;
        v108 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v20,
                         *(unsigned int *)(v107 + 4 * v108));
          v113 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 31) == -1 )
            {
              *((_DWORD *)TargetById + 31) = v106;
              v116 = WdLogNewEntry5_WdTrace(v111, v110);
              *(_QWORD *)(v116 + 24) = v108;
              v37 = *((unsigned int *)v113 + 6);
              *(_QWORD *)(v116 + 32) = v37;
            }
            else
            {
              v115 = WdLogNewEntry5_WdError(v111, v110);
              *(_QWORD *)(v115 + 24) = *((unsigned int *)v113 + 6);
              WdLogEvent5_WdError(v115);
            }
          }
          else
          {
            v114 = WdLogNewEntry5_WdWarning(v111, v110, v112);
            *(_QWORD *)(v114 + 24) = *(unsigned int *)(v107 + 4 * v108);
            *(_QWORD *)(v114 + 32) = v108;
            WdLogEvent5_WdWarning(v114);
          }
          v108 = ++v106;
        }
        while ( v106 < v105 );
        v3 = v168;
      }
      v117 = (_QWORD *)v20[3];
      if ( v117 != v20 + 3 )
      {
        for ( i = (unsigned int *)(v117 - 1);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v20,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[31] == -1 )
          {
            v119 = WdLogNewEntry5_WdWarning(v37, v36, v38);
            *(_QWORD *)(v119 + 24) = i[6];
            WdLogEvent5_WdWarning(v119);
          }
        }
      }
    }
    else if ( v35 != -1073741275 )
    {
      v120 = WdLogNewEntry5_WdError(v37, v36);
      v122 = *((_QWORD *)v3 + 1);
      v123 = v120;
      if ( !v122 )
      {
        v80 = WdLogNewEntry5_WdAssertion(0LL, v121);
        WdLogEvent5_WdAssertion(v80);
        v122 = *((_QWORD *)v3 + 1);
      }
      *(_QWORD *)(v123 + 24) = *(_QWORD *)(v122 + 16);
      *(_QWORD *)(v123 + 32) = v39;
      WdLogEvent5_WdError(v123);
      v81 = Handle;
      *((_DWORD *)v3 + 14) = v39;
      ZwClose(v81);
      v82 = &v173;
LABEL_78:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v82);
      goto LABEL_79;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v173);
    v170[1] = v188;
    v188[0] = *(_OWORD *)L"TargetForcePriorityList";
    v179 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v170[0] = 3145774LL;
    v181 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v188[2] = *(_OWORD *)L"ityList";
    v182 = 0LL;
    v183 = 0LL;
    v180 = 0LL;
    v184 = 3;
    v188[1] = *(_OWORD *)L"rcePriorityList";
    v41 = VIDPN_MGR::_ReadTargetPriorityList(v40, Handle, v170, &v179);
    v44 = v41;
    if ( v41 >= 0 )
    {
      v124 = v183;
      if ( !v183 )
      {
        v125 = WdLogNewEntry5_WdAssertion(v43, v42);
        WdLogEvent5_WdAssertion(v125);
      }
      v126 = v124 >> 2;
      v127 = 0;
      if ( v126 )
      {
        v128 = v182;
        v129 = 0LL;
        do
        {
          v130 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                   (DMMVIDEOPRESENTTARGETSET *)v20,
                   *(unsigned int *)(v128 + 4 * v129));
          v134 = v130;
          if ( v130 )
          {
            if ( *((_DWORD *)v130 + 32) == -1 )
            {
              *((_DWORD *)v130 + 32) = v127;
              v137 = WdLogNewEntry5_WdTrace(v132, v131);
              *(_QWORD *)(v137 + 24) = v129;
              *(_QWORD *)(v137 + 32) = *((unsigned int *)v134 + 6);
            }
            else
            {
              v136 = WdLogNewEntry5_WdError(v132, v131);
              *(_QWORD *)(v136 + 24) = *((unsigned int *)v134 + 6);
              WdLogEvent5_WdError(v136);
            }
          }
          else
          {
            v135 = WdLogNewEntry5_WdWarning(v132, v131, v133);
            *(_QWORD *)(v135 + 24) = *(unsigned int *)(v128 + 4 * v129);
            *(_QWORD *)(v135 + 32) = v129;
            WdLogEvent5_WdWarning(v135);
          }
          v129 = ++v127;
        }
        while ( v127 < v126 );
        v3 = v168;
      }
LABEL_43:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v179);
      ZwClose(Handle);
      v47 = *((_QWORD *)v3 + 1);
      v167 = -1;
      if ( !v47 )
      {
        v144 = WdLogNewEntry5_WdAssertion(v46, v45);
        WdLogEvent5_WdAssertion(v144);
        v47 = *((_QWORD *)v3 + 1);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(v47 + 16) + 216LL),
                  L"DefaultSimulatedTarget",
                  &v167,
                  4LL) < 0
        || (v145 = v167, v167 == -1) )
      {
        v50 = WdLogNewEntry5_WdTrace(v49, v48);
        v52 = *((_QWORD *)v3 + 1);
        v53 = v50;
        if ( !v52 )
        {
          v157 = WdLogNewEntry5_WdAssertion(0LL, v51);
          WdLogEvent5_WdAssertion(v157);
          v52 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v53 + 24) = *(_QWORD *)(v52 + 16);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v20, v167) )
      {
        v149 = WdLogNewEntry5_WdTrace(v147, v146);
        *(_QWORD *)(v149 + 24) = v145;
        v150 = *((_QWORD *)v3 + 1);
        if ( !v150 )
        {
          v151 = WdLogNewEntry5_WdAssertion(v148, v51);
          WdLogEvent5_WdAssertion(v151);
          v150 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v149 + 32) = *(_QWORD *)(v150 + 16);
        *((_DWORD *)v3 + 123) = v145;
      }
      else
      {
        v154 = WdLogNewEntry5_WdError(v147, v146);
        *(_QWORD *)(v154 + 24) = v145;
        v155 = *((_QWORD *)v3 + 1);
        if ( !v155 )
        {
          v156 = WdLogNewEntry5_WdAssertion(v153, v152);
          WdLogEvent5_WdAssertion(v156);
          v155 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v154 + 32) = *(_QWORD *)(v155 + 16);
        WdLogEvent5_WdError(v154);
      }
      if ( v20 )
        ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), v51);
      LODWORD(v19) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
      if ( (int)v19 >= 0 )
      {
        v55 = *((_QWORD *)v3 + 1);
        if ( v55
          || (v158 = WdLogNewEntry5_WdAssertion(v18, v17),
              WdLogEvent5_WdAssertion(v158),
              (v55 = *((_QWORD *)v3 + 1)) != 0) )
        {
          v56 = (_QWORD *)((char *)v3 + 472);
          if ( v3 != (VIDPN_MGR *)-472LL )
          {
            *v56 = 0LL;
            v57 = *(MONITOR_MGR **)(v55 + 96);
            if ( !v57 )
            {
              v159 = WdLogNewEntry5_WdError(0LL, v17);
              *(_QWORD *)(v159 + 24) = *(_QWORD *)(v55 + 16);
              WdLogEvent5_WdError(v159);
              inserted = -1073741811;
LABEL_140:
              v160 = WdLogNewEntry5_WdError(v18, v17);
              v162 = *((_QWORD *)v3 + 1);
              v163 = v160;
              if ( !v162 )
              {
                v164 = WdLogNewEntry5_WdAssertion(0LL, v161);
                WdLogEvent5_WdAssertion(v164);
                v162 = *((_QWORD *)v3 + 1);
              }
              *(_QWORD *)(v163 + 24) = *(_QWORD *)(v162 + 16);
              WdLogEvent5_WdError(v163);
              *((_DWORD *)v3 + 14) = inserted;
              return v3;
            }
            inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                         v57,
                         v17,
                         v54,
                         (struct HDXGMONITOREVENT__ **)v3 + 59);
LABEL_56:
            if ( inserted >= 0 )
            {
              if ( !*v56 )
              {
                v165 = WdLogNewEntry5_WdAssertion(v18, v17);
                WdLogEvent5_WdAssertion(v165);
              }
              v59 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
              if ( v59 )
                v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v59, 0x8000u, 1, PagedPool, 0x12Cu);
              *((_QWORD *)v3 + 63) = v2;
              *((_DWORD *)v3 + 16) = 2;
              return v3;
            }
            goto LABEL_140;
          }
        }
        else
        {
          v56 = (_QWORD *)((char *)v3 + 472);
        }
        inserted = -1073741811;
        goto LABEL_56;
      }
      goto LABEL_68;
    }
    if ( v41 == -1073741275 )
      goto LABEL_43;
    v138 = WdLogNewEntry5_WdError(v43, v42);
    v140 = *((_QWORD *)v3 + 1);
    v141 = v138;
    if ( !v140 )
    {
      v142 = WdLogNewEntry5_WdAssertion(0LL, v139);
      WdLogEvent5_WdAssertion(v142);
      v140 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v141 + 24) = *(_QWORD *)(v140 + 16);
    *(_QWORD *)(v141 + 32) = v44;
    WdLogEvent5_WdError(v141);
    v143 = Handle;
    *((_DWORD *)v3 + 14) = v44;
    ZwClose(v143);
    v82 = &v179;
    goto LABEL_78;
  }
  v94 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
  v94[3] = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
  v95 = *(_QWORD *)v7;
  v96 = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
  v94[4] = v96;
  v97 = *((_QWORD *)v3 + 1);
  if ( !v97 )
  {
    v98 = WdLogNewEntry5_WdAssertion(v95, v96);
    WdLogEvent5_WdAssertion(v98);
    v97 = *((_QWORD *)v3 + 1);
  }
  v94[5] = *(_QWORD *)(v97 + 16);
  WdLogEvent5_WdError(v94);
  *((_DWORD *)v3 + 14) = -1071774938;
  return v3;
}
