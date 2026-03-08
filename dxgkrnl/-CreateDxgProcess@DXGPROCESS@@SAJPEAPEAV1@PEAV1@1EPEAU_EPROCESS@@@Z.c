/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01A7864
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C004CDD0 (DxgkDeviceIoctl.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C01A7640 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C01C6520 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0205878 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C0362A70 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C036AF40 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C036D280 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0376E60 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0053D58 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C00554F4 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C0055630 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C01A7AF0 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C01A7D50 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(
        struct DXGPROCESS **a1,
        struct DXGPROCESS *a2,
        struct DXGPROCESS *a3,
        char a4,
        struct _EPROCESS *a5)
{
  __int64 CurrentProcess; // rax
  struct _EPROCESS *v10; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGPROCESS *v13; // rax
  DXGPROCESS *Pool2; // rbx
  struct DXGGLOBAL *v15; // rax
  DXGPROCESSVM *v16; // rax
  __int64 v17; // rdi
  struct _KPROCESS *v18; // rcx
  HANDLE ProcessId; // rax
  __int64 v20; // rcx
  void *v21; // rbx
  __int64 ProcessServerSilo; // rax
  int v23; // ebx
  struct DXGGLOBAL *v24; // rbx
  char *v25; // r15
  _QWORD *v26; // rax
  char *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGGLOBAL *v31; // rax
  DXGPROCESSVM *v32; // rbx
  struct DXGGLOBAL *v33; // rax
  struct _EPROCESS *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // rbp
  _QWORD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]
  DXGFASTMUTEX *v42; // [rsp+50h] [rbp-28h]
  char v43; // [rsp+58h] [rbp-20h]

  CurrentProcess = PsGetCurrentProcess(a1);
  v10 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v43 = 0;
  v42 = (struct DXGGLOBAL *)((char *)Global + 368);
  if ( Global == (struct DXGGLOBAL *)-368LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v42 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v42);
  v43 = 1;
  if ( a2 )
  {
    v32 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(656LL);
    if ( !v32 )
      goto LABEL_44;
    v33 = DXGGLOBAL::GetGlobal();
    v16 = DXGPROCESSVM::DXGPROCESSVM(v32, v33, v10, a2, a3);
    goto LABEL_12;
  }
  v13 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v10);
  if ( v13 )
  {
    *a1 = v13;
    goto LABEL_25;
  }
  if ( !a4 )
  {
    Pool2 = (DXGPROCESS *)ExAllocatePool2(257LL, 608LL, 1348958276LL);
    if ( Pool2 )
    {
      v15 = DXGGLOBAL::GetGlobal();
      v16 = DXGPROCESS::DXGPROCESS(Pool2, v15, v10);
LABEL_12:
      v17 = (__int64)v16;
      goto LABEL_13;
    }
LABEL_33:
    v17 = 0LL;
LABEL_13:
    if ( v17 )
      goto LABEL_14;
LABEL_44:
    WdLogSingleEntry1(6LL, 263LL);
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate DXGPROCESS", 263LL, 0LL, 0LL, 0LL, 0LL);
    v23 = -1073741801;
    goto LABEL_26;
  }
  v17 = DXGQUOTAALLOCATOR<256,1348958276>::operator new(640LL);
  if ( !v17 )
    goto LABEL_33;
  v31 = DXGGLOBAL::GetGlobal();
  DXGPROCESS::DXGPROCESS((DXGPROCESS *)v17, v31, v10);
  *(_DWORD *)(v17 + 424) |= 0x80u;
  *(_QWORD *)v17 = &DXGPROCESSVMWP::`vftable';
  *(_QWORD *)(v17 + 608) = 0LL;
  *(_QWORD *)(v17 + 616) = 0LL;
  *(_QWORD *)(v17 + 624) = 0LL;
  *(_BYTE *)(v17 + 632) = 0;
LABEL_14:
  v18 = *(struct _KPROCESS **)(v17 + 56);
  if ( v18 )
  {
    ProcessId = PsGetProcessId(v18);
    v20 = *(_QWORD *)(v17 + 56);
    v21 = ProcessId;
  }
  else
  {
    v21 = 0LL;
    v20 = 0LL;
  }
  if ( a4 )
  {
    v34 = a5;
    if ( !a5 )
      v34 = v10;
    *(_QWORD *)(v17 + 624) = v34;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v20);
  *(_DWORD *)(v17 + 424) = ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) != 0 ? 0 : 0x200) | *(_DWORD *)(v17 + 424) & 0xFFFFFDFF;
  v23 = DXGPROCESS::Initialize((DXGPROCESS *)v17, v21);
  if ( v23 < 0 )
  {
    (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1LL);
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(v17 + 424) & 2) == 0 )
  {
    v24 = DXGGLOBAL::GetGlobal();
    v25 = (char *)v24 + 432;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v24 + 432, 0LL);
    v26 = (_QWORD *)(v17 + 8);
    v27 = (char *)v24 + 416;
    *((_QWORD *)v25 + 1) = KeGetCurrentThread();
    v28 = *(_QWORD *)v27;
    if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 )
      goto LABEL_43;
    *v26 = v28;
    *(_QWORD *)(v17 + 16) = v27;
    *(_QWORD *)(v28 + 8) = v26;
    *(_QWORD *)v27 = v26;
    *((_QWORD *)v25 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v25, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !a2 )
  {
    PsSetProcessDxgProcess(v10, v17);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v41) = *(_DWORD *)(v17 + 424);
      LODWORD(v40) = *(_DWORD *)(v17 + 504);
      McTemplateK0pxqt_EtwWriteTransfer(
        *(_QWORD *)(v17 + 64),
        &EventCreateDxgProcess,
        v29,
        v17,
        *(_QWORD *)(*(_QWORD *)(v17 + 64) + 80LL),
        v40,
        v41);
    }
    goto LABEL_24;
  }
  v35 = (_QWORD *)(v17 + 624);
  v36 = *(_QWORD *)(*(_QWORD *)(v17 + 608) + 608LL);
  v37 = v36 + 128;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v36 + 128));
  v38 = *(_QWORD **)(v36 + 32);
  v39 = v36 + 24;
  if ( *v38 != v39 )
LABEL_43:
    __fastfail(3u);
  *v35 = v39;
  *(_QWORD *)(v17 + 632) = v38;
  *v38 = v35;
  *(_QWORD *)(v39 + 8) = v35;
  *(_QWORD *)(v37 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v37, 0LL);
  KeLeaveCriticalRegion();
LABEL_24:
  *a1 = (struct DXGPROCESS *)v17;
LABEL_25:
  v23 = 0;
LABEL_26:
  if ( v43 )
  {
    v43 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v42);
  }
  return (unsigned int)v23;
}
