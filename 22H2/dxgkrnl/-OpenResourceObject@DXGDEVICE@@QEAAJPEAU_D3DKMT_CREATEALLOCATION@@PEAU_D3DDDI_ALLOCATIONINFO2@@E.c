/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01B5930
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C01CD980 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C00029AC (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C00083C4 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0017114 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C004794C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0047C70 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0175A88 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1C01899D4 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018ABF8 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01A3F58 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C01A7934 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01B622C (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C02D7168 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C02D8108 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C03440A8 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCEREFERENCE *a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        struct DXGAUTOMUTEX *a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v17; // rdi
  struct DXGPROCESS *v18; // r14
  unsigned __int8 *v19; // r13
  char v20; // di
  D3DKMT_HANDLE hResource; // r12d
  D3DKMT_CREATEALLOCATIONFLAGS v22; // eax
  __int64 v23; // rdi
  struct DXGTHREAD *DxgThread; // rax
  __int64 Pool2; // r12
  __int64 v27; // rbx
  __int64 v28; // r8
  char v29; // cl
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 *v31; // r8
  unsigned __int64 v32; // rbx
  unsigned int v33; // r14d
  DXGADAPTERALLOCATION_VGPU *v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 **v37; // rdx
  int v38; // r14d
  D3DKMT_CREATEALLOCATIONFLAGS v39; // eax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rsi
  void *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  struct DXGRESOURCEREFERENCE *v47; // rbx
  struct DXGTHREAD *v48; // rax
  DXGAUTOPUSHLOCK *v49; // r14
  struct DXGGLOBAL *v50; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v51; // eax
  __int64 v52; // rcx
  struct _DXGSHAREDALLOCOBJECT *v53; // r8
  __int64 v54; // rax
  __int64 *v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  UINT v63; // r10d
  _QWORD *v64; // r9
  __int64 v65; // rax
  signed __int32 v66; // eax
  signed __int32 v67; // ett
  __int64 v68; // rcx
  bool v69; // di
  _QWORD *v70; // rax
  _QWORD *v71; // rdx
  __int64 v72; // rbx
  int IsProtectedProcessLight; // eax
  struct DXGGLOBAL *v74; // rax
  __int64 ObjectA; // r14
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v79; // rdi
  unsigned int v80; // eax
  __int64 v81; // rdx
  int v82; // ecx
  struct _EX_RUNDOWN_REF *v83; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  DXGDEVICE *v85; // r9
  __int64 v86; // rax
  __int64 v87; // rcx
  UINT PrivateDriverDataSize; // eax
  DXGPUSHLOCK *v89; // rcx
  UINT v90; // edx
  ULONG_PTR Count; // r8
  UINT NumAllocations; // r10d
  __int64 v93; // r11
  unsigned int v94; // edi
  unsigned int v95; // r12d
  unsigned __int64 v96; // rax
  __int64 v97; // r13
  ULONG_PTR v98; // rax
  void *v99; // rcx
  UINT i; // r12d
  DXGADAPTERALLOCATION_VGPU *v101; // rax
  DXGADAPTERALLOCATION_VGPU *v102; // rax
  __int64 *v103; // rcx
  __int64 v104; // rax
  __int64 **v105; // rdx
  DXGRESOURCE *v106; // rax
  int v107; // r9d
  int v108; // eax
  struct DXGPROCESS *v109; // rbx
  D3DKMT_HANDLE hGlobalShare; // r14d
  unsigned int v111; // eax
  __int64 v112; // rdx
  int v113; // ecx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v115; // r9
  __int64 v116; // r8
  DXGADAPTER *v117; // rcx
  DXGADAPTERALLOCATION_VGPU *v118; // rax
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  struct DXGTHREAD *v121; // [rsp+50h] [rbp-31h] BYREF
  char v122; // [rsp+58h] [rbp-29h]
  char v123[8]; // [rsp+60h] [rbp-21h] BYREF
  DXGAUTOPUSHLOCK *v124; // [rsp+68h] [rbp-19h]
  DXGFASTMUTEX *v125; // [rsp+70h] [rbp-11h] BYREF
  char v126; // [rsp+78h] [rbp-9h]
  __int64 v127; // [rsp+D0h] [rbp+4Fh]
  __int64 v128; // [rsp+D0h] [rbp+4Fh]
  DXGRESOURCE *v129; // [rsp+D0h] [rbp+4Fh]
  __int64 v130; // [rsp+D8h] [rbp+57h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v131; // [rsp+E0h] [rbp+5Fh]
  char v132; // [rsp+E8h] [rbp+67h]

  v132 = a4;
  v131 = a3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
  {
    WdLogSingleEntry1(1LL, 2088LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2088LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = 0LL;
  v130 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v13);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v17 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_6;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v18 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v18 )
    {
      v14 = (struct _EX_RUNDOWN_REF *)v130;
      goto LABEL_7;
    }
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v14 = (struct _EX_RUNDOWN_REF *)v130;
LABEL_6:
    v18 = v17;
    goto LABEL_7;
  }
  v18 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v18 )
    goto LABEL_6;
LABEL_7:
  v19 = a8;
  v20 = BYTE1(*((_DWORD *)v18 + 106)) & 1;
  v124 = 0LL;
  *a8 = 0;
  hResource = a2->hResource;
  if ( hResource )
  {
    v79 = *((_QWORD *)this + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v79 + 248));
    v80 = (hResource >> 6) & 0xFFFFFF;
    if ( v80 < *(_DWORD *)(v79 + 296) )
    {
      v81 = *(_QWORD *)(v79 + 280) + 16LL * v80;
      if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(v81 + 8) & 0x60) && (*(_DWORD *)(v81 + 8) & 0x2000) == 0 )
      {
        v82 = *(_DWORD *)(v81 + 8) & 0x1F;
        if ( v82 )
        {
          if ( v82 == 4 )
          {
            v83 = *(struct _EX_RUNDOWN_REF **)v81;
LABEL_137:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v123, v83);
            _InterlockedDecrement((volatile signed __int32 *)(v79 + 264));
            ExReleasePushLockSharedEx(v79 + 248, 0LL);
            KeLeaveCriticalRegion();
            DXGRESOURCEREFERENCE::MoveAssign(&v130, v123);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v123);
            v14 = (struct _EX_RUNDOWN_REF *)v130;
            if ( !v130 )
            {
              LODWORD(v23) = -1073741816;
              WdLogSingleEntry3(3LL, this, a2->hResource, -1073741816LL);
              goto LABEL_63;
            }
            Flags = a2->Flags;
            if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
            {
              v38 = -1073741811;
              WdLogSingleEntry2(3LL, this, -1073741811LL);
              goto LABEL_62;
            }
            v85 = *(DXGDEVICE **)(v130 + 8);
            if ( v85 != this )
            {
              LODWORD(v23) = -1073741811;
              WdLogSingleEntry4(3LL, this, a2->hResource, v85, -1073741811LL);
              goto LABEL_63;
            }
            if ( (*(_WORD *)&Flags & 0x800) != 0 )
            {
              v86 = *(_QWORD *)(v130 + 56);
              if ( !v86 || (*(_DWORD *)(v86 + 12) & 0x20) == 0 )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry2(3LL, a2->hResource, -1073741811LL);
                goto LABEL_63;
              }
            }
            if ( (*(_DWORD *)(v130 + 4) & 1) != 0 )
            {
              v87 = *(_QWORD *)(v130 + 56);
              if ( !v87 )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry3(3LL, this, v130, -1073741811LL);
                goto LABEL_63;
              }
              PrivateDriverDataSize = a2->PrivateDriverDataSize;
              if ( *(_DWORD *)(v87 + 128) != PrivateDriverDataSize )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry4(3LL, this, *(_QWORD *)(v130 + 56), PrivateDriverDataSize, -1073741811LL);
                goto LABEL_63;
              }
              v49 = a11;
              v89 = (DXGPUSHLOCK *)(v87 + 32);
              *((_QWORD *)a11 + 1) = v89;
              DXGPUSHLOCK::AcquireExclusive(v89);
              *((_DWORD *)v49 + 4) = 2;
              v90 = 0;
              Count = v14[7].Count;
              NumAllocations = a2->NumAllocations;
              if ( NumAllocations )
              {
                do
                {
                  v93 = v131[v90].PrivateDriverDataSize;
                  if ( *(_DWORD *)(*(_QWORD *)(Count + 136) - 8LL) != (_DWORD)v93 )
                  {
                    LODWORD(v23) = -1073741811;
                    WdLogSingleEntry5(3LL, this, Count, v90, v93, -1073741811LL);
                    goto LABEL_64;
                  }
                  ++v90;
                }
                while ( v90 < NumAllocations );
              }
              if ( (*(_DWORD *)(Count + 12) & 0x100) != 0 )
              {
                v23 = -1073741811LL;
LABEL_172:
                WdLogSingleEntry3(3LL, this, Count, v23);
                goto LABEL_64;
              }
              v94 = NumAllocations + *(_DWORD *)(Count + 132);
              if ( v94 > 0x100 )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry4(3LL, this, Count, 256LL, -1073741811LL);
                goto LABEL_64;
              }
              *(_DWORD *)&a2->Flags |= 2u;
              if ( v94 > 1 )
              {
                v95 = v94;
                v96 = 8LL * v94;
                if ( !is_mul_ok(v94, 8uLL) )
                  v96 = -1LL;
                v97 = operator new[](v96, 0x4B677844u, 256LL);
                if ( !v97 )
                {
                  LODWORD(v23) = -1073741801;
                  WdLogSingleEntry3(3LL, this, v95, -1073741801LL);
                  goto LABEL_64;
                }
                v98 = v14[7].Count;
                v99 = *(void **)(v98 + 168);
                if ( v99 != (void *)(v98 + 160) )
                  operator delete(v99);
                *(_QWORD *)(v14[7].Count + 168) = v97;
              }
              for ( i = 0; i < a2->NumAllocations; *(_QWORD *)(v104 + 8) = v103 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
                {
                  v101 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL);
                  if ( !v101 || (v102 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v101)) == 0LL )
                  {
LABEL_171:
                    Count = a2->NumAllocations;
                    v23 = -1073741801LL;
                    goto LABEL_172;
                  }
                }
                else
                {
                  v102 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, 256LL);
                  if ( !v102 )
                    goto LABEL_171;
                  *((_DWORD *)v102 + 1) = 0;
                  *((_QWORD *)v102 + 1) = 0LL;
                  *((_QWORD *)v102 + 2) = 0LL;
                  *((_QWORD *)v102 + 4) = 0LL;
                  *((_DWORD *)v102 + 10) = 0;
                  *((_QWORD *)v102 + 7) = 0LL;
                  *((_QWORD *)v102 + 6) = 0LL;
                }
                v103 = (__int64 *)((char *)v102 + 48);
                v104 = v14[7].Count + 136;
                v105 = *(__int64 ***)(v14[7].Count + 144);
                if ( *v105 != (__int64 *)v104 )
                  goto LABEL_249;
                *v103 = v104;
                ++i;
                v103[1] = (__int64)v105;
                *v105 = v103;
              }
              *(_DWORD *)(v14[7].Count + 132) = v94;
            }
            DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)&v14[10], 0);
            DXGAUTOMUTEX::Acquire(a10);
LABEL_9:
            v23 = (__int64)a7;
            if ( *(_QWORD *)a7 )
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)a7 + 72LL));
            *(_QWORD *)v23 = v14;
            LODWORD(v23) = 0;
            goto LABEL_12;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v83 = 0LL;
    goto LABEL_137;
  }
  v22 = a2->Flags;
  if ( (*(_BYTE *)&v22 & 1) == 0 )
    goto LABEL_9;
  LODWORD(a8) = 0;
  if ( (*(_WORD *)&v22 & 0x1000) == 0 )
  {
    Pool2 = ExAllocatePool2(257LL, 128LL, 1265072196LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = this;
      *(_DWORD *)(Pool2 + 4) = 0;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      *(_QWORD *)(Pool2 + 48) = 0LL;
      *(_QWORD *)(Pool2 + 56) = 0LL;
      *(_QWORD *)(Pool2 + 64) = 0LL;
      *(_QWORD *)(Pool2 + 88) = 0LL;
      *(_QWORD *)(Pool2 + 96) = 0LL;
      *(_QWORD *)(Pool2 + 104) = 0LL;
      *(_DWORD *)(Pool2 + 112) = 0;
      *(_DWORD *)(Pool2 + 116) = -1;
      *(_DWORD *)(Pool2 + 120) = 66;
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 72));
      v27 = Pool2;
      goto LABEL_24;
    }
LABEL_258:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    v38 = -1073741801;
    goto LABEL_62;
  }
  v106 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL);
  v129 = v106;
  if ( v106 )
  {
    DXGRESOURCE::DXGRESOURCE(v106, this);
    v106 = v129;
    *((_DWORD *)v129 + 1) |= 4u;
    *((_QWORD *)v129 + 16) = 0LL;
  }
  else
  {
    v129 = 0LL;
  }
  Pool2 = (__int64)v106;
  if ( !v106 )
    goto LABEL_258;
  v27 = (__int64)v129;
LABEL_24:
  v127 = *((_QWORD *)this + 5);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v127 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v107 = *(_DWORD *)(v127 + 272);
      if ( v107 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v127, &EventBlockThread, v28, v107);
    }
    ExAcquirePushLockExclusiveEx(v127 + 248, 0LL);
  }
  *(_QWORD *)(v127 + 256) = KeGetCurrentThread();
  *(_DWORD *)(Pool2 + 16) = HMGRTABLE::AllocHandle((unsigned int *)(v127 + 280), Pool2, 4, 0, 1);
  DxgkReferenceDxgResource((struct DXGRESOURCE *)Pool2);
  *(_QWORD *)(v127 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v127 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !*(_DWORD *)(Pool2 + 16) )
    goto LABEL_188;
  v29 = v132;
  *(_QWORD *)(Pool2 + 48) = a2->hPrivateRuntimeResourceHandle;
  if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !v29 )
  {
    v38 = (int)a8;
    goto LABEL_53;
  }
  *(_DWORD *)(Pool2 + 4) |= 1u;
  if ( v29 )
  {
    v50 = DXGGLOBAL::GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v125, (struct DXGGLOBAL *)((char *)v50 + 288), 0);
    if ( v126 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v125, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v125);
    v51 = a2->Flags;
    v52 = -1073741811LL;
    v126 = 1;
    if ( (*(_BYTE *)&v51 & 0x40) != 0 )
    {
      v53 = a6;
      if ( a6 )
      {
        v54 = *((_QWORD *)a6 + 2);
        v55 = (__int64 *)(Pool2 + 56);
        *(_QWORD *)(Pool2 + 56) = v54;
        if ( v54 )
        {
LABEL_75:
          v38 = (int)a8;
          goto LABEL_76;
        }
        WdLogSingleEntry3(3LL, this, v53, -1073741811LL);
      }
      else
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        v55 = (__int64 *)(v27 + 56);
      }
      LODWORD(a8) = -1073741811;
    }
    else
    {
      if ( v20 )
      {
        v108 = *((_DWORD *)v18 + 106);
        if ( (v108 & 0x100) != 0 )
        {
          v109 = (struct DXGPROCESS *)*((_QWORD *)v18 + 76);
        }
        else
        {
          v109 = 0LL;
          if ( (v108 & 0x80u) != 0 )
            v109 = v18;
        }
        hGlobalShare = a2->hGlobalShare;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v109 + 248));
        v111 = (hGlobalShare >> 6) & 0xFFFFFF;
        if ( v111 < *((_DWORD *)v109 + 74)
          && (v112 = *((_QWORD *)v109 + 35) + 16LL * v111, ((hGlobalShare >> 25) & 0x60) == (*(_BYTE *)(v112 + 8) & 0x60))
          && (*(_DWORD *)(v112 + 8) & 0x2000) == 0
          && (v113 = *(_DWORD *)(v112 + 8) & 0x1F) != 0 )
        {
          if ( v113 == 2 )
          {
            ObjectA = *(_QWORD *)v112;
          }
          else
          {
            WdLogSingleEntry1(2LL, 316LL);
            ObjectA = 0LL;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          ObjectA = 0LL;
        }
        _InterlockedDecrement((volatile signed __int32 *)v109 + 66);
        ExReleasePushLockSharedEx((char *)v109 + 248, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v74 = DXGGLOBAL::GetGlobal();
        ObjectA = DXGGLOBAL::GetObjectA((__int64)v74, a2->hGlobalShare, 2);
      }
      *(_QWORD *)(Pool2 + 56) = ObjectA;
      v55 = (__int64 *)(Pool2 + 56);
      if ( !ObjectA )
      {
        WdLogSingleEntry3(3LL, this, a2->hGlobalShare, -1073741811LL);
        v52 = -1073741811LL;
        v38 = -1073741811;
LABEL_76:
        if ( !*v55 )
          goto LABEL_105;
        *(_DWORD *)(*v55 + 12) |= 0x100u;
        v56 = *v55;
        v57 = a2->NumAllocations;
        if ( *(_DWORD *)(*v55 + 132) != (_DWORD)v57
          || (v57 = a2->PrivateDriverDataSize, *(_DWORD *)(v56 + 128) != (_DWORD)v57) && !v20 )
        {
          WdLogSingleEntry4(3LL, this, v56, v57, -1073741811LL);
          v38 = -1073741811;
          goto LABEL_105;
        }
        v58 = *v55;
        if ( *(_DWORD *)(v58 + 72) != (unsigned int)PsGetCurrentProcessSessionId(-1073741811LL)
          && (*(_DWORD *)(v58 + 12) & 8) == 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v52);
          v38 = -1073741811;
          WdLogSingleEntry5(3LL, this, *v55, *(unsigned int *)(*v55 + 72), CurrentProcessSessionId, -1073741811LL);
          goto LABEL_105;
        }
        v59 = *(_QWORD *)(v58 + 80);
        if ( v59 == *((_QWORD *)this + 2) )
        {
          v60 = *((_QWORD *)this + 235);
          if ( !v60
            || *(_QWORD *)(v60 + 2928)
            || (v115 = *(_QWORD *)(v58 + 96)) == 0
            || v115 == v60
            || (*((_BYTE *)this + 1901) & 1) != 0 && (*(_DWORD *)(v58 + 12) & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v58 + 12) & 1) != 0
              && (!(unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
               || (unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))) )
            {
              v116 = *v55;
            }
            else
            {
              if ( (*(_DWORD *)(*v55 + 12) & 0x4000) == 0
                || DXGDEVICE::HasContextWithHintType(this, D3DKMT_CLIENTHINT_DX10|D3DKMT_CLIENTHINT_OPENGL) )
              {
                v61 = *v55;
                v62 = 0LL;
                v63 = a2->NumAllocations;
                v64 = *(_QWORD **)(*v55 + 136);
                if ( v63 )
                {
                  v52 = (__int64)v131;
                  while ( 1 )
                  {
                    v65 = v131[v62].PrivateDriverDataSize;
                    if ( *((_DWORD *)v64 - 2) != (_DWORD)v65 )
                      break;
                    v64 = (_QWORD *)*v64;
                    v62 = (unsigned int)(v62 + 1);
                    if ( (unsigned int)v62 >= v63 )
                      goto LABEL_89;
                  }
                  v38 = -1073741811;
                  WdLogSingleEntry5(3LL, this, *v55, (unsigned int)v62, v65, -1073741811LL);
                }
                else
                {
LABEL_89:
                  if ( v38 < 0 )
                    goto LABEL_105;
                  _m_prefetchw((const void *)(v61 + 68));
                  v66 = *(_DWORD *)(v61 + 68);
                  if ( !v66 )
                  {
LABEL_226:
                    *v55 = 0LL;
                    v116 = 0LL;
                    goto LABEL_227;
                  }
                  while ( 1 )
                  {
                    v67 = v66;
                    v66 = _InterlockedCompareExchange((volatile signed __int32 *)(v61 + 68), v66 + 1, v66);
                    if ( v67 == v66 )
                      break;
                    if ( !v66 )
                      goto LABEL_226;
                  }
                  v68 = *(_QWORD *)(*v55 + 152);
                  if ( !v68 )
                    goto LABEL_104;
                  if ( *(DXGDEVICE **)(v68 + 80) == this )
                    ++*(_DWORD *)(v68 + 72);
                  if ( !v126 )
                    WdLogSingleEntry5(0LL, 275LL, 4LL, &v125, 0LL, 0LL);
                  v126 = 0;
                  DXGFASTMUTEX::Release((struct _KTHREAD **)v125);
                  v69 = (*(_DWORD *)(*((_QWORD *)this + 5) + 424LL) & 4) != 0;
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)&v121,
                    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*v55 + 152) + 8LL),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v121);
                  v52 = (__int64)a5;
                  if ( !a5 )
                    v52 = *(_QWORD *)(*((_QWORD *)this + 5) + 56LL);
                  v70 = (_QWORD *)(*(_QWORD *)(*v55 + 152) + 56LL);
                  v71 = (_QWORD *)*v70;
                  if ( (_QWORD *)*v70 == v70 )
                  {
LABEL_231:
                    v38 = -1073741811;
                    WdLogSingleEntry3(3LL, this, *v55, -1073741811LL);
                  }
                  else if ( !v69 )
                  {
                    while ( *((_BYTE *)v71 + 16) || v52 != v71[3] )
                    {
                      v71 = (_QWORD *)*v71;
                      if ( v71 == v70 )
                        goto LABEL_231;
                    }
                  }
                  if ( v122 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v121);
                  if ( v38 >= 0 )
                  {
LABEL_104:
                    v52 = *v55;
                    v72 = *(_QWORD *)(*v55 + 136);
                    if ( (*(_DWORD *)(v72 - 44) & 2) != 0 )
                    {
                      if ( *(_DWORD *)(v52 + 132) != 1 )
                      {
                        v117 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
                        if ( *((_DWORD *)v117 + 72) <= 1u || !DXGADAPTER::IsDxgmms2(v117) )
                        {
                          WdLogSingleEntry1(1LL, 2667LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetPhys"
                                      "icalAdapterCount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                            2667LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                      *((_QWORD *)this + ((*(_DWORD *)(v72 - 44) >> 6) & 0xF) + 83) = Pool2;
                    }
                  }
                }
LABEL_105:
                if ( v126 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v125);
                goto LABEL_107;
              }
              v116 = *v55;
            }
LABEL_227:
            v38 = -1073741811;
            WdLogSingleEntry3(3LL, this, v116, -1073741811LL);
            goto LABEL_105;
          }
        }
        else
        {
          v115 = *(_QWORD *)(v59 + 16);
        }
        v38 = -1073741811;
        WdLogSingleEntry4(3LL, this, v58, v115, -1073741811LL);
        goto LABEL_105;
      }
    }
    v52 = -1073741811LL;
    goto LABEL_75;
  }
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                     *((struct ADAPTER_RENDER **)this + 2),
                     *((struct DXGADAPTER **)this + 235),
                     (*(_DWORD *)&a2->Flags & 0x800) != 0);
  *(_QWORD *)(Pool2 + 56) = SharedResource;
  v31 = (__int64 *)(Pool2 + 56);
  v128 = Pool2 + 56;
  if ( !SharedResource )
  {
LABEL_188:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    v38 = -1073741801;
    goto LABEL_189;
  }
  if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
    *((_DWORD *)SharedResource + 3) |= 0x8000u;
  v32 = a2->NumAllocations;
  v33 = 0;
  if ( !(_DWORD)v32 )
  {
LABEL_37:
    v38 = (int)a8;
    *(_DWORD *)(*v31 + 132) = v32;
    *(_DWORD *)(Pool2 + 4) |= 2u;
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
    {
      v34 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, 256LL);
      if ( !v34 )
        break;
      *((_DWORD *)v34 + 1) = 0;
      *((_QWORD *)v34 + 1) = 0LL;
      *((_QWORD *)v34 + 2) = 0LL;
      *((_QWORD *)v34 + 4) = 0LL;
      *((_DWORD *)v34 + 10) = 0;
      *((_QWORD *)v34 + 7) = 0LL;
      *((_QWORD *)v34 + 6) = 0LL;
      goto LABEL_35;
    }
    v118 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL);
    if ( !v118 )
      break;
    v34 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v118);
    if ( !v34 )
      break;
LABEL_35:
    v31 = (__int64 *)(Pool2 + 56);
    v35 = (__int64 *)((char *)v34 + 48);
    v36 = *(_QWORD *)v128 + 136LL;
    v37 = *(__int64 ***)(*(_QWORD *)v128 + 144LL);
    if ( *v37 != (__int64 *)v36 )
      goto LABEL_249;
    *v35 = v36;
    ++v33;
    v35[1] = (__int64)v37;
    *v37 = v35;
    *(_QWORD *)(v36 + 8) = v35;
    if ( v33 >= (unsigned int)v32 )
      goto LABEL_37;
  }
  WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
  v31 = (__int64 *)(Pool2 + 56);
  v38 = -1073741801;
LABEL_38:
  if ( a9 )
    *(_QWORD *)(*v31 + 184) = *((_QWORD *)a9 + 52);
  *(_DWORD *)(*v31 + 12) ^= (*(_DWORD *)(*v31 + 12) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
  if ( v38 >= 0 && (unsigned int)v32 > 1 )
  {
    v119 = 8 * v32;
    if ( !is_mul_ok(v32, 8uLL) )
      v119 = -1LL;
    v120 = operator new[](v119, 0x4B677844u, 256LL);
    v31 = (__int64 *)(Pool2 + 56);
    *(_QWORD *)(*(_QWORD *)v128 + 168LL) = v120;
    if ( !*(_QWORD *)(*(_QWORD *)v128 + 168LL) )
    {
      WdLogSingleEntry3(3LL, this, v32, -1073741801LL);
      v31 = (__int64 *)(Pool2 + 56);
      v38 = -1073741801;
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 4) == 0 )
  {
    if ( (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
    {
      IsProtectedProcessLight = PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL));
      v31 = (__int64 *)(Pool2 + 56);
      if ( !IsProtectedProcessLight )
        *(_DWORD *)(*(_QWORD *)v128 + 12LL) |= 1u;
    }
    else
    {
      v31 = (__int64 *)(Pool2 + 56);
    }
  }
  v39 = a2->Flags;
  if ( (*(_DWORD *)&v39 & 0x200000) != 0 )
  {
    if ( (*(_WORD *)&v39 & 0x400) != 0 && a2->NumAllocations && (v131->Flags.Value & 1) != 0 )
    {
      *(_DWORD *)(*v31 + 12) |= 0x4000u;
    }
    else
    {
      v38 = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Attempting to create shared displayable resource without expected flags, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v31 = (__int64 *)(Pool2 + 56);
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 0x10) == 0 )
  {
    if ( v38 < 0 )
      goto LABEL_255;
    goto LABEL_53;
  }
  if ( v38 < 0 )
    goto LABEL_255;
  v40 = operator new[](0x58uLL, 0x4B677844u, 64LL);
  if ( !v40 )
  {
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Out of memory allocating DXGSHAREDRESOURCEACCESS class, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_254;
  }
  *(_QWORD *)(v40 + 16) = 0LL;
  *(_QWORD *)(v40 + 24) = 0LL;
  *(_QWORD *)(v40 + 32) = 0LL;
  *(_DWORD *)(v40 + 40) = 0;
  v41 = v40 + 56;
  *(_DWORD *)(v40 + 44) = 36;
  *(_DWORD *)(v40 + 48) = 66;
  *(_DWORD *)(v40 + 72) = 1;
  *(_QWORD *)(v40 + 80) = this;
  *(_QWORD *)(v40 + 64) = v40 + 56;
  *(_QWORD *)(v40 + 56) = v40 + 56;
  *(_QWORD *)(*(_QWORD *)v128 + 152LL) = v40;
  v42 = *((_QWORD *)this + 5);
  if ( (*(_DWORD *)(v42 + 424) & 4) != 0 )
  {
    v44 = operator new[](0x28uLL, 0x4B677844u, 256LL);
    if ( !v44 )
      goto LABEL_252;
    *(_BYTE *)(v44 + 24) = 1;
    *(_QWORD *)(v44 + 32) = 0LL;
LABEL_50:
    v45 = *(_QWORD *)v41;
    v46 = (_QWORD *)(v44 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) == v41 )
    {
      *v46 = v45;
      v46[1] = v41;
      *(_QWORD *)(v45 + 8) = v46;
      *(_QWORD *)v41 = v46;
      goto LABEL_53;
    }
LABEL_249:
    __fastfail(3u);
  }
  v43 = *(void **)(v42 + 56);
  ObfReferenceObject(v43);
  v44 = operator new[](0x28uLL, 0x4B677844u, 256LL);
  if ( v44 )
  {
    *(_BYTE *)(v44 + 24) = 0;
    *(_QWORD *)(v44 + 32) = v43;
    goto LABEL_50;
  }
  if ( v43 )
    ObfDereferenceObject(v43);
LABEL_252:
  WdLogSingleEntry1(6LL, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Out of memory allocating DXGPROCESSSHAREDACCESS class, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_254:
  v31 = (__int64 *)(Pool2 + 56);
  v38 = -1073741801;
LABEL_255:
  v52 = *v31;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*v31 + 68), 0xFFFFFFFF) == 1 )
  {
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v52, 0LL, 0);
    v31 = (__int64 *)(Pool2 + 56);
  }
  *v31 = 0LL;
LABEL_107:
  if ( v38 < 0 )
  {
LABEL_189:
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v52, (struct DXGRESOURCE *)Pool2, 0LL);
    DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)Pool2);
    v14 = (struct _EX_RUNDOWN_REF *)v130;
    goto LABEL_62;
  }
LABEL_53:
  *v19 = 1;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 72)) )
    WdLogSingleEntry5(0LL, 275LL, 38LL, Pool2, 0LL, 0LL);
  v47 = a7;
  if ( *(_QWORD *)a7 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)a7 + 72LL));
  *(_QWORD *)v47 = Pool2;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    if ( DXGTHREAD::GetCurrent() )
    {
      v48 = DXGTHREAD::GetCurrent();
      if ( *((_DWORD *)v48 + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v48 + 12), 0LL, 0LL);
    }
  }
  v14 = (struct _EX_RUNDOWN_REF *)v130;
LABEL_62:
  LODWORD(v23) = v38;
LABEL_63:
  v49 = v124;
LABEL_64:
  if ( v49 )
    DXGAUTOPUSHLOCK::Release(v49);
  if ( v14 )
    ExReleaseRundownProtection(v14 + 9);
LABEL_12:
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v121 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v121) >= 0 && (v121 || DxgkThreadObjectCreateDxgThread(1)) )
    {
      v121 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v121) < 0 )
      {
        DxgThread = 0LL;
      }
      else
      {
        DxgThread = v121;
        if ( !v121 )
        {
          DxgThread = DxgkThreadObjectCreateDxgThread(1);
          v121 = DxgThread;
        }
      }
      if ( *((_DWORD *)DxgThread + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
    }
  }
  return (unsigned int)v23;
}
