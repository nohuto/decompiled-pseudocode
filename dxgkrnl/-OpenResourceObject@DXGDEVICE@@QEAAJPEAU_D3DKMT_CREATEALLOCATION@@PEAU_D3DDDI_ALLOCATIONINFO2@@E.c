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
  __int64 v51; // rdx
  __int64 v52; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v53; // eax
  __int64 v54; // rcx
  struct _DXGSHAREDALLOCOBJECT *v55; // r8
  __int64 v56; // rax
  __int64 *v57; // rbx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  UINT v68; // r10d
  _QWORD *v69; // r9
  __int64 v70; // rax
  signed __int32 v71; // eax
  signed __int32 v72; // ett
  __int64 v73; // rcx
  bool v74; // di
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // rbx
  int IsProtectedProcessLight; // eax
  struct DXGGLOBAL *v79; // rax
  __int64 ObjectA; // r14
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v84; // rdi
  unsigned int v85; // eax
  __int64 v86; // rdx
  int v87; // ecx
  struct _EX_RUNDOWN_REF *v88; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  DXGDEVICE *v90; // r9
  __int64 v91; // rax
  __int64 v92; // rcx
  UINT PrivateDriverDataSize; // eax
  DXGPUSHLOCK *v94; // rcx
  UINT v95; // edx
  ULONG_PTR Count; // r8
  UINT NumAllocations; // r10d
  __int64 v98; // r11
  unsigned int v99; // edi
  unsigned int v100; // r12d
  unsigned __int64 v101; // rax
  __int64 v102; // r13
  ULONG_PTR v103; // rax
  void *v104; // rcx
  UINT i; // r12d
  DXGADAPTERALLOCATION_VGPU *v106; // rax
  DXGADAPTERALLOCATION_VGPU *v107; // rax
  __int64 *v108; // rcx
  __int64 v109; // rax
  __int64 **v110; // rdx
  DXGRESOURCE *v111; // rax
  int v112; // r9d
  int v113; // eax
  struct DXGPROCESS *v114; // rbx
  D3DKMT_HANDLE hGlobalShare; // r14d
  unsigned int v116; // eax
  __int64 v117; // rdx
  int v118; // ecx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v120; // r9
  __int64 v121; // r8
  DXGADAPTER *v122; // rcx
  DXGADAPTERALLOCATION_VGPU *v123; // rax
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  struct DXGTHREAD *v126; // [rsp+50h] [rbp-31h] BYREF
  char v127; // [rsp+58h] [rbp-29h]
  struct _EX_RUNDOWN_REF *v128; // [rsp+60h] [rbp-21h] BYREF
  DXGAUTOPUSHLOCK *v129; // [rsp+68h] [rbp-19h]
  DXGFASTMUTEX *v130; // [rsp+70h] [rbp-11h] BYREF
  char v131; // [rsp+78h] [rbp-9h]
  __int64 v132; // [rsp+D0h] [rbp+4Fh]
  __int64 v133; // [rsp+D0h] [rbp+4Fh]
  DXGRESOURCE *v134; // [rsp+D0h] [rbp+4Fh]
  __int64 v135; // [rsp+D8h] [rbp+57h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v136; // [rsp+E0h] [rbp+5Fh]
  char v137; // [rsp+E8h] [rbp+67h]

  v137 = a4;
  v136 = a3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
  {
    WdLogSingleEntry1(1LL, 2087LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2087LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = 0LL;
  v135 = 0LL;
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
      v14 = (struct _EX_RUNDOWN_REF *)v135;
      goto LABEL_7;
    }
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v14 = (struct _EX_RUNDOWN_REF *)v135;
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
  v129 = 0LL;
  *a8 = 0;
  hResource = a2->hResource;
  if ( hResource )
  {
    v84 = *((_QWORD *)this + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v84 + 248));
    v85 = (hResource >> 6) & 0xFFFFFF;
    if ( v85 < *(_DWORD *)(v84 + 296) )
    {
      v86 = *(_QWORD *)(v84 + 280) + 16LL * v85;
      if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(v86 + 8) & 0x60) && (*(_DWORD *)(v86 + 8) & 0x2000) == 0 )
      {
        v87 = *(_DWORD *)(v86 + 8) & 0x1F;
        if ( v87 )
        {
          if ( v87 == 4 )
          {
            v88 = *(struct _EX_RUNDOWN_REF **)v86;
LABEL_137:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v128, v88);
            _InterlockedDecrement((volatile signed __int32 *)(v84 + 264));
            ExReleasePushLockSharedEx(v84 + 248, 0LL);
            KeLeaveCriticalRegion();
            DXGRESOURCEREFERENCE::MoveAssign(&v135, &v128);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v128);
            v14 = (struct _EX_RUNDOWN_REF *)v135;
            if ( !v135 )
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
            v90 = *(DXGDEVICE **)(v135 + 8);
            if ( v90 != this )
            {
              LODWORD(v23) = -1073741811;
              WdLogSingleEntry4(3LL, this, a2->hResource, v90, -1073741811LL);
              goto LABEL_63;
            }
            if ( (*(_WORD *)&Flags & 0x800) != 0 )
            {
              v91 = *(_QWORD *)(v135 + 56);
              if ( !v91 || (*(_DWORD *)(v91 + 12) & 0x20) == 0 )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry2(3LL, a2->hResource, -1073741811LL);
                goto LABEL_63;
              }
            }
            if ( (*(_DWORD *)(v135 + 4) & 1) != 0 )
            {
              v92 = *(_QWORD *)(v135 + 56);
              if ( !v92 )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry3(3LL, this, v135, -1073741811LL);
                goto LABEL_63;
              }
              PrivateDriverDataSize = a2->PrivateDriverDataSize;
              if ( *(_DWORD *)(v92 + 128) != PrivateDriverDataSize )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry4(3LL, this, *(_QWORD *)(v135 + 56), PrivateDriverDataSize, -1073741811LL);
                goto LABEL_63;
              }
              v49 = a11;
              v94 = (DXGPUSHLOCK *)(v92 + 32);
              *((_QWORD *)a11 + 1) = v94;
              DXGPUSHLOCK::AcquireExclusive(v94);
              *((_DWORD *)v49 + 4) = 2;
              v95 = 0;
              Count = v14[7].Count;
              NumAllocations = a2->NumAllocations;
              if ( NumAllocations )
              {
                do
                {
                  v98 = v136[v95].PrivateDriverDataSize;
                  if ( *(_DWORD *)(*(_QWORD *)(Count + 136) - 8LL) != (_DWORD)v98 )
                  {
                    LODWORD(v23) = -1073741811;
                    WdLogSingleEntry5(3LL, this, Count, v95, v98, -1073741811LL);
                    goto LABEL_64;
                  }
                  ++v95;
                }
                while ( v95 < NumAllocations );
              }
              if ( (*(_DWORD *)(Count + 12) & 0x100) != 0 )
              {
                v23 = -1073741811LL;
LABEL_172:
                WdLogSingleEntry3(3LL, this, Count, v23);
                goto LABEL_64;
              }
              v99 = NumAllocations + *(_DWORD *)(Count + 132);
              if ( v99 > 0x100 )
              {
                LODWORD(v23) = -1073741811;
                WdLogSingleEntry4(3LL, this, Count, 256LL, -1073741811LL);
                goto LABEL_64;
              }
              *(_DWORD *)&a2->Flags |= 2u;
              if ( v99 > 1 )
              {
                v100 = v99;
                v101 = 8LL * v99;
                if ( !is_mul_ok(v99, 8uLL) )
                  v101 = -1LL;
                v102 = operator new[](v101, 0x4B677844u, 256LL);
                if ( !v102 )
                {
                  LODWORD(v23) = -1073741801;
                  WdLogSingleEntry3(3LL, this, v100, -1073741801LL);
                  goto LABEL_64;
                }
                v103 = v14[7].Count;
                v104 = *(void **)(v103 + 168);
                if ( v104 != (void *)(v103 + 160) )
                  operator delete(v104);
                *(_QWORD *)(v14[7].Count + 168) = v102;
              }
              for ( i = 0; i < a2->NumAllocations; *(_QWORD *)(v109 + 8) = v108 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
                {
                  v106 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL);
                  if ( !v106 || (v107 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v106)) == 0LL )
                  {
LABEL_171:
                    Count = a2->NumAllocations;
                    v23 = -1073741801LL;
                    goto LABEL_172;
                  }
                }
                else
                {
                  v107 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, 256LL);
                  if ( !v107 )
                    goto LABEL_171;
                  *((_DWORD *)v107 + 1) = 0;
                  *((_QWORD *)v107 + 1) = 0LL;
                  *((_QWORD *)v107 + 2) = 0LL;
                  *((_QWORD *)v107 + 4) = 0LL;
                  *((_DWORD *)v107 + 10) = 0;
                  *((_QWORD *)v107 + 7) = 0LL;
                  *((_QWORD *)v107 + 6) = 0LL;
                }
                v108 = (__int64 *)((char *)v107 + 48);
                v109 = v14[7].Count + 136;
                v110 = *(__int64 ***)(v14[7].Count + 144);
                if ( *v110 != (__int64 *)v109 )
                  goto LABEL_249;
                *v108 = v109;
                ++i;
                v108[1] = (__int64)v110;
                *v110 = v108;
              }
              *(_DWORD *)(v14[7].Count + 132) = v99;
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
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v88 = 0LL;
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
  v111 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL);
  v134 = v111;
  if ( v111 )
  {
    DXGRESOURCE::DXGRESOURCE(v111, this);
    v111 = v134;
    *((_DWORD *)v134 + 1) |= 4u;
    *((_QWORD *)v134 + 16) = 0LL;
  }
  else
  {
    v134 = 0LL;
  }
  Pool2 = (__int64)v111;
  if ( !v111 )
    goto LABEL_258;
  v27 = (__int64)v134;
LABEL_24:
  v132 = *((_QWORD *)this + 5);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v132 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v112 = *(_DWORD *)(v132 + 272);
      if ( v112 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v132, (const EVENT_DESCRIPTOR *)"g", v28, v112);
    }
    ExAcquirePushLockExclusiveEx(v132 + 248, 0LL);
  }
  *(_QWORD *)(v132 + 256) = KeGetCurrentThread();
  *(_DWORD *)(Pool2 + 16) = HMGRTABLE::AllocHandle((unsigned int *)(v132 + 280), Pool2, 4, 0, 1);
  DxgkReferenceDxgResource((struct DXGRESOURCE *)Pool2);
  *(_QWORD *)(v132 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v132 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !*(_DWORD *)(Pool2 + 16) )
    goto LABEL_188;
  v29 = v137;
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
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v130, (struct DXGGLOBAL *)((char *)v50 + 288), 0);
    if ( v131 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v130, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v130);
    v53 = a2->Flags;
    v54 = -1073741811LL;
    v131 = 1;
    if ( (*(_BYTE *)&v53 & 0x40) != 0 )
    {
      v55 = a6;
      if ( a6 )
      {
        v56 = *((_QWORD *)a6 + 2);
        v57 = (__int64 *)(Pool2 + 56);
        *(_QWORD *)(Pool2 + 56) = v56;
        if ( v56 )
        {
LABEL_75:
          v38 = (int)a8;
          goto LABEL_76;
        }
        WdLogSingleEntry3(3LL, this, v55, -1073741811LL);
      }
      else
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        v57 = (__int64 *)(v27 + 56);
      }
      LODWORD(a8) = -1073741811;
    }
    else
    {
      if ( v20 )
      {
        v113 = *((_DWORD *)v18 + 106);
        if ( (v113 & 0x100) != 0 )
        {
          v114 = (struct DXGPROCESS *)*((_QWORD *)v18 + 76);
        }
        else
        {
          v114 = 0LL;
          if ( (v113 & 0x80u) != 0 )
            v114 = v18;
        }
        hGlobalShare = a2->hGlobalShare;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v114 + 248));
        v116 = (hGlobalShare >> 6) & 0xFFFFFF;
        if ( v116 < *((_DWORD *)v114 + 74)
          && (v117 = *((_QWORD *)v114 + 35) + 16LL * v116, ((hGlobalShare >> 25) & 0x60) == (*(_BYTE *)(v117 + 8) & 0x60))
          && (*(_DWORD *)(v117 + 8) & 0x2000) == 0
          && (v118 = *(_DWORD *)(v117 + 8) & 0x1F) != 0 )
        {
          if ( v118 == 2 )
          {
            ObjectA = *(_QWORD *)v117;
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            ObjectA = 0LL;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          ObjectA = 0LL;
        }
        _InterlockedDecrement((volatile signed __int32 *)v114 + 66);
        ExReleasePushLockSharedEx((char *)v114 + 248, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v79 = DXGGLOBAL::GetGlobal();
        ObjectA = DXGGLOBAL::GetObjectA((__int64)v79, a2->hGlobalShare, 2);
      }
      *(_QWORD *)(Pool2 + 56) = ObjectA;
      v57 = (__int64 *)(Pool2 + 56);
      if ( !ObjectA )
      {
        WdLogSingleEntry3(3LL, this, a2->hGlobalShare, -1073741811LL);
        v54 = -1073741811LL;
        v38 = -1073741811;
LABEL_76:
        if ( !*v57 )
          goto LABEL_105;
        *(_DWORD *)(*v57 + 12) |= 0x100u;
        v58 = *v57;
        v59 = a2->NumAllocations;
        if ( *(_DWORD *)(*v57 + 132) != (_DWORD)v59
          || (v59 = a2->PrivateDriverDataSize, *(_DWORD *)(v58 + 128) != (_DWORD)v59) && !v20 )
        {
          WdLogSingleEntry4(3LL, this, v58, v59, -1073741811LL);
          v38 = -1073741811;
          goto LABEL_105;
        }
        v60 = *v57;
        if ( *(_DWORD *)(v60 + 72) != (unsigned int)PsGetCurrentProcessSessionId(-1073741811LL, v51, v58, v52)
          && (*(_DWORD *)(v60 + 12) & 8) == 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v54, v61, v62, v63);
          v38 = -1073741811;
          WdLogSingleEntry5(3LL, this, *v57, *(unsigned int *)(*v57 + 72), CurrentProcessSessionId, -1073741811LL);
          goto LABEL_105;
        }
        v64 = *(_QWORD *)(v60 + 80);
        if ( v64 == *((_QWORD *)this + 2) )
        {
          v65 = *((_QWORD *)this + 235);
          if ( !v65
            || *(_QWORD *)(v65 + 2928)
            || (v120 = *(_QWORD *)(v60 + 96)) == 0
            || v120 == v65
            || (*((_BYTE *)this + 1901) & 1) != 0 && (*(_DWORD *)(v60 + 12) & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v60 + 12) & 1) != 0
              && (!(unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
               || (unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))) )
            {
              v121 = *v57;
            }
            else
            {
              if ( (*(_DWORD *)(*v57 + 12) & 0x4000) == 0
                || DXGDEVICE::HasContextWithHintType(this, D3DKMT_CLIENTHINT_DX10|D3DKMT_CLIENTHINT_OPENGL) )
              {
                v66 = *v57;
                v67 = 0LL;
                v68 = a2->NumAllocations;
                v69 = *(_QWORD **)(*v57 + 136);
                if ( v68 )
                {
                  v54 = (__int64)v136;
                  while ( 1 )
                  {
                    v70 = v136[v67].PrivateDriverDataSize;
                    if ( *((_DWORD *)v69 - 2) != (_DWORD)v70 )
                      break;
                    v69 = (_QWORD *)*v69;
                    v67 = (unsigned int)(v67 + 1);
                    if ( (unsigned int)v67 >= v68 )
                      goto LABEL_89;
                  }
                  v38 = -1073741811;
                  WdLogSingleEntry5(3LL, this, *v57, (unsigned int)v67, v70, -1073741811LL);
                }
                else
                {
LABEL_89:
                  if ( v38 < 0 )
                    goto LABEL_105;
                  _m_prefetchw((const void *)(v66 + 68));
                  v71 = *(_DWORD *)(v66 + 68);
                  if ( !v71 )
                  {
LABEL_226:
                    *v57 = 0LL;
                    v121 = 0LL;
                    goto LABEL_227;
                  }
                  while ( 1 )
                  {
                    v72 = v71;
                    v71 = _InterlockedCompareExchange((volatile signed __int32 *)(v66 + 68), v71 + 1, v71);
                    if ( v72 == v71 )
                      break;
                    if ( !v71 )
                      goto LABEL_226;
                  }
                  v73 = *(_QWORD *)(*v57 + 152);
                  if ( !v73 )
                    goto LABEL_104;
                  if ( *(DXGDEVICE **)(v73 + 80) == this )
                    ++*(_DWORD *)(v73 + 72);
                  if ( !v131 )
                    WdLogSingleEntry5(0LL, 275LL, 4LL, &v130, 0LL, 0LL);
                  v131 = 0;
                  DXGFASTMUTEX::Release((struct _KTHREAD **)v130);
                  v74 = (*(_DWORD *)(*((_QWORD *)this + 5) + 424LL) & 4) != 0;
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)&v126,
                    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*v57 + 152) + 8LL),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v126);
                  v54 = (__int64)a5;
                  if ( !a5 )
                    v54 = *(_QWORD *)(*((_QWORD *)this + 5) + 56LL);
                  v75 = (_QWORD *)(*(_QWORD *)(*v57 + 152) + 56LL);
                  v76 = (_QWORD *)*v75;
                  if ( (_QWORD *)*v75 == v75 )
                  {
LABEL_231:
                    v38 = -1073741811;
                    WdLogSingleEntry3(3LL, this, *v57, -1073741811LL);
                  }
                  else if ( !v74 )
                  {
                    while ( *((_BYTE *)v76 + 16) || v54 != v76[3] )
                    {
                      v76 = (_QWORD *)*v76;
                      if ( v76 == v75 )
                        goto LABEL_231;
                    }
                  }
                  if ( v127 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v126);
                  if ( v38 >= 0 )
                  {
LABEL_104:
                    v54 = *v57;
                    v77 = *(_QWORD *)(*v57 + 136);
                    if ( (*(_DWORD *)(v77 - 44) & 2) != 0 )
                    {
                      if ( *(_DWORD *)(v54 + 132) != 1 )
                      {
                        v122 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
                        if ( *((_DWORD *)v122 + 72) <= 1u || !DXGADAPTER::IsDxgmms2(v122) )
                        {
                          WdLogSingleEntry1(1LL, 2666LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetPhys"
                                      "icalAdapterCount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                            2666LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                      *((_QWORD *)this + ((*(_DWORD *)(v77 - 44) >> 6) & 0xF) + 83) = Pool2;
                    }
                  }
                }
LABEL_105:
                if ( v131 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v130);
                goto LABEL_107;
              }
              v121 = *v57;
            }
LABEL_227:
            v38 = -1073741811;
            WdLogSingleEntry3(3LL, this, v121, -1073741811LL);
            goto LABEL_105;
          }
        }
        else
        {
          v120 = *(_QWORD *)(v64 + 16);
        }
        v38 = -1073741811;
        WdLogSingleEntry4(3LL, this, v60, v120, -1073741811LL);
        goto LABEL_105;
      }
    }
    v54 = -1073741811LL;
    goto LABEL_75;
  }
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                     *((struct ADAPTER_RENDER **)this + 2),
                     *((struct DXGADAPTER **)this + 235),
                     (*(_DWORD *)&a2->Flags & 0x800) != 0);
  *(_QWORD *)(Pool2 + 56) = SharedResource;
  v31 = (__int64 *)(Pool2 + 56);
  v133 = Pool2 + 56;
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
    v123 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL);
    if ( !v123 )
      break;
    v34 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v123);
    if ( !v34 )
      break;
LABEL_35:
    v31 = (__int64 *)(Pool2 + 56);
    v35 = (__int64 *)((char *)v34 + 48);
    v36 = *(_QWORD *)v133 + 136LL;
    v37 = *(__int64 ***)(*(_QWORD *)v133 + 144LL);
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
    v124 = 8 * v32;
    if ( !is_mul_ok(v32, 8uLL) )
      v124 = -1LL;
    v125 = operator new[](v124, 0x4B677844u, 256LL);
    v31 = (__int64 *)(Pool2 + 56);
    *(_QWORD *)(*(_QWORD *)v133 + 168LL) = v125;
    if ( !*(_QWORD *)(*(_QWORD *)v133 + 168LL) )
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
        *(_DWORD *)(*(_QWORD *)v133 + 12LL) |= 1u;
    }
    else
    {
      v31 = (__int64 *)(Pool2 + 56);
    }
  }
  v39 = a2->Flags;
  if ( (*(_DWORD *)&v39 & 0x200000) != 0 )
  {
    if ( (*(_WORD *)&v39 & 0x400) != 0 && a2->NumAllocations && (v136->Flags.Value & 1) != 0 )
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
  *(_QWORD *)(*(_QWORD *)v133 + 152LL) = v40;
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
  v54 = *v31;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*v31 + 68), 0xFFFFFFFF) == 1 )
  {
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v54, 0LL, 0);
    v31 = (__int64 *)(Pool2 + 56);
  }
  *v31 = 0LL;
LABEL_107:
  if ( v38 < 0 )
  {
LABEL_189:
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v54, (struct DXGRESOURCE *)Pool2, 0LL);
    DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)Pool2);
    v14 = (struct _EX_RUNDOWN_REF *)v135;
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
  v14 = (struct _EX_RUNDOWN_REF *)v135;
LABEL_62:
  LODWORD(v23) = v38;
LABEL_63:
  v49 = v129;
LABEL_64:
  if ( v49 )
    DXGAUTOPUSHLOCK::Release(v49);
  if ( v14 )
    ExReleaseRundownProtection(v14 + 9);
LABEL_12:
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v126 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v126) >= 0 && (v126 || DxgkThreadObjectCreateDxgThread(1)) )
    {
      v126 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v126) < 0 )
      {
        DxgThread = 0LL;
      }
      else
      {
        DxgThread = v126;
        if ( !v126 )
        {
          DxgThread = DxgkThreadObjectCreateDxgThread(1);
          v126 = DxgThread;
        }
      }
      if ( *((_DWORD *)DxgThread + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
    }
  }
  return (unsigned int)v23;
}
