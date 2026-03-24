/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C02673C4
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0267038 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0008E04 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0248A54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C0255788 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *this)
{
  __int64 v2; // rdi
  unsigned __int8 *v4; // r13
  __int64 v5; // rax
  unsigned __int64 AllocationHandle; // r14
  char *v8; // r14
  char v9; // r12
  __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 Current; // rax
  __int64 v13; // r9
  DXGDEVICE *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  UINT v22; // ebx
  unsigned int HostProcess; // eax
  unsigned int v24; // r15d
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rax
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  struct _EX_RUNDOWN_REF *v31; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // edx
  _QWORD *v38; // r13
  __int64 v39; // r12
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  ULONG_PTR v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int8 *v49; // r13
  UINT v50; // edi
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  ULONG_PTR v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // rdx
  ULONG_PTR v60; // rcx
  unsigned __int64 v61; // r14
  unsigned int v62; // r12d
  __int64 v63; // r9
  int v64; // edx
  __int64 v65; // rdx
  __int64 v66; // rax
  struct _EX_RUNDOWN_REF *v67; // rdx
  __int64 v68; // rdx
  struct _EX_RUNDOWN_REF *v69; // rbx
  ULONG_PTR v70; // rdx
  signed __int64 v71; // rax
  signed __int64 v72; // rtt
  __int64 v73; // rdx
  __int64 v74; // r8
  int v75; // edx
  _QWORD *v76; // r15
  __int64 v77; // r14
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rax
  UINT v82; // edi
  unsigned int v83; // eax
  ULONG_PTR v84; // r14
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r14
  __int64 v89; // rax
  __int64 v90; // rdx
  ULONG_PTR v91; // rcx
  size_t v92; // [rsp+38h] [rbp-C8h]
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v94; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v95; // [rsp+60h] [rbp-A0h] BYREF
  struct _EX_RUNDOWN_REF *v96; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v97; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v98; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v99[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v100[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v101[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v102[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v103[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v104[88]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v105[144]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v106[144]; // [rsp+1F0h] [rbp+F0h] BYREF

  LODWORD(v2) = 0;
  v97 = (unsigned __int8 *)a1;
  v4 = (unsigned __int8 *)a1;
  if ( !this )
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL);
    LODWORD(v2) = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v2;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  if ( !a1->EvictByNtHandle.NtHandle )
  {
    v8 = (char *)this + 176;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v9 = 0;
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
    v10 = 0LL;
    v11 = (_QWORD *)*((_QWORD *)this + 35);
    v99[0] = (char *)this + 280;
    while ( 1 )
    {
      v99[1] = v11;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v99);
      v14 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      if ( (*(_BYTE *)(Current + 1869) & 1) != 0 )
      {
        v9 = 1;
        v10 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
      }
      else
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, Current, 0, v13, 0);
        v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v102, 0LL);
        v2 = v15;
        if ( v15 < 0
          || ((v18 = (_QWORD *)*((_QWORD *)v14 + 2), *(int *)(v18[2] + 2596LL) < 2000)
            ? (COREDEVICEACCESS::Release((COREDEVICEACCESS *)v102, v16), v19 = DXGDEVICE::EvictAllAllocations(v14, v20))
            : (v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v18[80] + 8LL) + 880LL))(
                       v18[81],
                       *((_QWORD *)v14 + 95),
                       0LL,
                       0LL)),
              v2 = v19,
              v19 < 0) )
        {
          v21 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v21 + 24) = v2;
          WdLogEvent5_WdError(v21);
          COREACCESS::~COREACCESS((COREACCESS *)v104);
          COREACCESS::~COREACCESS((COREACCESS *)v103);
          goto LABEL_19;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v104);
        COREACCESS::~COREACCESS((COREACCESS *)v103);
      }
      v11 = (_QWORD *)*v11;
    }
    if ( v9 )
    {
      v22 = *(_DWORD *)(v10 + 4312);
      HostProcess = DXGPROCESS::GetHostProcess(this);
      LODWORD(v92) = 1088;
      LODWORD(v2) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v10 + 4240),
                      HostProcess,
                      v22,
                      0,
                      0,
                      D3DKMT_ESCAPE_VIDMM,
                      0,
                      v92,
                      v97);
    }
LABEL_19:
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v2;
  }
  Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
  if ( (_DWORD)AllocationHandle )
  {
    v95 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v100,
      (struct _KTHREAD **)this);
    v24 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
    if ( v24 < *((_DWORD *)this + 64) )
    {
      v25 = *((_QWORD *)this + 30);
      v26 = *(_DWORD *)(v25 + 16LL * v24 + 8);
      if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60)
        && (v26 & 0x2000) == 0
        && (v26 & 0x1F) != 0 )
      {
        v27 = v26 & 0x1F;
        if ( (_BYTE)v27 == 5 )
        {
          v29 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * v24);
          goto LABEL_28;
        }
        v28 = WdLogNewEntry5_WdError(((unsigned int)AllocationHandle >> 25) & 0x60, v27);
        *(_QWORD *)(v28 + 24) = 316LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
LABEL_28:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v98, v29);
    DXGALLOCATIONREFERENCE::MoveAssign(&v95, &v98);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v98, v30);
    v31 = v95;
    if ( !v95 || (Count = v95[1].Count) == 0 )
    {
LABEL_34:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
      LODWORD(v2) = -1073741811;
LABEL_35:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95, v35);
      return (unsigned int)v2;
    }
    _m_prefetchw((const void *)(Count + 64));
    v33 = *(_QWORD *)(Count + 64);
    do
    {
      if ( !v33 )
        goto LABEL_34;
      v34 = v33;
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v33 + 1, v33);
    }
    while ( v34 != v33 );
    if ( v24 < *((_DWORD *)this + 64) )
    {
      v36 = *((_QWORD *)this + 30);
      v37 = *(_DWORD *)(v36 + 16LL * v24 + 8);
      if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v36 + 16LL * v24 + 8) & 0x60)
        && (v37 & 0x2000) == 0
        && (v37 & 0x1F) != 0 )
      {
        *(_DWORD *)(v36 + 16LL * (((unsigned int)AllocationHandle >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
    v38 = *(_QWORD **)(v31[1].Count + 16);
    if ( !v38 )
    {
LABEL_59:
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)this + 208));
      if ( v24 < *((_DWORD *)this + 64) )
      {
        v55 = *((_QWORD *)this + 30);
        v56 = ((unsigned int)AllocationHandle >> 25) & 0x60;
        if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v55 + 16LL * v24 + 8) & 0x60)
          && (*(_DWORD *)(v55 + 16LL * v24 + 8) & 0x1F) != 0 )
        {
          v57 = 2 * ((AllocationHandle >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v55 + 8 * v57 + 8) & 0x2000) == 0 )
          {
            v58 = WdLogNewEntry5_WdAssertion(v56, v55);
            *(_QWORD *)(v58 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v58);
            v55 = *((_QWORD *)this + 30);
          }
          *(_DWORD *)(v55 + 8 * v57 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)this + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 208, 0LL);
      KeLeaveCriticalRegion();
      v60 = v31[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v60 + 16), (struct DXGDEVICE *)v60);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95, v59);
      v4 = v97;
      goto LABEL_68;
    }
    v39 = v38[2];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v106, (struct DXGADAPTER *const)v39, 0LL);
    v40 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v106, 0LL);
    v2 = v40;
    if ( v40 < 0 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)this + 208));
      if ( v24 < *((_DWORD *)this + 64) )
      {
        v41 = *((_QWORD *)this + 30);
        v42 = ((unsigned int)AllocationHandle >> 25) & 0x60;
        if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v41 + 16LL * v24 + 8) & 0x60)
          && (*(_DWORD *)(v41 + 16LL * v24 + 8) & 0x1F) != 0 )
        {
          v43 = 2 * ((AllocationHandle >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v41 + 8 * v43 + 8) & 0x2000) == 0 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v42, v41);
            *(_QWORD *)(v44 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v44);
            v41 = *((_QWORD *)this + 30);
          }
          *(_DWORD *)(v41 + 8 * v43 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)this + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 208, 0LL);
      KeLeaveCriticalRegion();
      v46 = v31[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v46 + 16), (struct DXGDEVICE *)v46);
      v47 = WdLogNewEntry5_WdError(v46, v45);
      *(_QWORD *)(v47 + 24) = v2;
      WdLogEvent5_WdError(v47);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v106, v48);
      goto LABEL_35;
    }
    if ( *(_BYTE *)(v39 + 209) )
    {
      v49 = v97;
      *((_DWORD *)v97 + 3) = v95[12].Count;
      *((_QWORD *)v49 + 2) = 0LL;
      *((_DWORD *)v49 + 2) = 0;
      v50 = *(_DWORD *)(v39 + 4312);
      v51 = DXGPROCESS::GetHostProcess(this);
      LODWORD(v92) = 1088;
      v52 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4240),
              v51,
              v50,
              0,
              0,
              D3DKMT_ESCAPE_VIDMM,
              0,
              v92,
              v49);
    }
    else
    {
      v54 = v31[1].Count;
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v54 + 16) + 16LL) + 2596LL) < 2000 )
      {
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(v38[80] + 8LL) + 728LL))(
          v38[81],
          v95[3].Count,
          0LL,
          0LL);
        goto LABEL_58;
      }
      v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v38[80] + 8LL) + 880LL))(
              v38[81],
              *(_QWORD *)(v54 + 760),
              v95[3].Count,
              0LL);
    }
    LODWORD(v2) = v52;
LABEL_58:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v106, v53);
    goto LABEL_59;
  }
LABEL_68:
  v61 = (unsigned int)Value;
  if ( !*(_DWORD *)&Value )
    return (unsigned int)v2;
  v94 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v101,
    (struct _KTHREAD **)this);
  v62 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
  if ( v62 >= *((_DWORD *)this + 64) )
    goto LABEL_75;
  v63 = *((_QWORD *)this + 30);
  v64 = *(_DWORD *)(v63 + 16LL * v62 + 8);
  if ( ((*(unsigned int *)&Value >> 25) & 0x60) != (*(_BYTE *)(v63 + 16LL * v62 + 8) & 0x60)
    || (v64 & 0x2000) != 0
    || (v64 & 0x1F) == 0 )
  {
    goto LABEL_75;
  }
  v65 = v64 & 0x1F;
  if ( (_BYTE)v65 != 4 )
  {
    v66 = WdLogNewEntry5_WdError((*(unsigned int *)&Value >> 25) & 0x60, v65);
    *(_QWORD *)(v66 + 24) = 316LL;
    WdLogEvent5_WdError(v66);
LABEL_75:
    v67 = 0LL;
    goto LABEL_76;
  }
  v67 = *(struct _EX_RUNDOWN_REF **)(v63 + 16LL * v62);
LABEL_76:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v96, v67);
  DXGRESOURCEREFERENCE::MoveAssign(&v94, &v96);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v96, v68);
  v69 = v94;
  if ( v94 )
  {
    v70 = v94[1].Count;
    if ( v70 )
    {
      _m_prefetchw((const void *)(v70 + 64));
      v71 = *(_QWORD *)(v70 + 64);
      while ( v71 )
      {
        v72 = v71;
        v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 64), v71 + 1, v71);
        if ( v72 == v71 )
        {
          if ( v62 < *((_DWORD *)this + 64) )
          {
            v74 = *((_QWORD *)this + 30);
            v75 = *(_DWORD *)(v74 + 16LL * v62 + 8);
            if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v74 + 16LL * v62 + 8) & 0x60)
              && (v75 & 0x2000) == 0
              && (v75 & 0x1F) != 0 )
            {
              *(_DWORD *)(v74 + 16LL * ((*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v101);
          v76 = *(_QWORD **)(v69[1].Count + 16);
          if ( v76 )
          {
            v77 = v76[2];
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v105, (struct DXGADAPTER *const)v77, 0LL);
            v78 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v105, 0LL);
            v80 = 0LL;
            v2 = v78;
            if ( v78 >= 0 )
            {
              if ( *(_BYTE *)(v77 + 209) )
              {
                *((_DWORD *)v4 + 2) = HIDWORD(v94[2].Ptr);
                *((_DWORD *)v4 + 3) = 0;
                *((_QWORD *)v4 + 2) = 0LL;
                v82 = *(_DWORD *)(v77 + 4312);
                v83 = DXGPROCESS::GetHostProcess(this);
                LODWORD(v92) = 1088;
                LODWORD(v2) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v77 + 4240),
                                v83,
                                v82,
                                0,
                                0,
                                D3DKMT_ESCAPE_VIDMM,
                                0,
                                v92,
                                v4);
              }
              else
              {
                v84 = v94[3].Count;
                if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v69[1].Count + 16) + 16LL) + 2596LL) < 2000 )
                {
                  while ( v84 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v76[80] + 8LL) + 728LL))(
                      v76[81],
                      *(_QWORD *)(v84 + 24),
                      0LL,
                      0LL);
                    v84 = *(_QWORD *)(v84 + 64);
                  }
                }
                else
                {
                  while ( v84 )
                  {
                    v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v76[80] + 8LL) + 880LL))(
                            v76[81],
                            *(_QWORD *)(v69[1].Count + 760),
                            *(_QWORD *)(v84 + 24),
                            0LL);
                    v2 = v85;
                    if ( v85 < 0 )
                      goto LABEL_90;
                    v84 = *(_QWORD *)(v84 + 64);
                  }
                }
              }
            }
            else
            {
LABEL_90:
              v81 = WdLogNewEntry5_WdError(v79, v80);
              *(_QWORD *)(v81 + 24) = v2;
              WdLogEvent5_WdError(v81);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v105, v80);
            v61 = (unsigned int)Value;
          }
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)this + 208));
          if ( v62 < *((_DWORD *)this + 64) )
          {
            v86 = *((_QWORD *)this + 30);
            v87 = ((unsigned int)v61 >> 25) & 0x60;
            if ( (((unsigned int)v61 >> 25) & 0x60) == (*(_BYTE *)(v86 + 16LL * v62 + 8) & 0x60)
              && (*(_DWORD *)(v86 + 16LL * v62 + 8) & 0x1F) != 0 )
            {
              v88 = 2 * ((v61 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v86 + 8 * v88 + 8) & 0x2000) == 0 )
              {
                v89 = WdLogNewEntry5_WdAssertion(v87, v86);
                *(_QWORD *)(v89 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v89);
                v86 = *((_QWORD *)this + 30);
              }
              *(_DWORD *)(v86 + 8 * v88 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)this + 27) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 208, 0LL);
          KeLeaveCriticalRegion();
          v91 = v69[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v91 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v91 + 16), (struct DXGDEVICE *)v91);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94, v90);
          return (unsigned int)v2;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v101);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94, v73);
  return -1073741811LL;
}
