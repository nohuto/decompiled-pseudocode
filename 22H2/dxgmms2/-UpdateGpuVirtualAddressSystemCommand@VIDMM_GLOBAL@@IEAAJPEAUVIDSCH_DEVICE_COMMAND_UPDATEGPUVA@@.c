/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B39A8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001C30 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0005710 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007C30 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012AD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0017928 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C002335C (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchGetPagingContext @ 0x1C0034DC0 (VidSchGetPagingContext.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A310 (VidSchSubmitSignalToHwQueue.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005F094 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006F458 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006FBAC (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0076394 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00867FC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00BB1CC (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00BD304 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00BD488 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned __int64 v3; // r15
  VIDMM_GLOBAL *v5; // rsi
  struct VIDMM_PROCESS ***v6; // rax
  int v7; // edi
  struct VIDMM_PROCESS **v8; // r13
  __int64 v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // r14
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // r14
  VIDMM_GLOBAL *v22; // r11
  unsigned int v23; // ecx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v24; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  char *v26; // r14
  volatile signed __int32 *v27; // r12
  volatile signed __int32 *v28; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  char *v41; // r14
  struct _LIST_ENTRY *v42; // rdx
  __int64 p_Blink; // rsi
  struct _LIST_ENTRY *v44; // rcx
  struct _LIST_ENTRY *v45; // r12
  VIDMM_SEGMENT *v46; // rcx
  int v47; // edi
  struct _MDL *FullMDL; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  unsigned __int64 v54; // rax
  bool v55; // zf
  struct VIDMM_MAPPED_VA_RANGE *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  volatile signed __int32 *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  volatile signed __int32 *v68; // rax
  __int64 v69; // rcx
  struct VIDMM_ALLOC *v70; // r8
  struct _VIDMM_GLOBAL_ALLOC *v71; // r10
  int v72; // eax
  unsigned __int64 AllocationOffsetInBytes; // r9
  __int64 v74; // r11
  VIDMM_SEGMENT *v75; // rcx
  struct _MDL *v76; // rax
  int v77; // eax
  __int64 v78; // r10
  __int64 v79; // rax
  unsigned int v80; // ecx
  char *v81; // r12
  struct VIDMM_MAPPED_VA_RANGE *v82; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  unsigned __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rcx
  _QWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  unsigned int v109; // ebx
  __int64 v110; // rcx
  __int64 v111; // r8
  char v113; // [rsp+50h] [rbp-B0h] BYREF
  char v114; // [rsp+51h] [rbp-AFh] BYREF
  char v115[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v116; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v117; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY v118; // [rsp+60h] [rbp-A0h] BYREF
  struct _LIST_ENTRY v119; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v120; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC *v121; // [rsp+88h] [rbp-78h]
  __int64 v122; // [rsp+90h] [rbp-70h]
  __int64 v123; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v124; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v125; // [rsp+A8h] [rbp-58h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v126; // [rsp+B0h] [rbp-50h]
  int v127; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v128; // [rsp+C0h] [rbp-40h]
  char v129; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v130; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-28h] BYREF
  __int64 PagingContext; // [rsp+E0h] [rbp-20h] BYREF
  char v133[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v134; // [rsp+F0h] [rbp-10h]
  int v135; // [rsp+F8h] [rbp-8h]
  unsigned int v137; // [rsp+158h] [rbp+58h] BYREF
  struct VIDMM_ALLOC **v138; // [rsp+160h] [rbp+60h]
  char v139; // [rsp+168h] [rbp+68h]

  v138 = a3;
  v3 = -1LL;
  v5 = this;
  v127 = -1;
  v128 = 0LL;
  if ( (qword_1C0050010 & 2) != 0 )
  {
    v129 = 1;
    v127 = 8011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 8011);
  }
  else
  {
    v129 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v6 = (struct VIDMM_PROCESS ***)*((_QWORD *)a2 + 11);
  v139 = 0;
  v7 = 0;
  v8 = *v6;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v133, *v6 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v134);
  v135 = 2;
  if ( !*((_QWORD *)a2 + 14) )
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    WdLogEvent5_WdEvent(v11);
    v7 = -1073741823;
    v139 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v10, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v14 = WdLogNewEntry5_WdEvent(v13, v12);
      WdLogEvent5_WdEvent(v14);
      v7 = -1073741823;
      v139 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v133);
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v15 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 200), 0, 0) )
    v7 = -1073741823;
  if ( v7 < 0 )
  {
    v23 = v137;
    goto LABEL_130;
  }
  v16 = 0LL;
  v17 = *((unsigned int *)a2 + 4);
  v125 = v17;
  v117 = 0LL;
  v18 = *((_QWORD *)a2 + 14);
  v123 = 3 * (v17 + 4);
  v19 = (struct _LIST_ENTRY *)(v18 + 24 * (v17 + 4));
  Flink = v19->Flink;
  v119.Blink = v19;
  if ( Flink == v19 )
  {
    Blink = (struct _LIST_ENTRY *)(v18 + 24 * (v125 + 4));
  }
  else
  {
    Blink = *(struct _LIST_ENTRY **)(v18 + 24 * v17 + 112);
    if ( !Blink )
      Blink = Flink;
  }
  v22 = this;
  v118.Flink = Blink;
  if ( *((_QWORD *)this + 5123) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      0,
      v8[12],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    v22 = this;
  }
  v23 = *((_DWORD *)a2 + 9);
  v116 = v23;
  if ( v23 >= *((_DWORD *)a2 + 5) )
    goto LABEL_129;
  while ( 2 )
  {
    v24 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v23 << 6));
    OperationType = v24->OperationType;
    if ( v24->OperationType && OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        if ( *((_QWORD *)v22 + 5123) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v22, v8[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v24);
        v26 = (char *)a2 + 96;
        LOBYTE(v137) = 0;
        v27 = (volatile signed __int32 *)*((_QWORD *)a2 + 12);
        v28 = v27 - 2;
        v29 = (struct VIDMM_MAPPED_VA_RANGE *)(v27 - 2);
        if ( (v27[20] & 8) != 0 )
        {
          v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v29, v138, 0);
          if ( v7 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30);
            v32[3] = *((_QWORD *)v28 + 12);
            v32[4] = *((_QWORD *)v28 + 13);
            v32[5] = 24863LL;
            WdLogEvent5_WdWarning(v32);
          }
          LOBYTE(v137) = 1;
        }
        else
        {
          v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (__int64)v8,
                 (__int64)v29,
                 0LL,
                 -2,
                 0LL,
                 0LL,
                 2,
                 v138,
                 &v137);
          if ( v7 < 0 )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33);
            v35[3] = *((_QWORD *)v28 + 12);
            v35[4] = *((_QWORD *)v28 + 13);
            v35[5] = 24877LL;
            WdLogEvent5_WdWarning(v35);
          }
          if ( !(_BYTE)v137 )
          {
LABEL_38:
            if ( v7 < 0 )
            {
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v27 - 2, (struct CVirtualAddressAllocator *)v8);
            }
            else
            {
              v37 = *(__int64 **)v26;
              if ( *(char **)(*(_QWORD *)v26 + 8LL) != v26 || (v38 = *v37, *(__int64 **)(*v37 + 8) != v37) )
LABEL_132:
                __fastfail(3u);
              *(_QWORD *)v26 = v38;
              *(_QWORD *)(v38 + 8) = v26;
              *(_QWORD *)v27 = 0LL;
              *((_QWORD *)v28 + 2) = 0LL;
              v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                     v8,
                     *((struct VIDMM_VAD **)a2 + 14),
                     *((_DWORD *)a2 + 4),
                     0LL,
                     (struct VIDMM_MAPPED_VA_RANGE *)(v27 - 2));
              if ( v7 >= 0 )
              {
                Blink = v119.Blink->Flink;
                v118.Flink = v119.Blink->Flink;
                goto LABEL_119;
              }
              v99 = WdLogNewEntry5_WdWarning(v40, v39);
              WdLogEvent5_WdWarning(v99);
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v27 - 2, (struct CVirtualAddressAllocator *)v8);
            }
            break;
          }
        }
        v36 = *((_QWORD *)v28 + 12);
        if ( v3 < v36 )
          v36 = v3;
        v3 = v36;
        if ( v117 <= *((_QWORD *)v28 + 13) )
          v117 = *((_QWORD *)v28 + 13);
        goto LABEL_38;
      }
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        goto LABEL_121;
      if ( *((_QWORD *)v22 + 5123) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v22, v8[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v24);
      v41 = (char *)a2 + 48;
      if ( *(char **)v41 == v41 )
        v7 = CVirtualAddressAllocator::BuildVaRangeList(
               (CVirtualAddressAllocator *)v8,
               *((struct VIDMM_VAD **)a2 + 15),
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               (struct _LIST_ENTRY *)a2 + 3,
               v24->Map.BaseAddress,
               v24->Map.BaseAddress + v24->Map.SizeInBytes,
               v24->Unmap.Protection.Value);
      if ( v7 < 0 )
      {
LABEL_77:
        if ( v7 != -1073741267 )
        {
          while ( 1 )
          {
            v68 = *(volatile signed __int32 **)v41;
            if ( *(char **)v41 == v41 )
              break;
            if ( *((char **)v68 + 1) != v41 )
              goto LABEL_132;
            v69 = *(_QWORD *)v68;
            if ( *(volatile signed __int32 **)(*(_QWORD *)v68 + 8LL) != v68 )
              goto LABEL_132;
            *(_QWORD *)v41 = v69;
            *(_QWORD *)(v69 + 8) = v41;
            *((_QWORD *)v68 + 1) = 0LL;
            *(_QWORD *)v68 = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v68 - 2, (struct CVirtualAddressAllocator *)v8);
          }
        }
        Blink = v119.Blink->Flink;
        v118.Flink = v119.Blink->Flink;
        goto LABEL_120;
      }
      v119.Flink = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 8 * v123);
      while ( 1 )
      {
        v42 = *(struct _LIST_ENTRY **)v41;
        v118.Flink = v42;
        if ( v42 == (struct _LIST_ENTRY *)v41 || v7 < 0 )
          goto LABEL_77;
        p_Blink = (__int64)&v42[-1].Blink;
        v44 = v42[3].Flink;
        if ( v44 )
        {
          v45 = v44->Flink->Flink;
          if ( (HIDWORD(v44[1].Blink) & 3) != 2 )
          {
            v16 = v117;
            goto LABEL_72;
          }
          v46 = (VIDMM_SEGMENT *)v45[8].Flink;
          if ( (*((_DWORD *)v46 + 20) & 0x1001) != 0 )
          {
            v47 = 0;
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v45, 0LL);
            v49 = *(_QWORD *)(p_Blink + 72);
          }
          else
          {
            v47 = VIDMM_SEGMENT::DriverId(v46);
            FullMDL = 0LL;
            v49 = (unsigned __int64)v45[8].Blink + *(_QWORD *)(p_Blink + 72);
          }
          v50 = HIDWORD(v45[4].Blink) & 0x3F;
          v113 = 0;
          v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (__int64)v8,
                 p_Blink,
                 v50,
                 v47,
                 v49,
                 (__int64)FullMDL,
                 2,
                 v138,
                 &v113);
          if ( v7 < 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51);
            v53[3] = *(_QWORD *)(p_Blink + 96);
            v53[4] = *(_QWORD *)(p_Blink + 104);
            v53[5] = 24976LL;
            WdLogEvent5_WdWarning(v53);
          }
          v16 = v117;
          if ( v113 )
            goto LABEL_60;
        }
        else
        {
          v55 = (*(_BYTE *)(p_Blink + 88) & 8) == 0;
          v56 = (struct VIDMM_MAPPED_VA_RANGE *)&v42[-1].Blink;
          v114 = 0;
          if ( !v55 )
          {
            v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v56, v138, 0);
            if ( v7 < 0 )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57);
              v59[3] = *(_QWORD *)(p_Blink + 96);
              v59[4] = *(_QWORD *)(p_Blink + 104);
              v59[5] = 24994LL;
              WdLogEvent5_WdWarning(v59);
            }
LABEL_60:
            v54 = *(_QWORD *)(p_Blink + 96);
            v42 = v118.Flink;
            if ( v3 < v54 )
              v54 = v3;
            v3 = v54;
            if ( v16 <= *(_QWORD *)(p_Blink + 104) )
            {
              v16 = *(_QWORD *)(p_Blink + 104);
              v117 = v16;
            }
            goto LABEL_72;
          }
          v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (__int64)v8,
                 (__int64)v56,
                 0LL,
                 -2,
                 0LL,
                 0LL,
                 2,
                 v138,
                 &v114);
          if ( v7 < 0 )
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60);
            v62[3] = *(_QWORD *)(p_Blink + 96);
            v62[4] = *(_QWORD *)(p_Blink + 104);
            v62[5] = 25009LL;
            WdLogEvent5_WdWarning(v62);
          }
          if ( v114 )
            goto LABEL_60;
        }
        v42 = v118.Flink;
LABEL_72:
        if ( v7 >= 0 )
        {
          v63 = *(volatile signed __int32 **)v41;
          if ( *(char **)(*(_QWORD *)v41 + 8LL) != v41 )
            goto LABEL_132;
          v64 = *(_QWORD *)v63;
          if ( *(volatile signed __int32 **)(*(_QWORD *)v63 + 8LL) != v63 )
            goto LABEL_132;
          *(_QWORD *)v41 = v64;
          *(_QWORD *)(v64 + 8) = v41;
          v42->Flink = 0LL;
          *(_QWORD *)(p_Blink + 16) = 0LL;
          v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 v8,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 &v119,
                 (struct VIDMM_MAPPED_VA_RANGE *)p_Blink);
          if ( v7 < 0 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65);
            v67[3] = *(_QWORD *)(p_Blink + 96);
            v67[4] = *(_QWORD *)(p_Blink + 104);
            v67[5] = 25026LL;
            WdLogEvent5_WdWarning(v67);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
              (volatile signed __int32 *)p_Blink,
              (struct CVirtualAddressAllocator *)v8);
          }
        }
      }
    }
    v55 = *((_QWORD *)v22 + 5123) == 0LL;
    v70 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * v24->Map.hAllocation);
    v121 = v70;
    v71 = **(struct _VIDMM_GLOBAL_ALLOC ***)v70;
    v126 = v71;
    if ( !v55 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v22, v8[12], *(struct _VIDSCH_CONTEXT **)a2, v70, v24);
      v70 = v121;
      v71 = v126;
    }
    v72 = *((_DWORD *)v70 + 7);
    AllocationOffsetInBytes = 0LL;
    LODWORD(v118.Blink) = 0;
    v74 = 0LL;
    v122 = 0LL;
    v120 = 0LL;
    if ( (v72 & 3) == 2 )
    {
      v75 = (VIDMM_SEGMENT *)*((_QWORD *)v71 + 16);
      if ( (*((_DWORD *)v75 + 20) & 0x1001) != 0 )
      {
        LODWORD(v118.Blink) = 0;
        v76 = VidMmGetFullMDL(v71, 0LL);
        AllocationOffsetInBytes = v24->Map.AllocationOffsetInBytes;
        v74 = (__int64)v76;
        v70 = v121;
        v122 = (__int64)v76;
      }
      else
      {
        v77 = VIDMM_SEGMENT::DriverId(v75);
        AllocationOffsetInBytes = v24->Map.AllocationOffsetInBytes + *(_QWORD *)(v78 + 136);
        LODWORD(v118.Blink) = v77;
        v122 = v74;
      }
      v120 = AllocationOffsetInBytes;
    }
    if ( (*((_BYTE *)this + 40937) & 4) != 0 )
      v79 = 1LL;
    else
      v79 = v24->Map.SizeInBytes / v24->Map.AllocationSizeInBytes;
    v80 = *((_DWORD *)a2 + 10);
    v119.Flink = (struct _LIST_ENTRY *)v79;
    HIDWORD(v118.Blink) = v80;
    if ( v80 >= (unsigned int)v79 )
      goto LABEL_120;
    v81 = (char *)a2 + 96;
    while ( 1 )
    {
      v124 = *(_QWORD **)v81;
      v82 = (struct VIDMM_MAPPED_VA_RANGE *)(v124 - 1);
      v83 = (struct VIDMM_MAPPED_VA_RANGE *)(v124 - 1);
      if ( (*((_DWORD *)v70 + 7) & 3) == 2 )
        break;
      v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v83, v138, 0);
      v86 = *((_QWORD *)v82 + 12);
      if ( v3 < v86 )
        v86 = v3;
      v3 = v86;
      v87 = *((_QWORD *)v82 + 13);
      if ( v117 > v87 )
        v87 = v117;
      v117 = v87;
      if ( v7 < 0 )
      {
        v88 = WdLogNewEntry5_WdWarning(v85, v84);
        *(_QWORD *)(v88 + 24) = *((_QWORD *)v82 + 12);
        *(_QWORD *)(v88 + 32) = *((_QWORD *)v82 + 13);
        WdLogEvent5_WdWarning(v88);
        v16 = v117;
        goto LABEL_120;
      }
LABEL_108:
      if ( v119.Blink->Flink != v119.Blink )
      {
        if ( (struct _LIST_ENTRY *)*((_QWORD *)v82 + 12) < Blink[5].Blink )
          Blink = v119.Blink->Flink;
        v118.Flink = Blink;
      }
      v92 = *(_QWORD **)v81;
      if ( *(char **)(*(_QWORD *)v81 + 8LL) != v81 )
        goto LABEL_132;
      v93 = *v92;
      if ( *(_QWORD **)(*v92 + 8LL) != v92 )
        goto LABEL_132;
      v94 = v124;
      *(_QWORD *)v81 = v93;
      *(_QWORD *)(v93 + 8) = v81;
      *((_QWORD *)v82 + 2) = 0LL;
      *v94 = 0LL;
      v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             v8,
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             &v118,
             v82);
      if ( v7 < 0 )
      {
        v97 = WdLogNewEntry5_WdWarning(v96, v95);
        WdLogEvent5_WdWarning(v97);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
          (volatile signed __int32 *)v82,
          (struct CVirtualAddressAllocator *)v8);
        Blink = v118.Flink;
        goto LABEL_119;
      }
      Blink = v118.Flink->Blink;
      v118.Flink = Blink;
      *(_QWORD *)(*((_QWORD *)a2 + 14) + 24 * v125 + 112) = Blink;
      if ( ++HIDWORD(v118.Blink) >= LODWORD(v119.Flink) )
        goto LABEL_119;
      AllocationOffsetInBytes = v120;
      v70 = v121;
      v74 = v122;
    }
    v115[0] = 0;
    v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           (__int64)v8,
           (__int64)v83,
           *((_DWORD *)v126 + 19) & 0x3F,
           (int)v118.Blink,
           AllocationOffsetInBytes,
           v74,
           2,
           v138,
           v115);
    if ( v115[0] )
    {
      v91 = *((_QWORD *)v82 + 12);
      if ( v3 < v91 )
        v91 = v3;
      v3 = v91;
      if ( v117 <= *((_QWORD *)v82 + 13) )
        v117 = *((_QWORD *)v82 + 13);
    }
    if ( v7 >= 0 )
      goto LABEL_108;
    v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89);
    v98[3] = *((_QWORD *)v82 + 12);
    v98[4] = *((_QWORD *)v82 + 13);
    v98[5] = 24800LL;
    WdLogEvent5_WdWarning(v98);
LABEL_119:
    v16 = v117;
LABEL_120:
    v23 = v116;
LABEL_121:
    if ( v7 >= 0 )
    {
      *((_DWORD *)a2 + 10) = 0;
      v116 = ++v23;
      if ( v23 < *((_DWORD *)a2 + 5) )
      {
        v22 = this;
        continue;
      }
    }
    break;
  }
  if ( v3 < v117 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v8, *((_DWORD *)a2 + 4), v3, v117);
  v23 = v116;
LABEL_129:
  v5 = this;
LABEL_130:
  if ( v7 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v23;
    goto LABEL_143;
  }
  if ( *((_QWORD *)a2 + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v5, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v100 = *((unsigned int *)a2 + 4);
    v101 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 624LL);
    v123 = *(_QWORD *)(*(_QWORD *)(v101 + 272) + 8 * v100);
    if ( v123 )
    {
      v124 = (_QWORD *)*((_QWORD *)a2 + 9);
      v125 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v123, 1u, (__int64)&v124, 0x80000000, &v125) < 0 )
      {
        v105 = WdLogNewEntry5_WdAssertion(v103, v102, v104);
        *(_QWORD *)(v105 + 24) = 25114LL;
        goto LABEL_141;
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v101, v100);
      v131 = *((_QWORD *)a2 + 9);
      v130 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0LL, 0LL, 1LL, &PagingContext, 1u, (__int64)&v131, 0x80000000, &v130) < 0 )
      {
        v105 = WdLogNewEntry5_WdAssertion(v107, v106, v108);
        *(_QWORD *)(v105 + 24) = 25142LL;
LABEL_141:
        WdLogEvent5_WdAssertion(v105);
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
LABEL_143:
  v109 = 0;
  if ( !v139 )
    v109 = v7;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
  if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v110, &EventProfilerExit, v111, v127);
  return v109;
}
