/*
 * XREFs of DxgkDestroyOverlay @ 0x1C027BA20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0008E28 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0025978 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00476D0 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0254BB4 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGDEVICE *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  DXGDEVICE *v29; // r12
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // edx
  __int64 v38; // rdx
  struct DXGDEVICE *v39; // [rsp+20h] [rbp-D8h] BYREF
  DXGDEVICE *v40; // [rsp+28h] [rbp-D0h] BYREF
  int v41; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C0h]
  char v43; // [rsp+40h] [rbp-B8h]
  __int64 v44; // [rsp+48h] [rbp-B0h]
  _QWORD v45[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v46[16]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v47[32]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v48[64]; // [rsp+90h] [rbp-68h] BYREF

  v3 = (__int64 *)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2025);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2025LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    goto LABEL_43;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v13 = *v3;
  v44 = v13;
  v40 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, (unsigned int)v13, (struct _KTHREAD **)Current, &v40);
  v16 = v40;
  if ( !v40 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = (unsigned int)v13;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( !v39 )
      goto LABEL_43;
    goto LABEL_12;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v40);
  COREACCESS::COREACCESS((COREACCESS *)v48, *(struct DXGADAPTER *const *)(*((_QWORD *)v16 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v48, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 200LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v48);
    if ( v45[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    goto LABEL_20;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v47,
    (struct _KTHREAD **)Current);
  v25 = (HIDWORD(v44) >> 6) & 0xFFFFFF;
  if ( v25 < *((_DWORD *)Current + 64) )
  {
    v24 = *((_QWORD *)Current + 30);
    v22 = *(unsigned int *)(v24 + 16LL * v25 + 8);
    v23 = (HIDWORD(v44) >> 25) & 0x60;
    if ( ((HIDWORD(v44) >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v25 + 8) & 0x60)
      && (v22 & 0x2000) == 0
      && (v22 & 0x1F) != 0 )
    {
      v22 &= 0x1Fu;
      if ( (_BYTE)v22 == 6 )
      {
        v27 = *(_QWORD *)(v24 + 16LL * v25);
        goto LABEL_31;
      }
      v26 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v26 + 24) = 316LL;
      WdLogEvent5_WdError(v26);
    }
  }
  v27 = 0LL;
LABEL_31:
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v28 + 24) = HIDWORD(v44);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
    COREACCESS::~COREACCESS((COREACCESS *)v48);
    if ( v45[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    if ( !v39 )
      goto LABEL_43;
LABEL_12:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v29 = v40;
  if ( v40 != *(DXGDEVICE **)(v27 + 16) )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v30[3] = HIDWORD(v44);
    v30[4] = (unsigned int)v44;
    v30[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
    COREACCESS::~COREACCESS((COREACCESS *)v48);
    if ( v45[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    if ( !v39 || _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_43;
LABEL_42:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v12);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v41);
    }
    return 3221225485LL;
  }
  if ( !DXGDEVICE::IsSupportOverlay(v40) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v35 + 24) = 984LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( v25 < *((_DWORD *)Current + 64) )
  {
    v36 = *((_QWORD *)Current + 30);
    v37 = *(_DWORD *)(v36 + 16LL * v25 + 8);
    if ( ((HIDWORD(v44) >> 25) & 0x60) == (*(_BYTE *)(v36 + 16LL * v25 + 8) & 0x60)
      && (v37 & 0x2000) == 0
      && (v37 & 0x1F) != 0 )
    {
      *(_DWORD *)(v36 + 16LL * ((HIDWORD(v44) >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v46, *((struct ADAPTER_RENDER **)v16 + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
  DXGDEVICE::DestroyOverlay(v29, (struct DXGOVERLAY ***)v27);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v46, v38);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v46);
  COREACCESS::~COREACCESS((COREACCESS *)v48);
  if ( v45[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v18);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v41);
  return 0LL;
}
