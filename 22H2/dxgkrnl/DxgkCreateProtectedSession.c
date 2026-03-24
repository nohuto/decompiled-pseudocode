/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C0289060
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0005074 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0005324 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B634 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0288740 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0288A60 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0288CF0 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KTHREAD **Current; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  ULONG64 v16; // rax
  char *v17; // r15
  size_t v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  char *v22; // r12
  unsigned int v23; // r14d
  struct DXGSYNCOBJECT *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct DXGDEVICE *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rax
  PERESOURCE *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rdx
  struct _KTHREAD *v49; // r8
  unsigned int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  signed __int32 v66; // ecx
  bool v67; // cc
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // edi
  __int64 v71; // rax
  _DWORD *v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  PVOID v75; // rcx
  PERESOURCE *Global; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  char v79[8]; // [rsp+40h] [rbp-188h] BYREF
  int v80; // [rsp+48h] [rbp-180h] BYREF
  __int64 v81; // [rsp+50h] [rbp-178h]
  char v82; // [rsp+58h] [rbp-170h]
  struct DXGSYNCOBJECT *v83; // [rsp+60h] [rbp-168h] BYREF
  PVOID P; // [rsp+68h] [rbp-160h] BYREF
  void *v85; // [rsp+70h] [rbp-158h] BYREF
  void *v86; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v87[16]; // [rsp+80h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-138h]
  size_t Size[2]; // [rsp+A0h] [rbp-128h]
  size_t v90; // [rsp+B0h] [rbp-118h] BYREF
  struct _KTHREAD **v91; // [rsp+B8h] [rbp-110h]
  _BYTE v92[16]; // [rsp+C0h] [rbp-108h] BYREF
  struct DXGDEVICE *v93; // [rsp+D0h] [rbp-F8h] BYREF
  ULONG64 v94; // [rsp+D8h] [rbp-F0h]
  ULONG64 v95; // [rsp+E0h] [rbp-E8h]
  _BYTE v96[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v94 = a1;
  v95 = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 57LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v80 = -1;
  v81 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v82 = 1;
    v80 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2148);
  }
  else
  {
    v82 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v80, 2148LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v91 = Current;
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v15);
    if ( v82 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v80);
    }
    return 3221225485LL;
  }
  v16 = a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v16;
  *(_OWORD *)Size = *(_OWORD *)(v16 + 16);
  v90 = *(_QWORD *)(v16 + 32);
  HIDWORD(v90) = 0;
  v17 = (char *)Src[1];
  v18 = LODWORD(Size[0]);
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_18;
LABEL_15:
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v10, v12);
    v19[3] = v17;
    v20 = (unsigned int)v18;
LABEL_16:
    v19[4] = v20;
LABEL_17:
    v19[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_43;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_15;
LABEL_18:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v10, v12);
    v21 = (unsigned int)v18;
LABEL_20:
    v19[3] = v21;
    v19[4] = 0x2000000LL;
    goto LABEL_17;
  }
  v22 = (char *)Size[1];
  v23 = v90;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v90 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( !(_DWORD)v90 )
  {
LABEL_25:
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v10, v12);
    v19[3] = v22;
    v20 = v23;
    goto LABEL_16;
  }
LABEL_26:
  if ( (unsigned int)v90 > 0x2000000 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v10, v12);
    v21 = v23;
    goto LABEL_20;
  }
  v85 = 0LL;
  v86 = 0LL;
  v24 = 0LL;
  v83 = 0LL;
  P = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v85 = operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    if ( !v85 )
    {
LABEL_30:
      v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = v18;
      v30 = -1073741801;
      *(_QWORD *)(v29 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v29);
LABEL_89:
      v75 = P;
      if ( P )
        DXGPROTECTEDSESSION::DestroyProtectedSession(P, HIDWORD(v90));
      if ( v24 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v75, v31);
        DXGGLOBAL::DestroySyncObject(Global, v24, 0);
      }
      if ( v85 )
        operator delete[](v85);
      if ( v86 )
        operator delete[](v86);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v31);
      if ( v82 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v80);
      return (unsigned int)v30;
    }
    if ( &v17[v18] < v17 || (unsigned __int64)&v17[v18] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v85, v17, v18);
  }
  if ( v23 )
  {
    v18 = v23;
    v86 = operator new[](v23, 0x4B677844u, PagedPool);
    if ( !v86 )
      goto LABEL_30;
    if ( &v22[v23] < v22 || (unsigned __int64)&v22[v23] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v86, v22, v23);
  }
  v93 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v79, LODWORD(Src[0]), Current, &v93);
  v34 = v93;
  if ( !v93 )
  {
    v35 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v35 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v79);
    goto LABEL_43;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v87, v93);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v96, (__int64)v34, 1, v39, 0);
  v30 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v96, 0LL);
  if ( v30 < 0 )
  {
LABEL_48:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v87);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v79);
    goto LABEL_89;
  }
  v42 = *((_QWORD *)v34 + 231);
  if ( !v42 )
  {
    v43 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v43 + 24) = v34;
    v30 = -1073741637;
    *(_QWORD *)(v43 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_48;
  }
  v44 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v41, v40);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v92, v44, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v92, v45);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(Current + 26));
  v46 = HIDWORD(Src[0]);
  v47 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  v48 = HIDWORD(Src[0]) >> 30;
  if ( (unsigned int)v47 >= *((_DWORD *)v91 + 64) )
    goto LABEL_57;
  v49 = v91[30];
  v50 = *((_DWORD *)v49 + 4 * v47 + 2);
  if ( (_DWORD)v48 != ((v50 >> 5) & 3) || (v50 & 0x2000) != 0 || (v50 & 0x1F) == 0 )
    goto LABEL_57;
  v51 = v50 & 0x1F;
  if ( (_BYTE)v51 != 11 )
  {
    v52 = WdLogNewEntry5_WdError(v51, v48);
    *(_QWORD *)(v52 + 24) = 316LL;
    WdLogEvent5_WdError(v52);
LABEL_57:
    v53 = 0LL;
    goto LABEL_58;
  }
  v53 = *((_QWORD *)v49 + 2 * (unsigned int)v47);
LABEL_58:
  ExReleasePushLockSharedEx(Current + 26, 0LL);
  KeLeaveCriticalRegion();
  if ( !v53 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
    v56[3] = v91;
    v56[4] = v46;
LABEL_60:
    WdLogEvent5_WdError(v56);
    v30 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v92);
    goto LABEL_48;
  }
  if ( *(struct DXGDEVICE **)(v53 + 16) != v34 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
    v56[3] = v46;
    v56[4] = *(_QWORD *)(v53 + 16);
    v56[5] = v34;
    goto LABEL_60;
  }
  v83 = *(struct DXGSYNCOBJECT **)(v53 + 32);
  _InterlockedIncrement((volatile signed __int32 *)v83 + 6);
  v24 = v83;
  if ( *((_DWORD *)v83 + 48) != 5 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
    v56[3] = v91;
    v56[4] = HIDWORD(Src[0]);
    goto LABEL_60;
  }
  if ( (*((_DWORD *)v83 + 49) & 2) == 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
    v56[3] = v24;
    v56[4] = -1073741811LL;
    goto LABEL_60;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v92);
  v30 = ADAPTER_DISPLAY::CreateProtectedSession(
          *(DXGADAPTER ***)(v42 + 2696),
          &v83,
          &v85,
          Size[0],
          &v86,
          v90,
          (struct DXGPROTECTEDSESSION **)&P);
  if ( v30 < 0 )
  {
    if ( P )
    {
      v61 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v61 + 24) = 302LL;
      WdLogEvent5_WdAssertion(v61);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v87);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v79);
    v24 = v83;
    goto LABEL_89;
  }
  v24 = v83;
  if ( v83 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v58, v57);
    *(_QWORD *)(v62 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v62);
  }
  if ( v85 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v58, v57);
    *(_QWORD *)(v63 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v63);
  }
  if ( v86 )
  {
    v64 = WdLogNewEntry5_WdAssertion(v58, v57);
    *(_QWORD *)(v64 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v64);
  }
  v30 = DXGPROTECTEDSESSION::Open((DXGPROTECTEDSESSION *)P, (unsigned int *)&v90 + 1, v59, v60);
  if ( v30 < 0 )
    goto LABEL_48;
  v66 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF);
  v67 = v66 <= 1;
  v68 = (unsigned int)(v66 - 1);
  if ( v67 )
  {
    v69 = WdLogNewEntry5_WdAssertion(v68, v65);
    *(_QWORD *)(v69 + 24) = 328LL;
    WdLogEvent5_WdAssertion(v69);
  }
  v70 = HIDWORD(v90);
  if ( !HIDWORD(v90) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v68, v65);
    *(_QWORD *)(v71 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v71);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v87);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v79);
  v72 = (_DWORD *)(v94 + 36);
  if ( v94 + 36 >= MmUserProbeAddress )
    v72 = (_DWORD *)MmUserProbeAddress;
  *v72 = v70;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, (__int64)v72);
  if ( v82 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v74, v80);
  return 0LL;
}
