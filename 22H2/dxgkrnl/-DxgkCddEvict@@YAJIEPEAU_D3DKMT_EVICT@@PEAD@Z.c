/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C0154050
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0154208 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0154B3C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C022CCC0 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddEvict(__int64 a1, char a2, struct _D3DKMT_EVICT *a3, char *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD **Current; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD **v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DXGDEVICE *v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  const D3DKMT_HANDLE *v40; // rsi
  __int64 v41; // rax
  D3DKMT_HANDLE v42; // r15d
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  __int64 v46; // rax
  struct _KTHREAD *v47; // r8
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rax
  struct _EX_RUNDOWN_REF *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  ULONG_PTR Count; // r8
  __int64 v58; // rdx
  __int64 i; // r8
  __int64 v60; // rax
  struct DXGDEVICE *v61; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v62; // [rsp+38h] [rbp-C8h] BYREF
  struct _EX_RUNDOWN_REF *v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h]
  char v66; // [rsp+58h] [rbp-A8h]
  _BYTE v67[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v68[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-78h]
  char v70[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v71[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v72[88]; // [rsp+D8h] [rbp-28h] BYREF

  v64 = -1;
  v65 = 0LL;
  v7 = (unsigned int)a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v66 = 1;
    v64 = 3061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3061);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 3061LL);
  v68[0] = 0LL;
  v69 = 0;
  if ( !a2 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  v20 = Current;
  if ( !Current )
  {
    v12 = -1073741811;
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    *(_QWORD *)(v21 + 32) = PsGetCurrentProcess(v23, v22, v24, v25);
    WdLogEvent5_WdError(v21);
    goto LABEL_5;
  }
  v62 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61, (unsigned int)v7, Current, &v62);
  v28 = v62;
  if ( v62 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67, v62);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, (__int64)v28, 0, v30, 0);
    v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70, 0LL);
    v34 = v31;
    if ( v31 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v33, v32);
      v35[3] = v34;
      v35[4] = v28;
      v35[5] = v20;
      WdLogEvent5_WdEvent(v35);
LABEL_20:
      v12 = v34;
LABEL_48:
      COREACCESS::~COREACCESS((COREACCESS *)v72);
      COREACCESS::~COREACCESS((COREACCESS *)v71);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67);
      goto LABEL_49;
    }
    v36 = *(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL);
    if ( *(int *)(v36 + 2328) < 0x2000 )
      v37 = 1LL;
    else
      v37 = *(unsigned int *)(v36 + 280);
    PagedPoolArray<unsigned int,4>::AllocateElements(v68, v37);
    v40 = (const D3DKMT_HANDLE *)v68[0];
    if ( !v68[0] )
    {
      v41 = WdLogNewEntry5_WdError(v39, v38);
      *(_QWORD *)(v41 + 24) = 3534LL;
      WdLogEvent5_WdError(v41);
      LODWORD(v34) = -1073741801;
      goto LABEL_20;
    }
    v42 = *a3->AllocationList;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v20 + 26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = *((_DWORD *)v20 + 58);
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v43, &EventBlockThread, v44, v45);
      }
      ExAcquirePushLockSharedEx(v20 + 26, 0LL);
    }
    v46 = (v42 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v46 < *((_DWORD *)v20 + 64) )
    {
      v47 = v20[30];
      v48 = *((_DWORD *)v47 + 4 * v46 + 2);
      if ( ((v42 >> 25) & 0x60) == (*((_BYTE *)v47 + 16 * v46 + 8) & 0x60) && (v48 & 0x2000) == 0 && (v48 & 0x1F) != 0 )
      {
        v49 = v48 & 0x1F;
        if ( (_BYTE)v49 == 5 )
        {
          v51 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v47 + 2 * (unsigned int)v46);
          goto LABEL_34;
        }
        v50 = WdLogNewEntry5_WdError(v49, 2LL * (unsigned int)v46);
        *(_QWORD *)(v50 + 24) = 316LL;
        WdLogEvent5_WdError(v50);
      }
    }
    v51 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63, v51);
    ExReleasePushLockSharedEx(v20 + 26, 0LL);
    KeLeaveCriticalRegion();
    v12 = -1073741811;
    if ( v63 )
    {
      Count = v63[5].Count;
      v58 = 0LL;
      if ( !Count )
      {
LABEL_43:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v63, v58);
        COREACCESS::~COREACCESS((COREACCESS *)v72);
        COREACCESS::~COREACCESS((COREACCESS *)v71);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67);
        if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
LABEL_4:
        v12 = DxgkEvictInternal(a3, 0, a4);
        goto LABEL_5;
      }
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v40;
          a3->NumAllocations = v58;
          goto LABEL_43;
        }
        if ( (unsigned int)v58 >= v69 )
          break;
        v40[v58] = *(_DWORD *)(i + 16);
        v58 = (unsigned int)(v58 + 1);
      }
      v60 = WdLogNewEntry5_WdError(v53, v58);
      *(_QWORD *)(v60 + 24) = 3560LL;
      WdLogEvent5_WdError(v60);
    }
    else
    {
      v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
      *(_QWORD *)(v55 + 24) = *a3->AllocationList;
      *(_QWORD *)(v55 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v55);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v63, v56);
    goto LABEL_48;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
  v12 = -1073741811;
  v29[3] = -1073741811LL;
  v29[4] = v7;
  v29[5] = v20;
  WdLogEvent5_WdError(v29);
LABEL_49:
  if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
LABEL_5:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v68);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v13);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v64);
  return v12;
}
