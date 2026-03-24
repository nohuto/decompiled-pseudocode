/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE9E4
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C0214544 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009F40 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AC14 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C015D77C (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C01645B8 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0246AD4 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024C724 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1C02FCF98 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FDDD0 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FDE94 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C02FE080 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE29C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02FFF9C (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v8; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 Current; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _LIST_ENTRY *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _LIST_ENTRY **v27; // r13
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGADAPTER *Adapter; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 hDestination; // rdx
  struct _D3DKMT_PRESENT *v42; // rcx
  struct DXGCONTEXT *v43; // rdx
  const struct _DXGKARG_PRESENT *v44; // r9
  struct DXGDEVICE *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  bool v50; // zf
  RECT *p_SrcRect; // rax
  struct tagRECT *Src; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct _LIST_ENTRY *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  struct DXGPROCESS *v64; // rax
  struct _EX_RUNDOWN_REF *v65; // rbx
  struct _DXGKARG_PRESENT *v66; // rdx
  __int64 SubRectCnt; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-108h]
  size_t Size; // [rsp+48h] [rbp-E0h]
  PVOID BaseAddress; // [rsp+70h] [rbp-B8h] BYREF
  int v75; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+80h] [rbp-A8h]
  char v77; // [rsp+88h] [rbp-A0h]
  int v78; // [rsp+90h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v79; // [rsp+98h] [rbp-90h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+A0h] [rbp-88h] BYREF
  struct _LIST_ENTRY *v81; // [rsp+B0h] [rbp-78h]
  _QWORD v82[2]; // [rsp+B8h] [rbp-70h] BYREF
  struct DXGDEVICE *v83; // [rsp+C8h] [rbp-60h]
  _BYTE v84[88]; // [rsp+D0h] [rbp-58h] BYREF
  BLTQUEUE *v85; // [rsp+130h] [rbp+8h] BYREF
  struct DXGCONTEXT *v86; // [rsp+138h] [rbp+10h]
  struct _D3DKMT_PRESENT *v87; // [rsp+140h] [rbp+18h]
  struct _DXGKARG_PRESENT *v88; // [rsp+148h] [rbp+20h]

  v88 = a4;
  v87 = a3;
  v86 = (struct DXGCONTEXT *)a2;
  v85 = this;
  v75 = -1;
  v76 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v77 = 1;
    v75 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 12000);
  }
  else
  {
    v77 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v75, 12000LL);
  if ( (*((_DWORD *)this + 234) & 1) == 0 )
    goto LABEL_37;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, v8);
    if ( v77 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v75);
    }
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  LOBYTE(v8) = *((_BYTE *)a2 + 457);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2[2] + 2) + 16LL) + 348LL) & 0x10) != 0 )
  {
LABEL_20:
    if ( !(_BYTE)v8 )
      goto LABEL_26;
    goto LABEL_21;
  }
  if ( !(_BYTE)v8 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 87) & 0x100) == 0 )
    {
      v14 = WdLogNewEntry5_WdError(v13, v8);
      Current = -1073741811LL;
LABEL_15:
      *(_QWORD *)(v14 + 32) = this;
      *(_QWORD *)(v14 + 24) = Current;
      WdLogEvent5_WdError(v14);
LABEL_16:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, v15);
      if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v75);
      return (unsigned int)Current;
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( (*(_BYTE *)&Value & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, v8);
    if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v75);
    return 3221225659LL;
  }
LABEL_26:
  if ( *((int *)this + 235) < 0 )
    goto LABEL_37;
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 567) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v23 + 24) = -1073741130LL;
      *(_QWORD *)(v23 + 32) = this;
      WdLogEvent5_WdError(v23);
LABEL_37:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, v8);
      if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v75);
      return 3221226166LL;
    }
  }
  LODWORD(BaseAddress) = 0;
  v24 = (struct _LIST_ENTRY *)((char *)this + 232);
  v81 = (struct _LIST_ENTRY *)((char *)this + 232);
  do
  {
    v27 = BLTQUEUE::RemoveQueueHead(this, v24);
    v82[0] = v27;
    if ( v27 )
      break;
    if ( (a3->Flags.Value & 0x10) != 0 )
    {
      v32 = WdLogNewEntry5_WdEvent(v26, v25);
      *(_QWORD *)(v32 + 24) = -1071775486LL;
      *(_QWORD *)(v32 + 32) = this;
      WdLogEvent5_WdEvent(v32);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, v33);
      if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v75);
      return 3223191810LL;
    }
    *((_BYTE *)this + 566) = 1;
    v28 = BLTQUEUE::IssueCommand(this);
    Current = v28;
    if ( v28 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v26, v25);
      goto LABEL_15;
    }
    LODWORD(BaseAddress) = (_DWORD)BaseAddress + 1;
    v24 = v81;
  }
  while ( (unsigned int)BaseAddress < 3 );
  if ( !v27 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v29 + 24) = -1073741130LL;
    *(_QWORD *)(v29 + 32) = this;
    WdLogEvent5_WdAssertion(v29);
    goto LABEL_37;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v37 = BLTENTRY::SetupPresentParameters(
          (BLTENTRY *)v27,
          this,
          (struct DXGCONTEXT *)a2,
          a3,
          v88,
          a5,
          BYTE1(*((_DWORD *)Adapter + 87)) & 1);
  Current = v37;
  if ( v37 >= 0 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 87) & 0x100) != 0 )
    {
      KeWaitForSingleObject((char *)this + 2704, Executive, 0, 0, 0LL);
      if ( (v87->Flags.Value & 8) != 0 )
        LODWORD(Current) = 0;
      else
        LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, v43, v87, v44, Timeout, (struct BLTENTRY *)v27);
      KeReleaseMutex((PRKMUTEX)((char *)this + 2704), 0);
      goto LABEL_83;
    }
    if ( !*((_BYTE *)a2 + 457) )
    {
      BaseAddress = 0LL;
      v79 = (struct _EX_RUNDOWN_REF *)a2[7];
      v65 = v79 + 1;
      RegionSize[1] = (ULONG_PTR)&v79[1];
      if ( LODWORD(v79->Count) != -791674878
        || ((v42 = v87, (v87->Flags.Value & 4) == 0)
          ? (hDestination = v87->hDestination)
          : (hDestination = v87->hSource),
            LODWORD(v65->Count) != (_DWORD)hDestination) )
      {
        v68 = (_QWORD *)WdLogNewEntry5_WdError(v42, hDestination);
        v68[3] = Current;
        v68[4] = a2;
        v68[5] = this;
        WdLogEvent5_WdError(v68);
        LODWORD(Current) = -1073741811;
        v78 = -1073741811;
        goto LABEL_83;
      }
      if ( (v87->Flags.Value & 4) != 0 )
      {
        memset(v65, 0, 0x48uLL);
        LODWORD(v65[1].Count) |= 4u;
      }
      else
      {
        v66 = v88;
        LODWORD(v79[2].Count) = v88->Flags.0;
        HIDWORD(v65[1].Ptr) = v66->Color;
        *(RECT *)&v65[4].Count = v66->DstRect;
        *(RECT *)&v65[2].Count = v66->SrcRect;
        v83 = a2[6];
        SubRectCnt = v66->SubRectCnt;
        if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)(unsigned int)v83 - 80) >> 4) )
        {
          RegionSize[0] = 16 * SubRectCnt;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u) < 0 )
            goto LABEL_83;
          v66 = v88;
        }
        else
        {
          BaseAddress = (char *)&v65[6].Ptr + 4;
        }
        memmove(BaseAddress, v66->pDstSubRects, 16LL * v66->SubRectCnt);
        LODWORD(v65[6].Count) = v88->SubRectCnt;
        v65->Count = (ULONG_PTR)BaseAddress;
      }
      LODWORD(v79->Count) = -791674877;
      goto LABEL_83;
    }
    v45 = a2[2];
    BaseAddress = *(PVOID *)(*((_QWORD *)v45 + 2) + 16LL);
    LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v45, a3->hSource, a5);
    if ( (int)Current < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v47, v46);
      *(_QWORD *)(v40 + 24) = 1136LL;
      goto LABEL_48;
    }
    v50 = (*(_DWORD *)&a3->Flags.0 & 0x80u) == 0;
    p_SrcRect = &a3->SrcRect;
    Src = (struct tagRECT *)((char *)this + 2824);
    if ( !v50 )
      Src = p_SrcRect;
    Current = (__int64)DXGPROCESS::GetCurrent(v47, v46, v48, v49);
    RegionSize[0] = Current;
    DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v79, v87->hSource);
    LODWORD(Size) = 0;
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4240),
                         (struct DXGPROCESS *)Current,
                         (struct DXGCONTEXT *)a2,
                         v79[12].Count,
                         *((_DWORD *)this + 693),
                         Src,
                         Src,
                         1u,
                         Src,
                         Size,
                         0LL);
    if ( (int)Current >= 0 )
    {
      ++*((_QWORD *)this + 352);
      LODWORD(v85) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4240),
                           (struct DXGPROCESS *)RegionSize[0],
                           1u,
                           (const unsigned int *)this + 700,
                           0,
                           1u,
                           (unsigned int *)&v85,
                           (unsigned __int64 *)this + 352,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      v78 = Current;
      if ( (int)Current >= 0 )
      {
        v59 = (struct _LIST_ENTRY *)a2[2];
        v27[70] = (struct _LIST_ENTRY *)*((_QWORD *)this + 352);
        v27[71] = v59;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v82, (BLTQUEUE *)((char *)this + 720), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v82);
        v64 = DXGPROCESS::GetCurrent(v61, v60, v62, v63);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v84, v64);
        if ( *(_DWORD *)(*(_QWORD *)this + 140LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          *((_DWORD *)v27 + 22) = 4;
          *((_DWORD *)v27 + 18) = *((_DWORD *)this + 62);
          *((_DWORD *)v27 + 23) = *((_DWORD *)this + 695);
          v27[10] = (struct _LIST_ENTRY *)*((_QWORD *)this + 349);
          LODWORD(Current) = v78;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v82);
        goto LABEL_68;
      }
      v55 = WdLogNewEntry5_WdError(v58, v57);
      *(_QWORD *)(v55 + 24) = 1181LL;
    }
    else
    {
      v55 = WdLogNewEntry5_WdError(v54, v53);
      *(_QWORD *)(v55 + 24) = 1161LL;
    }
    WdLogEvent5_WdError(v55);
LABEL_68:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79, v56);
    goto LABEL_83;
  }
  v40 = WdLogNewEntry5_WdError(v39, v38);
  *(_QWORD *)(v40 + 24) = Current;
  *(_QWORD *)(v40 + 32) = this;
LABEL_48:
  WdLogEvent5_WdError(v40);
LABEL_83:
  if ( (int)Current < 0 )
  {
    BLTENTRY::Cleanup((BLTENTRY *)v27, 1);
    BLTQUEUE::InsertQueueHead(this, v81, (struct BLTENTRY *)v27);
    goto LABEL_16;
  }
  BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)((char *)this + 216), (struct BLTENTRY *)v27);
  *((LARGE_INTEGER *)this + 104) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 512), 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, v69);
  if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v75);
  return 0LL;
}
