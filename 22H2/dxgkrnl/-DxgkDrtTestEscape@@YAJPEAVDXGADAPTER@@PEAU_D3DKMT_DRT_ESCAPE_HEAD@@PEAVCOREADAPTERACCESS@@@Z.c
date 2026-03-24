/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B74 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025BE4 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025DE8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0037850 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x1C0043E14 (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00F42B0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F4E90 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01359F0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C013D7C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0176CB4 (DxgkPowerOnOffMonitor.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020C004 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C020D930 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C020D9A0 (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C020F4A0 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02167E4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0218F40 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1C021BE74 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C0221578 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02219D0 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C0227248 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C02285C8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022CD2C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0239990 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0248A54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C02559BC (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025FBF4 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0261C84 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0261DB8 (DxgkpIsDrtEnabled.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A97F0 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B6310 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C02D4BD4 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02DE6A0 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorDRTTest @ 0x1C02F38DC (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(ADAPTER_DISPLAY **a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **this)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // ebx
  struct DXGPROCESS *Current; // rdi
  bool v14; // bl
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  char *v33; // r14
  __int64 v34; // r9
  ADAPTER_DISPLAY *v35; // rdx
  char *v36; // rax
  _OWORD *v37; // rcx
  __int64 v38; // r8
  struct DXGPROCESS *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGPROCESS *v42; // rdi
  __int64 v43; // rax
  char *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  DXGDEVICE *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  int updated; // eax
  ADAPTER_DISPLAY *v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  struct _KTHREAD **v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  struct DXGDEVICE *v66; // r15
  __int64 v67; // rax
  ADAPTER_RENDER **v68; // rcx
  __int64 v69; // r9
  struct _EX_RUNDOWN_REF **v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct _EX_RUNDOWN_REF *v74; // rbx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // r8
  __int64 v78; // rcx
  bool v79; // bl
  struct _KTHREAD **v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  struct DXGDEVICE *v85; // rax
  __int64 v86; // rax
  struct DXGPROCESS *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  struct DXGDEVICE *v93; // rbx
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  char *v97; // rcx
  __int64 v98; // rax
  UINT v99; // ebx
  __int64 v100; // rax
  struct _D3DDDI_ALLOCATIONLIST *v101; // r15
  unsigned int v102; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  char *v109; // rcx
  struct _KTHREAD **v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  struct _KTHREAD **v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rcx
  struct DXGDEVICE *v116; // r12
  __int64 v117; // rax
  int v118; // r13d
  __int64 v119; // rax
  UINT v120; // edi
  UINT v121; // ebx
  unsigned int HostProcess; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r9
  int v126; // ecx
  unsigned int v127; // r8d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v129; // rdx
  __int64 v130; // rdx
  _QWORD *v131; // r8
  __int64 v132; // rax
  struct _EX_RUNDOWN_REF **v133; // rcx
  struct _EX_RUNDOWN_REF **v134; // rax
  __int64 v135; // rdx
  struct _EX_RUNDOWN_REF *v136; // rax
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v138; // rdx
  __int64 v139; // rdx
  unsigned int v140; // r8d
  int v141; // edx
  ADAPTER_DISPLAY *v142; // rcx
  struct _KTHREAD **v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rax
  void *v149; // rcx
  NTSTATUS v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rcx
  int v156; // ecx
  int v157; // ecx
  int v158; // ecx
  struct DXGPROCESS *v159; // rax
  struct _FILE_OBJECT *v160; // r12
  unsigned int v161; // edx
  DXGADAPTERSTOPRESETLOCKSHARED *v162; // rcx
  struct _FILE_OBJECT *v163; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  IRP *v165; // rax
  NTSTATUS Status; // eax
  struct DXGPROCESS *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  struct CCD_BTL *v170; // rax
  int v171; // ecx
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  int v175; // ecx
  __int64 v176; // r8
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rax
  __int64 v183; // rdx
  int v184; // eax
  __int64 v185; // rcx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  __int64 v187; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v188; // rbx
  __int64 v189; // rdx
  __int64 v190; // r8
  PKEVENT v191; // [rsp+38h] [rbp-990h]
  int v192; // [rsp+50h] [rbp-978h]
  unsigned __int8 v193[4]; // [rsp+54h] [rbp-974h] BYREF
  __int64 v194; // [rsp+58h] [rbp-970h] BYREF
  struct DXGDEVICE *v195; // [rsp+60h] [rbp-968h] BYREF
  struct DXGCONTEXT *v196; // [rsp+68h] [rbp-960h] BYREF
  __int64 v197; // [rsp+70h] [rbp-958h] BYREF
  struct _EX_RUNDOWN_REF *v198; // [rsp+78h] [rbp-950h] BYREF
  __int64 v199; // [rsp+80h] [rbp-948h] BYREF
  _QWORD v200[2]; // [rsp+88h] [rbp-940h] BYREF
  unsigned int v201; // [rsp+98h] [rbp-930h] BYREF
  int v202; // [rsp+9Ch] [rbp-92Ch]
  DXGDEVICE *v203; // [rsp+A0h] [rbp-928h] BYREF
  struct DXGDEVICE *v204; // [rsp+A8h] [rbp-920h] BYREF
  struct DXGDEVICE *v205; // [rsp+B0h] [rbp-918h] BYREF
  __int64 v206; // [rsp+B8h] [rbp-910h] BYREF
  _BYTE v207[8]; // [rsp+C0h] [rbp-908h] BYREF
  __int64 v208; // [rsp+C8h] [rbp-900h]
  char v209; // [rsp+D0h] [rbp-8F8h]
  int v210; // [rsp+D8h] [rbp-8F0h] BYREF
  int v211; // [rsp+DCh] [rbp-8ECh] BYREF
  struct _EX_RUNDOWN_REF *v212; // [rsp+E0h] [rbp-8E8h] BYREF
  struct _EX_RUNDOWN_REF *v213; // [rsp+E8h] [rbp-8E0h] BYREF
  struct _EX_RUNDOWN_REF *v214; // [rsp+F0h] [rbp-8D8h] BYREF
  struct DXGDEVICE *v215; // [rsp+F8h] [rbp-8D0h] BYREF
  _QWORD v216[2]; // [rsp+100h] [rbp-8C8h] BYREF
  _BYTE v217[8]; // [rsp+110h] [rbp-8B8h] BYREF
  ADAPTER_DISPLAY **v218; // [rsp+118h] [rbp-8B0h]
  char v219; // [rsp+120h] [rbp-8A8h]
  struct DXGDEVICE *v220; // [rsp+128h] [rbp-8A0h] BYREF
  struct DXGDEVICE *v221; // [rsp+130h] [rbp-898h] BYREF
  __int64 v222; // [rsp+138h] [rbp-890h]
  ULONG_PTR v223; // [rsp+140h] [rbp-888h]
  PVOID Object; // [rsp+148h] [rbp-880h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+150h] [rbp-878h] BYREF
  struct _FILE_OBJECT *v226; // [rsp+158h] [rbp-870h] BYREF
  _BYTE v227[8]; // [rsp+160h] [rbp-868h] BYREF
  ADAPTER_DISPLAY **v228; // [rsp+168h] [rbp-860h]
  char v229; // [rsp+170h] [rbp-858h]
  _BYTE v230[16]; // [rsp+178h] [rbp-850h] BYREF
  _QWORD v231[2]; // [rsp+188h] [rbp-840h] BYREF
  _BYTE v232[8]; // [rsp+198h] [rbp-830h] BYREF
  __int64 v233; // [rsp+1A0h] [rbp-828h]
  char v234; // [rsp+1A8h] [rbp-820h]
  struct _EX_RUNDOWN_REF *v235; // [rsp+1B0h] [rbp-818h] BYREF
  struct _EX_RUNDOWN_REF *v236; // [rsp+1B8h] [rbp-810h] BYREF
  _DWORD v237[2]; // [rsp+1C0h] [rbp-808h] BYREF
  __int64 *v238; // [rsp+1C8h] [rbp-800h]
  DXGADAPTER *v239[2]; // [rsp+1D0h] [rbp-7F8h] BYREF
  struct DXGADAPTER *v240[2]; // [rsp+1E0h] [rbp-7E8h] BYREF
  __int64 v241; // [rsp+1F0h] [rbp-7D8h] BYREF
  struct _EX_RUNDOWN_REF *v242; // [rsp+1F8h] [rbp-7D0h] BYREF
  struct _EX_RUNDOWN_REF *v243; // [rsp+200h] [rbp-7C8h] BYREF
  _BYTE v244[8]; // [rsp+208h] [rbp-7C0h] BYREF
  ADAPTER_DISPLAY **v245; // [rsp+210h] [rbp-7B8h]
  char v246; // [rsp+218h] [rbp-7B0h]
  _QWORD v247[2]; // [rsp+220h] [rbp-7A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+230h] [rbp-798h] BYREF
  struct _KEVENT Event; // [rsp+240h] [rbp-788h] BYREF
  unsigned __int8 v250[24]; // [rsp+258h] [rbp-770h] BYREF
  unsigned __int8 v251[16]; // [rsp+270h] [rbp-758h] BYREF
  __int128 v252; // [rsp+280h] [rbp-748h]
  __int128 v253; // [rsp+290h] [rbp-738h]
  __int128 v254; // [rsp+2A0h] [rbp-728h]
  __int128 v255; // [rsp+2B0h] [rbp-718h]
  __int128 v256; // [rsp+2C0h] [rbp-708h]
  PVOID P; // [rsp+2D0h] [rbp-6F8h] BYREF
  _BYTE v258[256]; // [rsp+2D8h] [rbp-6F0h] BYREF
  int v259; // [rsp+3D8h] [rbp-5F0h]
  _QWORD v260[54]; // [rsp+3E0h] [rbp-5E8h] BYREF
  struct _D3DKMT_RENDER v261; // [rsp+590h] [rbp-438h] BYREF
  __int64 v262[10]; // [rsp+700h] [rbp-2C8h] BYREF
  _QWORD v263[10]; // [rsp+750h] [rbp-278h] BYREF
  _BYTE v264[160]; // [rsp+7A0h] [rbp-228h] BYREF
  _BYTE v265[160]; // [rsp+840h] [rbp-188h] BYREF
  _BYTE v266[160]; // [rsp+8E0h] [rbp-E8h] BYREF

  memset(v262, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v262[1]);
  v262[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v262[3]) = 45;
  LOBYTE(v262[6]) = -1;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v192 = 0;
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v15 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v15 + 24) = *((unsigned int *)a2 + 1);
      WdLogEvent5_WdWarning(v15);
      LODWORD(v11) = -1073741789;
    }
    else
    {
      v12 = *((_DWORD *)a2 + 3);
      Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
      if ( Current )
      {
        v14 = v12 && (unsigned __int8)DxgkpIsDrtEnabled();
        *((_BYTE *)Current + 348) = v14 | *((_BYTE *)Current + 348) & 0xFE;
      }
      LODWORD(v11) = 0;
    }
    return (unsigned int)v11;
  }
  if ( !g_OSTestSigningEnabled && !(unsigned __int8)DxgkpIsDrtEnabled() )
  {
    v16 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v16 + 24) = 1412LL;
LABEL_299:
    WdLogEvent5_WdWarning(v16);
    goto LABEL_300;
  }
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v7, v6, v8, v9) + 347) & 0x20) != 0 )
  {
    v21 = *((_DWORD *)a2 + 2);
    if ( v21 != 16 && v21 != 29 )
    {
      v22 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v22 + 24) = 239LL;
      WdLogEvent5_WdEvent(v22);
      return 3221225485LL;
    }
  }
  v24 = *((unsigned int *)a2 + 2);
  if ( (int)v24 > 21 )
  {
    if ( (int)v24 <= 29 )
    {
      if ( (_DWORD)v24 == 29 )
      {
        updated = DrtTestSignalEventCb((struct DXGADAPTER *)a1, a2, v19, v20);
        goto LABEL_79;
      }
      v154 = (unsigned int)(v24 - 22);
      if ( !(_DWORD)v154 )
      {
        v167 = DXGPROCESS::GetCurrent(v154, v17, v19, v20);
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v250, v167);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v250, 0LL);
        v170 = CCD_BTL::Global(v169, v168);
        CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v170 + 8));
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v250);
        return (unsigned int)v11;
      }
      v155 = (unsigned int)(v154 - 1);
      if ( !(_DWORD)v155 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x30u )
        {
          v16 = WdLogNewEntry5_WdWarning(v155, v17, v19);
          *(_QWORD *)(v16 + 24) = 304LL;
          goto LABEL_299;
        }
        updated = DxgkpSendTestVmBusCommand((struct DXGADAPTER *)a1, a2);
        goto LABEL_79;
      }
      v156 = v155 - 1;
      if ( !v156 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
          return 3221225485LL;
        g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
        return (unsigned int)v11;
      }
      v157 = v156 - 1;
      if ( v157 )
      {
        v158 = v157 - 1;
        if ( v158 )
        {
          v31 = (unsigned int)(v158 - 1);
          if ( !(_DWORD)v31 )
          {
            updated = VailDRTTest((struct DXGADAPTER *const)a1, a2);
            goto LABEL_79;
          }
          if ( (_DWORD)v31 != 1 )
            goto LABEL_298;
          if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
            return 3221225485LL;
          v159 = DXGPROCESS::GetCurrent(v31, v17, v19, v20);
          if ( v159 )
          {
            *((_BYTE *)v159 + 348) ^= (*((_BYTE *)v159 + 348) ^ (2 * *((_BYTE *)a2 + 12))) & 2;
            return (unsigned int)v11;
          }
          return 3221225506LL;
        }
        if ( !g_OSTestSigningEnabled )
          return 3221225506LL;
        if ( *((_DWORD *)a2 + 1) < 0x14u )
          return 3221225485LL;
        v160 = 0LL;
        v228 = a1;
        v229 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v227);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v161 = *((_DWORD *)a2 + 3);
          if ( v161 != -1 )
          {
            v193[0] = 0;
            LODWORD(v11) = DmmIsTargetInClientVidPnTopology(a1, v161, v193);
            if ( (int)v11 < 0 )
            {
              if ( !v229 )
                return (unsigned int)v11;
              v162 = (DXGADAPTERSTOPRESETLOCKSHARED *)v227;
              goto LABEL_353;
            }
            if ( !v193[0] )
            {
              if ( v229 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v227);
              return 3221225485LL;
            }
          }
          v160 = (struct _FILE_OBJECT *)a1[27];
          ObfReferenceObject(v160);
        }
        if ( v229 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v227);
        if ( !v160 )
          goto LABEL_230;
        memset(v263, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v263[1]);
        v263[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v263[3]) = 45;
        LOBYTE(v263[6]) = -1;
        v211 = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
        LODWORD(v11) = DxgkPowerOnOffMonitor(
                         (__int64)v160,
                         1u,
                         (_DWORD *)a2 + 3,
                         &v211,
                         1,
                         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v263);
        v163 = v160;
      }
      else
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
          return 3221225485LL;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        DeviceObject = 0LL;
        v226 = 0LL;
        result = DxgkGetMonitorDeviceObject(
                   (const struct _LUID *)((char *)a2 + 12),
                   *((_DWORD *)a2 + 5),
                   &v226,
                   &DeviceObject);
        if ( (int)result < 0 )
          return result;
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        IoStatusBlock = 0LL;
        v165 = IoBuildDeviceIoControlRequest(
                 0x232433u,
                 AttachedDeviceReference,
                 (char *)a2 + 24,
                 4u,
                 0LL,
                 0,
                 1u,
                 &Event,
                 &IoStatusBlock);
        if ( v165 )
        {
          Status = IofCallDriver(AttachedDeviceReference, v165);
          if ( Status == 259 )
          {
            while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
              ;
            Status = IoStatusBlock.Status;
          }
          LODWORD(v11) = Status;
        }
        else
        {
          LODWORD(v11) = -1073741823;
        }
        ObfDereferenceObject(AttachedDeviceReference);
        v163 = v226;
      }
      ObfDereferenceObject(v163);
      return (unsigned int)v11;
    }
    v171 = v24 - 30;
    if ( v171 )
    {
      v172 = (unsigned int)(v171 - 1);
      if ( !(_DWORD)v172 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          v16 = WdLogNewEntry5_WdWarning(v172, v17, v19);
          *(_QWORD *)(v16 + 24) = 1216LL;
          goto LABEL_299;
        }
        updated = DrtTestUpdateRegistryForNewOverride(
                    *(struct _LUID *)((char *)a2 + 12),
                    *((_DWORD *)a2 + 5),
                    *((_DWORD *)a2 + 6));
        goto LABEL_79;
      }
      v173 = (unsigned int)(v172 - 3);
      if ( !(_DWORD)v173 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          v185 = *((unsigned int *)a2 + 3);
          if ( (unsigned int)(v185 - 1) <= 2 )
          {
            if ( *((int *)a1 + 649) >= 2600 && a1[337] && a1[338] )
            {
              DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(v185);
              v188 = DiagnosticInfoArgs;
              if ( DiagnosticInfoArgs )
              {
                LODWORD(v11) = DXGADAPTER::DdiCollectDiagnosticInfo((DXGADAPTER *)a1, DiagnosticInfoArgs, v187);
                DxgFreeDiagnosticInfoArgs(v188);
              }
              else
              {
                LODWORD(v11) = -1073741801;
              }
            }
            return (unsigned int)v11;
          }
          v16 = WdLogNewEntry5_WdWarning(v185, v17, v19);
          *(_QWORD *)(v16 + 24) = 1245LL;
        }
        else
        {
          v16 = WdLogNewEntry5_WdWarning(v173, v17, v19);
          *(_QWORD *)(v16 + 24) = 1230LL;
        }
        goto LABEL_299;
      }
      v174 = (unsigned int)(v173 - 1);
      if ( (_DWORD)v174 )
      {
        v175 = v174 - 1;
        if ( v175 )
        {
          v31 = (unsigned int)(v175 - 1);
          if ( !(_DWORD)v31 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x14u )
            {
              v183 = *((_QWORD *)a1[337] + 48);
              if ( v183 )
                v184 = *(_DWORD *)(2904LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v183 + 8) + 136);
              else
                v184 = -1;
              *((_DWORD *)a2 + 4) = v184;
              return (unsigned int)v11;
            }
            v16 = WdLogNewEntry5_WdWarning(v31, v17, v19);
            *(_QWORD *)(v16 + 24) = 1388LL;
            goto LABEL_299;
          }
          if ( (_DWORD)v31 == 1 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x30u )
            {
              if ( *((int *)a1 + 649) < 2700 || !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
              {
                v177 = WdLogNewEntry5_WdError(v31, v17);
                *(_QWORD *)(v177 + 24) = 1283LL;
                WdLogEvent5_WdError(v177);
              }
              if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
              {
                v178 = WdLogNewEntry5_WdError(v31, v17);
                *(_QWORD *)(v178 + 24) = 1291LL;
                WdLogEvent5_WdError(v178);
              }
              v179 = *((unsigned int *)a2 + 3);
              if ( !(_DWORD)v179 )
              {
                *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(a1[337])
                                     ? 0xC00000BB
                                     : 0;
                return (unsigned int)v11;
              }
              if ( (_DWORD)v179 == 1 )
              {
                v194 = *((_QWORD *)a2 + 4);
                v237[0] = 1;
                v237[1] = 264;
                v238 = &v194;
                LODWORD(v11) = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                                 a1[337],
                                 (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v237,
                                 v176);
                *((_DWORD *)a2 + 11) = v11;
                if ( (int)v11 < 0 )
                {
                  v182 = WdLogNewEntry5_WdError(v181, v180);
                  *(_QWORD *)(v182 + 24) = 1317LL;
                  WdLogEvent5_WdError(v182);
                }
                return (unsigned int)v11;
              }
              v16 = WdLogNewEntry5_WdWarning(v179, v17, v176);
              *(_QWORD *)(v16 + 24) = 1324LL;
            }
            else
            {
              v16 = WdLogNewEntry5_WdWarning(v31, v17, v19);
              *(_QWORD *)(v16 + 24) = 1272LL;
            }
            goto LABEL_299;
          }
          goto LABEL_298;
        }
        updated = ForceGpupTdr(a2);
        goto LABEL_79;
      }
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x18u )
        {
          if ( *((_QWORD *)a2 + 2) )
            LODWORD(v11) = DxgkSetIndirectDisplayRenderAdapterByHandle(
                             *((_DWORD *)a2 + 3),
                             (struct _LUID *)a2 + 2,
                             v19,
                             v20);
          v240[0] = 0LL;
          DXGADAPTER_REFERENCE::AssignByHandle(v240, *((unsigned int *)a2 + 3), v19, v20);
          if ( v240[0] )
          {
            v239[0] = 0LL;
            ADAPTER_DISPLAY::GetPairedRenderAdapter(*((ADAPTER_DISPLAY **)v240[0] + 337), v239, 0LL);
            if ( v239[0] )
              v10 = *(_QWORD *)((char *)v239[0] + 316);
            *((_QWORD *)a2 + 2) = v10;
            DXGADAPTER_REFERENCE::Assign(v239, 0LL);
          }
          DXGADAPTER_REFERENCE::Assign(v240, 0LL);
          return (unsigned int)v11;
        }
        v16 = WdLogNewEntry5_WdWarning(v174, v17, v19);
        *(_QWORD *)(v16 + 24) = 1346LL;
        goto LABEL_299;
      }
      return 3221225506LL;
    }
    if ( (*((_DWORD *)a1 + 515) & 0x800) == 0 )
      return (unsigned int)v11;
    v245 = a1;
    v246 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v244);
    if ( a1[338] )
    {
      if ( *((_DWORD *)a1 + 50) == 1 )
        LODWORD(v11) = ADAPTER_RENDER::EnableIoMmuIsolation(a1[338], v189, v190);
      else
        LODWORD(v11) = 0;
    }
    if ( !v246 )
      return (unsigned int)v11;
    v162 = (DXGADAPTERSTOPRESETLOCKSHARED *)v244;
LABEL_353:
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v162);
    return (unsigned int)v11;
  }
  if ( (_DWORD)v24 == 21 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x18u )
    {
      v16 = WdLogNewEntry5_WdWarning(v24, v17, v19);
      *(_QWORD *)(v16 + 24) = 717LL;
      goto LABEL_299;
    }
    v143 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v24, v17, v19, v20);
    if ( !v143 )
    {
      v43 = WdLogNewEntry5_WdError(v145, v144);
      *(_QWORD *)(v43 + 24) = 725LL;
      goto LABEL_46;
    }
    v215 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v199, *((unsigned int *)a2 + 3), v143, &v215);
    if ( v215 )
    {
      v149 = (void *)*((_QWORD *)a2 + 2);
      Object = 0LL;
      v150 = ObReferenceObjectByHandle(v149, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v11 = v150;
      v192 = v150;
      if ( v150 >= 0 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v247, v215);
        KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
        if ( v247[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v247);
      }
      else
      {
        v153 = WdLogNewEntry5_WdError(v152, v151);
        *(_QWORD *)(v153 + 24) = v11;
        WdLogEvent5_WdError(v153);
      }
      if ( !v199 )
        return (unsigned int)v11;
    }
    else
    {
      v148 = WdLogNewEntry5_WdError(v147, v146);
      *(_QWORD *)(v148 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v148);
      LODWORD(v11) = -1073741811;
      v192 = -1073741811;
      if ( !v199 )
        return (unsigned int)v11;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v199 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_64;
    v68 = (ADAPTER_RENDER **)v199;
    goto LABEL_178;
  }
  if ( (int)v24 <= 12 )
  {
    if ( (_DWORD)v24 == 12 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        v54 = a1[338];
        if ( v54 )
          *((_BYTE *)v54 + 888) = *((_BYTE *)a2 + 12);
        return (unsigned int)v11;
      }
      v16 = WdLogNewEntry5_WdWarning(v24, v17, v19);
      *(_QWORD *)(v16 + 24) = 393LL;
      goto LABEL_299;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
          if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          LODWORD(v11) = COREADAPTERACCESS::AcquireExclusive((__int64)this, 1LL);
          if ( (int)v11 >= 0 )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          return (unsigned int)v11;
        }
        v28 = (unsigned int)(v27 - 1);
        if ( !(_DWORD)v28 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            v16 = WdLogNewEntry5_WdWarning(v28, v17, v19);
            *(_QWORD *)(v16 + 24) = 315LL;
            goto LABEL_299;
          }
          v52 = *((unsigned int *)a2 + 3);
          if ( (unsigned int)(v52 - 1) > 0x3FF )
          {
            v16 = WdLogNewEntry5_WdWarning(v52, v17, v19);
            *(_QWORD *)(v16 + 24) = 324LL;
            goto LABEL_299;
          }
          g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
          return (unsigned int)v11;
        }
        v29 = (unsigned int)(v28 - 1);
        if ( !(_DWORD)v29 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x14u )
          {
            v16 = WdLogNewEntry5_WdWarning(v29, v17, v19);
            *(_QWORD *)(v16 + 24) = 338LL;
            goto LABEL_299;
          }
          g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
          return (unsigned int)v11;
        }
        v30 = (unsigned int)(v29 - 1);
        if ( (_DWORD)v30 )
        {
          v31 = (unsigned int)(v30 - 4);
          if ( (_DWORD)v31 )
          {
            if ( (_DWORD)v31 == 1 )
            {
              v32 = *((unsigned int *)a1 + 736);
              if ( (_DWORD)v32 )
              {
                v31 = (unsigned int)(v32 - 1);
                v17 = 344 * v31 + 360;
                if ( *((unsigned int *)a2 + 1) >= v17 )
                {
                  v33 = (char *)a2 + 352;
                  v34 = (unsigned int)v32;
                  do
                  {
                    v35 = a1[350];
                    v36 = v33 - 336;
                    v37 = (_OWORD *)((char *)v35 + v10 + 8);
                    v38 = 2LL;
                    do
                    {
                      *(_OWORD *)v36 = *v37;
                      *((_OWORD *)v36 + 1) = v37[1];
                      *((_OWORD *)v36 + 2) = v37[2];
                      *((_OWORD *)v36 + 3) = v37[3];
                      *((_OWORD *)v36 + 4) = v37[4];
                      *((_OWORD *)v36 + 5) = v37[5];
                      *((_OWORD *)v36 + 6) = v37[6];
                      v36 += 128;
                      *((_OWORD *)v36 - 1) = v37[7];
                      v37 += 8;
                      --v38;
                    }
                    while ( v38 );
                    *(_OWORD *)v36 = *v37;
                    *((_OWORD *)v36 + 1) = v37[1];
                    *((_OWORD *)v36 + 2) = v37[2];
                    *((_OWORD *)v36 + 3) = v37[3];
                    *((_OWORD *)v36 + 4) = v37[4];
                    *(_DWORD *)v33 = *(_DWORD *)((char *)v35 + v10 + 344);
                    v33[4] = *((_BYTE *)v35 + v10 + 356);
                    v10 += 520LL;
                    v33 += 344;
                    --v34;
                  }
                  while ( v34 );
                  return (unsigned int)v11;
                }
              }
              v16 = WdLogNewEntry5_WdWarning(v31, v17, v32);
              *(_QWORD *)(v16 + 24) = 374LL;
              goto LABEL_299;
            }
            goto LABEL_298;
          }
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            v16 = WdLogNewEntry5_WdWarning(v31, v17, v19);
            *(_QWORD *)(v16 + 24) = 355LL;
            goto LABEL_299;
          }
          *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 736);
          return (unsigned int)v11;
        }
        if ( *((_DWORD *)a2 + 1) < 0x114u )
        {
          v16 = WdLogNewEntry5_WdWarning(v30, v17, v19);
          *(_QWORD *)(v16 + 24) = 412LL;
          goto LABEL_299;
        }
        v39 = DXGPROCESS::GetCurrent(v30, v17, v19, v20);
        v42 = v39;
        if ( !v39 )
        {
          v43 = WdLogNewEntry5_WdError(v41, v40);
          *(_QWORD *)(v43 + 24) = 420LL;
LABEL_46:
          WdLogEvent5_WdError(v43);
LABEL_300:
          LODWORD(v11) = -1073741811;
          return (unsigned int)v11;
        }
        v44 = (char *)v39 + 176;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v44, 0LL);
        *((_QWORD *)v44 + 1) = KeGetCurrentThread();
        v203 = 0LL;
        v45 = *((unsigned int *)a2 + 3);
        if ( (_DWORD)v45 )
        {
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v205, v45, (struct _KTHREAD **)v42, &v203);
          if ( !v203 )
          {
            v47 = WdLogNewEntry5_WdError(v46, v45);
            *(_QWORD *)(v47 + 24) = *((unsigned int *)a2 + 3);
            WdLogEvent5_WdError(v47);
            LODWORD(v11) = -1073741811;
            if ( v205 )
            {
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v205 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v205 + 2), v205);
              LODWORD(v11) = -1073741811;
            }
            goto LABEL_53;
          }
          if ( v205 && _InterlockedExchangeAdd64((volatile signed __int64 *)v205 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v205 + 2), v205);
        }
        if ( !v203 )
        {
          v48 = *((_QWORD *)v42 + 35);
          v49 = v48 ? (DXGDEVICE *)(v48 - 24) : 0LL;
          v203 = v49;
          if ( !v49 )
          {
            v50 = WdLogNewEntry5_WdError(0LL, v45);
            *(_QWORD *)(v50 + 24) = 447LL;
            WdLogEvent5_WdError(v50);
            LODWORD(v11) = -1073741811;
LABEL_53:
            *((_QWORD *)v44 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v44, 0LL);
            KeLeaveCriticalRegion();
            return (unsigned int)v11;
          }
        }
        DXGDEVICE::GetContexts(v203, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
        *((_DWORD *)a2 + 3) = *(_DWORD *)(v51 + 436);
        *((_QWORD *)v44 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v44, 0LL);
        KeLeaveCriticalRegion();
LABEL_64:
        LODWORD(v11) = v192;
        return (unsigned int)v11;
      }
LABEL_77:
      LODWORD(v11) = -1073741637;
      return (unsigned int)v11;
    }
    updated = MonitorDRTTest((DXGADAPTER *)a1, a2, (__int64)v262);
LABEL_79:
    LODWORD(v11) = updated;
    return (unsigned int)v11;
  }
  v55 = (unsigned int)(v24 - 14);
  if ( !(_DWORD)v55 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x14u )
    {
      v16 = WdLogNewEntry5_WdWarning(v55, v17, v19);
      *(_QWORD *)(v16 + 24) = 909LL;
      goto LABEL_299;
    }
    v142 = a1[27];
    if ( v142 )
    {
      updated = DxgkHandleThermalCoolingDrtEscape(v142, a2);
      goto LABEL_79;
    }
LABEL_230:
    LODWORD(v11) = -1073741823;
    return (unsigned int)v11;
  }
  v56 = v55 - 1;
  if ( !v56 )
  {
    if ( *((_DWORD *)a2 + 1) < 0xA8u )
      return 3221225485LL;
    v140 = *((_DWORD *)a2 + 4);
    if ( v140 >= *((_DWORD *)a1 + 736) )
      return 3221225485LL;
    v141 = *((_DWORD *)a2 + 3);
    if ( v141 )
    {
      if ( v141 <= 0 )
        return 3221225485LL;
      if ( v141 <= 3 )
      {
        DXGADAPTER::ForcePState((__int64)a1, v141, v140, *((_DWORD *)a2 + 6));
      }
      else if ( v141 == 4 )
      {
        *((_DWORD *)a2 + 7) = *((_DWORD *)a1 + 1002);
      }
      else
      {
        if ( v141 != 5 )
          return 3221225485LL;
        DXGADAPTER::QueryPStateEngineData(
          (DXGADAPTER *)a1,
          *((_DWORD *)a2 + 5),
          (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
          (unsigned int *)a2 + 4);
      }
    }
    else
    {
      DXGADAPTER::ForcePStateAcrossNodes((DXGADAPTER *)a1, *((_DWORD *)a2 + 6));
    }
    return (unsigned int)v11;
  }
  v57 = (unsigned int)(v56 - 1);
  if ( !(_DWORD)v57 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x60u )
    {
      v16 = WdLogNewEntry5_WdWarning(v57, v17, v19);
      *(_QWORD *)(v16 + 24) = 462LL;
      goto LABEL_299;
    }
    v110 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v57, v17, v19, v20);
    v113 = v110;
    if ( !v110 )
    {
      v43 = WdLogNewEntry5_WdError(v112, v111);
      *(_QWORD *)(v43 + 24) = 470LL;
      goto LABEL_46;
    }
    v221 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v197, *((unsigned int *)a2 + 3), v110, &v221);
    v116 = v221;
    if ( !v221 )
    {
      v117 = WdLogNewEntry5_WdError(v115, v114);
      *(_QWORD *)(v117 + 24) = *((unsigned int *)a2 + 3);
LABEL_174:
      WdLogEvent5_WdError(v117);
      LODWORD(v11) = -1073741811;
      v192 = -1073741811;
LABEL_175:
      if ( !v197 )
        return (unsigned int)v11;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v197 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_64;
      v68 = (ADAPTER_RENDER **)v197;
      goto LABEL_178;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
    v118 = 0;
    v202 = 0;
    v223 = 0LL;
    v119 = *(_QWORD *)(*((_QWORD *)v116 + 2) + 16LL);
    v222 = v119;
    if ( *(_BYTE *)(v119 + 209) )
    {
      *(_OWORD *)v251 = *(_OWORD *)a2;
      v252 = *((_OWORD *)a2 + 1);
      v253 = *((_OWORD *)a2 + 2);
      v254 = *((_OWORD *)a2 + 3);
      v255 = *((_OWORD *)a2 + 4);
      v256 = *((_OWORD *)a2 + 5);
      *(_DWORD *)&v251[12] = *((_DWORD *)v116 + 110);
      v120 = *(_DWORD *)&v251[12];
      v121 = *(_DWORD *)(v119 + 4312);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v113);
      LODWORD(v191) = 96;
      if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v222 + 4240),
                  HostProcess,
                  v121,
                  v120,
                  0,
                  D3DKMT_ESCAPE_DRT_TEST,
                  0,
                  (size_t)v191,
                  v251) < 0 )
      {
        v117 = WdLogNewEntry5_WdError(v124, v123);
        *(_QWORD *)(v117 + 24) = 512LL;
        goto LABEL_174;
      }
      v118 = HIDWORD(v253);
      v202 = v254;
      v223 = v256;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v231, v116);
    v233 = *(_QWORD *)(*((_QWORD *)v116 + 2) + 16LL);
    v234 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v232);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v266, (__int64)v116, 0, v125, 0);
    LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v266, 0LL);
    v192 = v11;
    if ( (int)v11 >= 0 )
    {
      memset(v260, 0, 0x1A8uLL);
      HIDWORD(v260[0]) = *((_DWORD *)a2 + 3);
      LODWORD(v260[2]) = 4;
      v260[3] = (char *)a2 + 16;
      v126 = LODWORD(v260[0]) | 0x200;
      LODWORD(v260[0]) |= 0x200u;
      if ( *((_BYTE *)a2 + 60) )
      {
        v126 |= 1u;
        LODWORD(v260[0]) = v126;
      }
      if ( *((_BYTE *)a2 + 65) )
      {
        v126 |= 0x20u;
        LODWORD(v260[0]) = v126;
      }
      if ( *((_BYTE *)a2 + 61) )
      {
        v126 |= 0x400u;
        LODWORD(v260[0]) = v126;
      }
      if ( *((_BYTE *)a2 + 62) )
      {
        v126 |= 0x1000u;
        LODWORD(v260[0]) = v126;
      }
      if ( *((_BYTE *)a2 + 63) )
      {
        v126 |= 0x2000u;
        LODWORD(v260[0]) = v126;
      }
      if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
        LODWORD(v260[0]) = v126 | 0x8000;
      LOBYTE(v260[51]) = *((_BYTE *)a2 + 64);
      LODWORD(v260[48]) = *((_DWORD *)a2 + 14);
      HIDWORD(v260[48]) = *((_DWORD *)a2 + 17);
      HIDWORD(v260[47]) = *((_DWORD *)a2 + 10);
      LODWORD(v260[49]) = *((_DWORD *)a2 + 18);
      v260[50] = *((_QWORD *)a2 + 10);
      LODWORD(v11) = DXGDEVICE::CreateStandardAllocation(
                       (struct _DXGK_ALLOCATIONINFO *)v116,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v260,
                       (struct COREDEVICEACCESS *)v266);
      v192 = v11;
      if ( (int)v11 >= 0 )
      {
        v127 = HIDWORD(v260[6]);
        *((_DWORD *)a2 + 11) = HIDWORD(v260[6]);
        *((_QWORD *)a2 + 6) = v260[1];
        if ( (*((_BYTE *)v113 + 347) & 0x20) != 0 )
        {
          v212 = 0LL;
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v113,
                                                        (DXGALLOCATIONREFERENCE *)&v236,
                                                        v127);
          DXGALLOCATIONREFERENCE::MoveAssign(&v212, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v236, v129);
          if ( v212
            && (v131 = (_QWORD *)*((_QWORD *)v116 + 2),
                v130 = *(_QWORD *)(v212[1].Count + 16),
                *(_QWORD *)(v130 + 16) == v131[2]) )
          {
            v132 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v131[80] + 8LL) + 632LL))(
                     v131[81],
                     v212[3].Count,
                     0LL);
          }
          else
          {
            v132 = 0LL;
          }
          *((_QWORD *)a2 + 10) = v132;
          v133 = &v212;
        }
        else
        {
          if ( !*(_BYTE *)(v222 + 209) )
            goto LABEL_184;
          v214 = 0LL;
          v134 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                              (__int64)v113,
                                              (DXGALLOCATIONREFERENCE *)&v243,
                                              v127);
          DXGALLOCATIONREFERENCE::MoveAssign(&v214, v134);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v243, v135);
          v136 = v214;
          if ( v214 )
          {
            LODWORD(v214[12].Count) = v118;
            HIDWORD(v136[12].Ptr) = v118;
            v136[15].Count = v223;
          }
          v213 = 0LL;
          ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                      (__int64)v113,
                                                      (DXGRESOURCEREFERENCE *)&v235,
                                                      *((_DWORD *)a2 + 12));
          DXGRESOURCEREFERENCE::MoveAssign(&v213, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v235, v138);
          if ( v213 )
            HIDWORD(v213[2].Ptr) = v202;
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v213, v139);
          v133 = &v214;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v133, v130);
        goto LABEL_184;
      }
      LODWORD(v11) = -1073741811;
      v192 = -1073741811;
    }
LABEL_184:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v266);
    if ( v234 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v232);
    if ( v231[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v231);
    goto LABEL_175;
  }
  v58 = (unsigned int)(v57 - 1);
  if ( (_DWORD)v58 )
  {
    v59 = (unsigned int)(v58 - 1);
    if ( (_DWORD)v59 )
    {
      v31 = (unsigned int)(v59 - 1);
      if ( !(_DWORD)v31 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
          return 3221225485LL;
        if ( g_OSTestSigningEnabled )
        {
          v79 = *((_DWORD *)a2 + 3) != 0;
          *((_BYTE *)DXGGLOBAL::GetGlobal(v31, v17) + 1488) = v79;
          return (unsigned int)v11;
        }
        goto LABEL_77;
      }
      if ( (_DWORD)v31 == 1 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v16 = WdLogNewEntry5_WdWarning(v31, v17, v19);
          *(_QWORD *)(v16 + 24) = 625LL;
          goto LABEL_299;
        }
        v60 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v31, v17, v19, v20);
        v63 = (__int64)v60;
        if ( !v60 )
        {
          v43 = WdLogNewEntry5_WdError(v62, v61);
          *(_QWORD *)(v43 + 24) = 633LL;
          goto LABEL_46;
        }
        v220 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v195, *((unsigned int *)a2 + 3), v60, &v220);
        v66 = v220;
        if ( !v220 )
        {
          v67 = WdLogNewEntry5_WdError(v65, v64);
          *(_QWORD *)(v67 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v67);
          LODWORD(v11) = -1073741811;
          v192 = -1073741811;
LABEL_97:
          if ( !v195 )
            return (unsigned int)v11;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v195 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
            goto LABEL_64;
          v68 = (ADAPTER_RENDER **)v195;
          goto LABEL_178;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v200, v66);
        v208 = *(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL);
        v209 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v207);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v264, (__int64)v66, 0, v69, 0);
        LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v264, 0LL);
        v192 = v11;
        if ( (int)v11 < 0 )
        {
LABEL_101:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v264);
          if ( v209 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v207);
          if ( v200[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v200);
          goto LABEL_97;
        }
        v198 = 0LL;
        v70 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                           v63,
                                           (DXGALLOCATIONREFERENCE *)&v242,
                                           *((_DWORD *)a2 + 4));
        DXGALLOCATIONREFERENCE::MoveAssign(&v198, v70);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v242, v71);
        v74 = v198;
        if ( v198 )
        {
          v77 = (_QWORD *)*((_QWORD *)v66 + 2);
          v78 = *(_QWORD *)(v198[1].Count + 16);
          if ( *(_QWORD *)(v78 + 16) == v77[2] )
          {
            if ( *((_BYTE *)a2 + 20) )
            {
              if ( (v198[9].Count & 0x800) == 0 )
              {
                v210 = 0;
                v241 = 0LL;
                LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v77[80] + 8LL) + 232LL))(
                                 v77[81],
                                 v198[3].Count,
                                 0LL,
                                 &v210,
                                 &v241,
                                 0LL);
                v192 = v11;
                if ( (int)v11 >= 0 )
                  LODWORD(v74[9].Count) |= 0x800u;
                goto LABEL_108;
              }
              v75 = (_QWORD *)WdLogNewEntry5_WdError(v78, v72);
              v75[3] = 681LL;
            }
            else
            {
              if ( (v198[9].Count & 0x800) != 0 )
              {
                (*(void (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(v77[80] + 8LL) + 240LL))(v77[81], v198[3].Count);
                LODWORD(v74[9].Count) &= ~0x800u;
                goto LABEL_108;
              }
              v75 = (_QWORD *)WdLogNewEntry5_WdError(v78, v72);
              v75[3] = 702LL;
            }
          }
          else
          {
            v75 = (_QWORD *)WdLogNewEntry5_WdError(v78, v72);
            v75[3] = v66;
            v75[4] = v74;
            v75[5] = -1073741811LL;
          }
        }
        else
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
          v75[3] = *((unsigned int *)a2 + 4);
        }
        WdLogEvent5_WdError(v75);
        LODWORD(v11) = -1073741811;
        v192 = -1073741811;
LABEL_108:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v198, v76);
        goto LABEL_101;
      }
LABEL_298:
      v16 = WdLogNewEntry5_WdWarning(v31, v17, v19);
      *(_QWORD *)(v16 + 24) = *((int *)a2 + 2);
      goto LABEL_299;
    }
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v16 = WdLogNewEntry5_WdWarning(v59, v17, v19);
      *(_QWORD *)(v16 + 24) = 878LL;
      goto LABEL_299;
    }
    v80 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v59, v17, v19, v20);
    if ( !v80 )
    {
      v43 = WdLogNewEntry5_WdError(v82, v81);
      *(_QWORD *)(v43 + 24) = 886LL;
      goto LABEL_46;
    }
    v204 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v206, *((unsigned int *)a2 + 3), v80, &v204);
    v85 = v204;
    if ( v204 )
    {
      *((_BYTE *)v204 + 1871) = 1;
      *(_BYTE *)(*((_QWORD *)v85 + 5) + 297LL) = 1;
      if ( !v206 )
        return (unsigned int)v11;
    }
    else
    {
      v86 = WdLogNewEntry5_WdError(v84, v83);
      *(_QWORD *)(v86 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v86);
      LODWORD(v11) = -1073741811;
      v192 = -1073741811;
      if ( !v206 )
        return (unsigned int)v11;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v206 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_64;
    v68 = (ADAPTER_RENDER **)v206;
LABEL_178:
    ADAPTER_RENDER::DestroyDeviceNoLocks(v68[2], (struct DXGDEVICE *)v68);
    goto LABEL_64;
  }
  if ( *((_DWORD *)a2 + 1) < 0xA8u )
  {
    v16 = WdLogNewEntry5_WdWarning(v58, v17, v19);
    *(_QWORD *)(v16 + 24) = 764LL;
    goto LABEL_299;
  }
  v87 = DXGPROCESS::GetCurrent(v58, v17, v19, v20);
  if ( !v87 )
  {
    v43 = WdLogNewEntry5_WdError(v89, v88);
    *(_QWORD *)(v43 + 24) = 772LL;
    goto LABEL_46;
  }
  v196 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v230, *((_DWORD *)a2 + 3), v87, &v196, 0);
  if ( !v196 )
  {
    v92 = WdLogNewEntry5_WdError(v91, v90);
    *(_QWORD *)(v92 + 24) = 782LL;
    WdLogEvent5_WdError(v92);
    LODWORD(v11) = -1073741811;
LABEL_138:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v230);
    return (unsigned int)v11;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
  v93 = (struct DXGDEVICE *)*((_QWORD *)v196 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v216, v93);
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v196 + 464));
  v218 = a1;
  v219 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v217);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v265, (__int64)v93, 0, v94, 0);
  LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v265, 0LL);
  if ( (int)v11 < 0 )
  {
    v97 = (char *)v196 + 464;
    *((_QWORD *)v196 + 59) = 0LL;
    ExReleasePushLockExclusiveEx(v97, 0LL);
    KeLeaveCriticalRegion();
LABEL_141:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v265);
    if ( v219 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v217);
    if ( v216[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v216);
    goto LABEL_138;
  }
  if ( *((_DWORD *)a2 + 8) > 0x10u )
  {
    v98 = WdLogNewEntry5_WdError(v96, v95);
    *(_QWORD *)(v98 + 24) = 803LL;
    WdLogEvent5_WdError(v98);
    LODWORD(v11) = -1073741811;
  }
  v99 = *((_DWORD *)a2 + 4);
  if ( !v99 )
  {
    v100 = WdLogNewEntry5_WdError(v96, v95);
    *(_QWORD *)(v100 + 24) = 808LL;
    WdLogEvent5_WdError(v100);
    LODWORD(v11) = -1073741811;
    v99 = *((_DWORD *)a2 + 4);
  }
  memset(&v261, 0, sizeof(v261));
  v261.hDevice = *((_DWORD *)a2 + 3);
  v261.AllocationCount = *((_DWORD *)a2 + 8);
  v261.CommandLength = v99;
  v261.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
  v101 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
  v261.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
  *(_DWORD *)&v261.Flags |= 0x20u;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v196 + 2) + 16LL) + 16LL));
  v193[0] = IsDxgmms2;
  v201 = v102;
  P = 0LL;
  v259 = 0;
  v104 = 0LL;
  v204 = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_160:
    if ( (int)v11 >= 0 )
      LODWORD(v11) = DXGCONTEXT::Render(
                       v196,
                       &v261,
                       (struct COREDEVICEACCESS *)v265,
                       (struct DXGADAPTERSTOPRESETLOCKSHARED *)v217,
                       &v196,
                       v104,
                       0LL);
    if ( IsDxgmms2 )
      DxgkUnreferenceAllocationList(v201, (struct _EX_RUNDOWN_REF **)v104);
    v109 = (char *)v196 + 464;
    *((_QWORD *)v196 + 59) = 0LL;
    ExReleasePushLockExclusiveEx(v109, 0LL);
    KeLeaveCriticalRegion();
    if ( P != v258 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v259 = 0;
    goto LABEL_141;
  }
  v104 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, v102);
  v204 = (struct DXGDEVICE *)v104;
  if ( v104 )
  {
    LODWORD(v11) = DxgkReferenceAllocationList(&v201, v101, v104, *((struct DXGDEVICE **)v196 + 2));
    goto LABEL_160;
  }
  v108 = WdLogNewEntry5_WdWarning(v106, v105, v107);
  *(_QWORD *)(v108 + 24) = 837LL;
  WdLogEvent5_WdWarning(v108);
  if ( P != v258 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v259 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v265);
  if ( v219 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v217);
  if ( v216[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v216);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v230);
  return 3221225495LL;
}
