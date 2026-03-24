/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0166D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010C850 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rbx
  __int64 hDevice; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  D3DKMT_HANDLE hAllocation; // r15d
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rax
  struct _KTHREAD *v41; // r8
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  struct _EX_RUNDOWN_REF *v50; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v51; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B0h]
  char v55; // [rsp+58h] [rbp-A8h]
  char v56[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h]
  char v58; // [rsp+70h] [rbp-90h]
  _BYTE v59[24]; // [rsp+78h] [rbp-88h] BYREF
  char v60[8]; // [rsp+90h] [rbp-70h] BYREF
  char v61[64]; // [rsp+98h] [rbp-68h] BYREF
  char v62[88]; // [rsp+D8h] [rbp-28h] BYREF

  v53 = -1;
  v54 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 3006LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v11 = Current;
  if ( !Current )
  {
    v24 = -1073741811;
    v29 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    *(_QWORD *)(v29 + 32) = PsGetCurrentProcess(v31, v30, v32, v33);
    WdLogEvent5_WdError(v29);
    goto LABEL_14;
  }
  hDevice = a1->hDevice;
  v51 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, hDevice, Current, &v51);
  v15 = v51;
  if ( v51 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59, v51);
    v16 = *((_QWORD *)v15 + 2);
    v58 = 0;
    v57 = *(_QWORD *)(v16 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, (__int64)v15, 2, v17, 0);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v60, 0LL);
    v21 = v18;
    if ( v18 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
      v35[3] = v21;
      v35[4] = v15;
      v35[5] = v11;
      WdLogEvent5_WdEvent(v35);
      v24 = v21;
      goto LABEL_8;
    }
    v22 = DXGDEVICE::Lock(v15, a1, (struct COREDEVICEACCESS *)v60);
    v23 = v22;
    if ( v22 >= 0 )
    {
LABEL_7:
      v24 = v23;
LABEL_8:
      COREACCESS::~COREACCESS((COREACCESS *)v62);
      COREACCESS::~COREACCESS((COREACCESS *)v61);
      if ( v58 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59);
      goto LABEL_11;
    }
    hAllocation = a1->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v39 = *((_DWORD *)v11 + 58);
        if ( v39 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v38, v39);
      }
      ExAcquirePushLockSharedEx(v11 + 26, 0LL);
    }
    v40 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v40 < *((_DWORD *)v11 + 64) )
    {
      v41 = v11[30];
      v42 = *((_DWORD *)v41 + 4 * v40 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v41 + 16 * v40 + 8) & 0x60)
        && (v42 & 0x2000) == 0
        && (v42 & 0x1F) != 0 )
      {
        v43 = v42 & 0x1F;
        if ( (_BYTE)v43 == 5 )
        {
          v45 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v41 + 2 * (unsigned int)v40);
          goto LABEL_34;
        }
        v44 = WdLogNewEntry5_WdError(v43, 2LL * (unsigned int)v40);
        *(_QWORD *)(v44 + 24) = 316LL;
        WdLogEvent5_WdError(v44);
      }
    }
    v45 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50, v45);
    ExReleasePushLockSharedEx(v11 + 26, 0LL);
    KeLeaveCriticalRegion();
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
    v48[3] = v23;
    v48[4] = v15;
    v48[5] = v11;
    v48[6] = a1->hAllocation;
    v48[7] = v50;
    WdLogEvent5_WdError(v48);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v50, v49);
    goto LABEL_7;
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
  v24 = -1073741811;
  v34[3] = -1073741811LL;
  v34[4] = a1->hDevice;
  v34[5] = v11;
  WdLogEvent5_WdError(v34);
LABEL_11:
  if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v25);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v53);
  return v24;
}
