/*
 * XREFs of NtDxgkDestroyTrackedWorkload @ 0x1C02BDC20
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C004E1B8 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BC708 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BCA78 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall NtDxgkDestroyTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // r8
  unsigned int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  char *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // r9d
  unsigned int v29; // r11d
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // [rsp+30h] [rbp-128h] BYREF
  __int64 v45; // [rsp+38h] [rbp-120h]
  char v46; // [rsp+40h] [rbp-118h]
  struct DXGDEVICE *v47; // [rsp+48h] [rbp-110h] BYREF
  DXGTRACKEDWORKLOAD *v48; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v49[2]; // [rsp+58h] [rbp-100h] BYREF
  _QWORD v50[3]; // [rsp+60h] [rbp-F8h] BYREF
  DXGTRACKEDWORKLOAD *v51[2]; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v52[24]; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v53[160]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = (unsigned int *)a1;
  v50[2] = a1;
  v4 = 0;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2207);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2207LL);
  *(_QWORD *)v49 = 0LL;
  v6 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v7 = *v6;
  if ( (unsigned int)v7 < 8 )
  {
    v8 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v5);
    *(_QWORD *)(v8 + 24) = 344LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v9);
    if ( v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v44);
    }
    return 3221225485LL;
  }
  if ( (unsigned int)v7 > 8 )
    LODWORD(v7) = 8;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(v49, v3, (unsigned int)v7);
  v47 = 0LL;
  v48 = 0LL;
  Current = DXGPROCESS::GetCurrent(v14, v13, v15, v16);
  v18 = v49[1];
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v51,
    v49[1],
    (struct _KTHREAD **)Current,
    &v48,
    &v47);
  if ( !v48 )
  {
    v4 = -1073741811;
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = v18;
    *(_QWORD *)(v22 + 32) = 373LL;
    WdLogEvent5_WdWarning(v22);
LABEL_18:
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v41);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v44);
    return v4;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50, v47);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v47, 2, v23, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v53, v24);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v52,
    (struct _KTHREAD **)Current);
  v28 = ((unsigned int)v18 >> 6) & 0xFFFFFF;
  v29 = *((_DWORD *)Current + 64);
  if ( v28 < v29
    && (v27 = v28,
        v30 = *((_QWORD *)Current + 30),
        v25 = *(unsigned int *)(v30 + 16LL * v28 + 8),
        v26 = ((unsigned int)v18 >> 25) & 0x60,
        (((unsigned int)v18 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v28 + 8) & 0x60))
    && (v25 & 0x2000) == 0
    && (v25 & 0x1F) != 0
    && (v27 = 2LL * v28, v25 &= 0x1Fu, (_BYTE)v25 == 19) )
  {
    v31 = *(_QWORD *)(v30 + 16LL * v28);
  }
  else
  {
    v31 = 0LL;
  }
  if ( v31 )
  {
    if ( v28 < v29 )
    {
      v36 = *((_QWORD *)Current + 30);
      v37 = *(_DWORD *)(v36 + 16LL * v28 + 8);
      if ( (((unsigned int)v18 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16LL * v28 + 8) & 0x60)
        && (v37 & 0x2000) == 0
        && (v37 & 0x1F) != 0 )
      {
        *(_DWORD *)(v36 + 16LL * (((unsigned int)v18 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
    if ( DXGTRACKEDWORKLOAD::Release(v48) != 1 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v40 + 24) = 405LL;
      WdLogEvent5_WdAssertion(v40);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v50[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    goto LABEL_18;
  }
  v32 = WdLogNewEntry5_WdWarning(v26, v25, v27);
  *(_QWORD *)(v32 + 24) = v18;
  WdLogEvent5_WdWarning(v32);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
  if ( v50[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v33);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v44);
  return 0LL;
}
