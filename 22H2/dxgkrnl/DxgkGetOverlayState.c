/*
 * XREFs of DxgkGetOverlayState @ 0x1C027C480
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0025978 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0027CBC (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C0047654 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0047688 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00476D0 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C027AAC0 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  _D3DKMT_GETOVERLAYSTATE *v13; // rax
  __int64 hDevice; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct ADAPTER_RENDER **v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rax
  struct DXGOVERLAY *v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int OverlayState; // edi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _BYTE *v42; // rdx
  struct DXGDEVICE *v43; // [rsp+20h] [rbp-E8h] BYREF
  DXGDEVICE *v44; // [rsp+28h] [rbp-E0h] BYREF
  int v45; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-D0h]
  char v47; // [rsp+40h] [rbp-C8h]
  __int64 v48; // [rsp+48h] [rbp-C0h] BYREF
  char v49; // [rsp+50h] [rbp-B8h]
  _D3DKMT_GETOVERLAYSTATE v50; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v51[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v52[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v53[80]; // [rsp+90h] [rbp-78h] BYREF

  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2057);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2057LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_29:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v12);
    if ( v47 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v45);
    }
    return 3221225485LL;
  }
  v13 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v50 = *v13;
  v44 = 0LL;
  hDevice = v50.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v50.hDevice, (struct _KTHREAD **)Current, &v44);
  v17 = (struct ADAPTER_RENDER **)v44;
  if ( !v44 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = hDevice;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_26:
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    goto LABEL_29;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v48, v44);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v52, (struct _KTHREAD **)Current);
  v21 = (v50.hOverlay >> 6) & 0xFFFFFF;
  v22 = v50.hOverlay >> 30;
  if ( (unsigned int)v21 >= *((_DWORD *)Current + 64) )
    goto LABEL_17;
  v19 = (unsigned int)v21;
  v23 = *((_QWORD *)Current + 30);
  v20 = *(unsigned int *)(v23 + 16 * v21 + 8);
  if ( (_DWORD)v22 != ((*(_DWORD *)(v23 + 16 * v21 + 8) >> 5) & 3) || (v20 & 0x2000) != 0 || (v20 & 0x1F) == 0 )
    goto LABEL_17;
  v19 = 2LL * (unsigned int)v21;
  v20 &= 0x1Fu;
  if ( (_BYTE)v20 != 6 )
  {
    v24 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v24 + 24) = 316LL;
    WdLogEvent5_WdError(v24);
LABEL_17:
    v25 = 0LL;
    goto LABEL_18;
  }
  v25 = *(struct DXGOVERLAY **)(v23 + 16LL * (unsigned int)v21);
LABEL_18:
  if ( !v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v22);
    v26[4] = -1073741811LL;
LABEL_23:
    v26[3] = v50.hOverlay;
    WdLogEvent5_WdWarning(v26);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
    if ( v48 && v49 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v48 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_26;
  }
  if ( v17 != *((struct ADAPTER_RENDER ***)v25 + 2) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v22);
    v26[4] = hDevice;
    v26[5] = -1073741811LL;
    goto LABEL_23;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v53, v25);
  v30 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v53);
  if ( v30 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v17) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v36 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v36);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v51, v17[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
    OverlayState = DXGOVERLAY::GetOverlayState(v25, &v50);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51, v38);
    if ( OverlayState >= 0 )
    {
      v42 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v42 = (_BYTE *)MmUserProbeAddress;
      *v42 = v50.OverlayEnabled;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v53);
    if ( v48 && v49 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v48 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v39);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v45);
    return (unsigned int)OverlayState;
  }
  else
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v53);
    if ( v48 && v49 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v48 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v31);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v45);
    return (unsigned int)v30;
  }
}
