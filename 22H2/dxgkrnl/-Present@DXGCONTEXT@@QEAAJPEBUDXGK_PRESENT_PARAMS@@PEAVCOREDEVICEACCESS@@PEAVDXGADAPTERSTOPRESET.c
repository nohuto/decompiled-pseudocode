/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0
 * Callers:
 *     DxgkPresent @ 0x1C010B130 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0272670 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C02805F0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C00020A0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003610 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0005150 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0005194 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C0009060 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00091AC (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0009580 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C0017948 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017AA4 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0017B38 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017B84 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0017BB8 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x1C0017FAC (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x1C00183AC (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C001AE24 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001BB54 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C001C094 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001C0B0 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x1C001C0D4 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0027AC8 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z @ 0x1C003FD10 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1C0048284 (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C0048520 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0pqpqtt_EtwWriteTransfer @ 0x1C00486D4 (McTemplateK0pqpqtt_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C0048794 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C00E1BD0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E3390 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF2E8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00F93C0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01093D0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010C850 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C012E928 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0152CF0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0157F40 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01593F0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0159A00 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C015A924 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C015BC20 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C015BD68 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015C700 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C015CF94 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C016EF10 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0170464 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0170600 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1C0170758 (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C0170778 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1C0170798 (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0172444 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C0214544 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0246AD4 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0249D50 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024DD9C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C027EDA8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C027FFB4 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0280D74 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0280F24 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0281DC8 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1C0282210 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C029C5D4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v8; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const struct _DXGKWIN32KENG_INTERFACE *Win32kInterface; // rax
  int v15; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v17; // zf
  int v18; // ecx
  unsigned int v19; // r13d
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // r8
  D3DKMT_HANDLE v23; // ebx
  D3DKMT_HANDLE v24; // ebx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGALLOCATION **v31; // rax
  struct DXGALLOCATION *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGALLOCATION *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  D3DKMT_HANDLE v42; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r9d
  int v44; // r9d
  __int64 v45; // rcx
  unsigned int VidPnSourceId; // esi
  __int64 v47; // rdx
  __int64 v48; // rdx
  DXGADAPTER *v49; // rcx
  int v50; // ecx
  UINT v51; // ecx
  int v52; // ecx
  UINT v53; // ecx
  UINT v54; // ecx
  UINT v55; // edx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int DeviceFlipMode; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  int v61; // ecx
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v64; // r8d
  int v65; // edx
  int v66; // r13d
  int v67; // eax
  __int64 v68; // rdx
  struct DXGALLOCATION *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // r8
  DXGDEVICE *v72; // rcx
  COREDEVICEACCESS *v73; // rbx
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rbx
  __int64 *v77; // rbx
  __int64 v78; // rax
  UINT v79; // ebx
  __int64 v80; // rcx
  struct VIDMM_GLOBAL *v81; // r14
  VIDMM_EXPORT *v82; // r13
  struct DXGCONTEXT **v83; // r13
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // r8
  struct _EX_RUNDOWN_REF *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // r8
  _QWORD *v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  D3DKMT_PRESENT_MODEL Model; // eax
  struct DXGADAPTERSTOPRESETLOCKSHARED *v97; // rsi
  const RECT *pSrcSubRects; // rax
  UINT v99; // edx
  DXGPRESENT *v100; // rcx
  DXGPRESENT *v101; // rcx
  DXGADAPTER *v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  unsigned int v105; // ebx
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  BOOL v110; // ebx
  __int64 v111; // rcx
  int v112; // eax
  int v113; // esi
  HANDLE CurrentThreadId; // rax
  HANDLE v115; // r13
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rdx
  int v119; // esi
  CWin32kLocks *v120; // rbx
  __int64 v121; // rdx
  HDC v122; // rcx
  int v123; // eax
  HDC v124; // rbx
  HDEV v125; // rsi
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // ecx
  __int64 v129; // rcx
  HDC v130; // rsi
  DXGPROCESS *Current; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v132; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v133; // rbx
  COREDEVICEACCESS *v134; // r13
  __int64 v135; // rdx
  unsigned int DdiSubRectCnt; // eax
  DXGPRESENT *v137; // rcx
  struct tagRECT *DdiSubRectList; // rax
  __int64 BroadcastContextCount; // rcx
  __int64 v140; // rax
  int v141; // eax
  __int64 v142; // rbx
  unsigned int i; // r13d
  unsigned int v144; // ecx
  unsigned int v145; // eax
  const RECT *v146; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v147; // ecx
  UINT v148; // ebx
  __int64 v149; // r9
  __int128 *v150; // r8
  RECT *v151; // rdx
  struct _VIDMM_DMA_BUFFER **v152; // rax
  __int64 v153; // rax
  struct VIDMM_GLOBAL *v154; // rsi
  VIDMM_EXPORT *v155; // r14
  __int64 v156; // r11
  __int64 v157; // r14
  unsigned int v158; // esi
  unsigned int v159; // ebx
  unsigned int v160; // edx
  unsigned int v161; // r10d
  __int64 v162; // r11
  __int64 v163; // r8
  unsigned int v164; // r9d
  __int64 v165; // rcx
  int v166; // eax
  __int64 SubRectCnt; // rdx
  const RECT *pDstSubRects; // rcx
  signed __int64 v169; // r8
  __int64 v170; // rax
  __int128 v171; // xmm0
  __int64 v172; // rax
  __int64 v173; // rsi
  __int64 v174; // rax
  __int64 v175; // r8
  int v176; // ecx
  __int64 v177; // rdx
  __int64 v178; // rcx
  struct DXGALLOCATION **v179; // rax
  struct DXGALLOCATION *v180; // rdx
  __int64 v181; // rdx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // r8
  __int64 v187; // rcx
  __int64 v188; // rdx
  int v189; // eax
  __int64 v190; // rdx
  CWin32kLocks *v191; // r12
  struct _VIDMM_DMA_BUFFER *v192; // rdx
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rdx
  int v196; // eax
  __int64 v197; // r14
  __int64 v198; // rax
  __int64 v199; // rax
  int v200; // r9d
  __int64 v201; // rax
  _QWORD *v202; // rax
  int v203; // r14d
  _QWORD *v204; // rax
  struct DXGALLOCATION *v205; // rcx
  _QWORD *v206; // rax
  struct DXGALLOCATION *v207; // rcx
  int v208; // r9d
  __int64 v209; // rax
  __int64 v210; // rcx
  unsigned int v211; // esi
  DXGADAPTER *v212; // rcx
  __int64 v213; // rax
  struct DXGALLOCATION *v214; // rdx
  __int64 v215; // rdx
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v219; // eax
  __int64 v220; // rcx
  unsigned int v221; // eax
  __int64 v222; // rdx
  LONG v223; // eax
  __int64 v224; // r8
  unsigned int v225; // r9d
  unsigned int v226; // eax
  unsigned int v227; // ebx
  __int64 v228; // r14
  const struct tagRECT *v229; // rdx
  __int64 v230; // rdx
  __int64 v231; // rcx
  LONG v232; // eax
  LONG v233; // r9d
  __int64 v234; // rcx
  const RECT *v235; // rax
  unsigned int v236; // r10d
  int v237; // r8d
  int v238; // r9d
  __int64 v239; // rdx
  RECT SrcRect; // xmm0
  _QWORD *v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rbx
  unsigned int v245; // r14d
  UINT v246; // r8d
  RECT v247; // xmm0
  _QWORD *v248; // rax
  LONG v249; // eax
  int v250; // eax
  unsigned int v251; // ebx
  __int64 v252; // r14
  const struct tagRECT *v253; // rdx
  __int64 v254; // rdx
  __int64 v255; // rcx
  UINT Color; // eax
  _QWORD *v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rcx
  _QWORD *v260; // rax
  __int64 v261; // rcx
  __int64 v262; // rax
  __int64 v263; // rax
  _QWORD *v264; // rax
  DXGADAPTER *v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // rax
  __int64 v271; // rdx
  __int64 v272; // rdx
  _QWORD *v273; // rax
  __int64 v274; // rcx
  __int64 v275; // rax
  bool IsFullWDDMDevice; // al
  struct _KTHREAD **v277; // rcx
  unsigned int v278; // edx
  int v279; // ebx
  int v280; // eax
  __int64 v281; // rdx
  UINT v282; // ecx
  __int64 v283; // rdx
  __int64 v284; // rdx
  int v285; // eax
  __int64 v286; // rdx
  __int64 v287; // rax
  __int64 v288; // rdx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v290; // rdx
  int v291; // eax
  __int64 v292; // rdx
  _QWORD *v293; // rax
  struct DXGALLOCATION *v294; // rcx
  __int64 v295; // rax
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // rax
  bool v299; // al
  _QWORD *v300; // rax
  int v301; // eax
  int v302; // ecx
  __int64 v303; // r10
  __int64 v304; // r13
  unsigned int v305; // r14d
  unsigned int v306; // ebx
  __int64 v307; // r11
  unsigned int v308; // edx
  unsigned int v309; // r10d
  __int64 v310; // r8
  unsigned int v311; // r9d
  __int64 v312; // rcx
  __int64 v313; // rax
  __int64 v314; // rcx
  __int64 v315; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v316; // eax
  unsigned int v317; // edx
  _QWORD *v318; // rax
  __int128 v319; // xmm0
  __int64 v320; // rax
  __int64 v321; // r8
  int v322; // eax
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // rbx
  _QWORD *v326; // rax
  UINT Width; // ecx
  UINT Height; // eax
  enum _D3DDDIFORMAT v329; // ebx
  _QWORD *v330; // rax
  __int64 v331; // rax
  _QWORD *v332; // rax
  __int64 v333; // rax
  __int64 v334; // rax
  __int64 v335; // rax
  int v336; // eax
  __int64 v337; // rax
  COREDEVICEACCESS *v338; // rbx
  __int64 v339; // rdx
  int v340; // eax
  __int64 v341; // rax
  int v342; // eax
  unsigned __int8 v343; // r9
  struct _VIDMM_DMA_BUFFER *v344; // rdx
  __int64 v345; // rax
  __int64 v346; // rdx
  __int64 v347; // rdx
  int v348; // eax
  __int64 v349; // r13
  __int64 v350; // rax
  int v351; // r13d
  char v352; // si
  int v353; // ebx
  __int64 v354; // rax
  __int64 v355; // rcx
  __int64 v356; // rax
  __int64 v357; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v358; // r8d
  struct _EX_RUNDOWN_REF *v359; // r13
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  LONG right; // eax
  __int64 v364; // rax
  __int64 v365; // rax
  struct tagRECT *v366; // rax
  int v367; // ebx
  __int64 v368; // rcx
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // r8
  unsigned int v372; // ebx
  struct DXGPROCESS *v373; // r14
  int v374; // r9d
  __int64 v375; // rax
  __int64 v376; // r8
  int v377; // ecx
  __int64 v378; // rcx
  __int64 v379; // rax
  struct DXGALLOCATION *v380; // rdx
  __int64 v381; // rdx
  __int64 v382; // rcx
  __int64 v383; // rax
  __int64 v384; // rbx
  struct DXGPROCESS *v385; // rax
  int v386; // ebx
  __int64 v387; // rdx
  __int64 v388; // rax
  UINT v389; // r13d
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v390; // ebx
  __int64 v391; // rcx
  struct VIDMM_GLOBAL *v392; // rsi
  VIDMM_EXPORT *v393; // r14
  __int64 v394; // r11
  __int64 v395; // rsi
  UINT v396; // ebx
  __int64 v397; // r11
  unsigned int v398; // edx
  unsigned int v399; // r10d
  __int64 v400; // r8
  unsigned int v401; // r9d
  __int64 v402; // rcx
  DXGDEVICE *v403; // rbx
  int v404; // r12d
  char v405; // bl
  __int64 v406; // rdx
  __int64 v407; // rdx
  __int64 v408; // rcx
  COREDEVICEACCESS *v409; // rcx
  struct DXGDEVICE *v410; // rsi
  __int64 v411; // rbx
  struct DXGPROCESS *v412; // rax
  unsigned int v413; // eax
  __int64 v414; // rax
  DXGDEVICE *v415; // rcx
  __int64 v416; // rdx
  __int64 v417; // rdx
  __int64 v418; // rcx
  __int64 v419; // rax
  __int64 v420; // rax
  int v421; // eax
  int v422; // ecx
  bool v423; // bl
  int v424; // esi
  HDC v425; // rax
  __int64 v426; // rax
  struct DXGDEVICE *v427; // rsi
  __int64 v428; // rbx
  struct DXGPROCESS *v429; // rax
  __int64 v430; // rax
  DXGDEVICE *v431; // rbx
  char v432; // bl
  __int64 v433; // rdx
  __int64 v434; // rdx
  __int64 v435; // rcx
  __int64 v436; // rax
  __int64 v437; // rbx
  int v438; // eax
  int v439; // ecx
  HDC v440; // rax
  __int64 v441; // rax
  int v442; // eax
  __int64 v443; // rax
  __int64 v444; // rax
  D3DKMT_HANDLE *BroadcastContext; // rdx
  __int64 v446; // r8
  __int64 v447; // rcx
  int CurrentOrientation; // eax
  int v449; // ecx
  __int64 v450; // rbx
  struct DXGPROCESS *v451; // rax
  RECT DstRect; // xmm0
  __int64 v453; // rdx
  __int64 v454; // rcx
  __int64 v455; // rax
  __int64 v456; // rax
  unsigned int v457; // r9d
  __int64 v458; // r10
  int v459; // edx
  D3DKMT_HANDLE *v460; // rcx
  _OWORD *v461; // rdx
  __int128 v462; // xmm1
  __int128 v463; // xmm0
  __int128 v464; // xmm1
  __int128 v465; // xmm0
  __int128 v466; // xmm1
  __int128 v467; // xmm0
  __int128 v468; // xmm1
  __int64 v469; // rcx
  int v470; // eax
  __int64 v471; // rax
  __int64 v472; // rax
  struct _DXGKARG_PRESENT *v473; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v474; // [rsp+20h] [rbp-100h]
  struct tagRECT *v475; // [rsp+28h] [rbp-F8h]
  struct tagRECT *Src; // [rsp+40h] [rbp-E0h]
  int Srca; // [rsp+40h] [rbp-E0h]
  size_t Size; // [rsp+48h] [rbp-D8h]
  int Sizea; // [rsp+48h] [rbp-D8h]
  struct _VIDMM_DMA_BUFFER *v480; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v481; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v482[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v483; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v484; // [rsp+68h] [rbp-B8h]
  __int64 v485; // [rsp+70h] [rbp-B0h]
  __int64 v486; // [rsp+78h] [rbp-A8h]
  __int64 v487; // [rsp+80h] [rbp-A0h]
  __int64 v488; // [rsp+88h] [rbp-98h]
  __int64 v489; // [rsp+90h] [rbp-90h]
  __int64 v490; // [rsp+98h] [rbp-88h]
  struct DXGALLOCATION *v492; // [rsp+A8h] [rbp-78h] BYREF
  CWin32kLocks *v493; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v494; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v495; // [rsp+BCh] [rbp-64h]
  unsigned int v496; // [rsp+C0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v497; // [rsp+C8h] [rbp-58h] BYREF
  char v498; // [rsp+D0h] [rbp-50h]
  DXGADAPTERSTOPRESETLOCKSHARED *v499; // [rsp+D8h] [rbp-48h]
  unsigned int hSource; // [rsp+E0h] [rbp-40h]
  struct DXGALLOCATION *v501; // [rsp+E8h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v502; // [rsp+F0h] [rbp-30h] BYREF
  struct DXGCONTEXT **v503; // [rsp+F8h] [rbp-28h]
  unsigned int v504; // [rsp+100h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v505; // [rsp+108h] [rbp-18h] BYREF
  struct _DXGKARG_PRESENT v506; // [rsp+110h] [rbp-10h] BYREF
  struct tagRECT Source1; // [rsp+1C0h] [rbp+A0h] BYREF
  __int128 v508; // [rsp+1D0h] [rbp+B0h] BYREF
  _D3DKMT_LOCK2 v509; // [rsp+1E0h] [rbp+C0h] BYREF
  unsigned int v510[6]; // [rsp+1F8h] [rbp+D8h] BYREF
  _OWORD v511[35]; // [rsp+210h] [rbp+F0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v512; // [rsp+440h] [rbp+320h] BYREF
  _BYTE v514[64]; // [rsp+480h] [rbp+360h] BYREF
  _BYTE v515[64]; // [rsp+4C0h] [rbp+3A0h] BYREF
  _BYTE v516[64]; // [rsp+500h] [rbp+3E0h] BYREF
  _BYTE v517[64]; // [rsp+540h] [rbp+420h] BYREF

  v8 = a7;
  v493 = a5;
  v503 = a6;
  v10 = *((_QWORD *)this + 2);
  v499 = a4;
  *(_QWORD *)&v509.hDevice = a7;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v10 + 16)) )
  {
    v198 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v198 + 24) = 3702LL;
    WdLogEvent5_WdAssertion(v198);
  }
  if ( *((_QWORD *)this + 47) )
  {
    v199 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v199 + 24) = 3703LL;
    WdLogEvent5_WdAssertion(v199);
  }
  if ( (a2->Flags.Value & 0x4000) != 0
    || (Win32kInterface = DXGPROCESS::GetWin32kInterface(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL)),
        v12 = a2->Flags.Value & 0x12000,
        *(_QWORD *)&v508 = Win32kInterface,
        (_DWORD)v12 == 73728) )
  {
    v172 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    LODWORD(v69) = -1073741811;
    *(_QWORD *)(v172 + 24) = this;
    *(_QWORD *)(v172 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v172);
    return (unsigned int)v69;
  }
  memset(&v506, 0, sizeof(v506));
  v15 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v15;
  v17 = (a2->Flags.Value & 0x10000) == 0;
  v494 = hDestination;
  if ( v17 )
    v15 |= 1u;
  v18 = v15 | 0x100;
  *(_DWORD *)a7 = v18;
  *(_DWORD *)a7 = v18 ^ (v18 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v496 = 0;
  v495 = 0;
  LODWORD(v502) = 0;
  v19 = 0;
  LODWORD(v497) = 0;
  v20 = 0;
  v510[0] = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v492, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v501, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v505, 0LL);
  v23 = a2->hDestination;
  v504 = 0;
  if ( !v23 )
    goto LABEL_14;
  v173 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v173 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v200 = *(_DWORD *)(v173 + 232);
      if ( v200 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v200);
    }
    ExAcquirePushLockSharedEx(v173 + 208, 0LL);
  }
  v174 = (v23 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v174 >= *(_DWORD *)(v173 + 256) )
    goto LABEL_223;
  v175 = *(_QWORD *)(v173 + 240);
  v176 = *(_DWORD *)(v175 + 16 * v174 + 8);
  if ( ((v23 >> 25) & 0x60) != (*(_BYTE *)(v175 + 16 * v174 + 8) & 0x60) || (v176 & 0x2000) != 0 || (v176 & 0x1F) == 0 )
    goto LABEL_223;
  v177 = 2LL * (unsigned int)v174;
  v178 = v176 & 0x1F;
  v179 = (struct DXGALLOCATION **)(v175 + 16LL * (unsigned int)v174);
  if ( (_BYTE)v178 != 5 )
  {
    v201 = WdLogNewEntry5_WdError(v178, v177);
    *(_QWORD *)(v201 + 24) = 316LL;
    WdLogEvent5_WdError(v201);
LABEL_223:
    v180 = 0LL;
    goto LABEL_208;
  }
  v180 = *v179;
LABEL_208:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v497, v180);
  ExReleasePushLockSharedEx(v173 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v501, &v497);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v497, v181);
  if ( !v501 )
  {
    v202 = (_QWORD *)WdLogNewEntry5_WdWarning(v183, v182, v184);
    v203 = -1073741811;
    v202[3] = -1073741811LL;
    v202[4] = this;
    v202[5] = a2->hDestination;
    goto LABEL_335;
  }
  v185 = *((_QWORD *)this + 2);
  v186 = *(_QWORD *)(*((_QWORD *)v501 + 1) + 16LL);
  v187 = *(_QWORD *)(v185 + 16);
  v188 = *(_QWORD *)(v187 + 16);
  if ( *(_QWORD *)(v186 + 16) != v188 )
  {
    v204 = (_QWORD *)WdLogNewEntry5_WdError(v187, v188);
    v204[3] = *((_QWORD *)this + 2);
    v205 = v501;
    goto LABEL_257;
  }
  memset(&v514[8], 0, 40);
  *(_QWORD *)v514 = *(_QWORD *)(*((_QWORD *)v501 + 6) + 16LL);
  v189 = ADAPTER_RENDER::DdiDescribeAllocation(
           *(ADAPTER_RENDER **)(v185 + 16),
           (struct _DXGKARG_DESCRIBEALLOCATION *)v514,
           v186);
  v41 = v189;
  if ( v189 < 0 )
  {
    v206 = (_QWORD *)WdLogNewEntry5_WdError(v21, v190);
    v206[3] = v41;
    v206[4] = this;
    v206[5] = *(_QWORD *)(*((_QWORD *)v501 + 6) + 16LL);
    v207 = v501;
    goto LABEL_261;
  }
  v19 = *(_DWORD *)&v514[8];
  v20 = *(_DWORD *)&v514[12];
  LODWORD(v497) = *(_DWORD *)&v514[8];
  v510[0] = *(_DWORD *)&v514[12];
LABEL_14:
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v24 = a2->hSource;
    v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v208 = *(_DWORD *)(v25 + 232);
        if ( v208 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v208);
      }
      ExAcquirePushLockSharedEx(v25 + 208, 0LL);
    }
    v26 = (v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(v25 + 256) )
    {
      v27 = *(_QWORD *)(v25 + 240);
      v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
      if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
      {
        v29 = 2LL * (unsigned int)v26;
        v30 = v28 & 0x1F;
        v31 = (struct DXGALLOCATION **)(v27 + 16LL * (unsigned int)v26);
        if ( (_BYTE)v30 == 5 )
        {
          v32 = *v31;
LABEL_22:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v502, v32);
          ExReleasePushLockSharedEx(v25 + 208, 0LL);
          KeLeaveCriticalRegion();
          DXGALLOCATIONREFERENCE::MoveAssign(&v492, &v502);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v502, v33);
          v35 = v492;
          if ( !v492 )
          {
            v202 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, 0LL, v22);
            v203 = -1073741811;
            v202[3] = -1073741811LL;
            v202[4] = this;
            v202[5] = a2->hSource;
            goto LABEL_335;
          }
          v17 = (a2->Flags.Value & 0x10000000) == 0;
          memset(&v514[8], 0, 40);
          v21 = *(_QWORD *)(*((_QWORD *)v492 + 6) + 16LL);
          *(_QWORD *)v514 = v21;
          if ( !v17 )
          {
            v496 = a2[1].hSource;
            v495 = a2[1].hDestination;
            LODWORD(v502) = a2[1].Color;
            goto LABEL_27;
          }
          v36 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v37 = *(_QWORD *)(*((_QWORD *)v492 + 1) + 16LL);
          if ( *(_QWORD *)(v37 + 16) == *(_QWORD *)(v36 + 16) )
          {
            v38 = ADAPTER_RENDER::DdiDescribeAllocation(
                    *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                    (struct _DXGKARG_DESCRIBEALLOCATION *)v514,
                    v36);
            v41 = v38;
            if ( v38 >= 0 )
            {
              v22 = *(unsigned int *)&v514[16];
              v21 = *(unsigned int *)&v514[8];
              v35 = v492;
              LODWORD(v502) = *(_DWORD *)&v514[16];
              v495 = *(_DWORD *)&v514[12];
              v496 = *(_DWORD *)&v514[8];
LABEL_27:
              v20 = v510[0];
              goto LABEL_28;
            }
            v206 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
            v206[3] = v41;
            v206[4] = this;
            v206[5] = *(_QWORD *)(*((_QWORD *)v492 + 6) + 16LL);
            v207 = v492;
LABEL_261:
            v206[6] = v207;
            WdLogEvent5_WdError(v206);
            v203 = v41;
            goto LABEL_336;
          }
          v204 = (_QWORD *)WdLogNewEntry5_WdError(v37, v492);
          v204[3] = *((_QWORD *)this + 2);
          v205 = v492;
LABEL_257:
          v203 = -1073741811;
          v204[4] = v205;
          v204[5] = -1073741811LL;
LABEL_259:
          WdLogEvent5_WdError(v204);
LABEL_336:
          v250 = v203;
          goto LABEL_337;
        }
        v209 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v209 + 24) = 316LL;
        WdLogEvent5_WdError(v209);
      }
    }
    v32 = 0LL;
    goto LABEL_22;
  }
  v35 = v492;
LABEL_28:
  v42 = a2->hDestination;
  if ( !v42
    || (Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
        (*(_DWORD *)&Value & 0x10000) != 0) )
  {
    Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&Value & 4) == 0 )
    {
      if ( (*(_BYTE *)&Value & 3) == 0 )
      {
        if ( (*(_WORD *)&Value & 0x8000) == 0 )
        {
          v332 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
          LODWORD(v69) = -1073741811;
          v332[3] = -1073741811LL;
          v332[4] = this;
          v332[5] = a2->pSrcSubRects;
          v332[6] = a2->SubRectCnt;
          v332[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v332);
          goto LABEL_96;
        }
        if ( (*(_WORD *)&Value & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( (unsigned int)Model <= D3DKMT_PM_FLIPMANAGER )
          {
            v21 = 644LL;
            if ( _bittest((const int *)&v21, Model) )
            {
              if ( Model != D3DKMT_PM_REDIRECTED_FLIP
                || a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
              {
                v97 = v499;
                LODWORD(v69) = SubmitPresentHistoryTokenPreparation(
                                 v499,
                                 a3,
                                 *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                                 &a2->PresentHistoryToken,
                                 a2->PresentLimitSemaphore,
                                 (a2->Flags.Value & 0x10) != 0);
                if ( (int)v69 < 0 )
                  goto LABEL_100;
                TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
                  (TOKEN_BINDING_GUARD *)&v512,
                  &a2->PresentHistoryToken,
                  v97,
                  a3);
                LODWORD(v512.hAllocation) = SubmitPresentHistoryToken(
                                              &a2->PresentHistoryToken,
                                              a3,
                                              v499,
                                              v493,
                                              1,
                                              0LL,
                                              (struct DXGK_PRESENT_PARAMS *)a2,
                                              a7,
                                              this,
                                              0LL,
                                              0LL);
                LODWORD(v69) = v512.hAllocation;
                TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v512);
                v73 = a3;
                v83 = v503;
                goto LABEL_91;
              }
            }
          }
        }
        v293 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
        LODWORD(v69) = -1073741811;
        v293[3] = this;
        v293[4] = a2->Flags.Value;
        v293[5] = -1073741811LL;
LABEL_447:
        WdLogEvent5_WdWarning(v293);
        goto LABEL_100;
      }
      if ( (*(_WORD *)&Value & 0x100) != 0 )
      {
        v21 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v21 + 1848) )
        {
          v293 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
          LODWORD(v69) = -1073741811;
          v293[3] = *((_QWORD *)this + 2);
          v293[4] = -1073741811LL;
          goto LABEL_447;
        }
        if ( *(_DWORD *)(v21 + 1856) <= a2->VidPnSourceId )
        {
          v333 = WdLogNewEntry5_WdWarning(v21, v35, v22);
          *(_QWORD *)(v333 + 24) = a2->VidPnSourceId;
          *(_QWORD *)(v333 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 1856LL);
          WdLogEvent5_WdWarning(v333);
          LODWORD(v69) = -1073741811;
          goto LABEL_100;
        }
      }
      pSrcSubRects = a2->pSrcSubRects;
      if ( (*(_BYTE *)&Value & 2) != 0 )
      {
        if ( !pSrcSubRects || !a2->SubRectCnt || (*(_WORD *)&Value & 0x86BD) != 0 )
          goto LABEL_445;
        hSource = 0;
      }
      else
      {
        if ( !pSrcSubRects || !a2->SubRectCnt || !v496 || !v495 || (*(_WORD *)&Value & 0x802E) != 0 )
          goto LABEL_445;
        v21 = (*(unsigned int *)&Value >> 9) & 1;
        if ( ((*(unsigned int *)&Value >> 9) & 1) != 0 || (*(_WORD *)&Value & 0x400) != 0 )
        {
          if ( (_DWORD)v21 == ((*(unsigned int *)&Value >> 10) & 1) )
          {
            v293 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
            LODWORD(v69) = -1073741811;
            v293[3] = -1073741811LL;
            v293[4] = this;
            v293[5] = a2->pSrcSubRects;
            v293[6] = a2->SubRectCnt;
            v293[7] = a2->Flags.Value;
            goto LABEL_447;
          }
          if ( (*(_WORD *)&Value & 0x100) == 0
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
                  *((const struct DXGDEVICE **)this + 2),
                  a2->VidPnSourceId) )
          {
LABEL_445:
            v293 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
            LODWORD(v69) = -1073741811;
            v293[3] = this;
            v293[4] = a2->pSrcSubRects;
            v293[5] = a2->SubRectCnt;
            v294 = (struct DXGALLOCATION *)a2->Flags.Value;
            v293[7] = -1073741811LL;
LABEL_446:
            v293[6] = v294;
            goto LABEL_447;
          }
        }
      }
      v99 = a2->Flags.Value & 3 | v506.Flags.Value & 0xFFFFFF8C | (a2->Flags.Value >> 5) & 0x70;
      v506.Color = a2->Color;
      v100 = (DXGPRESENT *)*((_QWORD *)this + 19);
      v506.Flags.Value = v99;
      LODWORD(v69) = DXGPRESENT::CheckInput(v100, a2, v496, v495);
      if ( (int)v69 < 0 )
        goto LABEL_96;
      v101 = (DXGPRESENT *)*((_QWORD *)this + 19);
      if ( (*((_DWORD *)v101 + 1) & 4) != 0 )
        goto LABEL_644;
      DXGPRESENT::CheckOutput(v101, v19, v20);
      v102 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
      if ( !v102 || DXGADAPTER::IsDisplayOnlyAdapter(v102) )
      {
        v336 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (a2->Flags.Value & 0x10) == 0, a3);
        v69 = (struct DXGALLOCATION *)v336;
        if ( v336 < 0 )
          goto LABEL_448;
      }
      else
      {
        v103 = *((_QWORD *)this + 2);
        v104 = *(_QWORD *)(*(_QWORD *)(v103 + 16) + 16LL);
        if ( *(_QWORD *)(v103 + 1848) != v104 )
        {
          v334 = WdLogNewEntry5_WdAssertion(v104, v103);
          *(_QWORD *)(v334 + 24) = 4926LL;
          WdLogEvent5_WdAssertion(v334);
          v103 = *((_QWORD *)this + 2);
        }
        v105 = 0;
        if ( *(_DWORD *)(v103 + 1856) )
        {
          while ( 1 )
          {
            v106 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v105, (a2->Flags.Value & 0x10) == 0, a3);
            v69 = (struct DXGALLOCATION *)v106;
            if ( v106 < 0 )
              break;
            if ( ++v105 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1856LL) )
              goto LABEL_131;
          }
LABEL_448:
          v335 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v335 + 24) = v69;
          *(_QWORD *)(v335 + 32) = this;
          WdLogEvent5_WdEvent(v335);
          goto LABEL_100;
        }
      }
LABEL_131:
      v91 = (_QWORD *)((char *)this + 376);
      LODWORD(v69) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 47, a3, 0);
      if ( (int)v69 < 0 )
        goto LABEL_97;
      if ( !*v91 && !*((_BYTE *)this + 457) )
      {
        v337 = WdLogNewEntry5_WdAssertion(v108, v107);
        *(_QWORD *)(v337 + 24) = 4964LL;
        WdLogEvent5_WdAssertion(v337);
      }
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      v110 = 0;
      if ( (a2->Flags.Value & 0x10000) != 0 )
      {
        if ( a2->hDestination )
        {
          v111 = *((_QWORD *)v501 + 6);
          v112 = *(_DWORD *)(v111 + 4);
          *(_DWORD *)(v111 + 4) = v112 | 0x400;
          v110 = (v112 & 0x400) == 0;
        }
      }
      else
      {
        v338 = a3;
        COREDEVICEACCESS::Release(a3, v109);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v512, v339);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
        v340 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
        v69 = (struct DXGALLOCATION *)v340;
        if ( v340 < 0 )
        {
          v341 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v341 + 24) = v69;
          *(_QWORD *)(v341 + 32) = this;
          WdLogEvent5_WdEvent(v341);
          goto LABEL_469;
        }
        v110 = 0;
      }
      v113 = (*(__int64 (**)(void))(v508 + 8))();
      LODWORD(v497) = v113;
      CurrentThreadId = PsGetCurrentThreadId();
      v17 = *((_BYTE *)this + 457) == 0;
      v115 = CurrentThreadId;
      *(_QWORD *)&Source1.left = CurrentThreadId;
      if ( v17 )
        VIDSCH_EXPORT::VidSchGetMonitorPowerState(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL),
          *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL));
      v116 = *((_QWORD *)this + 19);
      v117 = -1071775738LL;
      if ( *(_DWORD *)(v116 + 8) == v113
        && *(HANDLE *)(v116 + 56) == v115
        && *(HWND *)(v116 + 48) == a2->hWindow
        && !*(_DWORD *)(v116 + 64)
        && !v110 )
      {
        v342 = *(_DWORD *)(v116 + 4);
        if ( (v342 & 0x108) == 0 )
        {
          if ( (v342 & 1) != 0 )
          {
            LODWORD(v69) = -1071775738;
            goto LABEL_149;
          }
          if ( (a2->Flags.Value & 0x10000) != 0 || (v342 & 0x10) != 0 )
            goto LABEL_149;
          v343 = 0;
          goto LABEL_466;
        }
      }
      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v512, -1071775738LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
      COREDEVICEACCESS::Release(a3, v118);
      v119 = 0;
      v120 = v493;
      LODWORD(v69) = CWin32kLocks::Lock(v493, a2->hWindow, HIWORD(a2->Flags.Value) & 1, 1, 0);
      if ( (a2->Flags.Value & 0x10000) == 0
        || (v122 = *(HDC *)v120,
            *(_QWORD *)v510 = 0LL,
            (*(void (__fastcall **)(HDC, unsigned int *))(v508 + 232))(v122, v510),
            *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = *(_QWORD *)v510,
            (a2->Flags.Value & 0x10000) == 0) )
      {
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v512, v121);
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
      v123 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      if ( v123 >= 0 )
      {
        if ( (int)v69 < 0 )
          goto LABEL_150;
        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
        {
          v345 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v345 + 24) = 0LL;
          *(_QWORD *)(v345 + 32) = this;
          WdLogEvent5_WdEvent(v345);
          v344 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 47);
          if ( v344 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
              v344,
              0LL);
            *((_QWORD *)this + 47) = 0LL;
          }
          LODWORD(v69) = 0;
          goto LABEL_617;
        }
        v124 = *(HDC *)v120;
        v125 = (HDEV)*((_QWORD *)v493 + 2);
        LODWORD(v69) = DXGPRESENT::CheckVisRgn(
                         *((DXGPRESENT **)this + 19),
                         a2,
                         v124,
                         v125,
                         *((const struct DXGDEVICE **)this + 2),
                         v496,
                         v495,
                         (enum _D3DDDIFORMAT)v502,
                         1);
        if ( (_DWORD)v69 != 261 )
          goto LABEL_147;
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v512, v117);
        COREDEVICEACCESS::Release(a3, v346);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
        if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
          LODWORD(v69) = -1071775738;
        if ( (a2->Flags.Value & 0x10000) == 0 )
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v512, v347);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
        v348 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
        v349 = v348;
        if ( v348 >= 0 )
        {
          if ( (_DWORD)v69 != -1071775738 )
            LODWORD(v69) = DXGPRESENT::CheckVisRgn(
                             *((DXGPRESENT **)this + 19),
                             a2,
                             v124,
                             v125,
                             *((const struct DXGDEVICE **)this + 2),
                             v496,
                             v495,
                             (enum _D3DDDIFORMAT)v502,
                             0);
          v115 = *(HANDLE *)&Source1.left;
LABEL_147:
          v126 = *((_QWORD *)this + 19);
          if ( (int)v69 < 0 )
          {
            if ( (*(_BYTE *)(v126 + 4) & 1) != 0 )
            {
              *(_QWORD *)(v126 + 56) = v115;
              *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (_DWORD)v497;
            }
            goto LABEL_149;
          }
          *(_QWORD *)(v126 + 56) = v115;
          if ( (a2->Flags.Value & 0x10000) != 0 )
          {
LABEL_149:
            v120 = v493;
            v119 = 0;
LABEL_150:
            v127 = *((_QWORD *)this + 19);
            v498 = 0;
            v128 = *(_DWORD *)(v127 + 4);
            if ( (v128 & 0x10) == 0 )
            {
              if ( (int)v69 >= 0 )
              {
                if ( (v128 & 2) != 0 )
                {
                  v191 = v493;
                  v134 = a3;
                  goto LABEL_216;
                }
                if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v508 + 224))(0LL, 0LL, 0LL) )
                {
                  if ( (a2->Flags.Value & 0x12100) == 0x10000 )
                    goto LABEL_155;
                  v444 = WdLogNewEntry5_WdAssertion(v129, v117);
                  *(_QWORD *)(v444 + 24) = 5592LL;
                }
                else
                {
                  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) || (a2->Flags.Value & 0x4000000) != 0 )
                    goto LABEL_155;
                  v444 = WdLogNewEntry5_WdAssertion(v129, v117);
                  *(_QWORD *)(v444 + 24) = 5597LL;
                }
                WdLogEvent5_WdAssertion(v444);
LABEL_155:
                if ( (a2->Flags.Value & 0x10000) == 0 )
                  goto LABEL_164;
                v130 = *(HDC *)v120;
                Current = DXGPROCESS::GetCurrent();
                v132 = DXGPROCESS::GetWin32kInterface(Current);
                v133 = v132;
                if ( !v130 )
                  goto LABEL_164;
                if ( !v132 )
                  goto LABEL_164;
                v117 = *((_QWORD *)this + 19);
                if ( *(_DWORD *)(v117 + 440) != a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                  goto LABEL_164;
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
                v134 = a3;
                COREDEVICEACCESS::Release(a3, v135);
                memset(v511, 0, 0x228uLL);
                DdiSubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
                v137 = (DXGPRESENT *)*((_QWORD *)this + 19);
                LODWORD(v511[0]) = DdiSubRectCnt;
                DdiSubRectList = DXGPRESENT::GetDdiSubRectList(v137, 0);
                BroadcastContextCount = a2->BroadcastContextCount;
                *((_QWORD *)&v511[0] + 1) = DdiSubRectList;
                *((_QWORD *)&v511[1] + 1) = *((unsigned int *)this + 6);
                v140 = 1LL;
                LODWORD(v511[1]) = 1;
                if ( (_DWORD)BroadcastContextCount )
                {
                  BroadcastContext = a2->BroadcastContext;
                  v446 = BroadcastContextCount;
                  do
                  {
                    v447 = *BroadcastContext++;
                    *((_QWORD *)&v511[1] + v140 + 1) = v447;
                    v140 = (unsigned int)++LODWORD(v511[1]);
                    --v446;
                  }
                  while ( v446 );
                }
                if ( !*((_BYTE *)this + 457)
                  && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                     *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL),
                                     *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 768LL)) )
                {
                  v498 = 1;
                  LOBYTE(v511[34]) = 1;
                }
                (*((void (__fastcall **)(HDC, _OWORD *))v133 + 30))(v130, v511);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
                v141 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                v142 = v141;
                if ( v141 >= 0 )
                {
LABEL_164:
                  for ( i = 0; ; ++i )
                  {
                    v144 = (a2->Flags.Value & 0x10000) != 0 ? 1 : *(_DWORD *)(*((_QWORD *)this + 2) + 1856LL);
                    if ( i >= v144 )
                      break;
                    v506.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), i);
                    if ( v506.SubRectCnt )
                    {
                      if ( (a2->Flags.Value & 0x10000) != 0 )
                      {
                        v145 = v494;
                      }
                      else
                      {
                        v145 = DXGDEVICE::OpenCddPrimaryHandle(
                                 *((DXGDEVICE **)this + 2),
                                 i,
                                 *((_BYTE *)this + 456),
                                 *((_DWORD *)this + 104));
                        v494 = v145;
                      }
                      if ( v145 )
                      {
                        v146 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), i);
                        v147 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                        *(_QWORD *)&Source1.left = v146;
                        v506.pDstSubRects = v146;
                        if ( (*(_WORD *)&v147 & 0x2000) != 0 )
                        {
                          CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
                                                 i,
                                                 1LL);
                          v449 = 0;
                          if ( CurrentOrientation != 1 )
                            v449 = 128;
                          *(_QWORD *)&Source1.left = v506.pDstSubRects;
                          v148 = v449 | v506.Flags.Value & 0xFFFFFF7F;
                          v147 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                          v506.Flags.Value = v148;
                        }
                        else
                        {
                          v148 = v506.Flags.Value;
                        }
                        v149 = *((_QWORD *)this + 2);
                        v508 = 0LL;
                        if ( (*(_DWORD *)&v147 & 0x10000) != 0 )
                          v150 = &v508;
                        else
                          v150 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v149 + 1848) + 2696LL) + 112LL)
                                            + 628LL
                                            + 3968LL * i);
                        v151 = (RECT *)*((_QWORD *)this + 19);
                        v152 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                        v506.SrcRect = v151[9];
                        v506.DstRect.top = v151[8].top - *((_DWORD *)v150 + 1);
                        v506.DstRect.bottom = v151[8].bottom - *((_DWORD *)v150 + 1);
                        v506.DstRect.left = v151[8].left - *(_DWORD *)v150;
                        v506.DstRect.right = v151[8].right - *(_DWORD *)v150;
                        if ( bTracingEnabled && *v152 )
                        {
                          v153 = *(_QWORD *)(v149 + 16);
                          v154 = *(struct VIDMM_GLOBAL **)(v153 + 648);
                          v155 = *(VIDMM_EXPORT **)(v153 + 640);
                          LODWORD(v497) = v506.SubRectCnt;
                          *(_QWORD *)&v508 = VIDMM_EXPORT::VidMmETWAllocationHandle(v155, v154, v494);
                          v156 = VIDMM_EXPORT::VidMmETWAllocationHandle(v155, v154, hSource);
                          v152 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                          v157 = *((_QWORD *)this + 47);
                          v158 = (unsigned int)v497;
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                          {
                            LODWORD(v490) = (_DWORD)v497;
                            LODWORD(v489) = v506.DstRect.bottom;
                            LODWORD(v488) = v506.DstRect.top;
                            LODWORD(v487) = v506.DstRect.right;
                            LODWORD(v486) = v506.DstRect.left;
                            LODWORD(v485) = v506.SrcRect.bottom;
                            LODWORD(v484) = v506.SrcRect.top;
                            v482[0] = (enum _D3DDDIFORMAT)v506.SrcRect.right;
                            LODWORD(v481) = v506.SrcRect.left;
                            LODWORD(v480) = v148;
                            LODWORD(Size) = 0;
                            LODWORD(Src) = 1;
                            McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlit,
                              0LL,
                              a2->hWindow,
                              v157,
                              0LL,
                              v156,
                              (_QWORD)v508,
                              Src,
                              Size,
                              v480,
                              v481,
                              *(_QWORD *)v482,
                              v484,
                              v485,
                              v486,
                              v487,
                              v488,
                              v489,
                              v490);
                            v152 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                          }
                          v159 = 0;
                          if ( v158 )
                          {
                            while ( 1 )
                            {
                              v160 = v158 - v159;
                              if ( v158 - v159 > 0x10 )
                                break;
                              v161 = v158 - v159;
                              if ( v160 )
                                goto LABEL_183;
LABEL_185:
                              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                              {
                                LODWORD(v475) = v161;
                                LODWORD(v473) = v160 <= 0x10;
                                McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                                  (__int64)&DxgkControlGuid_Context,
                                  (__int64)&EventBlitRect,
                                  0LL,
                                  v157,
                                  v473,
                                  v475,
                                  v514,
                                  v515,
                                  v516,
                                  v517);
                              }
                              v159 += 16;
                              if ( v159 >= v158 )
                              {
                                v8 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v509.hDevice;
                                v152 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                                goto LABEL_189;
                              }
                            }
                            v161 = 16;
LABEL_183:
                            v162 = *(_QWORD *)&Source1.left;
                            v163 = 0LL;
                            v164 = 0;
                            do
                            {
                              v165 = v164 + v159;
                              ++v164;
                              v165 *= 2LL;
                              v163 += 4LL;
                              *(_DWORD *)&v514[v163 - 4] = *(_DWORD *)(v162 + 8 * v165);
                              *(_DWORD *)&v514[v163 + 60] = *(_DWORD *)(v162 + 8 * v165 + 8);
                              *(_DWORD *)&v515[v163 + 60] = *(_DWORD *)(v162 + 8 * v165 + 4);
                              *(_DWORD *)&v516[v163 + 60] = *(_DWORD *)(v162 + 8 * v165 + 12);
                            }
                            while ( v164 < v161 );
                            goto LABEL_185;
                          }
                        }
LABEL_189:
                        if ( *((_BYTE *)this + 457) )
                        {
                          v450 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                          v451 = DXGPROCESS::GetCurrent();
                          LODWORD(Size) = v506.PrivateDriverDataSize;
                          v166 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v450 + 4240),
                                   v451,
                                   this,
                                   *((_DWORD *)v492 + 24),
                                   *((_DWORD *)v501 + 24),
                                   &v506.SrcRect,
                                   &v506.DstRect,
                                   v506.SubRectCnt,
                                   v506.pDstSubRects,
                                   Size,
                                   (unsigned __int8 *)v506.pPrivateDriverData);
                        }
                        else
                        {
                          v483 = (int)v502;
                          *((_DWORD *)v8 + 29) = i;
                          v166 = DXGCONTEXT::SubmitPresent(
                                   this,
                                   a2,
                                   (struct DXGHWQUEUE **)a2[1].hWindow,
                                   a2->BroadcastContextCount,
                                   v503,
                                   v492,
                                   hSource,
                                   v494,
                                   &v506,
                                   0LL,
                                   *v152,
                                   v8,
                                   v483,
                                   a3);
                        }
                        *((_QWORD *)this + 47) = 0LL;
                        LODWORD(v69) = v166;
                        if ( (a2->Flags.Value & 0x10000) != 0
                          && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                        {
                          SubRectCnt = v506.SubRectCnt;
                          a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                          a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                          if ( (unsigned int)SubRectCnt > 0x10 )
                          {
                            DstRect = v506.DstRect;
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                            a2->PresentHistoryToken.Token.Blt.DirtyRegions.Rects[0] = DstRect;
                          }
                          else
                          {
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = SubRectCnt;
                            if ( (_DWORD)SubRectCnt )
                            {
                              pDstSubRects = v506.pDstSubRects;
                              v169 = (char *)&a2->PresentHistoryToken - (char *)v506.pDstSubRects;
                              v170 = (unsigned int)SubRectCnt;
                              do
                              {
                                v171 = (__int128)*pDstSubRects++;
                                *(_OWORD *)((char *)&pDstSubRects[1].bottom + v169) = v171;
                                --v170;
                              }
                              while ( v170 );
                            }
                          }
                          a2->PresentHistoryToken.TokenSize = 16
                                                            * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v512, SubRectCnt);
                          LODWORD(v69) = SubmitPresentHistoryToken(
                                           &a2->PresentHistoryToken,
                                           a3,
                                           v499,
                                           v493,
                                           0,
                                           0LL,
                                           (struct DXGK_PRESENT_PARAMS *)a2,
                                           0LL,
                                           this,
                                           0LL,
                                           0LL);
                        }
                        if ( (int)v69 < 0 )
                          break;
                      }
                    }
                  }
                  v134 = a3;
                  goto LABEL_215;
                }
                goto LABEL_614;
              }
              goto LABEL_490;
            }
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v512, v117);
            if ( (int)v69 < 0 )
            {
LABEL_490:
              v134 = a3;
LABEL_215:
              v191 = v493;
LABEL_216:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v512, v117);
              if ( v498 )
              {
                CWin32kLocks::Unlock(v191);
                COREDEVICEACCESS::Release(v134, v453);
                DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 1u);
                LODWORD(v69) = COREDEVICEACCESS::AcquireShared(v134, 0LL);
              }
              v192 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 47);
              if ( v192 )
              {
                if ( (int)v69 >= 0 )
                {
                  v454 = *(unsigned int *)(*((_QWORD *)this + 19) + 4LL);
                  LOBYTE(v454) = (v454 & 0x12) == 16;
                  if ( ((unsigned __int8)v454 & ((*(_BYTE *)&a2->Flags.0 & 2) == 0)) != 0 )
                  {
                    v455 = WdLogNewEntry5_WdAssertion(v454, v192);
                    *(_QWORD *)(v455 + 24) = 5832LL;
                    WdLogEvent5_WdAssertion(v455);
                    v192 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 47);
                  }
                }
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
                  v192,
                  0LL);
                *((_QWORD *)this + 47) = 0LL;
              }
              v193 = *((_QWORD *)this + 19);
              if ( (*(_DWORD *)(v193 + 4) & 0x80) != 0 )
              {
                if ( (unsigned int)((_DWORD)v69 + 1071775738) > 1 )
                {
                  v456 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v193 + 4) >> 7, v192);
                  *(_QWORD *)(v456 + 24) = 5840LL;
                  WdLogEvent5_WdAssertion(v456);
                }
                LODWORD(v69) = 0;
              }
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, (__int64)v192);
              v73 = a3;
              v83 = v503;
              goto LABEL_91;
            }
            v354 = *((_QWORD *)this + 19);
            v355 = *(_DWORD *)(v354 + 4) >> 1;
            LOBYTE(v355) = (*(_DWORD *)(v354 + 4) & 2) != 0;
            if ( (*(_DWORD *)(v354 + 4) & 2) == 0 && a2->BroadcastContextCount )
            {
              v356 = WdLogNewEntry5_WdError(v355, v117);
              *(_QWORD *)(v356 + 24) = 5245LL;
              WdLogEvent5_WdError(v356);
              LODWORD(v69) = -1071774910;
              goto LABEL_490;
            }
            if ( (*(_DWORD *)(v354 + 4) & 2) != 0 )
              goto LABEL_490;
            if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
            {
              v357 = WdLogNewEntry5_WdAssertion(v355, v117);
              *(_QWORD *)(v357 + 24) = 5251LL;
              WdLogEvent5_WdAssertion(v357);
            }
            *(_OWORD *)v510 = 0LL;
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventPerformanceWarning, 0LL, 0);
            v358 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            if ( (*(_WORD *)&v358 & 0x100) != 0 )
            {
              v359 = (struct _EX_RUNDOWN_REF *)v510;
              v117 = 3968LL * a2->VidPnSourceId;
              v355 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL) + 112LL);
              *(_OWORD *)v510 = *(_OWORD *)(v117 + v355 + 628);
            }
            else
            {
              v359 = 0LL;
            }
            v497 = v359;
            if ( (*(_BYTE *)&v358 & 1) != 0 )
            {
              if ( *(_BYTE *)&v358 >= 0 )
              {
                v506.SrcRect.bottom = v495;
                right = v496;
                *(_QWORD *)&v506.SrcRect.left = 0LL;
              }
              else
              {
                top = a2->SrcRect.top;
                if ( top < 0 )
                  top = 0;
                v506.SrcRect.top = top;
                left = a2->SrcRect.left;
                if ( left < 0 )
                  left = 0;
                v506.SrcRect.left = left;
                bottom = a2->SrcRect.bottom;
                if ( (int)v495 < bottom )
                  bottom = v495;
                v506.SrcRect.bottom = bottom;
                right = a2->SrcRect.right;
                if ( (int)v496 < right )
                  right = v496;
              }
              v506.SrcRect.right = right;
              v17 = a2->SubRectCnt == 0;
              v506.DstRect = v506.SrcRect;
              v506.Flags.Value ^= (*(_WORD *)&v506.Flags.0 ^ (unsigned __int16)(*(unsigned int *)&v358 >> 9)) & 0x800;
              if ( v17 )
              {
                v364 = WdLogNewEntry5_WdAssertion(v355, v117);
                *(_QWORD *)(v364 + 24) = 5298LL;
                WdLogEvent5_WdAssertion(v364);
              }
              if ( !a2->pSrcSubRects )
              {
                v365 = WdLogNewEntry5_WdAssertion(v355, v117);
                *(_QWORD *)(v365 + 24) = 5299LL;
                WdLogEvent5_WdAssertion(v365);
              }
              LODWORD(v69) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
              if ( (int)v69 < 0 )
                goto LABEL_490;
              v366 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
              v17 = a2->SubRectCnt == 0;
              v367 = 0;
              v368 = 0LL;
              v506.SubRectCnt = 0;
              v506.pDstSubRects = v366;
              if ( v17 )
                goto LABEL_490;
              while ( 1 )
              {
                if ( DXGPRESENT::IntersectRect(&v366[v368], &a2->pSrcSubRects[v367], &v506.SrcRect) )
                  v368 = ++v506.SubRectCnt;
                else
                  v368 = v506.SubRectCnt;
                if ( ++v367 >= a2->SubRectCnt )
                  break;
                v366 = (struct tagRECT *)v506.pDstSubRects;
              }
              if ( !(_DWORD)v368 )
                goto LABEL_490;
              if ( DXGPRESENT::PrepareStagingBuffer(
                     *((DXGPRESENT **)this + 19),
                     *((struct DXGDEVICE **)this + 2),
                     a2->hSource,
                     a3,
                     &v494) < 0 )
                goto LABEL_596;
              if ( *((_BYTE *)this + 457) )
              {
                v372 = v494;
                v373 = DXGPROCESS::GetCurrent();
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v373 + 208, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v374 = *((_DWORD *)v373 + 58);
                    if ( v374 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v374);
                  }
                  ExAcquirePushLockSharedEx((char *)v373 + 208, 0LL);
                }
                v375 = (v372 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v375 < *((_DWORD *)v373 + 64) )
                {
                  v376 = *((_QWORD *)v373 + 30);
                  v377 = *(_DWORD *)(v376 + 16 * v375 + 8);
                  if ( ((v372 >> 25) & 0x60) == (*(_BYTE *)(v376 + 16 * v375 + 8) & 0x60)
                    && (v377 & 0x2000) == 0
                    && (v377 & 0x1F) != 0 )
                  {
                    v378 = v377 & 0x1F;
                    if ( (_BYTE)v378 == 5 )
                    {
                      v380 = *(struct DXGALLOCATION **)(v376 + 16LL * (unsigned int)v375);
                      goto LABEL_540;
                    }
                    v379 = WdLogNewEntry5_WdError(v378, 2LL * (unsigned int)v375);
                    *(_QWORD *)(v379 + 24) = 316LL;
                    WdLogEvent5_WdError(v379);
                  }
                }
                v380 = 0LL;
LABEL_540:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v497, v380);
                ExReleasePushLockSharedEx((char *)v373 + 208, 0LL);
                KeLeaveCriticalRegion();
                if ( !v497 )
                {
                  v383 = WdLogNewEntry5_WdAssertion(v382, v381);
                  *(_QWORD *)(v383 + 24) = 5331LL;
                  WdLogEvent5_WdAssertion(v383);
                }
                v384 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                v385 = DXGPROCESS::GetCurrent();
                LODWORD(Size) = a2->PrivateDriverDataSize;
                v386 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v384 + 4240),
                         v385,
                         this,
                         *((_DWORD *)v492 + 24),
                         v497[12].Count,
                         &v506.SrcRect,
                         &v506.DstRect,
                         v506.SubRectCnt,
                         v506.pDstSubRects,
                         Size,
                         (unsigned __int8 *)a2->pPrivateDriverData);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v497, v387);
LABEL_561:
                if ( v386 >= 0 )
                {
                  v403 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  if ( (a2->Flags.Value & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v403 + 231) + 2696LL),
                         *((const struct DXGDEVICE **)this + 2),
                         a2->VidPnSourceId) )
                  {
                    v404 = 1;
                  }
                  else
                  {
                    v404 = 0;
                    if ( !DXGDEVICE::AllowLegacyPresent(v403, 0) )
                    {
                      v405 = 0;
LABEL_566:
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
                      COREDEVICEACCESS::Release(a3, v406);
                      if ( !v405 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                      {
                        v134 = a3;
                        COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
                        LODWORD(v69) = -1071775738;
                        goto LABEL_215;
                      }
                      CWin32kLocks::Unlock(v493);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
                      LODWORD(v142) = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                      if ( (int)v142 < 0 )
                      {
                        v409 = a3;
LABEL_616:
                        COREDEVICEACCESS::AcquireSharedUncheck(v409, 0LL);
                        LODWORD(v69) = v142;
                        goto LABEL_617;
                      }
                      v17 = *((_BYTE *)this + 457) == 0;
                      memset(v514, 0, 48);
                      if ( v17 )
                      {
                        v413 = v494;
                        if ( !v494 )
                        {
                          v414 = WdLogNewEntry5_WdAssertion(v408, v407);
                          *(_QWORD *)(v414 + 24) = 5420LL;
                          WdLogEvent5_WdAssertion(v414);
                          v413 = v494;
                        }
                        v415 = (DXGDEVICE *)*((_QWORD *)this + 2);
                        *(_DWORD *)&v514[4] = v413;
                        LODWORD(v69) = DXGDEVICE::Lock(v415, (struct _D3DKMT_LOCK *)v514, a3);
                      }
                      else
                      {
                        v410 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                        memset(&v509, 0, sizeof(v509));
                        v509.hAllocation = v494;
                        v411 = *(_QWORD *)(*((_QWORD *)v410 + 2) + 16LL);
                        v412 = DXGPROCESS::GetCurrent();
                        LODWORD(v69) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v411 + 4240),
                                         v412,
                                         v410,
                                         &v509,
                                         0,
                                         0,
                                         0);
                        *(_QWORD *)&v514[24] = v509.pData;
                      }
                      if ( (int)v69 >= 0 )
                      {
                        DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
                        COREDEVICEACCESS::Release(a3, v416);
                        if ( !*(_QWORD *)&v514[24] )
                        {
                          v419 = WdLogNewEntry5_WdAssertion(v418, v417);
                          *(_QWORD *)(v419 + 24) = 5433LL;
                          WdLogEvent5_WdAssertion(v419);
                        }
                        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                        {
                          v420 = WdLogNewEntry5_WdAssertion(v418, v417);
                          *(_QWORD *)(v420 + 24) = 5434LL;
                          WdLogEvent5_WdAssertion(v420);
                        }
                        v421 = (*(__int64 (__fastcall **)(_QWORD))(v508 + 304))(0LL);
                        v422 = 0;
                        if ( v421 )
                          v422 = v404;
                        v191 = v493;
                        LODWORD(v69) = CWin32kLocks::Lock(v493, a2->hWindow, 0, 0, v422);
                        if ( (int)v69 >= 0 )
                        {
                          v423 = (a2->Flags.Value & 0x200) != 0;
                          v424 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                          v425 = CWin32kLocks::hDestDc(v191);
                          LOBYTE(Sizea) = v423;
                          LOBYTE(Srca) = 0;
                          if ( !(*(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, HDC, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v508 + 144))(
                                  a2,
                                  v425,
                                  v359,
                                  v506.pDstSubRects,
                                  *(_QWORD *)&v514[24],
                                  v424,
                                  v496,
                                  v495,
                                  Srca,
                                  Sizea,
                                  a2->Color,
                                  DXGPRESENT::XformRect,
                                  DXGPRESENT::ClipRects) )
                          {
                            v426 = WdLogNewEntry5_WdEvent();
                            *(_QWORD *)(v426 + 24) = -1071775737LL;
                            *(_QWORD *)(v426 + 32) = this;
                            WdLogEvent5_WdEvent(v426);
                            LODWORD(v69) = -1071775737;
                          }
                        }
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
                        v134 = a3;
                        LODWORD(v142) = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                        if ( (int)v142 >= 0 )
                        {
                          v427 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                          if ( *((_BYTE *)this + 457) )
                          {
                            Source1.left = 0;
                            Source1.top = v494;
                            v428 = *(_QWORD *)(*((_QWORD *)v427 + 2) + 16LL);
                            v429 = DXGPROCESS::GetCurrent();
                            DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v428 + 4240),
                              v429,
                              v427,
                              (struct _D3DKMT_UNLOCK2 *)&Source1,
                              0);
                          }
                          else
                          {
                            v509.hDevice = 0;
                            *(_QWORD *)&v509.Flags.0 = &v514[4];
                            v509.hAllocation = 1;
                            DXGDEVICE::Unlock(v427, (const struct _D3DKMT_UNLOCK *)&v509, 0);
                          }
                          if ( (int)v69 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                          {
                            a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                            a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19)
                                                                                           + 440LL);
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                            a2->PresentHistoryToken.TokenSize = 48;
                            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v512, v117);
                            LODWORD(v69) = SubmitPresentHistoryToken(
                                             &a2->PresentHistoryToken,
                                             a3,
                                             v499,
                                             v191,
                                             0,
                                             0LL,
                                             (struct DXGK_PRESENT_PARAMS *)a2,
                                             0LL,
                                             this,
                                             0LL,
                                             0LL);
                          }
                          goto LABEL_216;
                        }
                        goto LABEL_615;
                      }
                      goto LABEL_490;
                    }
                  }
                  v405 = 1;
                  goto LABEL_566;
                }
LABEL_596:
                v430 = WdLogNewEntry5_WdWarning(v370, v369, v371);
                *(_QWORD *)(v430 + 24) = -1071775738LL;
                *(_QWORD *)(v430 + 32) = this;
                WdLogEvent5_WdWarning(v430);
                LODWORD(v69) = -1071775738;
                goto LABEL_490;
              }
              if ( !v494 )
              {
                v388 = WdLogNewEntry5_WdAssertion(v370, v369);
                *(_QWORD *)(v388 + 24) = 5345LL;
                WdLogEvent5_WdAssertion(v388);
              }
              if ( bTracingEnabled )
              {
                v389 = v506.SubRectCnt;
                v390 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v506.Flags.Value;
                v391 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                *(_QWORD *)&Source1.left = v506.pDstSubRects;
                v392 = *(struct VIDMM_GLOBAL **)(v391 + 648);
                v393 = *(VIDMM_EXPORT **)(v391 + 640);
                *(_QWORD *)&v509.hDevice = VIDMM_EXPORT::VidMmETWAllocationHandle(v393, v392, v494);
                v394 = VIDMM_EXPORT::VidMmETWAllocationHandle(v393, v392, hSource);
                v395 = *((_QWORD *)this + 47);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(Src) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    a2->hWindow,
                    v395,
                    0LL,
                    v394,
                    *(_QWORD *)&v509.hDevice,
                    Src,
                    0,
                    v390,
                    v506.SrcRect.left,
                    v506.SrcRect.right,
                    v506.SrcRect.top,
                    v506.SrcRect.bottom,
                    v506.DstRect.left,
                    v506.DstRect.right,
                    v506.DstRect.top,
                    v506.DstRect.bottom,
                    v389);
                }
                v396 = 0;
                if ( v389 )
                {
                  v397 = *(_QWORD *)&Source1.left;
                  while ( 1 )
                  {
                    v398 = v389 - v396;
                    if ( v389 - v396 > 0x10 )
                      break;
                    v399 = v389 - v396;
                    if ( v398 )
                      goto LABEL_554;
LABEL_556:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                    {
                      LODWORD(v475) = v399;
                      LODWORD(v474) = v398 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                        (__int64)&DxgkControlGuid_Context,
                        (__int64)&EventBlitRect,
                        0LL,
                        v395,
                        v474,
                        v475,
                        v517,
                        v514,
                        v515,
                        v516);
                      v397 = *(_QWORD *)&Source1.left;
                    }
                    v396 += 16;
                    if ( v396 >= v389 )
                      goto LABEL_559;
                  }
                  v399 = 16;
LABEL_554:
                  v400 = 0LL;
                  v401 = 0;
                  do
                  {
                    v402 = v401 + v396;
                    ++v401;
                    v402 *= 2LL;
                    v400 += 4LL;
                    *(_DWORD *)&v516[v400 + 60] = *(_DWORD *)(v397 + 8 * v402);
                    *(_DWORD *)&v514[v400 - 4] = *(_DWORD *)(v397 + 8 * v402 + 8);
                    *(_DWORD *)&v514[v400 + 60] = *(_DWORD *)(v397 + 8 * v402 + 4);
                    *(_DWORD *)&v515[v400 + 60] = *(_DWORD *)(v397 + 8 * v402 + 12);
                  }
                  while ( v401 < v399 );
                  goto LABEL_556;
                }
LABEL_559:
                v359 = v497;
              }
              v386 = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (struct DXGHWQUEUE **)a2[1].hWindow,
                       a2->BroadcastContextCount,
                       v503,
                       v492,
                       hSource,
                       v494,
                       &v506,
                       0LL,
                       *((struct _VIDMM_DMA_BUFFER **)this + 47),
                       a7,
                       (enum _D3DDDIFORMAT)v502,
                       a3);
              *((_QWORD *)this + 47) = 0LL;
              goto LABEL_561;
            }
            if ( (*(_BYTE *)&v358 & 2) == 0 )
              goto LABEL_490;
            v431 = (DXGDEVICE *)*((_QWORD *)this + 2);
            if ( (*(_WORD *)&v358 & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*((_QWORD *)v431 + 231) + 2696LL),
                   *((const struct DXGDEVICE **)this + 2),
                   a2->VidPnSourceId) )
            {
              v119 = 1;
            }
            else if ( !DXGDEVICE::AllowLegacyPresent(v431, 0) )
            {
              v432 = 0;
              v119 = 0;
              goto LABEL_602;
            }
            v432 = 1;
LABEL_602:
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
            COREDEVICEACCESS::Release(a3, v433);
            if ( v432 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 )
              {
                v436 = WdLogNewEntry5_WdAssertion(v435, v434);
                *(_QWORD *)(v436 + 24) = 5554LL;
                WdLogEvent5_WdAssertion(v436);
              }
              v191 = v493;
              CWin32kLocks::Unlock(v493);
              v437 = v508;
              v438 = (*(__int64 (__fastcall **)(_QWORD))(v508 + 304))(0LL);
              v439 = 0;
              if ( v438 )
                v439 = v119;
              LODWORD(v69) = CWin32kLocks::Lock(v191, a2->hWindow, 0, 0, v439);
              v440 = CWin32kLocks::hDestDc(v191);
              if ( !(*(unsigned int (__fastcall **)(HDC, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, UINT))(v437 + 152))(
                      v440,
                      v359,
                      a2->pSrcSubRects,
                      a2->SubRectCnt,
                      a2->Color) )
              {
                v441 = WdLogNewEntry5_WdEvent();
                *(_QWORD *)(v441 + 24) = -1071775737LL;
                *(_QWORD *)(v441 + 32) = this;
                WdLogEvent5_WdEvent(v441);
                LODWORD(v69) = -1071775737;
              }
            }
            else
            {
              v191 = v493;
              LODWORD(v69) = -1071775738;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
            v134 = a3;
            v442 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
            v142 = v442;
            if ( v442 >= 0 )
              goto LABEL_216;
LABEL_614:
            v443 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v443 + 24) = v142;
            *(_QWORD *)(v443 + 32) = this;
            WdLogEvent5_WdEvent(v443);
LABEL_615:
            v409 = v134;
            goto LABEL_616;
          }
          v351 = (int)v497;
          *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (_DWORD)v497;
          DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
          v352 = 0;
          v353 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
          if ( v353 != (*(unsigned int (**)(void))(v508 + 8))() )
          {
            *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v351;
            ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFF, 0);
            v352 = 1;
          }
          v343 = v352;
LABEL_466:
          DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v512, v343);
          goto LABEL_149;
        }
        v350 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v350 + 24) = v349;
        WdLogEvent5_WdEvent(v350);
        COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
        LODWORD(v69) = v349;
LABEL_617:
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, (__int64)v344);
        goto LABEL_100;
      }
      v338 = a3;
      LODWORD(v69) = v123;
LABEL_469:
      COREDEVICEACCESS::AcquireSharedUncheck(v338, 0LL);
      goto LABEL_617;
    }
  }
  if ( !v42 )
  {
    if ( (*(_DWORD *)&Value & 0x10A7C3) != 0 )
    {
      v273 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
      v273[3] = this;
      v274 = a2->Flags.Value;
      goto LABEL_430;
    }
    v44 = *(_DWORD *)&Value & 0x10000000;
    if ( v44 )
    {
      v262 = *((_QWORD *)v35 + 5);
      if ( !v262 || !*(_QWORD *)(v262 + 56) )
      {
        v263 = WdLogNewEntry5_WdError(v21, v35);
        *(_QWORD *)(v263 + 24) = 4205LL;
        goto LABEL_341;
      }
    }
    else
    {
      v45 = *(unsigned int *)(*((_QWORD *)v35 + 6) + 4LL);
      if ( (v45 & 2) == 0 && (v45 & 1) == 0 && (v45 & 0x2000) == 0 )
      {
LABEL_342:
        v264 = (_QWORD *)WdLogNewEntry5_WdError(v45, v35);
        LODWORD(v197) = -1073741811;
        v264[3] = -1073741811LL;
        v264[4] = this;
        v264[5] = v492;
        v264[6] = *((_QWORD *)v492 + 6);
        v264[7] = a2->hSource;
        WdLogEvent5_WdError(v264);
        goto LABEL_431;
      }
    }
    if ( v44 )
    {
      v265 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
      if ( !v265
        || !DXGADAPTER::IsDisplayAdapter(v265)
        || (VidPnSourceId = a2->VidPnSourceId,
            v265 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL),
            VidPnSourceId >= *(_DWORD *)(*((_QWORD *)v265 + 337) + 80LL)) )
      {
        v263 = WdLogNewEntry5_WdError(v265, v35);
        *(_QWORD *)(v263 + 24) = a2->VidPnSourceId;
        goto LABEL_341;
      }
      v35 = v492;
    }
    else
    {
      VidPnSourceId = (*(_DWORD *)(*((_QWORD *)v35 + 6) + 4LL) >> 6) & 0xF;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v493, v35);
    DXGALLOCATIONREFERENCE::MoveAssign(&v505, &v493);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v493, v47);
    v504 = a2->hSource;
    v49 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
    if ( !v49
      || !DXGADAPTER::IsDisplayAdapter(v49)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL)
                                                                         + 2696LL)) )
    {
      v266 = WdLogNewEntry5_WdAssertion(v49, v48);
      *(_QWORD *)(v266 + 24) = 4246LL;
      WdLogEvent5_WdAssertion(v266);
    }
    v45 = *((_QWORD *)v492 + 6);
    v35 = (struct DXGALLOCATION *)*(unsigned int *)(v45 + 4);
    if ( ((unsigned __int16)v35 & 0x2000) != 0 )
    {
      v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      if ( !*(_BYTE *)(v45 + 346) )
        goto LABEL_342;
    }
    if ( (a2->Flags.Value & 0x60000) == 0 )
      goto LABEL_42;
    if ( (a2->Flags.Value & 0x60000) == 0x60000 )
    {
      v263 = WdLogNewEntry5_WdError(v45, v35);
      *(_QWORD *)(v263 + 24) = 4265LL;
      goto LABEL_341;
    }
    if ( ((unsigned __int16)v35 & 0x1000) == 0 )
    {
      v263 = WdLogNewEntry5_WdError(v45, v35);
      *(_QWORD *)(v263 + 24) = 4271LL;
      goto LABEL_341;
    }
    v269 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                               *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
                               VidPnSourceId)
           + 10);
    if ( (v269 & 0x10) == 0 )
    {
      v270 = WdLogNewEntry5_WdWarning(v268, v267, v269);
      *(_QWORD *)(v270 + 24) = 4278LL;
LABEL_356:
      WdLogEvent5_WdWarning(v270);
      LODWORD(v197) = -1071775739;
      goto LABEL_431;
    }
    v271 = a2->Flags.Value;
    LOBYTE(v268) = (v271 & 0x40000) != 0;
    if ( ((unsigned __int8)v268 & ((v269 & 0x20) == 0)) != 0 )
    {
      v270 = WdLogNewEntry5_WdWarning(v268, v271, v269);
      *(_QWORD *)(v270 + 24) = 4284LL;
      goto LABEL_356;
    }
    v272 = v271 & 0xC0000;
    if ( (_DWORD)v272 != 786432 )
    {
LABEL_42:
      if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
        goto LABEL_60;
      v50 = *(_DWORD *)a7 ^ ((unsigned __int8)*(_DWORD *)a7 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 4;
      *(_DWORD *)a7 = v50;
      v51 = (a2->Flags.Value ^ v50) & 8 ^ v50;
      *(_DWORD *)a7 = v51;
      v52 = ((unsigned __int8)v51 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v51;
      *(_DWORD *)a7 = v52;
      v53 = (v52 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v52;
      *(_DWORD *)a7 = v53;
      v54 = (v53 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v53;
      *(_DWORD *)a7 = v54;
      v55 = v54 ^ (v54 ^ (4 * a2->Flags.Value)) & 0x200000;
      *(_DWORD *)a7 = v55;
      if ( (a2->Flags.Value & 0x8000000) != 0 )
        Duration = a2->Duration;
      else
        Duration = 0;
      *((_DWORD *)a7 + 36) = Duration;
      *(_DWORD *)a7 = v55 ^ (v55 ^ a2->Flags.Value) & 0x20000000;
      pPresentRegions = a2->pPresentRegions;
      v506.Flags.Value = v506.Flags.Value & 0xFFFFF8FB | a2->Flags.Value & 4 | (a2->Flags.Value >> 9) & 0x700;
      if ( pPresentRegions
        && !pPresentRegions->MoveRectCount
        && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 346LL) )
      {
        v506.SubRectCnt = pPresentRegions->DirtyRectCount;
        v506.pDstSubRects = pPresentRegions->pDirtyRects;
      }
      DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL),
                         *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                         VidPnSourceId,
                         (__int64)&a2->FlipInterval);
      *((_DWORD *)a7 + 30) = DeviceFlipMode;
      v61 = DeviceFlipMode;
      if ( DeviceFlipMode )
      {
        v17 = ((DeviceFlipMode - 1) & 0xFFFFFFFD) == 0;
        FlipInterval = a2->FlipInterval;
        if ( v17 )
        {
          v506.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
        }
        else
        {
          v506.FlipInterval = a2->FlipInterval;
          if ( v61 == 2 )
          {
LABEL_53:
            *((_DWORD *)a7 + 31) = FlipInterval;
            *((_DWORD *)a7 + 29) = VidPnSourceId;
            DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId);
            v64 = *(_DWORD *)(*((_QWORD *)v492 + 6) + 4LL) & 0x2000;
            if ( v64 && DisplayedPrimary && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) == 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
            }
            else if ( !v64 && DisplayedPrimary && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) != 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
            }
            else
            {
              *(_DWORD *)a7 &= ~0x400000u;
            }
            v65 = *((_DWORD *)a7 + 30);
            if ( v65 )
            {
              if ( v65 != *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) )
              {
                v194 = WdLogNewEntry5_WdEvent();
                *(_QWORD *)(v194 + 24) = *((_QWORD *)this + 2);
                WdLogEvent5_WdEvent(v194);
                COREDEVICEACCESS::Release(a3, v195);
                DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
                v196 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                v197 = v196;
                if ( v196 < 0 )
                {
                  v275 = WdLogNewEntry5_WdEvent();
                  *(_QWORD *)(v275 + 24) = v197;
                  WdLogEvent5_WdEvent(v275);
                  COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
LABEL_431:
                  v66 = v197;
                  goto LABEL_432;
                }
              }
            }
LABEL_60:
            v66 = 0;
            goto LABEL_61;
          }
        }
        v506.Flags.Value |= 8u;
        goto LABEL_53;
      }
      v273 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v59, v60);
      v273[3] = this;
      v274 = a2->FlipInterval;
LABEL_430:
      v273[4] = v274;
      LODWORD(v197) = -1073741811;
      v273[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v273);
      goto LABEL_431;
    }
    v263 = WdLogNewEntry5_WdError(v268, v272);
    *(_QWORD *)(v263 + 24) = 4290LL;
LABEL_341:
    WdLogEvent5_WdError(v263);
    LODWORD(v197) = -1073741811;
    goto LABEL_431;
  }
  if ( !a2->pSrcSubRects || !a2->SubRectCnt || (*(_BYTE *)&Value & 3) == 0 || (*(_DWORD *)&Value & 0x100E803C) != 0 )
    goto LABEL_334;
  if ( (*(_BYTE *)&Value & 2) == 0 )
  {
    if ( !v496 || !v495 || (*(_BYTE *)&Value & 0x82) != 0x80 )
      goto LABEL_334;
    if ( (*(_WORD *)&Value & 0x600) != 0x600 )
      goto LABEL_268;
    v202 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
    v203 = -1073741811;
    v202[3] = -1073741811LL;
    v202[4] = this;
    v202[5] = a2->pSrcSubRects;
    v202[6] = a2->SubRectCnt;
    v202[7] = a2->Flags.Value;
LABEL_335:
    WdLogEvent5_WdWarning(v202);
    goto LABEL_336;
  }
  if ( (*(_DWORD *)&Value & 0x100681) != 0 )
  {
LABEL_334:
    v202 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, v22);
    v203 = -1073741811;
    v202[3] = this;
    v202[4] = a2->pSrcSubRects;
    v202[5] = a2->SubRectCnt;
    v261 = a2->Flags.Value;
    v202[7] = -1073741811LL;
    v202[6] = v261;
    goto LABEL_335;
  }
LABEL_268:
  v210 = *((_QWORD *)v501 + 6);
  v211 = *(_DWORD *)(v210 + 4);
  if ( (v211 & 2) == 0 && (v211 & 1) == 0 )
  {
    v204 = (_QWORD *)WdLogNewEntry5_WdError(v210, v35);
    v203 = -1073741811;
    v204[3] = -1073741811LL;
    v204[4] = this;
    v204[5] = v501;
    v204[6] = *((_QWORD *)v501 + 6);
    v204[7] = a2->hDestination;
    goto LABEL_259;
  }
  VidPnSourceId = (v211 >> 6) & 0xF;
  v212 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
  if ( !v212
    || !DXGADAPTER::IsDisplayAdapter(v212)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL)
                                                                       + 2696LL)) )
  {
    v213 = WdLogNewEntry5_WdAssertion(v212, v35);
    *(_QWORD *)(v213 + 24) = 3954LL;
    WdLogEvent5_WdAssertion(v213);
  }
  v214 = v501;
  *((_DWORD *)a7 + 29) = VidPnSourceId;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v493, v214);
  DXGALLOCATIONREFERENCE::MoveAssign(&v505, &v493);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v493, v215);
  v504 = a2->hDestination;
  v219 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&v219 & 1) == 0 )
  {
    v506.DstRect.bottom = v510[0];
    v506.DstRect.right = v19;
    if ( (*(_BYTE *)&v219 & 0x40) != 0 )
    {
      v249 = a2->DstRect.right;
      if ( v249 <= a2->DstRect.left
        || (v217 = (unsigned int)a2->DstRect.bottom, (int)v217 <= a2->DstRect.top)
        || v249 <= 0
        || (int)v217 <= 0 )
      {
LABEL_312:
        v202 = (_QWORD *)WdLogNewEntry5_WdWarning(v217, v216, v218);
        v203 = -1073741811;
        v202[3] = -1073741811LL;
        v202[4] = a2->DstRect.left;
        v202[5] = a2->DstRect.top;
        v202[6] = a2->DstRect.right;
        v202[7] = a2->DstRect.bottom;
        goto LABEL_335;
      }
      if ( !DXGPRESENT::IntersectRect(&v506.DstRect, &a2->DstRect, &v506.DstRect) )
      {
        v250 = 0;
LABEL_337:
        LODWORD(v197) = v250;
        goto LABEL_431;
      }
    }
    LODWORD(v217) = a2->SubRectCnt;
    v66 = 0;
    v251 = 0;
    if ( !(_DWORD)v217 )
    {
LABEL_331:
      v247 = v506.DstRect;
      LODWORD(v216) = a2->Flags.0;
      v246 = v506.Flags.Value;
      v506.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_332;
    }
    while ( 1 )
    {
      v252 = v251;
      v253 = &a2->pSrcSubRects[v252];
      Source1 = 0LL;
      if ( !DXGPRESENT::IntersectRect(&Source1, v253, &v506.DstRect)
        || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v252], 0x10uLL) != 16 )
      {
        break;
      }
      LODWORD(v217) = a2->SubRectCnt;
      if ( ++v251 >= (unsigned int)v217 )
      {
        v66 = 0;
        goto LABEL_331;
      }
    }
    v257 = (_QWORD *)WdLogNewEntry5_WdError(v255, v254);
    LODWORD(v197) = -1073741811;
    v257[3] = -1073741811LL;
    v257[4] = a2->DstRect.left;
    v257[5] = a2->DstRect.top;
    v257[6] = a2->DstRect.right;
    v257[7] = a2->DstRect.bottom;
    WdLogEvent5_WdError(v257);
    v260 = (_QWORD *)WdLogNewEntry5_WdError(v259, v258);
    v260[3] = v251;
    v260[4] = a2->pSrcSubRects[v251].left;
    v260[5] = a2->pSrcSubRects[v251].top;
    v260[6] = a2->pSrcSubRects[v251].right;
    v260[7] = a2->pSrcSubRects[v251].bottom;
    WdLogEvent5_WdError(v260);
    goto LABEL_431;
  }
  if ( v501 == v492 )
  {
    v204 = (_QWORD *)WdLogNewEntry5_WdError(v217, v216);
    v203 = -1073741811;
    v204[3] = -1073741811LL;
    v204[4] = this;
    v204[5] = v492;
    v204[6] = a2->hSource;
    v204[7] = a2->hDestination;
    goto LABEL_259;
  }
  v220 = *((_QWORD *)v492 + 6);
  v221 = *(_DWORD *)(v220 + 4);
  if ( ((v221 & 2) != 0 || (v221 & 1) != 0) && ((v221 >> 6) & 0xF) != VidPnSourceId )
  {
    v204 = (_QWORD *)WdLogNewEntry5_WdError(v220, v216);
    v203 = -1073741811;
    v204[3] = -1073741811LL;
    v204[4] = this;
    v204[5] = v492;
    v204[6] = (*(_DWORD *)(*((_QWORD *)v492 + 6) + 4LL) >> 6) & 0xF;
    v204[7] = VidPnSourceId;
    goto LABEL_259;
  }
  v222 = (unsigned int)a2->SrcRect.right;
  v223 = a2->SrcRect.left;
  if ( (int)v222 <= v223
    || (v224 = (unsigned int)a2->SrcRect.bottom, v220 = (unsigned int)a2->SrcRect.top, (int)v224 <= (int)v220)
    || (v225 = v496, v223 >= (int)v496)
    || (v226 = v495, (int)v220 >= (int)v495)
    || (int)v222 <= 0
    || (int)v224 <= 0 )
  {
    v204 = (_QWORD *)WdLogNewEntry5_WdError(v220, v222);
    v203 = -1073741811;
    v204[3] = -1073741811LL;
    v204[4] = a2->SrcRect.left;
    v204[5] = a2->SrcRect.top;
    v204[6] = a2->SrcRect.right;
    v204[7] = a2->SrcRect.bottom;
    goto LABEL_259;
  }
  v217 = a2->SubRectCnt;
  v227 = 0;
  if ( !(_DWORD)v217 )
    goto LABEL_298;
  do
  {
    v228 = v227;
    v229 = &a2->pSrcSubRects[v228];
    Source1 = 0LL;
    if ( !DXGPRESENT::IntersectRect(&Source1, v229, &a2->SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v228], 0x10uLL) != 16 )
    {
      v241 = (_QWORD *)WdLogNewEntry5_WdError(v231, v230);
      v203 = -1073741811;
      v241[3] = -1073741811LL;
      v241[4] = a2->SrcRect.left;
      v241[5] = a2->SrcRect.top;
      v241[6] = a2->SrcRect.right;
      v241[7] = a2->SrcRect.bottom;
      WdLogEvent5_WdError(v241);
      v204 = (_QWORD *)WdLogNewEntry5_WdError(v243, v242);
      v204[3] = v227;
      v204[4] = a2->pSrcSubRects[v227].left;
      v204[5] = a2->pSrcSubRects[v227].top;
      v204[6] = a2->pSrcSubRects[v227].right;
      v204[7] = a2->pSrcSubRects[v227].bottom;
      goto LABEL_259;
    }
    v217 = a2->SubRectCnt;
    ++v227;
  }
  while ( v227 < (unsigned int)v217 );
  v226 = v495;
  v225 = v496;
LABEL_298:
  v216 = a2->Flags.Value;
  if ( (v216 & 0x40) == 0 )
  {
    v244 = (unsigned int)v497;
    v245 = v510[0];
    if ( (_DWORD)v497 == v225 && v510[0] == v226 )
    {
      SrcRect = a2->SrcRect;
      v506.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_316;
    }
    v248 = (_QWORD *)WdLogNewEntry5_WdWarning(v217, v216, v224);
    v248[5] = v245;
    v248[6] = v496;
    v248[7] = v495;
    v248[3] = this;
    v248[4] = v244;
    WdLogEvent5_WdWarning(v248);
    v203 = -1073741811;
    goto LABEL_336;
  }
  v218 = (unsigned int)a2->DstRect.right;
  v232 = a2->DstRect.left;
  if ( (int)v218 <= v232 )
    goto LABEL_312;
  v216 = (unsigned int)a2->DstRect.bottom;
  v233 = a2->DstRect.top;
  if ( (int)v216 <= v233 || v232 >= (int)v497 || v233 >= (int)v510[0] || (int)v218 <= 0 || (int)v216 <= 0 )
    goto LABEL_312;
  v234 = (unsigned int)(a2->SrcRect.right - a2->SrcRect.left);
  if ( (_DWORD)v234 != (_DWORD)v218 - v232
    || (v216 = (unsigned int)(v216 - v233),
        v234 = (unsigned int)(a2->SrcRect.bottom - a2->SrcRect.top),
        (_DWORD)v234 != (_DWORD)v216) )
  {
    v204 = (_QWORD *)WdLogNewEntry5_WdError(v234, v216);
    v203 = -1073741811;
    v204[3] = -1073741811LL;
    v204[4] = this;
    v204[5] = a2->Flags.Value;
    v204[6] = v501;
    v204[7] = VidPnSourceId;
    goto LABEL_259;
  }
  v203 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
  if ( v203 < 0 )
    goto LABEL_336;
  v235 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
  v236 = 0;
  v237 = a2->DstRect.left - a2->SrcRect.left;
  v238 = a2->DstRect.top - a2->SrcRect.top;
  for ( LODWORD(v217) = a2->SubRectCnt; v236 < (unsigned int)v217; LODWORD(v217) = a2->SubRectCnt )
  {
    v239 = v236++;
    v239 *= 2LL;
    *(&v235->left + 2 * v239) = v237 + *(&a2->pSrcSubRects->left + 2 * v239);
    *(&v235->right + 2 * v239) = v237 + *(&a2->pSrcSubRects->right + 2 * v239);
    *(&v235->top + 2 * v239) = v238 + *(&a2->pSrcSubRects->top + 2 * v239);
    *(&v235->bottom + 2 * v239) = v238 + *(&a2->pSrcSubRects->bottom + 2 * v239);
  }
  SrcRect = a2->DstRect;
  LODWORD(v216) = a2->Flags.0;
  v506.pDstSubRects = v235;
LABEL_316:
  v246 = (*(_WORD *)&v506.Flags.0 ^ (unsigned __int16)((unsigned int)v216 >> 9)) & 0x800 ^ v506.Flags.Value;
  v506.DstRect = SrcRect;
  v66 = 0;
  v247 = a2->SrcRect;
LABEL_332:
  Color = a2->Color;
  v506.SubRectCnt = v217;
  v506.Color = Color;
  v506.Flags.Value = v246 & 0xFFFFF78C | v216 & 3 | ((unsigned __int64)(v216 & 0xE00 | ((unsigned int)v216 >> 4) & 0x10000) >> 5);
  v506.SrcRect = v247;
LABEL_61:
  v67 = DXGCONTEXT::CheckDevicePresentSettings(
          this,
          (a2->Flags.Value >> 2) & 1,
          (a2->Flags.Value >> 28) & 1,
          VidPnSourceId);
  LODWORD(v69) = v67;
  if ( v67 < 0 )
  {
    if ( v67 != -1071774920 )
      goto LABEL_100;
    if ( (a2->Flags.Value & 4) == 0 )
      goto LABEL_432;
    IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
    v277 = (struct _KTHREAD **)*((_QWORD *)this + 2);
    v278 = VidPnSourceId;
    if ( !IsFullWDDMDevice )
    {
      DXGDEVICE::SetDisplayedPrimary(v277, VidPnSourceId, v492, 0, 1u);
LABEL_432:
      LODWORD(v69) = v66;
      goto LABEL_100;
    }
LABEL_365:
    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe((DXGDEVICE *)v277, v278);
    DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v492, *((_DWORD *)a7 + 34), 1u);
    v68 = VidPnSourceId;
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) = *((_DWORD *)a7 + 30);
    goto LABEL_432;
  }
  if ( (a2->Flags.Value & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v69) = DXGCONTEXT::ValidatePresentRegions(this, a2, v496, v495);
      if ( (int)v69 < 0 )
        goto LABEL_100;
    }
  }
  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
         VidPnSourceId,
         0) )
  {
    v279 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
    v280 = (*(__int64 (**)(void))(v508 + 8))();
    v282 = a2->Flags.Value & 4;
    if ( v279 != v280 )
    {
      if ( v282 )
      {
        v73 = a3;
LABEL_372:
        *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (*(__int64 (**)(void))(v508 + 8))();
        CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                         *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
                         VidPnSourceId);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
        goto LABEL_377;
      }
      DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
      v73 = a3;
      COREDEVICEACCESS::Release(a3, v283);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v512, v284);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
      v285 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v69 = (struct DXGALLOCATION *)v285;
      if ( v285 >= 0 )
      {
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v512, 1u);
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, v286);
        goto LABEL_372;
      }
LABEL_370:
      v287 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v287 + 24) = v69;
      *(_QWORD *)(v287 + 32) = this;
      WdLogEvent5_WdEvent(v287);
      COREDEVICEACCESS::AcquireSharedUncheck(v73, 0LL);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, v288);
      goto LABEL_100;
    }
    v73 = a3;
    if ( !v282 )
    {
      COREDEVICEACCESS::Release(a3, v281);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v499);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v512, v290);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v499);
      v291 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v69 = (struct DXGALLOCATION *)v291;
      if ( v291 < 0 )
        goto LABEL_370;
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v512, 0);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v512, v292);
    }
LABEL_377:
    v72 = (DXGDEVICE *)*((_QWORD *)this + 2);
    goto LABEL_68;
  }
  v72 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v72 + VidPnSourceId + 302) & 0x200) == 0 && (a2->Flags.Value & 0x10000000) == 0 )
  {
    v293 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v70, v71);
    LODWORD(v69) = -1071775739;
    v293[3] = -1071775739LL;
    v293[4] = this;
    v293[5] = a2->hSource;
    v294 = v492;
    v293[7] = VidPnSourceId;
    goto LABEL_446;
  }
  v73 = a3;
LABEL_68:
  if ( DXGDEVICE::IsFullWDDMDevice(v72) )
  {
    v75 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 0x10) == 0, v73);
    v76 = v75;
    if ( v75 < 0 )
    {
      v295 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v295 + 24) = v76;
      *(_QWORD *)(v295 + 32) = this;
      WdLogEvent5_WdEvent(v295);
      LODWORD(v69) = v76;
      goto LABEL_100;
    }
    v77 = (__int64 *)((char *)this + 376);
    if ( ((*((_DWORD *)a7 + 30) - 3) & 0xFFFFFFFD) == 0 )
      goto LABEL_71;
    LODWORD(v69) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 47, a3, 0);
    if ( (int)v69 < 0 )
      goto LABEL_96;
    if ( !*v77 )
    {
      v298 = WdLogNewEntry5_WdAssertion(v297, v296);
      *(_QWORD *)(v298 + 24) = 4568LL;
      WdLogEvent5_WdAssertion(v298);
    }
LABEL_71:
    LODWORD(v69) = DXGCONTEXT::CheckDevicePresentSettings(
                     this,
                     (a2->Flags.Value >> 2) & 1,
                     (a2->Flags.Value >> 28) & 1,
                     VidPnSourceId);
    if ( (int)v69 >= 0 )
    {
      if ( (a2->Flags.Value & 4) != 0 )
      {
        if ( v492 )
        {
          v78 = *((_QWORD *)v492 + 6);
          if ( v78 )
          {
            if ( (*(_DWORD *)(v78 + 4) & 0x2000) != 0
              && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v492) )
            {
              v300 = (_QWORD *)WdLogNewEntry5_WdEvent();
              LODWORD(v69) = -1071775739;
              v300[3] = -1071775739LL;
              v300[4] = this;
              v300[5] = v492;
              WdLogEvent5_WdEvent(v300);
              v68 = *v77;
              if ( *v77 )
              {
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
                  (struct _VIDMM_DMA_BUFFER *)v68,
                  0LL);
                *v77 = 0LL;
              }
              goto LABEL_100;
            }
          }
        }
      }
      if ( (a2->Flags.Value & 0x2000) != 0 )
      {
        v301 = ADAPTER_DISPLAY::GetCurrentOrientation(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
                 VidPnSourceId,
                 1LL);
        v302 = 0;
        if ( v301 != 1 )
          v302 = 128;
        v79 = v302 | v506.Flags.Value & 0xFFFFFF7F;
        v506.Flags.Value = v79;
      }
      else
      {
        v79 = v506.Flags.Value;
      }
      if ( bTracingEnabled )
      {
        v80 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        v81 = *(struct VIDMM_GLOBAL **)(v80 + 648);
        v82 = *(VIDMM_EXPORT **)(v80 + 640);
        if ( (a2->Flags.Value & 4) != 0 )
        {
          LODWORD(v497) = v506.FlipInterval;
          VIDMM_EXPORT::VidMmETWAllocationHandle(v82, v81, hSource);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqpqtt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
          goto LABEL_82;
        }
        *(_QWORD *)&v508 = v506.pDstSubRects;
        LODWORD(v497) = v506.SubRectCnt;
        *(_QWORD *)&Source1.left = VIDMM_EXPORT::VidMmETWAllocationHandle(v82, v81, v494);
        v303 = VIDMM_EXPORT::VidMmETWAllocationHandle(v82, v81, hSource);
        v304 = *((_QWORD *)this + 47);
        v305 = (unsigned int)v497;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            (__int64)&EventBlit,
            0LL,
            a2->hWindow,
            v304,
            0LL,
            v303,
            *(_QWORD *)&Source1.left,
            1,
            0,
            v79,
            v506.SrcRect.left,
            v506.SrcRect.right,
            v506.SrcRect.top,
            v506.SrcRect.bottom,
            v506.DstRect.left,
            v506.DstRect.right,
            v506.DstRect.top,
            v506.DstRect.bottom,
            (_DWORD)v497);
        v306 = 0;
        if ( v305 )
        {
          v307 = v508;
          while ( 1 )
          {
            v308 = v305 - v306;
            if ( v305 - v306 > 0x10 )
              break;
            v309 = v305 - v306;
            if ( v308 )
              goto LABEL_402;
LABEL_404:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v475) = v309;
              LODWORD(v473) = v308 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventBlitRect,
                0LL,
                v304,
                v473,
                v475,
                v516,
                v515,
                &v512,
                v514);
              v307 = v508;
            }
            v306 += 16;
            if ( v306 >= v305 )
            {
              v8 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v509.hDevice;
              goto LABEL_82;
            }
          }
          v309 = 16;
LABEL_402:
          v310 = 0LL;
          v311 = 0;
          do
          {
            v312 = v311 + v306;
            ++v311;
            v312 *= 2LL;
            v310 += 4LL;
            *(_DWORD *)&v515[v310 + 60] = *(_DWORD *)(v307 + 8 * v312);
            *(_DWORD *)&v514[v310 + 60] = *(_DWORD *)(v307 + 8 * v312 + 8);
            *(_DWORD *)((char *)&v511[34] + v310 + 12) = *(_DWORD *)(v307 + 8 * v312 + 4);
            *(_DWORD *)&v514[v310 - 4] = *(_DWORD *)(v307 + 8 * v312 + 12);
          }
          while ( v311 < v309 );
          goto LABEL_404;
        }
      }
LABEL_82:
      v83 = v503;
      LODWORD(v69) = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (struct DXGHWQUEUE **)a2[1].hWindow,
                       a2->BroadcastContextCount,
                       v503,
                       v492,
                       hSource,
                       v494,
                       &v506,
                       a2->pPresentRegions,
                       *((struct _VIDMM_DMA_BUFFER **)this + 47),
                       v8,
                       (enum _D3DDDIFORMAT)v502,
                       a3);
      if ( (int)v69 >= 0 )
      {
        v84 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL);
        v85 = 3968LL * VidPnSourceId;
        if ( *(_DWORD *)(*(_QWORD *)(v84 + 112) + v85 + 1068) == -1 )
        {
          v313 = WdLogNewEntry5_WdAssertion(v85, v84);
          *(_QWORD *)(v313 + 24) = 4682LL;
          WdLogEvent5_WdAssertion(v313);
        }
      }
      *((_QWORD *)this + 47) = 0LL;
      if ( (int)v69 < 0 )
        goto LABEL_96;
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v86 = *((_QWORD *)this + 2);
        v87 = *(_QWORD *)(v86 + 1848);
        if ( v87 == *(_QWORD *)(*(_QWORD *)(v86 + 16) + 16LL) )
        {
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v87 + 2696), VidPnSourceId);
          v86 = *((_QWORD *)this + 2);
        }
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v86, VidPnSourceId, v492, *((_DWORD *)v8 + 34), 1u);
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) = *((_DWORD *)v8 + 30);
        UpdatePostComposition(
          VidPnSourceId,
          0,
          0,
          0,
          *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL));
      }
      goto LABEL_90;
    }
    v68 = *v77;
    if ( *v77 )
    {
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
        (struct _VIDMM_DMA_BUFFER *)v68,
        0LL);
      *v77 = 0LL;
    }
    if ( (_DWORD)v69 == -1071774920 )
    {
      if ( (a2->Flags.Value & 4) == 0 )
        goto LABEL_432;
      v299 = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
      v277 = (struct _KTHREAD **)*((_QWORD *)this + 2);
      v278 = VidPnSourceId;
      if ( !v299 )
      {
        DXGDEVICE::SetDisplayedPrimary(v277, VidPnSourceId, v492, 0, 1u);
        LODWORD(v69) = 0;
        goto LABEL_100;
      }
      goto LABEL_365;
    }
LABEL_644:
    v83 = v503;
LABEL_90:
    v73 = a3;
LABEL_91:
    if ( (int)v69 >= 0 )
    {
      v88 = v505;
      if ( v505 )
      {
        if ( (a2->Flags.Value & 0x10000000) == 0 )
        {
          v89 = *((_QWORD *)this + 2);
          v90 = *(_QWORD *)(v89 + 1848);
          if ( v90 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v89 + 40) + 346LL) )
            {
              v457 = v504;
              HIDWORD(v511[0]) = 0;
              *(_QWORD *)((char *)&v511[17] + 4) = 0LL;
              v458 = 2LL;
              HIDWORD(v511[17]) = 0;
              DWORD1(v511[19]) = 0;
              LODWORD(v511[0]) = a2->hDevice;
              *(_OWORD *)((char *)&v511[18] + 4) = 0LL;
              DWORD1(v511[0]) = v504;
              v459 = (*(_DWORD *)(v505[6].Count + 4) >> 6) & 0xF;
              HIDWORD(v511[0]) = a2->BroadcastContextCount;
              DWORD2(v511[0]) = v459;
              v460 = a2->BroadcastContext;
              v461 = &v511[1];
              do
              {
                v462 = *((_OWORD *)v460 + 1);
                *v461 = *(_OWORD *)v460;
                v463 = *((_OWORD *)v460 + 2);
                v461[1] = v462;
                v464 = *((_OWORD *)v460 + 3);
                v461[2] = v463;
                v465 = *((_OWORD *)v460 + 4);
                v461[3] = v464;
                v466 = *((_OWORD *)v460 + 5);
                v461[4] = v465;
                v467 = *((_OWORD *)v460 + 6);
                v461[5] = v466;
                v468 = *((_OWORD *)v460 + 7);
                v460 += 32;
                v461[6] = v467;
                v461 += 8;
                *(v461 - 1) = v468;
                --v458;
              }
              while ( v458 );
              v469 = *(_QWORD *)(v90 + 2696);
              LODWORD(v511[17]) = 0;
              LODWORD(v511[18]) = 0;
              LODWORD(v511[19]) = 4;
              v470 = OUTPUTDUPL_MGR::ProcessPresent(
                       *(OUTPUTDUPL_MGR **)(v469 + 104),
                       this,
                       (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                       v457,
                       HIDWORD(v511[0]),
                       (struct _D3DKMT_PRESENT_RGNS *)&v511[17],
                       (const struct DXGK_PRESENT_PARAMS *)a2,
                       (*(_DWORD *)(v88[6].Count + 4) >> 6) & 0xF,
                       v83,
                       v73);
              if ( v470 == 259 )
                v470 = 0;
              LODWORD(v69) = v470;
            }
          }
        }
      }
    }
    goto LABEL_96;
  }
  v314 = *((_QWORD *)this + 2);
  v315 = *(_QWORD *)(v314 + 1848);
  if ( !v315 )
  {
    v331 = WdLogNewEntry5_WdAssertion(v314, v74);
    *(_QWORD *)(v331 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v331 + 32) = -1073741822LL;
    WdLogEvent5_WdAssertion(v331);
    LODWORD(v69) = -1073741811;
    goto LABEL_100;
  }
  v316 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  *(_QWORD *)&v509.hDevice = 0LL;
  if ( (*(_DWORD *)&v316 & 0x10000000) == 0 )
  {
    v69 = v501;
    if ( (*(_BYTE *)&v316 & 4) != 0 )
      v69 = v492;
    v317 = *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL);
    if ( (v317 & 0x10) != 0 )
    {
      v318 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v318[3] = -1071775482LL;
      v318[4] = this;
      v318[5] = v69;
      WdLogEvent5_WdEvent(v318);
      LODWORD(v69) = -1071775482;
      goto LABEL_100;
    }
    v319 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v315 + 2696), (v317 >> 6) & 0xF);
    v512.Flags.Value = 1;
    v512.Rotation = -1;
    *(_OWORD *)v514 = v319;
    memset(&v512.Width, 0, 32);
    v320 = *((_QWORD *)this + 2);
    v512.hAllocation = *(HANDLE *)(*((_QWORD *)v69 + 6) + 16LL);
    v322 = ADAPTER_RENDER::DdiDescribeAllocation(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v320 + 16) + 16LL) + 2704LL),
             &v512,
             v321);
    v325 = v322;
    if ( v322 < 0 )
    {
      v326 = (_QWORD *)WdLogNewEntry5_WdError(v324, v323);
      v326[3] = v325;
      v326[4] = this;
      v326[5] = *((unsigned int *)v69 + 4);
      v326[6] = v69;
      v326[7] = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v326);
      LODWORD(v69) = -1073741811;
      goto LABEL_100;
    }
    Width = v512.Width;
    if ( v512.Width == *(_DWORD *)v514 )
    {
      Height = v512.Height;
      if ( v512.Height == *(_DWORD *)&v514[4] )
      {
        if ( *((_BYTE *)this + 457) )
        {
LABEL_421:
          v73 = a3;
          v509.Flags.Value = Width;
          v314 = *((_QWORD *)this + 2);
          goto LABEL_424;
        }
        v329 = RemoveAlphaChannel(*(enum _D3DDDIFORMAT *)&v514[8]);
        if ( RemoveAlphaChannel(v512.Format) == v329 )
        {
          Height = v512.Height;
          Width = v512.Width;
          goto LABEL_421;
        }
      }
    }
    v330 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v330[3] = -1071775482LL;
    v330[4] = this;
    v330[5] = v69;
    WdLogEvent5_WdEvent(v330);
    LODWORD(v69) = -1071775739;
    goto LABEL_100;
  }
  v509.Flags.Value = a2[1].hSource;
  Height = a2[1].hDestination;
LABEL_424:
  *((_DWORD *)&v509.Flags + 1) = Height;
  LODWORD(v69) = ADAPTER_DISPLAY::PresentDisplayOnly(
                   *(ADAPTER_DISPLAY **)(*(_QWORD *)(v314 + 1848) + 2696LL),
                   this,
                   VidPnSourceId,
                   a2,
                   &v506,
                   v73,
                   (struct tagRECT *)&v509);
  if ( (int)v69 >= 0 )
  {
    if ( (a2->Flags.Value & 4) != 0 )
    {
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), VidPnSourceId);
      DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v492, 0, 1u);
      UpdatePostComposition(
        VidPnSourceId,
        0,
        0,
        0,
        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL));
    }
    v83 = v503;
    goto LABEL_91;
  }
LABEL_96:
  v91 = (_QWORD *)((char *)this + 376);
LABEL_97:
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
    && (_DWORD)v69 != -1073741130 )
  {
    v471 = WdLogNewEntry5_WdAssertion(v92, v68);
    *(_QWORD *)(v471 + 24) = 5951LL;
    WdLogEvent5_WdAssertion(v471);
  }
  if ( *v91 )
  {
    v472 = WdLogNewEntry5_WdAssertion(v92, v68);
    *(_QWORD *)(v472 + 24) = 5952LL;
    WdLogEvent5_WdAssertion(v472);
  }
LABEL_100:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v505, v68);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v501, v93);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v492, v94);
  return (unsigned int)v69;
}
