/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C01264E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C022A124 (DxgkDestroyClientAllocation.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // rbx
  char *v16; // rdi
  char *v17; // rdx
  volatile signed __int64 *v18; // rcx
  volatile signed __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  struct _KTHREAD *v22; // r8
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // edi
  struct DXGADAPTER *v30; // rcx
  struct DXGADAPTER *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  struct DXGDEVICE *v45; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v46; // [rsp+38h] [rbp-C8h] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h]
  char v49; // [rsp+58h] [rbp-A8h]
  char v50[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  char v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  char v54; // [rsp+80h] [rbp-80h]
  char v55[8]; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+98h] [rbp-68h]
  char v58[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v59[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v61; // [rsp+B8h] [rbp-48h]
  char v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  char v64[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h]
  struct DXGADAPTER *v66; // [rsp+F8h] [rbp-8h]
  char v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  struct DXGDEVICE *v69; // [rsp+128h] [rbp+28h]
  char v70; // [rsp+130h] [rbp+30h]

  v3 = a2;
  v4 = (unsigned int)a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3018);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 3018LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v12 = Current;
  if ( !Current )
  {
    v29 = -1073741811;
    v35 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    *(_QWORD *)(v35 + 32) = PsGetCurrentProcess(v37, v36, v38, v39);
    WdLogEvent5_WdError(v35);
    goto LABEL_41;
  }
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, (unsigned int)v4, Current, &v45);
  v15 = v45;
  if ( v45 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v53, v45);
    v16 = (char *)v15 + 16;
    v52 = 0;
    v51 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
    v18 = *(volatile signed __int64 **)(*((_QWORD *)v15 + 2) + 16LL);
    v61 = (struct DXGADAPTER *)v18;
    v62 = 0;
    v63 = 0LL;
    if ( v18 )
    {
      _InterlockedIncrement64(v18 + 3);
      v15 = v45;
      v60 = -1LL;
    }
    v19 = *(volatile signed __int64 **)(*(_QWORD *)v16 + 16LL);
    v66 = (struct DXGADAPTER *)v19;
    v67 = 0;
    v68 = 0LL;
    if ( v19 )
    {
      _InterlockedIncrement64(v19 + 3);
      v15 = v45;
      v65 = -1LL;
    }
    v69 = v15;
    v70 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v58, v17);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 16LL) + 200LL) == 4 )
      goto LABEL_23;
    v56 = (DXGPUSHLOCK *)(v12 + 26);
    if ( v12 != (struct _KTHREAD **)-208LL && v12[27] == KeGetCurrentThread() )
    {
      v41 = WdLogNewEntry5_WdAssertion(v12 + 26, v20);
      *(_QWORD *)(v41 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v41);
    }
    DXGPUSHLOCK::AcquireExclusive(v56);
    v57 = 2;
    v21 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)v12 + 64) )
    {
      v22 = v12[30];
      v23 = *((_DWORD *)v22 + 4 * v21 + 2);
      if ( (((unsigned int)v3 >> 25) & 0x60) == (*((_BYTE *)v22 + 16 * v21 + 8) & 0x60)
        && (v23 & 0x2000) == 0
        && (v23 & 0x1F) != 0 )
      {
        v24 = v23 & 0x1F;
        if ( (_BYTE)v24 == 5 )
        {
          v25 = *((_QWORD *)v22 + 2 * (unsigned int)v21);
          if ( v25 )
            *((_DWORD *)v22 + 4 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          goto LABEL_20;
        }
        v42 = WdLogNewEntry5_WdError(0x2000LL, v24);
        *(_QWORD *)(v42 + 24) = 316LL;
        WdLogEvent5_WdError(v42);
      }
    }
    v25 = 0LL;
LABEL_20:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
    if ( !v25 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v44 = *(_QWORD *)(*(_QWORD *)v16 + 16LL);
      v43[4] = v45;
      v43[3] = v44;
      v43[5] = v3;
      WdLogEvent5_WdError(v43);
      v29 = -1073741811;
      goto LABEL_24;
    }
    v28 = *((unsigned int *)v45 + 144);
    if ( (_DWORD)v28 == 4 )
      DxgkDestroyClientAllocation(v28, v45, 0LL, 0LL, *(_QWORD *)(v25 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v45,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v25 + 40),
        (struct COREDEVICEACCESS *)v58,
        DXGDEVICE::DestroyFlagsDefault);
LABEL_23:
    v29 = 0;
LABEL_24:
    v30 = v66;
    if ( v66 )
    {
      if ( v67 )
      {
        COREACCESS::Release((COREACCESS *)v64);
        v30 = v66;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v30 + 2), v30);
    }
    v31 = v61;
    if ( v61 )
    {
      if ( v62 )
      {
        COREACCESS::Release((COREACCESS *)v59);
        v31 = v61;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v31 + 2), v31);
    }
    if ( v52 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
    if ( v54 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v53 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_38;
  }
  v40 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
  v29 = -1073741811;
  v40[3] = -1073741811LL;
  v40[4] = v4;
  v40[5] = v12;
  WdLogEvent5_WdError(v40);
LABEL_38:
  if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
LABEL_41:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v20);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v47);
  return v29;
}
