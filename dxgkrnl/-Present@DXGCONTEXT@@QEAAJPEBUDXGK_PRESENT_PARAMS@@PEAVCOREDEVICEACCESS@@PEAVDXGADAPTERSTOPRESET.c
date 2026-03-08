/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80
 * Callers:
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0339ADC (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0001148 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000122C (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0001284 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C00012B0 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00032F0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C0003398 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0006698 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000942C (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000DBB8 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x1C000DC00 (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001B7C4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x1C001BB98 (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001BD08 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C00262F8 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C00292B2 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z @ 0x1C0029530 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1C0029C34 (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     McTemplateK0pqpqtt_EtwWriteTransfer @ 0x1C0029FF8 (McTemplateK0pqpqtt_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C002A0B6 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C003FBD0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C00530DC (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C0054D9C (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0054F98 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00551F4 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0055218 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C0055340 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0163DD8 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C0164C00 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0176278 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8330 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C94F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C9790 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C01CA280 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C01CABC8 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CE1EC (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1C022404A (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C02B9918 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C02E6B64 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0320500 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0329AC4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0336740 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C033689C (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0337DF0 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0338018 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1C033807C (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C03380B0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z @ 0x1C03398FC (-GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1C033993C (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C033995C (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C033A200 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C033A3A4 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C033B400 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C033C530 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C033C7CC (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0380730 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0385DF8 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C038B814 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
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
  struct VIDSCH_SUBMIT_DATA_BASE *v8; // rdi
  struct DXGADAPTERSTOPRESETLOCKSHARED *v9; // rsi
  struct COREDEVICEACCESS *v10; // r15
  __int64 v12; // rax
  int v13; // r14d
  const struct _DXGKWIN32KENG_INTERFACE *Win32kInterface; // rax
  UINT v15; // ecx
  int v16; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v18; // zf
  int v19; // ecx
  D3DKMT_HANDLE v20; // ebx
  D3DKMT_HANDLE v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // ecx
  unsigned int Height; // r11d
  struct _EX_RUNDOWN_REF *v26; // rdx
  D3DKMT_HANDLE v27; // r10d
  struct DXGALLOCATION *Value; // rax
  D3DKMT_PRESENT_MODEL Model; // ecx
  struct COREDEVICEACCESS *v30; // rsi
  struct _EX_RUNDOWN_REF *v31; // rbx
  struct _VIDMM_DMA_BUFFER **v32; // rbx
  ULONG_PTR v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rbx
  DXGADAPTER *v37; // rcx
  __int64 v38; // rdx
  int v39; // r8d
  UINT v40; // ecx
  UINT v41; // ecx
  int v42; // ecx
  UINT v43; // ecx
  UINT v44; // ecx
  UINT v45; // edx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  int DeviceFlipMode; // eax
  D3DDDI_FLIPINTERVAL_TYPE *v53; // rdx
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v55; // ecx
  __int64 v56; // rdx
  int v57; // eax
  int v58; // r15d
  int v59; // eax
  struct _EX_RUNDOWN_REF *v60; // rdx
  _DWORD *v61; // rcx
  __int64 v62; // r10
  __int64 v63; // r8
  int v64; // eax
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rdx
  int v68; // ecx
  struct _EX_RUNDOWN_REF *v69; // rdx
  struct _EX_RUNDOWN_REF *v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  int v74; // r15d
  struct DXGALLOCATION *v75; // rax
  int v76; // eax
  __int64 v77; // rbx
  struct DXGALLOCATION *v78; // rcx
  int v79; // ecx
  const RECT *v80; // r8
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // rcx
  unsigned int v84; // ebx
  __int64 v85; // rax
  DXGADAPTER *v86; // rcx
  struct _EX_RUNDOWN_REF *v87; // rdx
  D3DKMT_HANDLE v88; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v89; // eax
  struct DXGALLOCATION *v90; // rax
  unsigned __int64 v91; // rdx
  LONG v92; // edx
  RECT *p_SrcRect; // r9
  __int64 v94; // rcx
  LONG v95; // r10d
  LONG v96; // r8d
  unsigned int v97; // r11d
  unsigned int v98; // ecx
  unsigned int v99; // edx
  struct _EX_RUNDOWN_REF *v100; // rax
  __int64 v101; // r15
  const struct tagRECT *v102; // rdx
  LONG v103; // r8d
  LONG v104; // edx
  LONG v105; // r10d
  LONG v106; // r11d
  const RECT *v107; // rax
  int v108; // r8d
  unsigned int v109; // r11d
  int v110; // r10d
  __int64 v111; // rdx
  RECT v112; // xmm0
  struct _EX_RUNDOWN_REF *v113; // rdi
  int v114; // eax
  UINT v115; // r8d
  RECT v116; // xmm0
  __int64 v117; // r8
  __int64 v118; // rcx
  LONG v119; // eax
  struct _EX_RUNDOWN_REF *v120; // rax
  const RECT *v121; // rdx
  struct _EX_RUNDOWN_REF *v122; // r15
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v123; // edx
  UINT v124; // eax
  struct _EX_RUNDOWN_REF *v125; // rdi
  ULONG_PTR Count; // rax
  DXGADAPTER *v127; // rcx
  __int64 v128; // rax
  int v129; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v130; // edx
  __int64 v131; // r8
  bool IsFullWDDMDevice; // al
  DXGDEVICE *v133; // rcx
  int v134; // ebx
  int v135; // eax
  UINT v136; // ecx
  int v137; // eax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v139; // eax
  __int64 v140; // r9
  const RECT *pSrcSubRects; // r8
  __int64 v142; // rdx
  int v143; // eax
  int v144; // ebx
  struct _VIDMM_DMA_BUFFER **v145; // rbx
  __int64 v146; // rbx
  bool v147; // al
  DXGDEVICE *v148; // rcx
  __int64 v149; // rax
  int v150; // eax
  int v151; // ecx
  __int64 v152; // rdx
  VIDMM_EXPORT *v153; // rcx
  struct VIDMM_GLOBAL *v154; // rdx
  __int64 v155; // r15
  __int64 v156; // r10
  HWND v157; // r11
  UINT v158; // eax
  unsigned int v159; // r15d
  struct _EX_RUNDOWN_REF *v160; // rdi
  struct _EX_RUNDOWN_REF *v161; // r11
  unsigned int v162; // r10d
  unsigned int v163; // r8d
  unsigned int v164; // r9d
  unsigned __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rbx
  __int64 v168; // rdx
  __int64 v169; // rcx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v170; // eax
  struct DXGALLOCATION *v171; // rdi
  unsigned int v172; // edx
  __int128 v173; // xmm0
  __int64 v174; // rax
  __int64 v175; // r8
  int v176; // eax
  __int64 v177; // rbx
  UINT v178; // ecx
  D3DKMT_HANDLE v179; // eax
  enum _D3DDDIFORMAT v180; // ebx
  char v181; // bl
  __int64 v182; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v183; // edx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ecx
  __int64 v185; // r9
  unsigned int v186; // ecx
  UINT v187; // edx
  DXGPRESENT *v188; // rcx
  DXGPRESENT *v189; // rcx
  DXGADAPTER *v190; // rcx
  __int64 v191; // rax
  unsigned int v192; // ecx
  struct COREDEVICEACCESS *v193; // rbx
  int v194; // eax
  __int64 v195; // rax
  int v196; // eax
  struct COREDEVICEACCESS *v197; // r8
  int v198; // eax
  __int64 v199; // rcx
  int v200; // eax
  _DWORD *CurrentThreadId; // rax
  __int64 v202; // rcx
  int v203; // eax
  int v204; // eax
  DXGPRESENT *v205; // rcx
  HDC v206; // rdx
  const struct DXGDEVICE *v207; // rax
  int v208; // eax
  __int64 v209; // rcx
  int v210; // ebx
  char v211; // al
  int v212; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v213; // r8d
  __int64 v214; // rax
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  LONG right; // eax
  struct tagRECT *DdiSubRectList; // rax
  __int64 SubRectCnt; // rcx
  int v221; // ebx
  __int64 v222; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v224; // ebx
  struct DXGPROCESS *v225; // rdi
  unsigned int v226; // ecx
  __int64 v227; // rdx
  int v228; // ecx
  struct _EX_RUNDOWN_REF *v229; // rdx
  struct _EX_RUNDOWN_REF *v230; // rax
  __int64 v231; // rcx
  unsigned int Ptr_high; // r15d
  unsigned __int8 *pPrivateDriverData; // rdi
  UINT PrivateDriverDataSize; // esi
  unsigned int v235; // r14d
  __int64 v236; // rbx
  struct DXGPROCESS *v237; // rax
  int v238; // edi
  unsigned int v239; // r8d
  HDC v240; // rax
  __int64 v241; // rcx
  __int64 v242; // r11
  HWND hWindow; // r9
  UINT v244; // eax
  int *v245; // rdi
  unsigned int v246; // esi
  struct _EX_RUNDOWN_REF *v247; // r11
  unsigned int v248; // r10d
  unsigned int v249; // r8d
  unsigned int v250; // r9d
  unsigned __int64 v251; // rdx
  __int64 v252; // rcx
  DXGDEVICE *v253; // rdi
  __int64 v254; // rcx
  int v255; // edi
  struct DXGDEVICE *v256; // rdi
  __int64 v257; // rbx
  struct DXGPROCESS *v258; // rax
  unsigned int v259; // eax
  DXGDEVICE *v260; // rcx
  __int64 v261; // rdi
  int v262; // eax
  unsigned int (__fastcall *v263)(struct _D3DKMT_PRESENT *, HDC, _DWORD *, const RECT *, _QWORD, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)); // r14
  int v264; // ebx
  UINT v265; // edi
  bool v266; // si
  HDC v267; // rax
  __int64 v268; // rcx
  int v269; // edi
  struct DXGDEVICE *v270; // rdi
  __int64 v271; // rbx
  struct DXGPROCESS *v272; // rax
  struct DXGADAPTERSTOPRESETLOCKSHARED *v273; // r8
  DXGDEVICE *v274; // r15
  unsigned __int8 v275; // di
  CWin32kLocks *v276; // rsi
  __int64 v277; // rbx
  int v278; // eax
  int v279; // eax
  unsigned int (__fastcall *v280)(HDC, _DWORD *, const RECT *, _QWORD, UINT); // r14
  UINT v281; // ebx
  UINT v282; // edi
  const RECT *v283; // rsi
  HDC v284; // rax
  int v285; // eax
  int v286; // edi
  __int64 v287; // rcx
  DXGPROCESS *v288; // rax
  HDC v289; // rax
  unsigned int DdiSubRectCnt; // eax
  DXGPRESENT *v291; // rcx
  struct tagRECT *v292; // rax
  ULONG BroadcastContextCount; // ecx
  __int64 v294; // rax
  D3DKMT_HANDLE *v295; // rdx
  __int64 v296; // r8
  __int64 v297; // rcx
  int v298; // eax
  unsigned int i; // edx
  unsigned int v300; // ecx
  unsigned __int8 v301; // r8
  unsigned int v302; // eax
  unsigned int v303; // r15d
  const RECT *v304; // rax
  int CurrentOrientation; // eax
  int v306; // ecx
  struct tagRECT *v307; // r8
  RECT *v308; // rcx
  __int64 v309; // r15
  __int64 v310; // r11
  HWND v311; // r9
  UINT v312; // eax
  unsigned int v313; // r15d
  int *v314; // rsi
  struct _EX_RUNDOWN_REF *v315; // r11
  unsigned int v316; // r10d
  unsigned int v317; // r8d
  unsigned int v318; // r9d
  unsigned __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 v321; // rcx
  __int64 v322; // rsi
  unsigned int v323; // edi
  unsigned int v324; // ebx
  struct DXGPROCESS *v325; // rax
  int v326; // eax
  __int64 v327; // rdx
  RECT DstRect; // xmm0
  const RECT *v329; // rcx
  signed __int64 v330; // r8
  __int64 v331; // rax
  __int128 v332; // xmm0
  __int64 v333; // rax
  __int64 v334; // rdi
  __int64 v335; // rdx
  unsigned int v336; // r9d
  int v337; // ecx
  D3DKMT_HANDLE *BroadcastContext; // rax
  _OWORD *v339; // rcx
  __int128 v340; // xmm1
  __int128 v341; // xmm0
  __int128 v342; // xmm1
  __int128 v343; // xmm0
  __int128 v344; // xmm1
  __int128 v345; // xmm0
  __int128 v346; // xmm1
  __int64 v347; // rax
  int v348; // eax
  struct _DXGKARG_PRESENT *v349; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v350; // [rsp+20h] [rbp-100h]
  struct tagRECT *v351; // [rsp+28h] [rbp-F8h]
  __int64 v352; // [rsp+28h] [rbp-F8h]
  struct tagRECT *v353; // [rsp+40h] [rbp-E0h]
  int v354; // [rsp+40h] [rbp-E0h]
  struct _D3DKMT_PRESENT_RGNS *v355; // [rsp+48h] [rbp-D8h]
  int v356; // [rsp+48h] [rbp-D8h]
  struct _VIDMM_DMA_BUFFER *v357; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v358; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v359[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v360; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v361; // [rsp+68h] [rbp-B8h]
  __int64 v362; // [rsp+70h] [rbp-B0h]
  __int64 v363; // [rsp+78h] [rbp-A8h]
  __int64 v364; // [rsp+80h] [rbp-A0h]
  __int64 v365; // [rsp+88h] [rbp-98h]
  __int64 v366; // [rsp+90h] [rbp-90h]
  __int64 v367; // [rsp+98h] [rbp-88h]
  char v368; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v369; // [rsp+A0h] [rbp-80h]
  char v371; // [rsp+B0h] [rbp-70h]
  UINT Width; // [rsp+B4h] [rbp-6Ch]
  unsigned int v373; // [rsp+B4h] [rbp-6Ch]
  unsigned int v374; // [rsp+B4h] [rbp-6Ch]
  unsigned int v375; // [rsp+B8h] [rbp-68h] BYREF
  struct DXGALLOCATION *v376; // [rsp+C0h] [rbp-60h] BYREF
  _DWORD *v377; // [rsp+C8h] [rbp-58h]
  unsigned int v378; // [rsp+D0h] [rbp-50h]
  unsigned int v379; // [rsp+D4h] [rbp-4Ch]
  CWin32kLocks *v380; // [rsp+D8h] [rbp-48h]
  int *p_FlipInterval; // [rsp+E0h] [rbp-40h] BYREF
  unsigned int hSource; // [rsp+E8h] [rbp-38h]
  struct _EX_RUNDOWN_REF *pDstSubRects; // [rsp+F0h] [rbp-30h] BYREF
  enum _D3DDDIFORMAT Color; // [rsp+F8h] [rbp-28h]
  struct DXGALLOCATION *v385; // [rsp+100h] [rbp-20h] BYREF
  HDEV v386; // [rsp+108h] [rbp-18h]
  _DWORD *v387; // [rsp+110h] [rbp-10h]
  unsigned int v388; // [rsp+118h] [rbp-8h]
  struct _EX_RUNDOWN_REF *v389; // [rsp+120h] [rbp+0h] BYREF
  const RECT *v390; // [rsp+128h] [rbp+8h] BYREF
  HDC v391; // [rsp+130h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v392; // [rsp+138h] [rbp+18h] BYREF
  struct DXGCONTEXT **v393; // [rsp+140h] [rbp+20h]
  _BYTE v394[24]; // [rsp+148h] [rbp+28h] BYREF
  struct _D3DKMT_LOCK2 v395; // [rsp+160h] [rbp+40h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v396; // [rsp+180h] [rbp+60h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v397; // [rsp+1B0h] [rbp+90h] BYREF
  _QWORD v398[70]; // [rsp+1E0h] [rbp+C0h] BYREF
  struct _DXGKARG_PRESENT v399; // [rsp+410h] [rbp+2F0h] BYREF
  struct tagRECT Source1; // [rsp+4C0h] [rbp+3A0h] BYREF
  struct tagRECT v401; // [rsp+4D0h] [rbp+3B0h] BYREF
  _DWORD v402[84]; // [rsp+4E0h] [rbp+3C0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v403; // [rsp+630h] [rbp+510h] BYREF
  enum _D3DDDIFORMAT v405[4]; // [rsp+670h] [rbp+550h] BYREF
  _BYTE v407[64]; // [rsp+6C0h] [rbp+5A0h] BYREF
  _BYTE v408[64]; // [rsp+700h] [rbp+5E0h] BYREF
  _BYTE v409[64]; // [rsp+740h] [rbp+620h] BYREF

  v8 = a7;
  v9 = a4;
  v380 = a5;
  v10 = a3;
  v393 = a6;
  v12 = *((_QWORD *)this + 2);
  *(_QWORD *)&Source1.left = a4;
  v389 = (struct _EX_RUNDOWN_REF *)a7;
  v13 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v12 + 16)) )
  {
    WdLogSingleEntry1(1LL, 3922LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3922LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 45) )
  {
    WdLogSingleEntry1(1LL, 3923LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPresentDmaBuffer == NULL", 3923LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (a2->Flags.Value & 0x4000) != 0
    || (Win32kInterface = DXGPROCESS::GetWin32kInterface(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL)),
        v15 = a2->Flags.Value & 0x12000,
        *(_QWORD *)&v401.left = Win32kInterface,
        v15 == 73728) )
  {
    LODWORD(v10) = -1073741811;
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return (unsigned int)v10;
  }
  memset(&v399, 0, sizeof(v399));
  v16 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v16;
  v18 = (a2->Flags.Value & 0x10000) == 0;
  v375 = hDestination;
  if ( v18 )
    v16 |= 1u;
  v19 = v16 | 0x100;
  *(_DWORD *)a7 = v19;
  *(_DWORD *)a7 = v19 ^ (v19 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v379 = 0;
  v378 = 0;
  Color = D3DDDIFMT_UNKNOWN;
  Width = 0;
  LODWORD(v386) = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v376, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v385, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v392, 0LL);
  v20 = a2->hDestination;
  v388 = 0;
  if ( !v20 )
    goto LABEL_14;
  p_FlipInterval = *(int **)(*((_QWORD *)this + 2) + 40LL);
  pDstSubRects = (struct _EX_RUNDOWN_REF *)(p_FlipInterval + 62);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(p_FlipInterval + 62));
  v66 = (v20 >> 6) & 0xFFFFFF;
  if ( v66 < p_FlipInterval[74] )
  {
    v67 = 16LL * v66 + *((_QWORD *)p_FlipInterval + 35);
    if ( ((v20 >> 25) & 0x60) == (*(_BYTE *)(v67 + 8) & 0x60) && (*(_DWORD *)(v67 + 8) & 0x2000) == 0 )
    {
      v68 = *(_DWORD *)(v67 + 8) & 0x1F;
      if ( v68 )
      {
        if ( v68 == 5 )
        {
          v69 = *(struct _EX_RUNDOWN_REF **)v67;
          goto LABEL_90;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v69 = 0LL;
LABEL_90:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v390, v69);
  v70 = pDstSubRects;
  _InterlockedDecrement((volatile signed __int32 *)&pDstSubRects[2]);
  ExReleasePushLockSharedEx(v70, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v385, (struct _EX_RUNDOWN_REF **)&v390);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v390);
  if ( !v385 )
  {
    v71 = a2->hDestination;
    goto LABEL_102;
  }
  v72 = *((_QWORD *)this + 2);
  v73 = *(_QWORD *)(*(_QWORD *)(v72 + 16) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v385 + 1) + 16LL) + 16LL) != v73 )
  {
    v74 = -1073741811;
    WdLogSingleEntry3(2LL, v72, v385, -1073741811LL);
    v75 = v385;
LABEL_105:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      *((_QWORD *)this + 2),
      (__int64)v75,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_182;
  }
  memset(&v397.Width, 0, 40);
  v397.hAllocation = *(HANDLE *)(*((_QWORD *)v385 + 6) + 16LL);
  v76 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v72 + 16), &v397, v73);
  LODWORD(v377) = v76;
  if ( v76 < 0 )
  {
    v77 = v76;
    WdLogSingleEntry4(2LL, v76, this, *(_QWORD *)(*((_QWORD *)v385 + 6) + 16LL), v385);
    v78 = v385;
    goto LABEL_108;
  }
  Width = v397.Width;
  LODWORD(v386) = v397.Height;
LABEL_14:
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v21 = a2->hSource;
    v387 = *(_DWORD **)(*((_QWORD *)this + 2) + 40LL);
    v377 = v387 + 62;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v387 + 62));
    v22 = (v21 >> 6) & 0xFFFFFF;
    if ( v22 < v387[74] )
    {
      v23 = 16LL * v22 + *((_QWORD *)v387 + 35);
      if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v23 + 8) & 0x60) && (*(_DWORD *)(v23 + 8) & 0x2000) == 0 )
      {
        v79 = *(_DWORD *)(v23 + 8) & 0x1F;
        if ( v79 )
        {
          if ( v79 == 5 )
          {
            v60 = *(struct _EX_RUNDOWN_REF **)v23;
            goto LABEL_71;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v60 = 0LL;
LABEL_71:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&pDstSubRects, v60);
    v61 = v377;
    _InterlockedDecrement(v377 + 4);
    ExReleasePushLockSharedEx(v61, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v376, &pDstSubRects);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&pDstSubRects);
    v26 = (struct _EX_RUNDOWN_REF *)v376;
    if ( v376 )
    {
      v18 = (a2->Flags.Value & 0x10000000) == 0;
      memset(&v396.Width, 0, 40);
      v396.hAllocation = *(HANDLE *)(*((_QWORD *)v376 + 6) + 16LL);
      if ( !v18 )
      {
        v379 = a2[1].hSource;
        v24 = v379;
        v396.Width = v379;
        v378 = a2[1].hDestination;
        Height = v378;
        v396.Height = v378;
        Color = a2[1].Color;
        v396.Format = Color;
        goto LABEL_20;
      }
      v62 = *((_QWORD *)this + 2);
      v63 = *(_QWORD *)(v62 + 16);
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v376 + 1) + 16LL) + 16LL) == *(_QWORD *)(v63 + 16) )
      {
        v64 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v62 + 16), &v396, v63);
        LODWORD(v377) = v64;
        if ( v64 >= 0 )
        {
          Height = v396.Height;
          v24 = v396.Width;
          Color = v396.Format;
          v378 = v396.Height;
          v379 = v396.Width;
          goto LABEL_19;
        }
        v77 = v64;
        WdLogSingleEntry4(2LL, v64, this, *(_QWORD *)(*((_QWORD *)v376 + 6) + 16LL), v376);
        v78 = v376;
LABEL_108:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
          v77,
          (__int64)this,
          *(_QWORD *)(*((_QWORD *)v78 + 6) + 16LL),
          (__int64)v78,
          0LL);
        v74 = (int)v377;
        goto LABEL_182;
      }
      v74 = -1073741811;
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v376, -1073741811LL);
      v75 = v376;
      goto LABEL_105;
    }
    v71 = a2->hSource;
LABEL_102:
    v74 = -1073741811;
    WdLogSingleEntry3(3LL, -1073741811LL, this, v71);
LABEL_182:
    v13 = v74;
    goto LABEL_183;
  }
  v24 = 0;
  Height = 0;
LABEL_19:
  v26 = (struct _EX_RUNDOWN_REF *)v376;
LABEL_20:
  v27 = a2->hDestination;
  if ( !v27 || (LODWORD(Value) = a2->Flags.0, ((unsigned int)Value & 0x10000) != 0) )
  {
    Value = (struct DXGALLOCATION *)a2->Flags.Value;
    if ( ((unsigned __int8)Value & 4) == 0 )
    {
      if ( ((unsigned __int8)Value & 3) == 0 )
      {
        if ( ((unsigned __int16)Value & 0x8000) == 0 )
        {
          LODWORD(v10) = -1073741811;
          WdLogSingleEntry5(3LL, -1073741811LL, this, a2->pSrcSubRects, a2->SubRectCnt, a2->Flags.Value);
          goto LABEL_31;
        }
        if ( ((unsigned __int16)Value & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
              goto LABEL_27;
          }
          else if ( ((Model - 7) & 0xFFFFFFFD) == 0 )
          {
LABEL_27:
            LODWORD(v10) = SubmitPresentHistoryTokenPreparation(
                             v9,
                             v10,
                             *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                             &a2->PresentHistoryToken,
                             a2->PresentLimitSemaphore,
                             (a2->Flags.Value & 0x10) != 0);
            if ( (int)v10 < 0 )
              goto LABEL_35;
            TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v395, &a2->PresentHistoryToken, v9, a3);
            v395.hDevice = SubmitPresentHistoryToken(
                             &a2->PresentHistoryToken,
                             a3,
                             v9,
                             v380,
                             1,
                             0LL,
                             (struct DXGK_PRESENT_PARAMS *)a2,
                             a7,
                             this,
                             0LL,
                             0LL);
            LODWORD(v10) = v395.hDevice;
            TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v395);
            v30 = a3;
LABEL_29:
            if ( (int)v10 < 0 )
              goto LABEL_31;
            goto LABEL_30;
          }
        }
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry3(3LL, this, a2->Flags.Value, -1073741811LL);
        goto LABEL_35;
      }
      v181 = 0;
      v371 = 0;
      if ( ((unsigned __int16)Value & 0x100) != 0 )
      {
        v182 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v182 + 1880) )
        {
          LODWORD(v10) = -1073741811;
          WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
          goto LABEL_35;
        }
        v183 = *(_DWORD *)(v182 + 1888);
        VidPnSourceId = a2->VidPnSourceId;
        if ( v183 <= VidPnSourceId )
        {
          WdLogSingleEntry2(3LL, VidPnSourceId, v183);
          LODWORD(v10) = -1073741811;
          goto LABEL_35;
        }
        v24 = v379;
      }
      pSrcSubRects = a2->pSrcSubRects;
      if ( ((unsigned __int8)Value & 2) != 0 )
      {
        if ( pSrcSubRects && a2->SubRectCnt && ((unsigned __int16)Value & 0x86BD) == 0 )
        {
          hSource = 0;
LABEL_333:
          v187 = a2->Flags.Value & 3 | v399.Flags.Value & 0xFFFFFF8C | (a2->Flags.Value >> 5) & 0x70;
          v399.Color = a2->Color;
          v188 = (DXGPRESENT *)*((_QWORD *)this + 19);
          v399.Flags.Value = v187;
          LODWORD(v10) = DXGPRESENT::CheckInput(v188, a2, v379, Height);
          if ( (int)v10 < 0 )
            goto LABEL_31;
          v189 = (DXGPRESENT *)*((_QWORD *)this + 19);
          if ( (*((_DWORD *)v189 + 1) & 4) != 0 )
          {
            v30 = a3;
LABEL_611:
            if ( bTracingEnabled && !v181 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
              McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventBlitCancel, 0LL, a2->hWindow);
LABEL_30:
            v31 = v392;
            if ( v392 )
            {
              if ( (a2->Flags.Value & 0x10000000) == 0 )
              {
                v333 = *((_QWORD *)this + 2);
                v334 = *(_QWORD *)(v333 + 1880);
                if ( v334 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v333 + 40) + 424LL) & 4) == 0 )
                  {
                    memset(&v402[4], 0, 0x138uLL);
                    v335 = 2LL;
                    v336 = v388;
                    v402[4] = a2->hDevice;
                    v402[5] = v388;
                    v337 = (*(_DWORD *)(v392[6].Count + 4) >> 6) & 0xF;
                    v402[7] = a2->BroadcastContextCount;
                    v402[6] = v337;
                    BroadcastContext = a2->BroadcastContext;
                    v339 = &v402[8];
                    do
                    {
                      v340 = *((_OWORD *)BroadcastContext + 1);
                      *v339 = *(_OWORD *)BroadcastContext;
                      v341 = *((_OWORD *)BroadcastContext + 2);
                      v339[1] = v340;
                      v342 = *((_OWORD *)BroadcastContext + 3);
                      v339[2] = v341;
                      v343 = *((_OWORD *)BroadcastContext + 4);
                      v339[3] = v342;
                      v344 = *((_OWORD *)BroadcastContext + 5);
                      v339[4] = v343;
                      v345 = *((_OWORD *)BroadcastContext + 6);
                      v339[5] = v344;
                      v346 = *((_OWORD *)BroadcastContext + 7);
                      BroadcastContext += 32;
                      v339[6] = v345;
                      v339 += 8;
                      *(v339 - 1) = v346;
                      --v335;
                    }
                    while ( v335 );
                    v347 = *(_QWORD *)(v334 + 2920);
                    v402[72] = 0;
                    v402[76] = 0;
                    v402[80] = 4;
                    v348 = OUTPUTDUPL_MGR::ProcessPresent(
                             *(OUTPUTDUPL_MGR **)(v347 + 120),
                             this,
                             (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                             v336,
                             v402[7],
                             (struct _D3DKMT_PRESENT_RGNS *)&v402[72],
                             (const struct DXGK_PRESENT_PARAMS *)a2,
                             (*(_DWORD *)(v31[6].Count + 4) >> 6) & 0xF,
                             v393,
                             v30);
                    if ( v348 == 259 )
                      v348 = 0;
                    LODWORD(v10) = v348;
                  }
                }
              }
            }
            goto LABEL_31;
          }
          DXGPRESENT::CheckOutput(v189, Width, (unsigned int)v386);
          v190 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1880LL);
          if ( !v190 || DXGADAPTER::IsDisplayOnlyAdapter(v190) )
          {
            v193 = a3;
            v196 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (a2->Flags.Value & 0x10) == 0, a3);
            v10 = (struct COREDEVICEACCESS *)v196;
            if ( v196 < 0 )
              goto LABEL_345;
          }
          else
          {
            if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 16LL) )
            {
              WdLogSingleEntry1(1LL, 5148LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"GetDisplayAdapter() == GetRenderAdapter()",
                5148LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v191 = *((_QWORD *)this + 2);
            v192 = 0;
            v193 = a3;
            LODWORD(v377) = 0;
            if ( *(_DWORD *)(v191 + 1888) )
            {
              while ( 1 )
              {
                v194 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v192, (a2->Flags.Value & 0x10) == 0, a3);
                v10 = (struct COREDEVICEACCESS *)v194;
                if ( v194 < 0 )
                  break;
                v195 = *((_QWORD *)this + 2);
                v192 = (_DWORD)v377 + 1;
                LODWORD(v377) = v192;
                if ( v192 >= *(_DWORD *)(v195 + 1888) )
                  goto LABEL_347;
              }
LABEL_345:
              WdLogSingleEntry2(4LL, v10, this);
              goto LABEL_35;
            }
          }
LABEL_347:
          v197 = v193;
          v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
          LODWORD(v10) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 45, v197, 0);
          if ( (int)v10 < 0 )
            goto LABEL_32;
          if ( !*v32 && !*((_BYTE *)this + 442) )
          {
            WdLogSingleEntry1(1LL, 5186LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pPresentDmaBuffer || IsParavirtualized()",
              5186LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGPRESENTMUTEX::DXGPRESENTMUTEX(
            (DXGPRESENTMUTEX *)v394,
            *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
          v18 = (a2->Flags.Value & 0x10000) == 0;
          LODWORD(v386) = 0;
          if ( v18 )
          {
            COREDEVICEACCESS::Release(a3);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v394);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
            v198 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
            LODWORD(v10) = v198;
            if ( v198 < 0 )
            {
              WdLogSingleEntry2(4LL, v198, this);
LABEL_374:
              COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
LABEL_545:
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v394);
              goto LABEL_35;
            }
            LODWORD(v386) = 0;
          }
          else if ( a2->hDestination )
          {
            v199 = *((_QWORD *)v385 + 6);
            v200 = *(_DWORD *)(v199 + 4);
            *(_DWORD *)(v199 + 4) = v200 | 0x400;
            LODWORD(v386) = (v200 & 0x400) == 0;
          }
          v373 = (*(__int64 (**)(void))(*(_QWORD *)&v401.left + 8LL))();
          CurrentThreadId = PsGetCurrentThreadId();
          v387 = CurrentThreadId;
          if ( !*((_BYTE *)this + 442) )
          {
            VIDSCH_EXPORT::VidSchGetMonitorPowerState(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
              *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL));
            CurrentThreadId = v387;
          }
          v202 = *((_QWORD *)this + 19);
          if ( *(_DWORD *)(v202 + 8) != v373
            || *(_DWORD **)(v202 + 56) != CurrentThreadId
            || *(HWND *)(v202 + 48) != a2->hWindow
            || *(_DWORD *)(v202 + 64)
            || (_DWORD)v386
            || (v203 = *(_DWORD *)(v202 + 4), (v203 & 0x108) != 0) )
          {
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v394);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
            COREDEVICEACCESS::Release(a3);
            LODWORD(v10) = CWin32kLocks::Lock(v380, a2->hWindow, HIWORD(a2->Flags.Value) & 1, 1, 0);
            if ( (a2->Flags.Value & 0x10000) == 0
              || (p_FlipInterval = 0LL,
                  (*(void (__fastcall **)(_QWORD, int **))(*(_QWORD *)&v401.left + 232LL))(
                    *(_QWORD *)v380,
                    &p_FlipInterval),
                  *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = p_FlipInterval,
                  (a2->Flags.Value & 0x10000) == 0) )
            {
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v394);
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
            v204 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
            if ( v204 < 0 )
            {
              LODWORD(v10) = v204;
              goto LABEL_374;
            }
            if ( (int)v10 >= 0 )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
              {
                WdLogSingleEntry2(4LL, 0LL, this);
                if ( *v32 )
                {
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                    *v32,
                    0LL);
                  *v32 = 0LL;
                }
                LODWORD(v10) = 0;
                goto LABEL_545;
              }
              v205 = (DXGPRESENT *)*((_QWORD *)this + 19);
              v206 = *(HDC *)v380;
              v207 = (const struct DXGDEVICE *)*((_QWORD *)this + 2);
              v386 = (HDEV)*((_QWORD *)v380 + 2);
              v391 = v206;
              LODWORD(v10) = DXGPRESENT::CheckVisRgn(v205, a2, v206, v386, v207, v379, v378, Color, 1);
              if ( (_DWORD)v10 == 261 )
              {
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v394);
                COREDEVICEACCESS::Release(a3);
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
                if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                  LODWORD(v10) = -1071775738;
                if ( (a2->Flags.Value & 0x10000) == 0 )
                  DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v394);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
                v208 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                LODWORD(v377) = v208;
                if ( v208 < 0 )
                {
                  WdLogSingleEntry1(4LL, v208);
LABEL_544:
                  COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
                  LODWORD(v10) = (_DWORD)v377;
                  goto LABEL_545;
                }
                if ( (_DWORD)v10 != -1071775738 )
                  LODWORD(v10) = DXGPRESENT::CheckVisRgn(
                                   *((DXGPRESENT **)this + 19),
                                   a2,
                                   v391,
                                   v386,
                                   *((const struct DXGDEVICE **)this + 2),
                                   v379,
                                   v378,
                                   Color,
                                   0);
              }
              v209 = *((_QWORD *)this + 19);
              if ( (int)v10 < 0 )
              {
                if ( (*(_BYTE *)(v209 + 4) & 1) != 0 )
                {
                  *(_QWORD *)(v209 + 56) = v387;
                  *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v373;
                }
              }
              else
              {
                *(_QWORD *)(v209 + 56) = v387;
                if ( (a2->Flags.Value & 0x10000) == 0 )
                {
                  *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v373;
                  DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL);
                  v210 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
                  if ( v210 == (*(unsigned int (**)(void))(*(_QWORD *)&v401.left + 8LL))() )
                  {
                    v211 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v373;
                    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3u, 0xFFFFFFFF, 0);
                    v211 = 1;
                  }
                  DXGDEVICE::SynchronizePresentToPrimary(
                    *((DXGDEVICE **)this + 2),
                    this,
                    (struct DXGPRESENTMUTEX *)v394,
                    v211);
                  v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                }
              }
            }
          }
          else if ( (v203 & 1) != 0 )
          {
            LODWORD(v10) = -1071775738;
          }
          else if ( (v203 & 0x10) == 0 && (a2->Flags.Value & 0x10000) == 0 )
          {
            DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)v394, 0);
          }
          v368 = 0;
          v212 = *(_DWORD *)(*((_QWORD *)this + 19) + 4LL);
          if ( (v212 & 0x10) != 0 )
          {
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v394);
            if ( (int)v10 < 0 || (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 2) != 0 )
              goto LABEL_404;
            if ( a2->BroadcastContextCount )
            {
              WdLogSingleEntry1(2LL, 5467LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Present via GDI cannot be broadcasted",
                5467LL,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v10) = -1071774910;
LABEL_404:
              v30 = a3;
LABEL_405:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v394);
LABEL_599:
              if ( *v32 )
              {
                if ( (int)v10 >= 0
                  && (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 0x12) == 16
                  && (*(_BYTE *)&a2->Flags.0 & 2) == 0 )
                {
                  WdLogSingleEntry1(1LL, 6060LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"!NT_SUCCESS(ntStatus) || !m_pPresent->BltViaGDI() || m_pPresent->IsBltEmpty() || pPresent->Flags.ColorFill",
                    6060LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                  *v32,
                  0LL);
                *v32 = 0LL;
              }
              if ( (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 0x80) != 0 )
              {
                if ( (unsigned int)((_DWORD)v10 + 1071775738) > 1 )
                {
                  WdLogSingleEntry1(1LL, 6068LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"ntStatus == STATUS_GRAPHICS_PRESENT_OCCLUDED || ntStatus == STATUS_GRAPHICS_PRESENT_DENIED",
                    6068LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                LODWORD(v10) = 0;
              }
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v394);
              if ( (int)v10 < 0 )
                goto LABEL_31;
              v181 = v371;
              goto LABEL_611;
            }
            if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
            {
              WdLogSingleEntry1(1LL, 5473LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
                5473LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_OWORD *)v402 = 0LL;
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventPerformanceWarning, 0LL, 0);
            v213 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            if ( (*(_WORD *)&v213 & 0x100) != 0 )
            {
              v214 = *((_QWORD *)this + 2);
              v387 = v402;
              *(_OWORD *)v402 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v214 + 1880) + 2920LL) + 128LL)
                                          + 4000LL * a2->VidPnSourceId
                                          + 628);
            }
            else
            {
              v387 = 0LL;
            }
            if ( (*(_BYTE *)&v213 & 1) != 0 )
            {
              if ( *(_BYTE *)&v213 >= 0 )
              {
                v399.SrcRect.bottom = v378;
                right = v379;
                *(_QWORD *)&v399.SrcRect.left = 0LL;
              }
              else
              {
                top = a2->SrcRect.top;
                if ( top < 0 )
                  top = 0;
                v399.SrcRect.top = top;
                left = a2->SrcRect.left;
                if ( left < 0 )
                  left = 0;
                v399.SrcRect.left = left;
                bottom = a2->SrcRect.bottom;
                if ( (int)v378 < bottom )
                  bottom = v378;
                v399.SrcRect.bottom = bottom;
                right = a2->SrcRect.right;
                if ( (int)v379 < right )
                  right = v379;
              }
              v399.SrcRect.right = right;
              v399.DstRect = v399.SrcRect;
              v399.Flags.Value ^= (*(_WORD *)&v399.Flags.0 ^ (unsigned __int16)(*(unsigned int *)&v213 >> 9)) & 0x800;
              if ( !a2->SubRectCnt )
              {
                WdLogSingleEntry1(1LL, 5520LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPresent->SubRectCnt",
                  5520LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( !a2->pSrcSubRects )
              {
                WdLogSingleEntry1(1LL, 5521LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPresent->pSrcSubRects",
                  5521LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              LODWORD(v10) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
              if ( (int)v10 < 0 )
                goto LABEL_404;
              DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
              SubRectCnt = 0LL;
              v399.SubRectCnt = 0;
              v399.pDstSubRects = DdiSubRectList;
              if ( !a2->SubRectCnt )
                goto LABEL_404;
              v221 = 0;
              while ( 1 )
              {
                if ( DXGPRESENT::IntersectRect(&DdiSubRectList[SubRectCnt], &a2->pSrcSubRects[v221], &v399.SrcRect) )
                  SubRectCnt = ++v399.SubRectCnt;
                else
                  SubRectCnt = v399.SubRectCnt;
                if ( ++v221 >= a2->SubRectCnt )
                  break;
                DdiSubRectList = (struct tagRECT *)v399.pDstSubRects;
              }
              v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
              if ( !(_DWORD)SubRectCnt )
                goto LABEL_404;
              v10 = a3;
              if ( DXGPRESENT::PrepareStagingBuffer(
                     *((DXGPRESENT **)this + 19),
                     *((struct DXGDEVICE **)this + 2),
                     a2->hSource,
                     a3,
                     &v375) < 0 )
                goto LABEL_506;
              if ( *((_BYTE *)this + 442) )
              {
                Current = DXGPROCESS::GetCurrent(v222);
                v224 = v375;
                v225 = Current;
                DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
                v226 = (v224 >> 6) & 0xFFFFFF;
                if ( v226 < *((_DWORD *)v225 + 74) )
                {
                  v227 = *((_QWORD *)v225 + 35) + 16LL * v226;
                  if ( ((v224 >> 25) & 0x60) == (*(_BYTE *)(v227 + 8) & 0x60) && (*(_DWORD *)(v227 + 8) & 0x2000) == 0 )
                  {
                    v228 = *(_DWORD *)(v227 + 8) & 0x1F;
                    if ( v228 )
                    {
                      if ( v228 == 5 )
                      {
                        v229 = *(struct _EX_RUNDOWN_REF **)v227;
                        goto LABEL_449;
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
                v229 = 0LL;
LABEL_449:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v389, v229);
                _InterlockedDecrement((volatile signed __int32 *)v225 + 66);
                ExReleasePushLockSharedEx((char *)v225 + 248, 0LL);
                KeLeaveCriticalRegion();
                v230 = v389;
                if ( !v389 )
                {
                  WdLogSingleEntry1(1LL, 5553LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"AllocRef.m_pAllocation != NULL",
                    5553LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v230 = v389;
                }
                v231 = *((_QWORD *)this + 2);
                Ptr_high = HIDWORD(v230[2].Ptr);
                pPrivateDriverData = (unsigned __int8 *)a2->pPrivateDriverData;
                PrivateDriverDataSize = a2->PrivateDriverDataSize;
                v235 = *((_DWORD *)v376 + 5);
                v236 = *(_QWORD *)(*(_QWORD *)(v231 + 16) + 16LL);
                v237 = DXGPROCESS::GetCurrent(v231);
                v238 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v236 + 4472),
                         v237,
                         this,
                         v235,
                         Ptr_high,
                         &v399.SrcRect,
                         &v399.DstRect,
                         v399.SubRectCnt,
                         v399.pDstSubRects,
                         PrivateDriverDataSize,
                         pPrivateDriverData);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v389);
                v9 = *(struct DXGADAPTERSTOPRESETLOCKSHARED **)&Source1.left;
                v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                v10 = a3;
LABEL_471:
                if ( v238 >= 0 )
                {
                  v253 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  v369 = 0;
                  if ( (a2->Flags.Value & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v253 + 235) + 2920LL),
                         v253,
                         a2->VidPnSourceId) )
                  {
                    v369 = 1;
                  }
                  else if ( !DXGDEVICE::AllowLegacyPresent(v253, 0) )
                  {
                    DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
                    COREDEVICEACCESS::Release(v10);
                    v369 = 0;
                    if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                    {
                      v30 = a3;
                      COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
                      LODWORD(v10) = -1071775738;
                      goto LABEL_405;
                    }
                    goto LABEL_476;
                  }
                  DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
                  COREDEVICEACCESS::Release(v10);
LABEL_476:
                  CWin32kLocks::Unlock(v380);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
                  v255 = COREDEVICEACCESS::AcquireShared(v10, 0LL);
                  if ( v255 < 0 )
                  {
                    COREDEVICEACCESS::AcquireSharedUncheck(v10, 0LL);
                    LODWORD(v10) = v255;
                    goto LABEL_545;
                  }
                  v18 = *((_BYTE *)this + 442) == 0;
                  memset(&v403, 0, sizeof(v403));
                  if ( v18 )
                  {
                    v259 = v375;
                    if ( !v375 )
                    {
                      WdLogSingleEntry1(1LL, 5644LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"hDestinationAllocation",
                        5644LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      v259 = v375;
                    }
                    v260 = (DXGDEVICE *)*((_QWORD *)this + 2);
                    HIDWORD(v403.hAllocation) = v259;
                    LODWORD(v10) = DXGDEVICE::Lock(v260, (struct _D3DKMT_LOCK *)&v403, v10);
                  }
                  else
                  {
                    v256 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                    memset(&v395, 0, sizeof(v395));
                    v395.hAllocation = v375;
                    v257 = *(_QWORD *)(*((_QWORD *)v256 + 2) + 16LL);
                    v258 = DXGPROCESS::GetCurrent(v254);
                    LODWORD(v10) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v257 + 4472),
                                     v258,
                                     v256,
                                     &v395,
                                     0,
                                     0,
                                     0);
                    v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                    *(_QWORD *)&v403.MultisampleMethod.NumQualityLevels = v395.pData;
                  }
                  if ( (int)v10 >= 0 )
                  {
                    DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
                    COREDEVICEACCESS::Release(a3);
                    if ( !*(_QWORD *)&v403.MultisampleMethod.NumQualityLevels )
                    {
                      WdLogSingleEntry1(1LL, 5657LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"LockData.pData",
                        5657LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                    {
                      WdLogSingleEntry1(1LL, 5658LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
                        5658LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v261 = *(_QWORD *)&v401.left;
                    v18 = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)&v401.left + 304LL))(0LL) == 0;
                    v262 = v369;
                    if ( v18 )
                      v262 = 0;
                    LODWORD(v10) = CWin32kLocks::Lock(v380, a2->hWindow, 0, 0, v262);
                    if ( (int)v10 >= 0 )
                    {
                      v263 = *(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, HDC, _DWORD *, const RECT *, _QWORD, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v261 + 144);
                      v264 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                      v265 = a2->Color;
                      v266 = (a2->Flags.Value & 0x200) != 0;
                      v267 = CWin32kLocks::hDestDc(v380);
                      LOBYTE(v356) = v266;
                      LOBYTE(v354) = 0;
                      if ( !v263(
                              a2,
                              v267,
                              v387,
                              v399.pDstSubRects,
                              *(_QWORD *)&v403.MultisampleMethod.NumQualityLevels,
                              v264,
                              v379,
                              v378,
                              v354,
                              v356,
                              v265,
                              DXGPRESENT::XformRect,
                              DXGPRESENT::ClipRects) )
                      {
                        WdLogSingleEntry2(4LL, -1071775737LL, this);
                        LODWORD(v10) = -1071775737;
                      }
                      v9 = *(struct DXGADAPTERSTOPRESETLOCKSHARED **)&Source1.left;
                      v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                    }
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
                    v269 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                    if ( v269 < 0 )
                    {
                      COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
                      LODWORD(v10) = v269;
                      goto LABEL_545;
                    }
                    v270 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                    if ( *((_BYTE *)this + 442) )
                    {
                      Source1.left = 0;
                      Source1.top = v375;
                      v271 = *(_QWORD *)(*((_QWORD *)v270 + 2) + 16LL);
                      v272 = DXGPROCESS::GetCurrent(v268);
                      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v271 + 4472),
                        v272,
                        v270,
                        (struct _D3DKMT_UNLOCK2 *)&Source1,
                        0);
                      v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                    }
                    else
                    {
                      *(_QWORD *)&Source1.left = 0x100000000LL;
                      *(_QWORD *)&Source1.right = (char *)&v403.hAllocation + 4;
                      DXGDEVICE::Unlock(v270, (const struct _D3DKMT_UNLOCK *)&Source1, 0);
                    }
                    if ( (int)v10 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                    {
                      a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                      a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                      a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                      a2->PresentHistoryToken.TokenSize = 48;
                      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v394);
                      v273 = v9;
                      v30 = a3;
                      LODWORD(v10) = SubmitPresentHistoryToken(
                                       &a2->PresentHistoryToken,
                                       a3,
                                       v273,
                                       v380,
                                       0,
                                       0LL,
                                       (struct DXGK_PRESENT_PARAMS *)a2,
                                       0LL,
                                       this,
                                       0LL,
                                       0LL);
                      v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                      goto LABEL_405;
                    }
                  }
                  goto LABEL_404;
                }
LABEL_506:
                WdLogSingleEntry2(3LL, -1071775738LL, this);
                LODWORD(v10) = -1071775738;
                goto LABEL_404;
              }
              v239 = v375;
              if ( !v375 )
              {
                WdLogSingleEntry1(1LL, 5567LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"hDestinationAllocation",
                  5567LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v239 = v375;
              }
              if ( bTracingEnabled )
              {
                v240 = (HDC)VIDMM_EXPORT::VidMmETWAllocationHandle(
                              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                              v239);
                v241 = *((_QWORD *)this + 2);
                v391 = v240;
                v242 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(v241 + 16) + 760LL),
                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v241 + 16) + 768LL),
                         hSource);
                hWindow = a2->hWindow;
                p_FlipInterval = (int *)*v32;
                pDstSubRects = (struct _EX_RUNDOWN_REF *)v399.pDstSubRects;
                v244 = v399.SubRectCnt;
                LODWORD(v377) = v399.SubRectCnt;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(v353) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    hWindow,
                    p_FlipInterval,
                    0LL,
                    v242,
                    v391,
                    v353,
                    0,
                    v399.Flags.Value,
                    v399.SrcRect.left,
                    v399.SrcRect.right,
                    v399.SrcRect.top,
                    v399.SrcRect.bottom,
                    v399.DstRect.left,
                    v399.DstRect.right,
                    v399.DstRect.top,
                    v399.DstRect.bottom,
                    v399.SubRectCnt);
                  v244 = (unsigned int)v377;
                }
                if ( v244 )
                {
                  v245 = p_FlipInterval;
                  v246 = 0;
                  v247 = pDstSubRects;
                  while ( 1 )
                  {
                    v248 = 0;
                    v249 = v244 - v246;
                    if ( v244 - v246 > 0x10 )
                      break;
                    v250 = v244 - v246;
                    if ( v249 )
                      goto LABEL_463;
LABEL_465:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    {
                      LODWORD(v351) = v250;
                      LODWORD(v350) = v249 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                        (__int64)&DxgkControlGuid_Context,
                        (__int64)&EventBlitRect,
                        0LL,
                        v245,
                        v350,
                        v351,
                        v405,
                        v407,
                        v408,
                        v409);
                      v247 = pDstSubRects;
                    }
                    v244 = (unsigned int)v377;
                    v246 += 16;
                    if ( v246 >= (unsigned int)v377 )
                    {
                      v8 = (struct VIDSCH_SUBMIT_DATA_BASE *)v389;
                      v9 = *(struct DXGADAPTERSTOPRESETLOCKSHARED **)&Source1.left;
                      goto LABEL_469;
                    }
                  }
                  v250 = 16;
LABEL_463:
                  v251 = 0LL;
                  do
                  {
                    v252 = v248 + v246;
                    ++v248;
                    v252 *= 2LL;
                    v251 += 4LL;
                    v405[v251 / 4 - 1] = v247[v252].Count;
                    *(_DWORD *)&v407[v251 - 4] = v247[v252 + 1].Count;
                    *(_DWORD *)&v407[v251 + 60] = HIDWORD(v247[v252].Ptr);
                    *(_DWORD *)&v408[v251 + 60] = HIDWORD(v247[v252 + 1].Ptr);
                  }
                  while ( v248 < v250 );
                  goto LABEL_465;
                }
LABEL_469:
                v239 = v375;
                v371 = 1;
              }
              v238 = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (struct DXGHWQUEUE **)a2[1].hWindow,
                       a2->BroadcastContextCount,
                       v393,
                       v376,
                       hSource,
                       v239,
                       &v399,
                       0LL,
                       *v32,
                       v8,
                       Color,
                       a3);
              *v32 = 0LL;
              goto LABEL_471;
            }
            if ( (*(_BYTE *)&v213 & 2) == 0 )
              goto LABEL_404;
            v274 = (DXGDEVICE *)*((_QWORD *)this + 2);
            v275 = 0;
            if ( (*(_WORD *)&v213 & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*((_QWORD *)v274 + 235) + 2920LL),
                   *((const struct DXGDEVICE **)this + 2),
                   a2->VidPnSourceId) )
            {
              v275 = 1;
            }
            else if ( !DXGDEVICE::AllowLegacyPresent(v274, 0) )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
              COREDEVICEACCESS::Release(a3);
              if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
              {
                LODWORD(v10) = -1071775738;
                goto LABEL_519;
              }
LABEL_512:
              if ( (a2->Flags.Value & 0x10000) != 0 )
              {
                WdLogSingleEntry1(1LL, 5778LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"!pPresent->Flags.RedirectedBlt",
                  5778LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v276 = v380;
              CWin32kLocks::Unlock(v380);
              v277 = *(_QWORD *)&v401.left;
              v18 = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)&v401.left + 304LL))(0LL) == 0;
              v278 = v275;
              if ( v18 )
                v278 = 0;
              v279 = CWin32kLocks::Lock(v276, a2->hWindow, 0, 0, v278);
              v280 = *(unsigned int (__fastcall **)(HDC, _DWORD *, const RECT *, _QWORD, UINT))(v277 + 152);
              LODWORD(v10) = v279;
              v281 = a2->Color;
              v282 = a2->SubRectCnt;
              v283 = a2->pSrcSubRects;
              v284 = CWin32kLocks::hDestDc(v380);
              if ( !v280(v284, v387, v283, v282, v281) )
              {
                WdLogSingleEntry2(4LL, -1071775737LL, this);
                LODWORD(v10) = -1071775737;
              }
              v9 = *(struct DXGADAPTERSTOPRESETLOCKSHARED **)&Source1.left;
              v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
LABEL_519:
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
              v30 = a3;
              v285 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
              v286 = v285;
              if ( v285 < 0 )
              {
                WdLogSingleEntry2(4LL, v285, this);
                COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
                LODWORD(v10) = v286;
                goto LABEL_545;
              }
              goto LABEL_405;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
            COREDEVICEACCESS::Release(a3);
            goto LABEL_512;
          }
          if ( (int)v10 < 0 || (v212 & 2) != 0 )
          {
LABEL_596:
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v394);
            if ( v368 )
            {
              CWin32kLocks::Unlock(v380);
              v30 = a3;
              COREDEVICEACCESS::Release(a3);
              DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 7LL, 4294967293LL);
              LODWORD(v10) = COREDEVICEACCESS::AcquireShared(a3, 0LL);
            }
            else
            {
              v30 = a3;
            }
            goto LABEL_599;
          }
          if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)&v401.left + 224LL))(0LL, 0LL, 0LL) )
          {
            if ( (a2->Flags.Value & 0x12100) != 0x10000 )
            {
              WdLogSingleEntry1(1LL, 5816LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"((pPresent->Flags.RedirectedBlt) && (!pPresent->Flags.RestrictVidPnSource) && (!pPresent->Flags.Rotate))",
                5816LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) && (a2->Flags.Value & 0x4000000) == 0 )
          {
            WdLogSingleEntry1(1LL, 5821LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"GetDisplayAdapter() != NULL || pPresent->Flags.CrossAdapter",
              5821LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (a2->Flags.Value & 0x10000) != 0 )
          {
            p_FlipInterval = *(int **)v380;
            v288 = DXGPROCESS::GetCurrent(v287);
            v289 = (HDC)DXGPROCESS::GetWin32kInterface(v288);
            v391 = v289;
            if ( p_FlipInterval )
            {
              if ( v289
                && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
                COREDEVICEACCESS::Release(a3);
                memset(v398, 0, 0x228uLL);
                DdiSubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
                v291 = (DXGPRESENT *)*((_QWORD *)this + 19);
                LODWORD(v398[0]) = DdiSubRectCnt;
                v292 = DXGPRESENT::GetDdiSubRectList(v291, 0);
                BroadcastContextCount = a2->BroadcastContextCount;
                v398[1] = v292;
                v398[3] = *((unsigned int *)this + 6);
                v294 = 1LL;
                LODWORD(v398[2]) = 1;
                if ( BroadcastContextCount )
                {
                  v295 = a2->BroadcastContext;
                  v296 = BroadcastContextCount;
                  do
                  {
                    v297 = *v295++;
                    v398[v294 + 3] = v297;
                    v294 = (unsigned int)++LODWORD(v398[2]);
                    --v296;
                  }
                  while ( v296 );
                }
                if ( !*((_BYTE *)this + 442)
                  && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                     *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                     *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 800LL)) )
                {
                  v368 = 1;
                  LOBYTE(v398[68]) = 1;
                }
                (*((void (__fastcall **)(int *, _QWORD *))v391 + 30))(p_FlipInterval, v398);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
                v298 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                LODWORD(v377) = v298;
                if ( v298 < 0 )
                {
                  WdLogSingleEntry2(4LL, v298, this);
                  goto LABEL_544;
                }
              }
            }
          }
          for ( i = 0; ; i = v374 + 1 )
          {
            v374 = i;
            if ( (a2->Flags.Value & 0x10000) != 0 )
              v300 = 1;
            else
              v300 = *(_DWORD *)(*((_QWORD *)this + 2) + 1888LL);
            if ( i >= v300 )
              goto LABEL_596;
            v399.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), i);
            if ( v399.SubRectCnt )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 )
              {
                v302 = v375;
              }
              else
              {
                v301 = *((_BYTE *)this + 440) || *((_BYTE *)this + 441);
                v302 = DXGDEVICE::OpenCddPrimaryHandle(*((DXGDEVICE **)this + 2), v374, v301, *((_DWORD *)this + 100));
                v375 = v302;
              }
              if ( v302 )
              {
                v303 = v374;
                v304 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), v374);
                v18 = (a2->Flags.Value & 0x2000) == 0;
                v399.pDstSubRects = v304;
                if ( !v18 )
                {
                  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
                                         v374,
                                         1);
                  v306 = 0;
                  if ( CurrentOrientation != 1 )
                    v306 = 128;
                  v399.Flags.Value = v306 | v399.Flags.Value & 0xFFFFFF7F;
                }
                v18 = (a2->Flags.Value & 0x10000) == 0;
                v401 = 0LL;
                if ( v18 )
                  v307 = (struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL)
                                                      + 128LL)
                                          + 4000LL * v374
                                          + 628);
                else
                  v307 = &v401;
                v308 = (RECT *)*((_QWORD *)this + 19);
                v399.SrcRect = v308[9];
                DXGPRESENT::GetDdiDstRect((DXGPRESENT *)v308, &v399.DstRect, v307);
                if ( bTracingEnabled && *v32 )
                {
                  v309 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                           *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                           v375);
                  v310 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                           *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                           hSource);
                  v311 = a2->hWindow;
                  p_FlipInterval = (int *)*v32;
                  pDstSubRects = (struct _EX_RUNDOWN_REF *)v399.pDstSubRects;
                  v312 = v399.SubRectCnt;
                  LODWORD(v377) = v399.SubRectCnt;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                  {
                    LODWORD(v367) = v399.SubRectCnt;
                    LODWORD(v366) = v399.DstRect.bottom;
                    LODWORD(v365) = v399.DstRect.top;
                    LODWORD(v364) = v399.DstRect.right;
                    LODWORD(v363) = v399.DstRect.left;
                    LODWORD(v362) = v399.SrcRect.bottom;
                    LODWORD(v361) = v399.SrcRect.top;
                    v359[0] = (enum _D3DDDIFORMAT)v399.SrcRect.right;
                    LODWORD(v358) = v399.SrcRect.left;
                    LODWORD(v357) = v399.Flags.0;
                    LODWORD(v355) = 0;
                    LODWORD(v353) = 1;
                    McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                      (__int64)&DxgkControlGuid_Context,
                      (__int64)&EventBlit,
                      0LL,
                      v311,
                      p_FlipInterval,
                      0LL,
                      v310,
                      v309,
                      v353,
                      v355,
                      v357,
                      v358,
                      *(_QWORD *)v359,
                      v361,
                      v362,
                      v363,
                      v364,
                      v365,
                      v366,
                      v367);
                    v312 = (unsigned int)v377;
                  }
                  v313 = 0;
                  if ( v312 )
                  {
                    v314 = p_FlipInterval;
                    v315 = pDstSubRects;
                    while ( 1 )
                    {
                      v316 = 0;
                      v317 = v312 - v313;
                      if ( v312 - v313 > 0x10 )
                        break;
                      v318 = v312 - v313;
                      if ( v317 )
                        goto LABEL_576;
LABEL_578:
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      {
                        LODWORD(v351) = v318;
                        LODWORD(v349) = v317 <= 0x10;
                        McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                          (__int64)&DxgkControlGuid_Context,
                          (__int64)&EventBlitRect,
                          0LL,
                          v314,
                          v349,
                          v351,
                          v407,
                          v408,
                          v409,
                          v405);
                        v315 = pDstSubRects;
                      }
                      v312 = (unsigned int)v377;
                      v313 += 16;
                      if ( v313 >= (unsigned int)v377 )
                      {
                        v9 = *(struct DXGADAPTERSTOPRESETLOCKSHARED **)&Source1.left;
                        goto LABEL_582;
                      }
                    }
                    v318 = 16;
LABEL_576:
                    v319 = 0LL;
                    do
                    {
                      v320 = v316 + v313;
                      ++v316;
                      v320 *= 2LL;
                      v319 += 4LL;
                      *(_DWORD *)&v407[v319 - 4] = v315[v320].Count;
                      *(_DWORD *)&v407[v319 + 60] = v315[v320 + 1].Count;
                      *(_DWORD *)&v408[v319 + 60] = HIDWORD(v315[v320].Ptr);
                      v405[v319 / 4 - 1] = SHIDWORD(v315[v320 + 1].Ptr);
                    }
                    while ( v316 < v318 );
                    goto LABEL_578;
                  }
LABEL_582:
                  v303 = v374;
                  v371 = 1;
                }
                if ( *((_BYTE *)this + 442) )
                {
                  v321 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                  v322 = *(_QWORD *)(v321 + 16);
                  v323 = *((_DWORD *)v385 + 5);
                  v324 = *((_DWORD *)v376 + 5);
                  v325 = DXGPROCESS::GetCurrent(v321);
                  v326 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v322 + 4472),
                           v325,
                           this,
                           v324,
                           v323,
                           &v399.SrcRect,
                           &v399.DstRect,
                           v399.SubRectCnt,
                           v399.pDstSubRects,
                           v399.PrivateDriverDataSize,
                           (unsigned __int8 *)v399.pPrivateDriverData);
                  v8 = (struct VIDSCH_SUBMIT_DATA_BASE *)v389;
                  v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                  v9 = *(struct DXGADAPTERSTOPRESETLOCKSHARED **)&Source1.left;
                }
                else
                {
                  v360 = Color;
                  *((_DWORD *)v8 + 29) = v303;
                  v326 = DXGCONTEXT::SubmitPresent(
                           this,
                           a2,
                           (struct DXGHWQUEUE **)a2[1].hWindow,
                           a2->BroadcastContextCount,
                           v393,
                           v376,
                           hSource,
                           v375,
                           &v399,
                           0LL,
                           *v32,
                           v8,
                           v360,
                           a3);
                }
                *v32 = 0LL;
                LODWORD(v10) = v326;
                if ( (a2->Flags.Value & 0x10000) != 0
                  && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                {
                  v327 = v399.SubRectCnt;
                  a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                  a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                  if ( (unsigned int)v327 <= 0x10 )
                  {
                    a2->PresentHistoryToken.Token.Flip.VidPnSourceId = v327;
                    if ( (_DWORD)v327 )
                    {
                      v329 = v399.pDstSubRects;
                      v330 = (char *)&a2->PresentHistoryToken - (char *)v399.pDstSubRects;
                      v331 = v327;
                      do
                      {
                        v332 = (__int128)*v329++;
                        *(_OWORD *)((char *)&v329[1].bottom + v330) = v332;
                        --v331;
                      }
                      while ( v331 );
                    }
                  }
                  else
                  {
                    DstRect = v399.DstRect;
                    a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                    a2->PresentHistoryToken.Token.Blt.DirtyRegions.Rects[0] = DstRect;
                  }
                  a2->PresentHistoryToken.TokenSize = 16 * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v394);
                  LODWORD(v10) = SubmitPresentHistoryToken(
                                   &a2->PresentHistoryToken,
                                   a3,
                                   v9,
                                   v380,
                                   0,
                                   0LL,
                                   (struct DXGK_PRESENT_PARAMS *)a2,
                                   0LL,
                                   this,
                                   0LL,
                                   0LL);
                }
                if ( (int)v10 < 0 )
                  goto LABEL_596;
              }
            }
          }
        }
      }
      else if ( pSrcSubRects )
      {
        v185 = a2->SubRectCnt;
        if ( (_DWORD)v185 )
        {
          if ( v24 && Height && ((unsigned __int16)Value & 0x802E) == 0 )
          {
            v186 = ((unsigned int)Value >> 10) & 1;
            if ( (((unsigned int)Value >> 9) & 1) != 0 )
            {
              if ( (((unsigned int)Value >> 9) & 1) == v186 )
              {
                LODWORD(v10) = -1073741811;
                WdLogSingleEntry5(3LL, -1073741811LL, this, pSrcSubRects, v185, Value);
                goto LABEL_35;
              }
            }
            else if ( !v186 )
            {
              goto LABEL_333;
            }
            if ( ((unsigned __int16)Value & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
                   *((const struct DXGDEVICE **)this + 2),
                   a2->VidPnSourceId) )
            {
              Height = v378;
              goto LABEL_333;
            }
            Value = (struct DXGALLOCATION *)a2->Flags.Value;
            pSrcSubRects = a2->pSrcSubRects;
          }
        }
      }
      v140 = a2->SubRectCnt;
      LODWORD(v10) = -1073741811;
      v352 = -1073741811LL;
      v142 = (__int64)this;
      goto LABEL_627;
    }
    if ( v27 )
      goto LABEL_110;
    if ( ((unsigned int)Value & 0x10A7C3) != 0 )
    {
      v131 = a2->Flags.Value;
      goto LABEL_308;
    }
    if ( ((unsigned int)Value & 0x10000000) != 0 )
    {
      Count = v26[5].Count;
      if ( !Count || !*(_QWORD *)(Count + 56) )
      {
        WdLogSingleEntry1(2LL, 4425LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Expecting indirect display presents to be a shared surface",
          4425LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_192;
      }
      v127 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1880LL);
      if ( !v127
        || !DXGADAPTER::IsDisplayAdapter(v127)
        || (v128 = *((_QWORD *)this + 2),
            LODWORD(v36) = a2->VidPnSourceId,
            LODWORD(v380) = v36,
            (unsigned int)v36 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v128 + 1880) + 2920LL) + 96LL)) )
      {
        WdLogSingleEntry1(2LL, a2->VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"An invalid VidPn source ID was supplied to an indirect present (%I64d)",
          a2->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_192;
      }
      v26 = (struct _EX_RUNDOWN_REF *)v376;
    }
    else
    {
      v34 = v26[6].Count;
      v35 = *(_DWORD *)(v34 + 4);
      if ( (v35 & 0x2003) == 0 )
      {
        v58 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v26, v34, a2->hSource);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x",
          -1073741811LL,
          (__int64)this,
          (__int64)v376,
          *((_QWORD *)v376 + 6),
          a2->hSource);
        goto LABEL_67;
      }
      LODWORD(v36) = (v35 >> 6) & 0xF;
      LODWORD(v380) = v36;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1, v26);
    DXGALLOCATIONREFERENCE::MoveAssign(&v392, (struct _EX_RUNDOWN_REF **)&Source1);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&Source1);
    v388 = a2->hSource;
    v37 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1880LL);
    if ( !v37
      || !DXGADAPTER::IsDisplayAdapter(v37)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL)
                                                                     + 2920LL)) )
    {
      WdLogSingleEntry1(1LL, 4466LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL"
                  ") && GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisp"
                  "layCore()->IsCoreResourceSharedOwner()",
        4466LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v38 = *((_QWORD *)v376 + 6);
    v39 = *(_DWORD *)(v38 + 4);
    if ( (v39 & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 424LL) & 4) == 0 )
    {
      v58 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v376, v38, a2->hSource);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x 0x%I64x DirectFlip Presents are only supported from the DWM process 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)this,
        (__int64)v376,
        *((_QWORD *)v376 + 6),
        a2->hSource);
      goto LABEL_67;
    }
    if ( (a2->Flags.Value & 0x60000) == 0 )
      goto LABEL_47;
    if ( (a2->Flags.Value & 0x60000) == 0x60000 )
    {
      WdLogSingleEntry1(2LL, 4485LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
        4485LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else if ( (v39 & 0x1000) != 0 )
    {
      v129 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
                           v36)
             + 10);
      if ( (v129 & 0x10) == 0 )
      {
        WdLogSingleEntry1(3LL, 4498LL);
        v58 = -1071775739;
        goto LABEL_67;
      }
      v130 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
      if ( (v129 & 0x20) == 0 && (*(_DWORD *)&v130 & 0x40000) != 0 )
      {
        WdLogSingleEntry1(3LL, 4504LL);
        v58 = -1071775739;
        goto LABEL_67;
      }
      if ( (*(_DWORD *)&v130 & 0xC0000) != 0xC0000 )
      {
LABEL_47:
        if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
          goto LABEL_63;
        v40 = *(_DWORD *)a7 ^ (a2->Flags.Value ^ *(_DWORD *)a7) & 4;
        *(_DWORD *)a7 = v40;
        v41 = (a2->Flags.Value ^ v40) & 8 ^ v40;
        *(_DWORD *)a7 = v41;
        v42 = ((unsigned __int8)v41 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v41;
        *(_DWORD *)a7 = v42;
        v43 = (v42 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v42;
        *(_DWORD *)a7 = v43;
        v44 = (v43 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v43;
        *(_DWORD *)a7 = v44;
        v45 = v44 ^ (v44 ^ (4 * a2->Flags.Value)) & 0x200000;
        *(_DWORD *)a7 = v45;
        if ( (a2->Flags.Value & 0x8000000) != 0 )
          Duration = a2->Duration;
        else
          Duration = 0;
        *((_DWORD *)a7 + 36) = Duration;
        *(_DWORD *)a7 = v45 ^ (a2->Flags.Value ^ v45) & 0x20000000;
        v399.Flags.Value = a2->Flags.Value & 4 | v399.Flags.Value & 0xFFFFF8FB | (a2->Flags.Value >> 9) & 0x700;
        pPresentRegions = a2->pPresentRegions;
        if ( pPresentRegions
          && !pPresentRegions->MoveRectCount
          && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 424LL) & 4) != 0 )
        {
          v399.SubRectCnt = pPresentRegions->DirtyRectCount;
          v399.pDstSubRects = pPresentRegions->pDirtyRects;
        }
        v48 = *((_QWORD *)this + 2);
        v49 = *(_QWORD *)(v48 + 16);
        v50 = *(_QWORD *)(v48 + 800);
        v51 = *(_QWORD *)(v49 + 736);
        p_FlipInterval = (int *)&a2->FlipInterval;
        DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(v51, v50, v36, (__int64)&a2->FlipInterval);
        *((_DWORD *)a7 + 30) = DeviceFlipMode;
        if ( DeviceFlipMode )
        {
          v53 = &a2->FlipInterval;
          if ( ((DeviceFlipMode - 1) & 0xFFFFFFFD) != 0 )
          {
            v399.FlipInterval = *v53;
            if ( DeviceFlipMode == 2 )
            {
LABEL_58:
              *((D3DDDI_FLIPINTERVAL_TYPE *)a7 + 31) = *v53;
              *((_DWORD *)a7 + 29) = v36;
              DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v36);
              if ( !DisplayedPrimary )
              {
LABEL_59:
                *(_DWORD *)a7 &= ~0x400000u;
                goto LABEL_60;
              }
              v65 = *((_QWORD *)DisplayedPrimary + 6);
              if ( (*(_DWORD *)(*((_QWORD *)v376 + 6) + 4LL) & 0x2000) != 0 )
              {
                if ( (*(_DWORD *)(v65 + 4) & 0x2000) != 0 )
                  goto LABEL_59;
                *(_DWORD *)a7 |= 0x400000u;
              }
              else
              {
                if ( (*(_DWORD *)(v65 + 4) & 0x2000) == 0 )
                  goto LABEL_59;
                *(_DWORD *)a7 |= 0x400000u;
              }
LABEL_60:
              v55 = *((_DWORD *)a7 + 30);
              if ( !v55 )
                goto LABEL_63;
              v56 = *((_QWORD *)this + 2);
              if ( v55 == *(_DWORD *)(v56 + 4LL * (unsigned int)v36 + 1816) )
                goto LABEL_63;
              WdLogSingleEntry1(4LL, v56);
              COREDEVICEACCESS::Release(v10);
              DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 3LL, 4294967293LL);
              v57 = COREDEVICEACCESS::AcquireShared(v10, 0LL);
              v58 = v57;
              if ( v57 >= 0 )
                goto LABEL_63;
              WdLogSingleEntry1(4LL, v57);
              COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
              goto LABEL_67;
            }
          }
          else
          {
            v399.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
          }
          v399.Flags.Value |= 8u;
          goto LABEL_58;
        }
        v131 = *p_FlipInterval;
LABEL_308:
        v58 = -1073741811;
        WdLogSingleEntry3(3LL, this, v131, -1073741811LL);
        goto LABEL_67;
      }
      WdLogSingleEntry1(2LL, 4510LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
        4510LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 4491LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_INVALID_PARAMETER",
        4491LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_192:
    v58 = -1073741811;
    goto LABEL_67;
  }
LABEL_110:
  v80 = a2->pSrcSubRects;
  if ( !v80
    || (v81 = a2->SubRectCnt, !(_DWORD)v81)
    || ((unsigned __int8)Value & 3) == 0
    || ((unsigned int)Value & 0x100E803C) != 0 )
  {
    v82 = a2->SubRectCnt;
    goto LABEL_181;
  }
  if ( ((unsigned __int8)Value & 2) != 0 )
  {
    if ( ((unsigned int)Value & 0x100681) != 0 )
    {
LABEL_116:
      v82 = a2->SubRectCnt;
LABEL_181:
      v74 = -1073741811;
      WdLogSingleEntry5(3LL, this, v80, v82, (unsigned int)Value, -1073741811LL);
      goto LABEL_182;
    }
  }
  else
  {
    if ( !v24 || !Height || ((unsigned __int8)Value & 0x82) != 0x80 )
      goto LABEL_116;
    if ( ((unsigned __int16)Value & 0x600) == 0x600 )
    {
      v74 = -1073741811;
      WdLogSingleEntry5(3LL, -1073741811LL, this, v80, v81, (unsigned int)Value);
      goto LABEL_182;
    }
  }
  v83 = *((_QWORD *)v385 + 6);
  v84 = *(_DWORD *)(v83 + 4);
  if ( (v84 & 3) == 0 )
  {
    v74 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v385, v83, a2->hDestination);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x destination must be primary 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)v385,
      *((_QWORD *)v385 + 6),
      a2->hDestination);
    goto LABEL_182;
  }
  v85 = *((_QWORD *)this + 2);
  v36 = (v84 >> 6) & 0xF;
  LODWORD(v380) = v36;
  v86 = *(DXGADAPTER **)(v85 + 1880);
  if ( !v86
    || !DXGADAPTER::IsDisplayAdapter(v86)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL)) )
  {
    WdLogSingleEntry1(1LL, 4174LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL) "
                "&& GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisplayC"
                "ore()->IsCoreResourceSharedOwner()",
      4174LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v87 = (struct _EX_RUNDOWN_REF *)v385;
  *((_DWORD *)a7 + 29) = v36;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1, v87);
  DXGALLOCATIONREFERENCE::MoveAssign(&v392, (struct _EX_RUNDOWN_REF **)&Source1);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&Source1);
  v88 = a2->hDestination;
  v89 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  v388 = v88;
  if ( (*(_BYTE *)&v89 & 1) == 0 )
  {
    v399.DstRect.right = Width;
    v399.DstRect.bottom = (int)v386;
    if ( (*(_BYTE *)&v89 & 0x40) != 0 )
    {
      v117 = a2->DstRect.left;
      v118 = a2->DstRect.right;
      if ( (int)v118 <= (int)v117 || (v119 = a2->DstRect.bottom, v119 <= a2->DstRect.top) || (int)v118 <= 0 || v119 <= 0 )
      {
        v74 = -1073741811;
        WdLogSingleEntry5(3LL, -1073741811LL, v117, a2->DstRect.top, v118, a2->DstRect.bottom);
        goto LABEL_182;
      }
      if ( !DXGPRESENT::IntersectRect(&v399.DstRect, &a2->DstRect, &v399.DstRect) )
      {
LABEL_183:
        v58 = v13;
        goto LABEL_67;
      }
    }
    v98 = a2->SubRectCnt;
    v120 = 0LL;
    LODWORD(v377) = 0;
    if ( !v98 )
    {
LABEL_176:
      v116 = v399.DstRect;
      v115 = v399.Flags.Value;
      v399.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_177;
    }
    while ( 1 )
    {
      v121 = a2->pSrcSubRects;
      pDstSubRects = v120;
      v122 = (struct _EX_RUNDOWN_REF *)(16LL * (_QWORD)v120);
      p_FlipInterval = (int *)(16LL * (_QWORD)v120);
      Source1 = 0LL;
      if ( !DXGPRESENT::IntersectRect(&Source1, &v121[(_QWORD)v120], &v399.DstRect)
        || RtlCompareMemory(&Source1, (char *)v122 + (unsigned __int64)a2->pSrcSubRects, 0x10uLL) != 16 )
      {
        break;
      }
      v98 = a2->SubRectCnt;
      v120 = (struct _EX_RUNDOWN_REF *)(unsigned int)((_DWORD)v377 + 1);
      LODWORD(v377) = (_DWORD)v120;
      if ( (unsigned int)v120 >= v98 )
        goto LABEL_176;
    }
    v58 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, a2->DstRect.left, a2->DstRect.top, a2->DstRect.right, a2->DstRect.bottom);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
      -1073741811LL,
      a2->DstRect.left,
      a2->DstRect.top,
      a2->DstRect.right,
      a2->DstRect.bottom);
    v125 = pDstSubRects;
    WdLogSingleEntry5(
      2LL,
      pDstSubRects,
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects),
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 4),
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 8),
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 12));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SubRect 0x%I64x is invalid 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
      (__int64)v125,
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects),
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 4),
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 8),
      *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 12));
LABEL_67:
    v13 = v58;
    goto LABEL_68;
  }
  v90 = v385;
  if ( v385 == v376 )
  {
    v74 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v376, a2->hSource, v88);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x Source and destination must be different 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)v376,
      a2->hSource,
      a2->hDestination);
    goto LABEL_182;
  }
  v91 = *(unsigned int *)(*((_QWORD *)v376 + 6) + 4LL);
  if ( (v91 & 3) != 0 && (((unsigned int)v91 >> 6) & 0xF) != (_DWORD)v36 )
  {
    v74 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v376, (v91 >> 6) & 0xF, v36);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x primary source has different VidPnSourceId 0x%I64x 0x%I64x != 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)v376,
      (*(_DWORD *)(*((_QWORD *)v376 + 6) + 4LL) >> 6) & 0xF,
      v36);
    goto LABEL_182;
  }
  v92 = a2->SrcRect.left;
  p_SrcRect = &a2->SrcRect;
  v94 = a2->SrcRect.right;
  if ( (int)v94 <= v92
    || (v95 = a2->SrcRect.bottom, v96 = a2->SrcRect.top, v95 <= v96)
    || (v97 = v379, v92 >= (int)v379)
    || v96 >= (int)v378
    || (int)v94 <= 0
    || v95 <= 0 )
  {
    v74 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, a2->SrcRect.left, a2->SrcRect.top, v94, a2->SrcRect.bottom);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]",
      -1073741811LL,
      a2->SrcRect.left,
      a2->SrcRect.top,
      a2->SrcRect.right,
      a2->SrcRect.bottom);
    goto LABEL_182;
  }
  v98 = a2->SubRectCnt;
  v99 = 0;
  LODWORD(v377) = 0;
  if ( !v98 )
    goto LABEL_145;
  do
  {
    v100 = (struct _EX_RUNDOWN_REF *)v99;
    v101 = v99;
    v102 = &a2->pSrcSubRects[v101];
    pDstSubRects = v100;
    Source1 = 0LL;
    p_FlipInterval = (int *)(v101 * 16);
    if ( !DXGPRESENT::IntersectRect(&Source1, v102, p_SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v101], 0x10uLL) != 16 )
    {
      v74 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, a2->SrcRect.left, a2->SrcRect.top, a2->SrcRect.right, a2->SrcRect.bottom);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
        -1073741811LL,
        a2->SrcRect.left,
        a2->SrcRect.top,
        a2->SrcRect.right,
        a2->SrcRect.bottom);
      v113 = pDstSubRects;
      WdLogSingleEntry5(
        2LL,
        pDstSubRects,
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects),
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 4),
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 8),
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 12));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SubRect 0x%I64x is invalid 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
        (__int64)v113,
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects),
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 4),
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 8),
        *(int *)((char *)p_FlipInterval + (unsigned __int64)a2->pSrcSubRects + 12));
      goto LABEL_182;
    }
    p_SrcRect = &a2->SrcRect;
    v98 = a2->SubRectCnt;
    v99 = (_DWORD)v377 + 1;
    LODWORD(v377) = v99;
  }
  while ( v99 < v98 );
  v90 = v385;
  p_SrcRect = &a2->SrcRect;
  v97 = v379;
LABEL_145:
  if ( (a2->Flags.Value & 0x40) == 0 )
  {
    if ( Width == v97 && (_DWORD)v386 == v378 )
    {
      v112 = *p_SrcRect;
      v399.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_163;
    }
    WdLogSingleEntry5(3LL, this, Width, (unsigned int)v386, v97, v378);
    v74 = -1073741811;
    goto LABEL_182;
  }
  v103 = a2->DstRect.right;
  v104 = a2->DstRect.left;
  if ( v103 <= v104
    || (v105 = a2->DstRect.bottom, v106 = a2->DstRect.top, v105 <= v106)
    || v104 >= (int)Width
    || v106 >= (int)v386
    || v103 <= 0
    || v105 <= 0 )
  {
    v74 = -1073741811;
    WdLogSingleEntry5(3LL, -1073741811LL, a2->DstRect.left, a2->DstRect.top, a2->DstRect.right, a2->DstRect.bottom);
    goto LABEL_182;
  }
  if ( a2->SrcRect.right - p_SrcRect->left != v103 - v104 || a2->SrcRect.bottom - a2->SrcRect.top != v105 - v106 )
  {
    v74 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, a2->Flags.Value, v90, v36);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x specified destination RECT has different size from source RECT 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      a2->Flags.Value,
      (__int64)v385,
      v36);
    goto LABEL_182;
  }
  v74 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
  if ( v74 < 0 )
    goto LABEL_182;
  v107 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
  p_SrcRect = &a2->SrcRect;
  v108 = a2->DstRect.left - a2->SrcRect.left;
  v109 = 0;
  v110 = a2->DstRect.top - a2->SrcRect.top;
  v98 = a2->SubRectCnt;
  if ( v98 )
  {
    do
    {
      v111 = v109++;
      v111 *= 2LL;
      *(&v107->left + 2 * v111) = v108 + *(&a2->pSrcSubRects->left + 2 * v111);
      *(&v107->right + 2 * v111) = v108 + *(&a2->pSrcSubRects->right + 2 * v111);
      *(&v107->top + 2 * v111) = v110 + *(&a2->pSrcSubRects->top + 2 * v111);
      *(&v107->bottom + 2 * v111) = v110 + *(&a2->pSrcSubRects->bottom + 2 * v111);
      v98 = a2->SubRectCnt;
    }
    while ( v109 < v98 );
  }
  v112 = a2->DstRect;
  v399.pDstSubRects = v107;
LABEL_163:
  v114 = (*(_WORD *)&v399.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
  v399.DstRect = v112;
  v115 = v114 ^ v399.Flags.Value;
  v116 = *p_SrcRect;
LABEL_177:
  v123 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  v124 = a2->Color;
  v399.SubRectCnt = v98;
  v399.Color = v124;
  v399.Flags.Value = *(_BYTE *)&v123 & 3 | v115 & 0xFFFFF78C | ((*(_WORD *)&v123 & 0xE00 | (*(unsigned int *)&v123 >> 4) & 0x10000) >> 5);
  v399.SrcRect = v116;
LABEL_63:
  v59 = DXGCONTEXT::CheckDevicePresentSettings(this, (a2->Flags.Value >> 2) & 1, (a2->Flags.Value >> 28) & 1, v36);
  LODWORD(v10) = v59;
  if ( v59 < 0 )
  {
    if ( v59 == -1071774920 )
    {
      if ( (a2->Flags.Value & 4) != 0 )
      {
        IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
        v133 = (DXGDEVICE *)*((_QWORD *)this + 2);
        if ( IsFullWDDMDevice )
        {
          DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(v133, v36);
          DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v36, v376, *((_DWORD *)a7 + 34), 1u);
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)v36 + 1816) = *((_DWORD *)a7 + 30);
        }
        else
        {
          DXGDEVICE::SetDisplayedPrimary(v133, v36, v376, 0, 1u);
        }
      }
LABEL_68:
      LODWORD(v10) = v13;
    }
    goto LABEL_35;
  }
  if ( (a2->Flags.Value & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v10) = DXGCONTEXT::ValidatePresentRegions(this, a2, v379, v378);
      if ( (int)v10 < 0 )
        goto LABEL_35;
    }
  }
  if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(
          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
          v36,
          0) )
  {
    if ( _bittest((const signed __int32 *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)v36 + 1240), 9u)
      || (a2->Flags.Value & 0x10000000) != 0 )
    {
      goto LABEL_235;
    }
    v140 = a2->hSource;
    LODWORD(v10) = -1071775739;
    Value = v376;
    pSrcSubRects = (const RECT *)this;
    v352 = (unsigned int)v36;
    v142 = -1071775739LL;
LABEL_627:
    WdLogSingleEntry5(3LL, v142, pSrcSubRects, v140, Value, v352);
    goto LABEL_35;
  }
  v134 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
  v135 = (*(__int64 (**)(void))(*(_QWORD *)&v401.left + 8LL))();
  v136 = a2->Flags.Value & 4;
  if ( v134 == v135 )
  {
    if ( !v136 )
    {
      COREDEVICEACCESS::Release(a3);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX(
        (DXGPRESENTMUTEX *)&v395,
        *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v395);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
      v30 = a3;
      v139 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v10 = (struct COREDEVICEACCESS *)v139;
      if ( v139 >= 0 )
      {
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v395, 0);
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v395);
        LODWORD(v36) = (_DWORD)v380;
        goto LABEL_236;
      }
LABEL_225:
      WdLogSingleEntry2(4LL, v10, this);
      COREDEVICEACCESS::AcquireSharedUncheck(v30, 0LL);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v395);
      goto LABEL_35;
    }
    LODWORD(v36) = (_DWORD)v380;
LABEL_235:
    v30 = a3;
    goto LABEL_236;
  }
  if ( v136 )
  {
    v30 = a3;
    goto LABEL_227;
  }
  DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL);
  DXGADAPTERSTOPRESETLOCKSHARED::Release(v9);
  COREDEVICEACCESS::Release(a3);
  DXGPRESENTMUTEX::DXGPRESENTMUTEX(
    (DXGPRESENTMUTEX *)&v395,
    *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
  DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v395);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v9);
  v30 = a3;
  v137 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
  v10 = (struct COREDEVICEACCESS *)v137;
  if ( v137 < 0 )
    goto LABEL_225;
  DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v395, 1);
  DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v395);
LABEL_227:
  v36 = *((_QWORD *)this + 19);
  *(_DWORD *)(v36 + 8) = (*(__int64 (**)(void))(*(_QWORD *)&v401.left + 8LL))();
  LODWORD(v36) = (_DWORD)v380;
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
                   (unsigned int)v380);
  if ( CddInterface )
    (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
LABEL_236:
  if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
  {
    v168 = *((_QWORD *)this + 2);
    v169 = *(_QWORD *)(v168 + 1880);
    if ( !v169 )
    {
      WdLogSingleEntry2(1LL, v168, -1073741822LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
        *((_QWORD *)this + 2),
        -1073741822LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_306;
    }
    v170 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    *(_QWORD *)&v401.left = 0LL;
    if ( (*(_DWORD *)&v170 & 0x10000000) != 0 )
    {
      v401.right = a2[1].hSource;
      v179 = a2[1].hDestination;
    }
    else
    {
      v171 = v385;
      if ( (*(_BYTE *)&v170 & 4) != 0 )
        v171 = v376;
      v172 = *(_DWORD *)(*((_QWORD *)v171 + 6) + 4LL);
      if ( (v172 & 0x10) != 0 )
      {
        WdLogSingleEntry3(4LL, -1071775482LL, this, v171);
        LODWORD(v10) = -1071775482;
        goto LABEL_35;
      }
      v173 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v169 + 2920), (v172 >> 6) & 0xF);
      v403.Flags.Value = 1;
      memset(&v403.Width, 0, 32);
      v403.Rotation = -1;
      *(_OWORD *)v405 = v173;
      v174 = *((_QWORD *)this + 2);
      v403.hAllocation = *(HANDLE *)(*((_QWORD *)v171 + 6) + 16LL);
      v176 = ADAPTER_RENDER::DdiDescribeAllocation(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v174 + 16) + 16LL) + 2928LL),
               &v403,
               v175);
      if ( v176 < 0 )
      {
        v177 = v176;
        WdLogSingleEntry5(
          2LL,
          v176,
          this,
          *((unsigned int *)v171 + 4),
          v171,
          (*(_DWORD *)(*((_QWORD *)v171 + 6) + 4LL) >> 6) & 0xF);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
          v177,
          (__int64)this,
          *((unsigned int *)v171 + 4),
          (__int64)v171,
          (*(_DWORD *)(*((_QWORD *)v171 + 6) + 4LL) >> 6) & 0xF);
LABEL_306:
        LODWORD(v10) = -1073741811;
        goto LABEL_35;
      }
      v178 = v403.Width;
      if ( v403.Width != v405[0] || (v179 = v403.Height, v403.Height != v405[1]) )
      {
LABEL_297:
        WdLogSingleEntry3(4LL, -1071775482LL, this, v171);
        LODWORD(v10) = -1071775739;
        goto LABEL_35;
      }
      if ( !*((_BYTE *)this + 442) )
      {
        v180 = RemoveAlphaChannel(v405[2]);
        if ( RemoveAlphaChannel(v403.Format) != v180 )
          goto LABEL_297;
        v179 = v403.Height;
        v178 = v403.Width;
        LODWORD(v36) = (_DWORD)v380;
      }
      v401.right = v178;
    }
    v401.bottom = v179;
    LODWORD(v10) = ADAPTER_DISPLAY::PresentDisplayOnly(
                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
                     this,
                     v36,
                     a2,
                     &v399,
                     v30,
                     &v401);
    if ( (int)v10 < 0 )
      goto LABEL_31;
    if ( (a2->Flags.Value & 4) != 0 )
    {
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v36);
      DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v36, v376, 0, 1u);
      UpdatePostComposition(
        v36,
        0,
        0,
        0,
        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL));
    }
    goto LABEL_30;
  }
  v143 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v36, (a2->Flags.Value & 0x10) == 0, v30);
  v144 = v143;
  if ( v143 < 0 )
  {
    WdLogSingleEntry2(4LL, v143, this);
    LODWORD(v10) = v144;
    goto LABEL_35;
  }
  v145 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
  if ( ((*((_DWORD *)a7 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    LODWORD(v10) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 45, v30, 0);
    if ( (int)v10 >= 0 )
    {
      if ( !*v145 )
      {
        WdLogSingleEntry1(1LL, 4788LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPresentDmaBuffer", 4788LL, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_243;
    }
LABEL_31:
    v32 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
LABEL_32:
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
      && (_DWORD)v10 != -1073741130 )
    {
      WdLogSingleEntry1(1LL, 6184LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner() || ntStatus == STATUS_DEVICE_REMOVED",
        6184LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *v32 )
    {
      WdLogSingleEntry1(1LL, 6185LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPresentDmaBuffer == NULL", 6185LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_35;
  }
LABEL_243:
  LODWORD(v10) = DXGCONTEXT::CheckDevicePresentSettings(
                   this,
                   (a2->Flags.Value >> 2) & 1,
                   (a2->Flags.Value >> 28) & 1,
                   (unsigned int)v380);
  if ( (int)v10 >= 0 )
  {
    if ( (a2->Flags.Value & 4) != 0 )
    {
      if ( v376 )
      {
        v149 = *((_QWORD *)v376 + 6);
        if ( v149 )
        {
          if ( (*(_DWORD *)(v149 + 4) & 0x2000) != 0
            && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v376) )
          {
            LODWORD(v10) = -1071775739;
            WdLogSingleEntry3(4LL, -1071775739LL, this, v376);
            if ( *v145 )
            {
              VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                *v145,
                0LL);
              *v145 = 0LL;
            }
            goto LABEL_35;
          }
        }
      }
    }
    if ( (a2->Flags.Value & 0x2000) != 0 )
    {
      v150 = ADAPTER_DISPLAY::GetCurrentOrientation(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
               (unsigned int)v380,
               1);
      v151 = 0;
      if ( v150 != 1 )
        v151 = 128;
      v399.Flags.Value = v151 | v399.Flags.Value & 0xFFFFFF7F;
    }
    if ( !bTracingEnabled )
      goto LABEL_279;
    v152 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v153 = *(VIDMM_EXPORT **)(v152 + 760);
    v154 = *(struct VIDMM_GLOBAL **)(v152 + 768);
    if ( (a2->Flags.Value & 4) != 0 )
    {
      VIDMM_EXPORT::VidMmETWAllocationHandle(v153, v154, hSource);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0pqpqtt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
LABEL_279:
      LODWORD(v10) = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (struct DXGHWQUEUE **)a2[1].hWindow,
                       a2->BroadcastContextCount,
                       v393,
                       v376,
                       hSource,
                       v375,
                       &v399,
                       a2->pPresentRegions,
                       *v145,
                       v8,
                       Color,
                       v30);
      if ( (int)v10 >= 0
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL) + 128LL)
                     + 4000LL * (unsigned int)v380
                     + 1088) == -1 )
      {
        WdLogSingleEntry1(1LL, 4902LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!NT_SUCCESS(ntStatus) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidPnSourceToVidPnTa"
                    "rget(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
          4902LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *v145 = 0LL;
      }
      else
      {
        *v145 = 0LL;
        if ( (int)v10 < 0 )
          goto LABEL_31;
      }
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v167 = (unsigned int)v380;
        DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), (unsigned int)v380);
        DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v167, v376, *((_DWORD *)v8 + 34), 1u);
        *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v167 + 1816) = *((_DWORD *)v8 + 30);
        UpdatePostComposition(
          v167,
          0,
          0,
          0,
          *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL));
      }
      goto LABEL_29;
    }
    v155 = VIDMM_EXPORT::VidMmETWAllocationHandle(v153, v154, v375);
    v156 = VIDMM_EXPORT::VidMmETWAllocationHandle(
             *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
             *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
             hSource);
    v157 = a2->hWindow;
    pDstSubRects = (struct _EX_RUNDOWN_REF *)*v145;
    v390 = v399.pDstSubRects;
    v158 = v399.SubRectCnt;
    LODWORD(v377) = v399.SubRectCnt;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
    {
      LODWORD(v353) = 1;
      McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventBlit,
        0LL,
        v157,
        pDstSubRects,
        0LL,
        v156,
        v155,
        v353,
        0,
        v399.Flags.Value,
        v399.SrcRect.left,
        v399.SrcRect.right,
        v399.SrcRect.top,
        v399.SrcRect.bottom,
        v399.DstRect.left,
        v399.DstRect.right,
        v399.DstRect.top,
        v399.DstRect.bottom,
        v399.SubRectCnt);
      v158 = (unsigned int)v377;
    }
    v159 = 0;
    if ( !v158 )
      goto LABEL_279;
    v160 = pDstSubRects;
    v161 = (struct _EX_RUNDOWN_REF *)v390;
    while ( 1 )
    {
      v162 = 0;
      v163 = v158 - v159;
      if ( v158 - v159 > 0x10 )
        break;
      v164 = v158 - v159;
      if ( v163 )
        goto LABEL_273;
LABEL_275:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v351) = v164;
        LODWORD(v349) = v163 <= 0x10;
        McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&EventBlitRect,
          0LL,
          v160,
          v349,
          v351,
          v409,
          v408,
          v407,
          &v403);
        v161 = (struct _EX_RUNDOWN_REF *)v390;
      }
      v158 = (unsigned int)v377;
      v159 += 16;
      if ( v159 >= (unsigned int)v377 )
      {
        v8 = (struct VIDSCH_SUBMIT_DATA_BASE *)v389;
        goto LABEL_279;
      }
    }
    v164 = 16;
LABEL_273:
    v165 = 0LL;
    do
    {
      v166 = v162 + v159;
      ++v162;
      v166 *= 2LL;
      v165 += 4LL;
      *(_DWORD *)&v408[v165 + 60] = v161[v166].Count;
      *(_DWORD *)&v407[v165 + 60] = v161[v166 + 1].Count;
      *(_DWORD *)&v407[v165 - 4] = HIDWORD(v161[v166].Ptr);
      v402[v165 / 4 + 83] = HIDWORD(v161[v166 + 1].Ptr);
    }
    while ( v162 < v164 );
    goto LABEL_275;
  }
  if ( *v145 )
  {
    VIDMM_EXPORT::VidMmReleaseDmaBuffer(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
      *v145,
      0LL);
    *v145 = 0LL;
  }
  if ( (_DWORD)v10 != -1071774920 )
    goto LABEL_31;
  if ( (a2->Flags.Value & 4) == 0 )
    goto LABEL_68;
  v146 = (unsigned int)v380;
  v147 = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
  v148 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( v147 )
  {
    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(v148, v146);
    DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v146, v376, *((_DWORD *)a7 + 34), 1u);
    *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v146 + 1816) = *((_DWORD *)a7 + 30);
    goto LABEL_68;
  }
  DXGDEVICE::SetDisplayedPrimary(v148, v146, v376, 0, 1u);
  LODWORD(v10) = 0;
LABEL_35:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v392);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v385);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v376);
  return (unsigned int)v10;
}
