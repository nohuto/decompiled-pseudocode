/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C022DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015B3DC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, char *a3)
{
  char *v3; // r13
  unsigned int v4; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  D3DKMT_HANDLE hDevice; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // rbx
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  ULONG BroadcastContextCount; // r15d
  __int64 v34; // rax
  unsigned int v35; // r15d
  _BYTE *PoolWithTag; // rax
  unsigned int v37; // edi
  D3DKMT_HANDLE v38; // r15d
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rcx
  __int64 v46; // r8
  PVOID v47; // rdx
  __int64 v48; // r9
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  int v69; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+40h] [rbp-C0h]
  char v71; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  _BYTE v73[32]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v74; // [rsp+78h] [rbp-88h]
  struct DXGCONTEXT *v75[2]; // [rsp+80h] [rbp-80h] BYREF
  char *v76; // [rsp+90h] [rbp-70h]
  _BYTE v77[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h]
  char v79; // [rsp+A8h] [rbp-58h]
  _BYTE v80[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v81[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v82[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v83[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v84[88]; // [rsp+148h] [rbp+48h] BYREF

  v69 = -1;
  v3 = a3;
  v76 = a3;
  v4 = a2;
  v70 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3008);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 3008LL);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v13 = Current;
  if ( !Current )
  {
    LODWORD(v14) = -1073741811;
    v15 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = PsGetCurrentProcess(v17, v16, v18, v19);
    WdLogEvent5_WdError(v15);
    goto LABEL_52;
  }
  hDevice = a1->PrivatePresentData.hDevice;
  v75[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80, hDevice, Current, v75, 0);
  v24 = (__int64 *)v75[0];
  if ( !v75[0] )
  {
    LODWORD(v14) = -1073741811;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v25[3] = -1073741811LL;
    v25[4] = PsGetCurrentProcess(v27, v26, v28, v29);
    v25[5] = a1->PrivatePresentData.hDevice;
    WdLogEvent5_WdError(v25);
    goto LABEL_51;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75,
    *((struct DXGDEVICE **)v75[0] + 2));
  BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v34 + 24) = v24;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
    goto LABEL_50;
  }
  P = 0LL;
  v35 = BroadcastContextCount + 1;
  v74 = 0;
  if ( v35 <= 4 )
  {
    PoolWithTag = v73;
  }
  else
  {
    v30 = 0xFFFFFFFFFFFFFFFFuLL % v35;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v35 < 8 )
    {
LABEL_45:
      v64 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v64 + 24) = 2187LL;
      WdLogEvent5_WdWarning(v64);
      LODWORD(v14) = -1073741801;
      goto LABEL_46;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v35, 0x4B677844u);
  }
  v74 = v35;
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  memset(PoolWithTag, 0, 8LL * v35);
  if ( !P )
    goto LABEL_45;
  *(_QWORD *)P = v24;
  v37 = 0;
  if ( !a1->PrivatePresentData.BroadcastContextCount )
  {
    v47 = P;
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v81,
      v47,
      v74);
    if ( !v81[0] )
    {
      v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      *(_QWORD *)(v54 + 24) = 2226LL;
      WdLogEvent5_WdWarning(v54);
      LODWORD(v14) = -1073741801;
LABEL_44:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
      goto LABEL_46;
    }
    v78 = *(_QWORD *)(*(_QWORD *)(v24[2] + 16) + 16LL);
    v79 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, v24[2], 2, v55, 0);
    v56 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v82, v3);
    v14 = v56;
    if ( v56 >= 0 )
    {
      v60 = DXGCONTEXT::PresentFromCdd(
              (DXGCONTEXT *)v24,
              a1,
              v4,
              (struct COREDEVICEACCESS *)v82,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v77,
              (struct DXGCONTEXT **)P);
      v14 = v60;
      if ( v60 >= 0 )
        goto LABEL_42;
      if ( v60 != -1071775482 )
      {
        if ( v60 != -1071774910 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
          v63[3] = v14;
          v63[4] = v24;
          v63[5] = v13;
          WdLogEvent5_WdError(v63);
        }
        goto LABEL_42;
      }
      v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v62, v61);
      v59[3] = -1071775482LL;
    }
    else
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v58, v57);
      v59[3] = v14;
    }
    v59[4] = v24;
    v59[5] = v13;
    WdLogEvent5_WdEvent(v59);
LABEL_42:
    COREACCESS::~COREACCESS((COREACCESS *)v84);
    COREACCESS::~COREACCESS((COREACCESS *)v83);
    if ( v79 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    goto LABEL_44;
  }
  while ( 1 )
  {
    v38 = a1->PrivatePresentData.BroadcastContext[v37];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v13 + 208));
    v39 = (v38 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v39 < *((_DWORD *)v13 + 64) )
    {
      v40 = *((_QWORD *)v13 + 30);
      v41 = *(_DWORD *)(v40 + 16 * v39 + 8);
      if ( ((v38 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60) && (v41 & 0x2000) == 0 && (v41 & 0x1F) != 0 )
      {
        v42 = v41 & 0x1F;
        if ( (_BYTE)v42 == 7 )
        {
          v44 = *(_QWORD *)(v40 + 16LL * (unsigned int)v39);
          goto LABEL_25;
        }
        v43 = WdLogNewEntry5_WdError(v42, 2LL * (unsigned int)v39);
        *(_QWORD *)(v43 + 24) = 316LL;
        WdLogEvent5_WdError(v43);
      }
    }
    v44 = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx((char *)v13 + 208, 0LL);
    KeLeaveCriticalRegion();
    v46 = v37 + 1;
    *((_QWORD *)P + v46) = v44;
    v47 = P;
    v48 = *((_QWORD *)P + v46);
    if ( !v48 || *(_QWORD *)(v48 + 16) != v24[2] )
      break;
    ++v37;
    if ( (unsigned int)v46 >= a1->PrivatePresentData.BroadcastContextCount )
    {
      v4 = a2;
      v3 = v76;
      goto LABEL_32;
    }
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdError(v45, P);
  v49[3] = v24;
  v49[4] = a1->PrivatePresentData.BroadcastContext[v37];
  v50 = v37;
  LODWORD(v14) = -1073741811;
  v49[5] = v50;
  v49[6] = -1073741811LL;
  WdLogEvent5_WdError(v49);
LABEL_46:
  if ( P != v73 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v74 = 0;
LABEL_50:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
LABEL_51:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v20);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v69);
  return (unsigned int)v14;
}
