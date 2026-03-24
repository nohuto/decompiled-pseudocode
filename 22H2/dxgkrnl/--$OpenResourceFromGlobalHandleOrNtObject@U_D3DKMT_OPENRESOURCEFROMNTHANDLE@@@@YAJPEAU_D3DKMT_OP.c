/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01296D4
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C012A160 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B74 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025BE4 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025DE8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C0129E04 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_2_--ENSURE_SHARED_R.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0129E20 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        int a4)
{
  bool v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  PVOID v12; // r15
  char v13; // r12
  unsigned int *v14; // rdi
  ULONG64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGDEVICE *v19; // r14
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r13
  ULONG_PTR Count; // r13
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  SIZE_T v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  void *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int StandardAllocation; // r15d
  void *v46; // r13
  _QWORD *v47; // r8
  _DWORD *v48; // rdx
  _DWORD *v49; // rdx
  unsigned int v50; // r10d
  __int64 v51; // r12
  char *v52; // rcx
  size_t v53; // r8
  char *v54; // rcx
  size_t v55; // r8
  __int64 v57; // r11
  ULONG64 v58; // r9
  _DWORD *v59; // rdx
  _DWORD *v60; // rdx
  _QWORD *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  unsigned int v68; // edi
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rcx
  struct DXGPROCESS *v76; // r13
  unsigned int v77; // r9d
  unsigned int v78; // ecx
  __int64 v79; // r8
  int v80; // edx
  __int64 v81; // rdx
  __int64 v82; // rax
  struct DXGRESOURCE *v83; // rdi
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // r15d
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned int v90; // r8d
  __int64 v91; // rdx
  int v92; // ecx
  int v93; // eax
  __int64 v94; // rdx
  _DWORD *v95; // rcx
  _QWORD *v96; // rax
  char *v97; // rcx
  size_t v98; // r8
  __int64 v99; // rax
  bool v100; // [rsp+50h] [rbp-408h]
  struct DXGDEVICE *v101; // [rsp+58h] [rbp-400h] BYREF
  struct DXGDEVICE *v102; // [rsp+60h] [rbp-3F8h] BYREF
  int v103; // [rsp+70h] [rbp-3E8h]
  void *v104; // [rsp+78h] [rbp-3E0h]
  void *Src; // [rsp+80h] [rbp-3D8h]
  struct _EX_RUNDOWN_REF *v106; // [rsp+88h] [rbp-3D0h] BYREF
  char v107[8]; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v108; // [rsp+98h] [rbp-3C0h]
  char v109; // [rsp+A0h] [rbp-3B8h]
  unsigned int *v110; // [rsp+A8h] [rbp-3B0h]
  void *v111; // [rsp+B0h] [rbp-3A8h]
  __int64 v112; // [rsp+B8h] [rbp-3A0h] BYREF
  ULONG64 v113; // [rsp+C0h] [rbp-398h]
  _BYTE v114[16]; // [rsp+C8h] [rbp-390h] BYREF
  int v115; // [rsp+D8h] [rbp-380h]
  void *v116; // [rsp+E0h] [rbp-378h]
  __int64 v117; // [rsp+E8h] [rbp-370h]
  struct DXGPROCESS *v118; // [rsp+F0h] [rbp-368h]
  _BYTE v119[24]; // [rsp+F8h] [rbp-360h] BYREF
  _OWORD v120[7]; // [rsp+110h] [rbp-348h] BYREF
  _BYTE v121[32]; // [rsp+180h] [rbp-2D8h] BYREF
  _QWORD v122[54]; // [rsp+1A0h] [rbp-2B8h] BYREF
  _DWORD v123[4]; // [rsp+350h] [rbp-108h] BYREF
  __int64 v124; // [rsp+360h] [rbp-F8h]
  _BYTE v125[160]; // [rsp+370h] [rbp-E8h] BYREF

  v115 = a4;
  v106 = a3;
  v113 = a1;
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v100 = v5;
  Current = DXGPROCESS::GetCurrent(1LL, v6, v7, v8);
  v118 = Current;
  v104 = 0LL;
  v12 = 0LL;
  v111 = 0LL;
  Src = 0LL;
  v13 = 0;
  if ( !Current )
  {
    v62 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v62 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    return 3221225485LL;
  }
  memset(v120, 0, 0x68uLL);
  v14 = (unsigned int *)v120;
  if ( v5 )
  {
    v15 = a1;
    if ( a1 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    v120[0] = *(_OWORD *)v15;
    v120[1] = *(_OWORD *)(v15 + 16);
    v120[2] = *(_OWORD *)(v15 + 32);
    v120[3] = *(_OWORD *)(v15 + 48);
    v120[4] = *(_OWORD *)(v15 + 64);
    v120[5] = *(_OWORD *)(v15 + 80);
    *(_QWORD *)&v120[6] = *(_QWORD *)(v15 + 96);
  }
  else
  {
    v14 = (unsigned int *)a1;
  }
  v110 = v14;
  v117 = *((_QWORD *)v14 + 9);
  v102 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v101, *v14, (struct _KTHREAD **)Current, &v102);
  v19 = v102;
  if ( !v102 )
  {
    v63 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v63 + 24) = *v14;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v63);
LABEL_140:
    if ( v101 && _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v101 + 2), v101);
    return 3221225485LL;
  }
  if ( !v14[16] && !v14[12] )
  {
    v64 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v64 + 24) = v19;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v64);
    goto LABEL_140;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v114,
    v102);
  v108 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  v109 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v125, (__int64)v19, 2, v20, 0);
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v125, 0LL);
  v25 = v21;
  if ( v21 >= 0 )
  {
    if ( v106 )
    {
      Count = v106[2].Count;
      if ( Count )
      {
        v112 = 0LL;
        if ( (*(_DWORD *)(Count + 12) & 0x10) != 0 )
        {
          v67 = WdLogNewEntry5_WdEvent(v23, v22);
          *(_QWORD *)(v67 + 24) = Count;
          v68 = -1073741823;
          *(_QWORD *)(v67 + 32) = -1073741823LL;
          WdLogEvent5_WdEvent(v67);
        }
        else
        {
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v119, Current);
          if ( (_BYTE)v28 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v125, v27);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v119, 1LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
            v103 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v125, 0LL);
            if ( v103 < 0 )
            {
              v72 = WdLogNewEntry5_WdWarning(v71, v70, v28);
              *(_QWORD *)(v72 + 24) = v19;
              v68 = v103;
              *(_QWORD *)(v72 + 32) = v103;
              WdLogEvent5_WdWarning(v72);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v119);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v112);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
              if ( v109 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v114);
              if ( !v101 )
                return v68;
              goto LABEL_79;
            }
          }
          v29 = v14[4];
          if ( 80 * v29 <= 0xFFFFFFFF )
          {
            v30 = 80LL * v14[4];
            if ( !is_mul_ok(v29, 0x50uLL) )
              v30 = -1LL;
            v116 = operator new[](v30, 0x4B677844u, PagedPool);
            if ( !v116 )
            {
              v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
              v73[3] = v19;
              v73[4] = v14[4];
              StandardAllocation = -1073741801;
              v73[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v73);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v119);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v112);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
              if ( v109 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v114);
              if ( !v101 )
                return (unsigned int)StandardAllocation;
LABEL_52:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v101 + 2), v101);
              return (unsigned int)StandardAllocation;
            }
            v34 = v14[16];
            if ( v34 && (v12 = operator new[](v34, 0x4B677844u, PagedPool), (v111 = v12) == 0LL) )
            {
              v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v31, v36);
              v74[3] = v19;
              v75 = v14[16];
            }
            else
            {
              if ( v14[12] )
              {
                v104 = operator new[](v14[12], 0x4B677844u, PagedPool);
                if ( !v104 )
                {
                  v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v31, v85);
                  v74[3] = v19;
                  v75 = v14[12];
                  goto LABEL_93;
                }
              }
              v37 = v14[8];
              if ( !v37 )
              {
                v38 = Src;
                goto LABEL_22;
              }
              v38 = operator new[](v37, 0x4B677844u, PagedPool);
              Src = v38;
              if ( v38 )
              {
LABEL_22:
                if ( (*((_BYTE *)v19 + 1869) & 1) != 0
                  || (v40 = *((_QWORD *)v19 + 2), *(_QWORD *)(Count + 80) == v40)
                  && ((v41 = *((_QWORD *)v19 + 231)) == 0 || *(_QWORD *)(v41 + 2704) || *(_QWORD *)(Count + 96) == v41) )
                {
                  if ( v100 )
                  {
                    *((_QWORD *)v14 + 9) = v12;
                    *((_QWORD *)v14 + 7) = v104;
                    *((_QWORD *)v14 + 5) = v38;
                    *((_QWORD *)v14 + 3) = v116;
                  }
                  StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                         v19,
                                         0,
                                         (struct COREDEVICEACCESS *)v125,
                                         v115,
                                         0LL,
                                         0LL,
                                         0LL);
                  if ( StandardAllocation >= 0 )
                  {
                    v46 = v111;
LABEL_30:
                    v13 = 1;
                    if ( v100 )
                    {
                      v47 = (_QWORD *)v113;
                      v48 = (_DWORD *)(v113 + 80);
                      if ( v113 + 80 >= MmUserProbeAddress )
                        v48 = (_DWORD *)MmUserProbeAddress;
                      *v48 = v14[20];
                      v49 = v47 + 8;
                      if ( (unsigned __int64)(v47 + 8) >= MmUserProbeAddress )
                        v49 = (_DWORD *)MmUserProbeAddress;
                      *v49 = v14[16];
                      v50 = 0;
                      v51 = v117;
                      while ( v50 < v14[4] )
                      {
                        v57 = 80LL * v50;
                        v117 = v51 + *(_DWORD *)(*((_QWORD *)v14 + 3) + v57 + 8) - v14[18];
                        v58 = v57 + v47[3];
                        v59 = (_DWORD *)v58;
                        if ( v58 >= MmUserProbeAddress )
                          v59 = (_DWORD *)MmUserProbeAddress;
                        *v59 = *(_DWORD *)(v57 + *((_QWORD *)v14 + 3));
                        v60 = (_DWORD *)(v58 + 16);
                        if ( v58 + 16 >= MmUserProbeAddress )
                          v60 = (_DWORD *)MmUserProbeAddress;
                        *v60 = *(_DWORD *)(*((_QWORD *)v14 + 3) + v57 + 16);
                        v61 = (_QWORD *)(v58 + 8);
                        if ( v58 + 8 >= MmUserProbeAddress )
                          v61 = (_QWORD *)MmUserProbeAddress;
                        *v61 = v117;
                        ++v50;
                        v19 = v102;
                        v47 = (_QWORD *)v113;
                      }
                      if ( v14[8] )
                      {
                        v52 = (char *)v47[5];
                        v53 = v14[8];
                        if ( (unsigned __int64)&v52[v53] > MmUserProbeAddress || &v52[v53] <= v52 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v52, Src, v53);
                        v19 = v102;
                        v47 = (_QWORD *)v113;
                      }
                      if ( v14[12] )
                      {
                        v97 = (char *)v47[7];
                        v98 = v14[12];
                        if ( (unsigned __int64)&v97[v98] > MmUserProbeAddress || &v97[v98] <= v97 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v97, v104, v98);
                        v19 = v102;
                      }
                      v13 = 1;
                      if ( v14[16] )
                      {
                        v54 = *(char **)(v113 + 72);
                        v55 = v14[16];
                        if ( (unsigned __int64)&v54[v55] > MmUserProbeAddress || &v54[v55] <= v54 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v54, v46, v55);
                        v13 = 1;
                        v19 = v102;
                      }
                    }
LABEL_48:
                    if ( StandardAllocation >= 0 )
                      goto LABEL_49;
LABEL_94:
                    if ( !v13 )
                      goto LABEL_49;
                    v76 = v118;
                    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                      (DXGHANDLETABLELOCKEXCLUSIVE *)v121,
                      (struct _KTHREAD **)v118);
                    v77 = v14[20];
                    v78 = (v77 >> 6) & 0xFFFFFF;
                    if ( v78 < *((_DWORD *)v76 + 64) )
                    {
                      v79 = *((_QWORD *)v76 + 30);
                      v80 = *(_DWORD *)(v79 + 16LL * v78 + 8);
                      if ( ((v77 >> 25) & 0x60) == (v80 & 0x60) && (v80 & 0x2000) == 0 && (v80 & 0x1F) != 0 )
                      {
                        v81 = v80 & 0x1F;
                        if ( (_BYTE)v81 == 4 )
                        {
                          v83 = *(struct DXGRESOURCE **)(v79 + 16LL * v78);
                          if ( v83 )
                            *(_DWORD *)(v79 + 16 * (((unsigned __int64)v77 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                          goto LABEL_102;
                        }
                        v82 = WdLogNewEntry5_WdError(0x2000LL, v81);
                        *(_QWORD *)(v82 + 24) = 316LL;
                        WdLogEvent5_WdError(v82);
                      }
                    }
                    v83 = 0LL;
LABEL_102:
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v121);
                    DXGDEVICE::DestroyAllocationInternal(v19, 0, 0LL, v83, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_49:
                    operator delete[](v111);
                    operator delete[](v104);
                    operator delete[](v116);
                    operator delete[](Src);
                    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v119);
                    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v112);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
                    if ( v109 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v114);
                    if ( !v101 )
                      return (unsigned int)StandardAllocation;
                    goto LABEL_52;
                  }
                  v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
                  v96[3] = 11183LL;
                }
                else
                {
                  v86 = *(_DWORD *)(Count + 12);
                  if ( (v86 & 0x20) != 0 )
                  {
                    if ( *(_DWORD *)(Count + 132) != v14[4] )
                    {
                      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v31, v40);
                      v87[3] = v19;
                      v87[4] = v14[4];
                      v88 = *(unsigned int *)(Count + 132);
LABEL_111:
                      v87[5] = v88;
                      v87[6] = -1073741811LL;
LABEL_113:
                      WdLogEvent5_WdWarning(v87);
                      StandardAllocation = -1073741811;
                      goto LABEL_94;
                    }
                    v103 = *(_DWORD *)(Count + 112);
                    if ( v14[8] != v103 )
                    {
                      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v31, v40);
                      v87[3] = v19;
                      v87[4] = v14[8];
                      v88 = *(unsigned int *)(Count + 112);
                      goto LABEL_111;
                    }
                    v89 = *(unsigned int *)(Count + 216);
                    if ( !(_DWORD)v89 && *(_DWORD *)(*(_QWORD *)(v40 + 16) + 1872LL) < 0x5000u )
                    {
                      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v89, v40);
                      v87[3] = v19;
                      v87[4] = -1073741811LL;
                      goto LABEL_113;
                    }
                    v124 = 0LL;
                    v123[2] = v89;
                    v123[0] = *(_DWORD *)(Count + 208);
                    v123[1] = *(_DWORD *)(Count + 212);
                    v123[3] = 7;
                    memset(v122, 0, 0x1A8uLL);
                    v90 = v122[0] & 0xFFFFBEFF | (4 * (v86 & 0x40 | (32 * (v86 & 0x80)))) | 0x41;
                    HIDWORD(v122[0]) = *v14;
                    LODWORD(v122[2]) = 4;
                    v122[3] = v123;
                    v122[39] = *(_QWORD *)(Count + 104);
                    LODWORD(v122[40]) = v103;
                    v91 = *(_QWORD *)(Count + 192);
                    if ( (v86 & 0x200) != 0 )
                      v122[42] = *(_QWORD *)(Count + 192);
                    else
                      v122[41] = *(_QWORD *)(Count + 192);
                    v122[43] = *(_QWORD *)(Count + 224);
                    LODWORD(v122[6]) = *(_DWORD *)(Count + 232);
                    v122[44] = v104;
                    LODWORD(v122[45]) = v14[12];
                    v122[46] = v111;
                    LODWORD(v122[47]) = v14[16];
                    LODWORD(v122[0]) = v90 ^ (v90 ^ (v86 << 7)) & 0x400 | 0x200;
                    v122[52] = *(_QWORD *)(Count + 184);
                    if ( (v86 & 0x200) != 0 )
                    {
                      v122[42] = v91;
                    }
                    else
                    {
                      if ( (v86 & 0x400) == 0 )
                      {
LABEL_125:
                        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                               (struct _DXGK_ALLOCATIONINFO *)v19,
                                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v122,
                                               (struct COREDEVICEACCESS *)v125);
                        if ( StandardAllocation < 0 )
                          goto LABEL_48;
                        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                                 (__int64)v118,
                                                 (DXGRESOURCEREFERENCE *)&v106,
                                                 v122[1])
                                  + 120LL) = Count;
                        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v106, v94);
                        memmove(Src, *(const void **)(Count + 104), v14[8]);
                        v14[20] = v122[1];
                        v95 = v116;
                        *(_DWORD *)v116 = HIDWORD(v122[6]);
                        v95[4] = v14[16];
                        v46 = v111;
                        *((_QWORD *)v95 + 1) = v111;
                        *((_QWORD *)v14 + 3) = v95;
                        *((_QWORD *)v14 + 5) = Src;
                        *((_QWORD *)v14 + 7) = v104;
                        *((_QWORD *)v14 + 9) = v46;
                        goto LABEL_30;
                      }
                      v122[41] = v91;
                    }
                    v93 = *(_DWORD *)(Count + 204);
                    v92 = v90 ^ (v90 ^ (v86 << 7)) & 0x400 | 0x200;
                    LODWORD(v122[0]) = v92 ^ ((unsigned __int8)v92 ^ (unsigned __int8)(v86 >> 7)) & 0x10;
                    LODWORD(v122[49]) = v93;
                    goto LABEL_125;
                  }
                  StandardAllocation = -1073741811;
                  v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v31, v40);
                  v96[3] = v19;
                  v96[4] = v106;
                  v96[5] = -1073741811LL;
                }
                WdLogEvent5_WdWarning(v96);
                goto LABEL_48;
              }
              v74 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v31, v39);
              v74[3] = v19;
              v75 = v14[8];
            }
LABEL_93:
            v74[4] = v75;
            StandardAllocation = -1073741801;
            v74[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v74);
            goto LABEL_94;
          }
          v69 = WdLogNewEntry5_WdWarning(v29, 0xFFFFFFFFLL, v28);
          *(_QWORD *)(v69 + 24) = v19;
          v68 = -1073741675;
          *(_QWORD *)(v69 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v69);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v119);
        }
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v112);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
        if ( v109 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v114);
        if ( !v101 )
          return v68;
LABEL_79:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v101 + 2), v101);
        return v68;
      }
      v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v66[3] = v19;
      v66[4] = v106;
      v66[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v66);
    }
    else
    {
      v99 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v99 + 24) = v19;
      *(_QWORD *)(v99 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v99);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
    if ( v109 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v114);
    goto LABEL_140;
  }
  v65 = WdLogNewEntry5_WdWarning(v23, v22, v24);
  *(_QWORD *)(v65 + 24) = v19;
  *(_QWORD *)(v65 + 32) = v25;
  WdLogEvent5_WdWarning(v65);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
  if ( v109 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v114);
  if ( v101 && _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v101 + 2), v101);
  return (unsigned int)v25;
}
