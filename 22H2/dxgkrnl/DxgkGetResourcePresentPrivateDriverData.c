/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1C022A550
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DF24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025DE8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C003F790 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _SLIST_ENTRY *v3; // r15
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  struct DXGDEVICE *v25; // r13
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  KSPIN_LOCK *v41; // rcx
  __int64 v42; // rax
  size_t v43; // r8
  _DWORD *v44; // rdx
  void *v45; // rcx
  struct DXGDEVICE *v46; // [rsp+30h] [rbp-128h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+38h] [rbp-120h] BYREF
  int v48; // [rsp+40h] [rbp-118h] BYREF
  __int64 v49; // [rsp+48h] [rbp-110h]
  char v50; // [rsp+50h] [rbp-108h]
  ULONG64 v51; // [rsp+58h] [rbp-100h]
  unsigned int v52; // [rsp+60h] [rbp-F8h]
  struct CRefCountedBuffer *v53; // [rsp+68h] [rbp-F0h] BYREF
  size_t Size[2]; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGDEVICE *v55; // [rsp+80h] [rbp-D8h] BYREF
  struct _EX_RUNDOWN_REF *v56; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v57[160]; // [rsp+90h] [rbp-C8h] BYREF

  v51 = a1;
  v3 = 0LL;
  v53 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2123LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v12 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v14);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v48);
    }
    return 3221225485LL;
  }
  v47 = 0LL;
  ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                              (__int64)Current,
                                              (DXGRESOURCEREFERENCE *)&v56,
                                              Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign(&v47, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56, v16);
  v19 = v47;
  if ( !v47 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = LODWORD(Size[0]);
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_26:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v47, v21);
    goto LABEL_27;
  }
  v52 = *(_DWORD *)(v47[1].Count + 436);
  v55 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v52, v12, &v55);
  v25 = v55;
  if ( !v55 )
  {
    v26 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v26 + 24) = v52;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
LABEL_23:
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    goto LABEL_26;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v55, 0, v24, 0);
  v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
  v31 = v27;
  if ( v27 >= 0 )
  {
    if ( (HIDWORD(v19->Ptr) & 1) == 0 )
    {
      v38 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v38 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v38);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
      goto LABEL_23;
    }
    v41 = *(KSPIN_LOCK **)(v19[7].Count + 176);
    if ( v41 )
    {
      LODWORD(v31) = GetPresentPrivateDriverDataFromResource(
                       v41,
                       (KSPIN_LOCK *)&v53,
                       (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = (struct _SLIST_ENTRY *)v53;
      v43 = HIDWORD(Size[0]);
    }
    else
    {
      v42 = WdLogNewEntry5_WdWarning(0LL, v28, v30);
      *(_QWORD *)(v42 + 24) = 0LL;
      *(_QWORD *)(v42 + 32) = 13454LL;
      WdLogEvent5_WdWarning(v42);
      v43 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v44 = (_DWORD *)(v51 + 4);
    if ( v51 + 4 >= MmUserProbeAddress )
      v44 = (_DWORD *)MmUserProbeAddress;
    *v44 = v43;
    if ( (_DWORD)v43 && v3 )
    {
      v45 = (void *)Size[1];
      if ( v43 + Size[1] > MmUserProbeAddress || v43 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v45, &v3[1], v43);
    }
    if ( v3 )
      CRefCountedBuffer::RefCountedBufferRelease(v3);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
    if ( v46 )
      goto LABEL_15;
  }
  else
  {
    v32 = WdLogNewEntry5_WdEvent(v29, v28);
    *(_QWORD *)(v32 + 24) = v31;
    *(_QWORD *)(v32 + 32) = v25;
    WdLogEvent5_WdEvent(v32);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
    if ( v46 )
    {
LABEL_15:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v47, v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v34);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v48);
  return (unsigned int)v31;
}
