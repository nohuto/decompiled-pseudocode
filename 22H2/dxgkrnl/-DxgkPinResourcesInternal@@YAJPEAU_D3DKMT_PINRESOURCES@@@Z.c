/*
 * XREFs of ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C0171530
 * Callers:
 *     NtDxgkPinResources @ 0x1C0171500 (NtDxgkPinResources.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019DC8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E090 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025DE8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0026010 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C01719E4 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C0172088 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C01725AC (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C02566A4 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkPinResourcesInternal(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rdx
  struct _D3DKMT_PINRESOURCES *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGDEVICE *v16; // r13
  unsigned __int64 v17; // r12
  DXGPAGINGQUEUE *v18; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGRESOURCEREFERENCE *v22; // rcx
  unsigned int v23; // eax
  unsigned int *v24; // rdx
  struct _EX_RUNDOWN_REF **v25; // rdi
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGRESOURCEREFERENCE *v29; // r8
  struct _EX_RUNDOWN_REF *v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  DXGPAGINGQUEUE *v49; // rcx
  __int64 v50; // rax
  bool v51; // cf
  SIZE_T v52; // rax
  char *v53; // rax
  struct DXGRESOURCEREFERENCE *v54; // rdi
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  _QWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  struct DXGDEVICE *v67; // [rsp+30h] [rbp-1C8h] BYREF
  int v68; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v69; // [rsp+40h] [rbp-1B8h]
  char v70; // [rsp+48h] [rbp-1B0h]
  bool v71; // [rsp+50h] [rbp-1A8h]
  struct _D3DKMT_PINRESOURCES *v72; // [rsp+58h] [rbp-1A0h]
  struct DXGRESOURCEREFERENCE *v73; // [rsp+60h] [rbp-198h]
  DXGPAGINGQUEUE *v74; // [rsp+68h] [rbp-190h] BYREF
  unsigned int v75; // [rsp+70h] [rbp-188h]
  unsigned int v76; // [rsp+74h] [rbp-184h]
  unsigned int v77; // [rsp+78h] [rbp-180h]
  DXGDEVICE *v78; // [rsp+80h] [rbp-178h] BYREF
  struct DXGPAGINGQUEUE *v79; // [rsp+88h] [rbp-170h] BYREF
  struct DXGPROCESS *v80; // [rsp+90h] [rbp-168h]
  struct DXGPAGINGQUEUE *v81; // [rsp+98h] [rbp-160h]
  unsigned __int64 v82; // [rsp+A0h] [rbp-158h] BYREF
  unsigned int v83[4]; // [rsp+A8h] [rbp-150h]
  unsigned int v84[4]; // [rsp+B8h] [rbp-140h]
  _QWORD v85[2]; // [rsp+C8h] [rbp-130h] BYREF
  unsigned int v86; // [rsp+D8h] [rbp-120h]
  __int64 v87; // [rsp+E0h] [rbp-118h]
  struct _EX_RUNDOWN_REF *v88; // [rsp+E8h] [rbp-110h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-108h]
  struct DXGRESOURCEREFERENCE *v90; // [rsp+F8h] [rbp-100h] BYREF
  char v91; // [rsp+100h] [rbp-F8h] BYREF
  int v92; // [rsp+120h] [rbp-D8h]
  _BYTE v93[160]; // [rsp+130h] [rbp-C8h] BYREF

  v72 = a1;
  v68 = -1;
  v69 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v70 = 1;
    v68 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2079);
  }
  else
  {
    v70 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v68, 2079LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v10 = (struct _KTHREAD **)Current;
  v80 = Current;
  if ( !Current )
  {
    v43 = WdLogNewEntry5_WdError(v9, 0LL);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
LABEL_91:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68, v44);
    if ( v70 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v68);
    }
    return 3221225485LL;
  }
  v71 = *((_BYTE *)Current + 346) == 0;
  v11 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_PINRESOURCES *)MmUserProbeAddress;
  *(_OWORD *)v83 = *(_OWORD *)v11;
  *(_OWORD *)v84 = *((_OWORD *)v11 + 1);
  v78 = 0LL;
  v12 = v83[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v67, v83[0], v10, &v78);
  v16 = v78;
  if ( !v78 )
  {
    v45 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v45 + 24) = v12;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    goto LABEL_47;
  }
  v77 = v84[0];
  if ( (v84[0] & 1) == 0 )
  {
    v14 = *(_QWORD *)(*((_QWORD *)v78 + 2) + 16LL);
    if ( (*(_DWORD *)(v14 + 348) & 0x200) != 0 )
      goto LABEL_9;
    v45 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v45 + 24) = 6118LL;
LABEL_47:
    WdLogEvent5_WdError(v45);
LABEL_88:
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    goto LABEL_91;
  }
  if ( v84[1] )
  {
    v45 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v45 + 24) = 6107LL;
    goto LABEL_47;
  }
LABEL_9:
  v87 = *(_QWORD *)&v83[2];
  if ( !*(_QWORD *)&v83[2] || (v17 = v83[1]) == 0 )
  {
    v64 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v64 + 24) = v12;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v64);
    goto LABEL_88;
  }
  v81 = 0LL;
  v79 = 0LL;
  v18 = 0LL;
  v74 = 0LL;
  if ( !v84[1] )
    goto LABEL_12;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v74, v84[1], (struct _KTHREAD **)v80, &v79, 1);
  v81 = v79;
  if ( !v79 )
  {
    v48 = WdLogNewEntry5_WdError(v47, v46);
    *(_QWORD *)(v48 + 24) = v84[1];
    goto LABEL_54;
  }
  if ( *((DXGDEVICE **)v79 + 2) != v16 )
  {
    v48 = WdLogNewEntry5_WdError(v47, v46);
    *(_QWORD *)(v48 + 24) = v12;
    *(_QWORD *)(v48 + 32) = v84[1];
LABEL_54:
    WdLogEvent5_WdError(v48);
    v49 = v74;
    if ( v74 )
LABEL_55:
      DXGPAGINGQUEUE::ReleaseReference(v49, v44);
    goto LABEL_88;
  }
  v18 = v74;
LABEL_12:
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v90);
  if ( (unsigned int)v17 <= 4 )
  {
    v90 = (struct DXGRESOURCEREFERENCE *)&v91;
LABEL_14:
    v92 = v17;
    goto LABEL_15;
  }
  v19 = 0xFFFFFFFFFFFFFFFFuLL % v17;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v17 >= 8 )
  {
    v50 = 8 * v17;
    if ( !is_mul_ok(v17, 8uLL) )
      v50 = -1LL;
    v51 = __CFADD__(v50, 8LL);
    v52 = v50 + 8;
    if ( v51 )
      v52 = -1LL;
    v53 = (char *)operator new[](v52, 0x4B677844u, PagedPool);
    if ( v53 )
    {
      *(_QWORD *)v53 = v17;
      v54 = (struct DXGRESOURCEREFERENCE *)(v53 + 8);
      `vector constructor iterator'(
        v53 + 8,
        8LL,
        v17,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v90 = v54;
    }
    else
    {
      v90 = 0LL;
    }
    goto LABEL_14;
  }
LABEL_15:
  v22 = v90;
  v73 = v90;
  if ( v90 )
  {
    v23 = 0;
    while ( 1 )
    {
      v75 = v23;
      if ( v23 >= (unsigned int)v17 )
        break;
      v89 = v23;
      v24 = (unsigned int *)(v87 + 4LL * v23);
      if ( v24 + 1 < v24 || (unsigned __int64)(v24 + 1) > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v22 = v73;
      }
      v76 = *v24;
      v86 = v76;
      v25 = (struct _EX_RUNDOWN_REF **)((char *)v22 + 8 * v23);
      ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v80,
                                                  (DXGRESOURCEREFERENCE *)&v88,
                                                  v76);
      DXGRESOURCEREFERENCE::MoveAssign(v25, ResourceSafe);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v88, v27);
      v30 = *v25;
      if ( !*v25 || (HIDWORD(v30->Ptr) & 1) == 0 || !v30[7].Count )
      {
LABEL_70:
        v58 = WdLogNewEntry5_WdWarning(v28, v19, v29);
        *(_QWORD *)(v58 + 24) = v76;
        *(_QWORD *)(v58 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v58);
        goto LABEL_71;
      }
      v19 = *(_QWORD *)(v30[1].Count + 16);
      v31 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
      if ( *(_QWORD *)(v19 + 16) != v31 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v31, v19);
        v56[3] = v16;
        v56[4] = *((_QWORD *)v73 + v89);
        v56[5] = -1073741811LL;
        WdLogEvent5_WdError(v56);
LABEL_71:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v90, v57);
        if ( !v18 )
          goto LABEL_88;
        v49 = v18;
        goto LABEL_55;
      }
      v28 = 0LL;
      v29 = v73;
      while ( (unsigned int)v28 < v75 )
      {
        if ( *((struct _EX_RUNDOWN_REF **)v73 + (unsigned int)v28) == v30 )
          goto LABEL_70;
        v28 = (unsigned int)(v28 + 1);
      }
      v23 = v75 + 1;
      v22 = v73;
    }
    if ( (*((_BYTE *)v16 + 1869) & 1) == 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v85, v16);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v93, (__int64)v16, 2, v32, 0);
      v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v93, 0LL);
      v37 = v33;
      if ( v33 < 0 )
      {
        v62 = WdLogNewEntry5_WdWarning(v35, v34, v36);
        *(_QWORD *)(v62 + 24) = v16;
        *(_QWORD *)(v62 + 32) = v37;
        WdLogEvent5_WdWarning(v62);
      }
      else if ( (v77 & 1) != 0 )
      {
        LODWORD(v37) = DXGDEVICE::PinDirectFlipResources(v16, v17, v73, v71);
      }
      else
      {
        v82 = 0LL;
        LODWORD(v37) = DXGDEVICE::PinResources(v16, v17, v73, v81, &v82);
        if ( (_DWORD)v37 == 259 )
        {
          v63 = (_QWORD *)((char *)v72 + 24);
          if ( (unsigned __int64)v72 + 24 >= MmUserProbeAddress )
            v63 = (_QWORD *)MmUserProbeAddress;
          *v63 = v82;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
      if ( v85[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v85);
      goto LABEL_34;
    }
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v90, v19);
    if ( v18 )
      DXGPAGINGQUEUE::ReleaseReference(v18, v59);
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68, v59);
    if ( v70 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v68);
    return 0LL;
  }
  else
  {
    v55 = WdLogNewEntry5_WdLowResource(0LL, v19, v20, v21);
    *(_QWORD *)(v55 + 24) = v17;
    LODWORD(v37) = -1073741801;
    *(_QWORD *)(v55 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v55);
LABEL_34:
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v90, v38);
    if ( v18 )
      DXGPAGINGQUEUE::ReleaseReference(v18, v39);
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68, v39);
    if ( v70 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v68);
    return (unsigned int)v37;
  }
}
