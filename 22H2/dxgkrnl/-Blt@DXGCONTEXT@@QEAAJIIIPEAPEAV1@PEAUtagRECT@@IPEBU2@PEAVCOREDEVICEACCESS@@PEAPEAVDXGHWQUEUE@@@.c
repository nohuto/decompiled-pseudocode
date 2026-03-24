/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027EE24
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C02A3348 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02BA390 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017974 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01093D0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0170464 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0246AD4 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0280DE0 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        struct _EX_RUNDOWN_REF *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        UINT a7,
        struct tagRECT *a8,
        struct COREDEVICEACCESS *a9,
        struct DXGHWQUEUE **a10)
{
  ULONG_PTR Count; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  _QWORD *v31; // rax
  ULONG_PTR v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // r9
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  ULONG_PTR v53; // r9
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  UINT bottom; // edx
  UINT right; // ecx
  struct tagRECT *v64; // rbx
  signed int Width; // esi
  int v66; // ecx
  signed int Height; // r14d
  __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rbx
  struct DXGPROCESS *Current; // rax
  int v73; // eax
  __int64 v74; // rdx
  _QWORD *v75; // rax
  __int64 top; // rcx
  struct DXGDEVICE *v77; // r14
  unsigned int v78; // esi
  struct ADAPTER_RENDER *v79; // rbx
  __int64 v80; // r8
  ULONG_PTR v81; // rcx
  unsigned int v82; // edx
  unsigned int v83; // eax
  struct COREDEVICEACCESS *v84; // rsi
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  struct tagRECT v88; // xmm0
  ULONG_PTR v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v93; // r8
  __int64 v94; // rax
  int v95; // edx
  int v96; // eax
  int v97; // eax
  unsigned int v98; // r9d
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  size_t v104; // [rsp+48h] [rbp-B8h]
  struct DXGALLOCATION *v105; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v106; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v107; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDMM_DMA_BUFFER *v108; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v109; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v110; // [rsp+A8h] [rbp-58h]
  struct COREDEVICEACCESS *v111; // [rsp+B0h] [rbp-50h]
  struct tagRECT *Src; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v113; // [rsp+C0h] [rbp-40h]
  struct DXGHWQUEUE **v114; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v115; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v116; // [rsp+100h] [rbp+0h] BYREF
  struct _DXGKARG_PRESENT v117; // [rsp+130h] [rbp+30h] BYREF

  v113 = a5;
  v111 = a9;
  v114 = a10;
  Count = this[2].Count;
  v110 = a4;
  v12 = a3;
  v13 = a2;
  v14 = *(_QWORD *)(Count + 16);
  Src = a8;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 7128LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *(_QWORD *)(this[2].Count + 40);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v18 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v21 = *(_DWORD *)(v18 + 232);
      if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventBlockThread, v20, v21);
    }
    ExAcquirePushLockSharedEx(v18 + 208, 0LL);
  }
  v22 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v22 >= *(_DWORD *)(v18 + 256) )
    goto LABEL_15;
  v23 = *(_QWORD *)(v18 + 240);
  v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
  if ( (((unsigned int)v13 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
    || (v24 & 0x2000) != 0
    || (v24 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  v25 = v24 & 0x1F;
  if ( (_BYTE)v25 != 5 )
  {
    v26 = WdLogNewEntry5_WdError(((unsigned int)v13 >> 25) & 0x60, v25);
    *(_QWORD *)(v26 + 24) = 316LL;
    WdLogEvent5_WdError(v26);
LABEL_15:
    v27 = 0LL;
    goto LABEL_16;
  }
  v27 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * (unsigned int)v22);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v106, v27);
  ExReleasePushLockSharedEx(v18 + 208, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v30) = -1073741811;
  if ( v106 )
  {
    v32 = this[2].Count;
    v33 = *(_QWORD *)(*((_QWORD *)v106 + 1) + 16LL);
    v34 = *(_QWORD *)(v32 + 16);
    v35 = *(_QWORD *)(v34 + 16);
    if ( *(_QWORD *)(v33 + 16) != v35 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v34, v35);
      v31[3] = this[2].Count;
      v31[4] = v106;
      v31[5] = -1073741811LL;
      goto LABEL_23;
    }
    memset(&v116, 0, sizeof(v116));
    v116.hAllocation = *(HANDLE *)(*((_QWORD *)v106 + 6) + 16LL);
    v36 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 2704LL),
            &v116,
            v33);
    v30 = v36;
    if ( v36 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
      v31[3] = v30;
      v31[4] = this;
      v31[5] = *((unsigned int *)v106 + 4);
      v31[6] = v106;
      v31[7] = (*(_DWORD *)(*((_QWORD *)v106 + 6) + 4LL) >> 6) & 0xF;
      goto LABEL_23;
    }
    v40 = *(_QWORD *)(this[2].Count + 40);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v40 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v43 = *(_DWORD *)(v40 + 232);
        if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, v43);
      }
      ExAcquirePushLockSharedEx(v40 + 208, 0LL);
    }
    v44 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v44 < *(_DWORD *)(v40 + 256) )
    {
      v45 = *(_QWORD *)(v40 + 240);
      v46 = *(_DWORD *)(v45 + 16 * v44 + 8);
      if ( (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60)
        && (v46 & 0x2000) == 0
        && (v46 & 0x1F) != 0 )
      {
        v47 = v46 & 0x1F;
        if ( (_BYTE)v47 == 5 )
        {
          v49 = *(struct _EX_RUNDOWN_REF **)(v45 + 16LL * (unsigned int)v44);
LABEL_37:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v105, v49);
          ExReleasePushLockSharedEx(v40 + 208, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v30) = -1073741811;
          if ( v105 )
          {
            v53 = this[2].Count;
            v54 = *(_QWORD *)(*((_QWORD *)v105 + 1) + 16LL);
            v55 = *(_QWORD *)(v53 + 16);
            v56 = *(_QWORD *)(v55 + 16);
            if ( *(_QWORD *)(v54 + 16) == v56 )
            {
              memset(&v115, 0, sizeof(v115));
              v115.hAllocation = *(HANDLE *)(*((_QWORD *)v105 + 6) + 16LL);
              v57 = ADAPTER_RENDER::DdiDescribeAllocation(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v53 + 16) + 16LL) + 2704LL),
                      &v115,
                      v54);
              v30 = v57;
              if ( v57 >= 0 )
              {
                *(_QWORD *)&v107.left = 0LL;
                v109 = 0LL;
                if ( a6 )
                {
                  v109 = *a6;
                  bottom = v109.bottom;
                  right = v109.right;
                }
                else
                {
                  right = v116.Width;
                  bottom = v116.Height;
                }
                v64 = a8;
                Width = v115.Width;
                v66 = right - v109.left;
                Height = v115.Height;
                if ( v66 < (int)v115.Width )
                  Width = v66;
                v68 = bottom - v109.top;
                v107.right = Width;
                if ( (int)v68 < (int)v115.Height )
                  Height = v68;
                v109.right = Width + v109.left;
                v107.bottom = Height;
                v109.bottom = Height + v109.top;
                v69 = 0;
                if ( a7 )
                {
                  while ( v64->left >= 0 && v64->top >= 0 )
                  {
                    if ( v64->right > Width || v64->bottom > Height )
                    {
                      v75 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v109.top, v68);
                      v75[3] = v64->right;
                      v75[4] = v64->bottom;
                      v75[5] = Width;
                      v75[6] = Height;
                      goto LABEL_61;
                    }
                    ++v69;
                    ++v64;
                    if ( v69 >= a7 )
                      goto LABEL_57;
                  }
                  v75 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v109.top, v68);
                  v75[3] = v64->left;
                  top = v64->top;
                  v75[5] = 0LL;
                  v75[6] = 0LL;
                  v75[4] = top;
LABEL_61:
                  WdLogEvent5_WdError(v75);
                  LODWORD(v30) = -1073741811;
                  goto LABEL_88;
                }
LABEL_57:
                if ( BYTE1(this[57].Count) )
                {
                  v70 = *(_QWORD *)(this[2].Count + 16);
                  v71 = *(_QWORD *)(v70 + 16);
                  Current = DXGPROCESS::GetCurrent(v70, v68, v60, v61);
                  LODWORD(v104) = 0;
                  v73 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v71 + 4240),
                          Current,
                          (struct DXGCONTEXT *)this,
                          *((_DWORD *)v106 + 24),
                          *((_DWORD *)v105 + 24),
                          &v109,
                          &v107,
                          a7,
                          Src,
                          v104,
                          0LL);
                }
                else if ( !BYTE6(this[56].Ptr)
                       || ((v77 = (struct DXGDEVICE *)this[2].Count,
                            v78 = this[52].Count,
                            LOBYTE(v60) = HIBYTE(this[56].Ptr),
                            v79 = (struct ADAPTER_RENDER *)*((_QWORD *)v77 + 2),
                            (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v79 + 80) + 8LL)
                                                                                       + 256LL))(
                              *((_QWORD *)v79 + 81),
                              *((_QWORD *)v105 + 3),
                              v60,
                              v78))
                        || (v73 = MapGpuVaForAllocation(v79, v77, v78, v105), v73 >= 0))
                       && ((LOBYTE(v80) = HIBYTE(this[56].Ptr),
                            (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 640LL) + 8LL)
                                                                                       + 256LL))(
                              *((_QWORD *)v79 + 81),
                              *((_QWORD *)v106 + 3),
                              v80,
                              v78))
                        || (v73 = MapGpuVaForAllocation(v79, v77, v78, v106), v73 >= 0)) )
                {
                  v81 = this[48].Count;
                  v108 = 0LL;
                  if ( !v81 )
                    goto LABEL_74;
                  v82 = this[49].Count;
                  v83 = 0;
                  if ( !v82 )
                    goto LABEL_74;
                  while ( !*(_QWORD *)(v81 + 8LL * v83) )
                  {
                    if ( ++v83 >= v82 )
                      goto LABEL_74;
                  }
                  v108 = *(struct _VIDMM_DMA_BUFFER **)(v81 + 8LL * v83);
                  *(_QWORD *)(v81 + 8LL * v83) = 0LL;
                  if ( v108 )
                  {
                    v84 = v111;
                  }
                  else
                  {
LABEL_74:
                    v84 = v111;
                    v85 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)this, &v108, v111, 1);
                    v30 = v85;
                    if ( v85 < 0 )
                    {
                      v52 = (_QWORD *)WdLogNewEntry5_WdError(v87, v86);
                      v52[3] = v30;
                      goto LABEL_76;
                    }
                  }
                  memset(&v117, 0, sizeof(v117));
                  v88 = v107;
                  v117.Flags.Value |= 1u;
                  *(_QWORD *)&v107.left = 0LL;
                  v117.pDstSubRects = Src;
                  v89 = this[2].Count;
                  v117.DstRect = v88;
                  v117.SubRectCnt = a7;
                  v117.SrcRect = v109;
                  *(_QWORD *)&v107.right = *(_QWORD *)(v89 + 16);
                  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&v107);
                  v93 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v107.left;
                  if ( *(_QWORD *)&v107.left )
                  {
                    v95 = **(_DWORD **)&v107.left | 0x10000;
                    **(_DWORD **)&v107.left = v95;
                    v96 = *(_DWORD *)(*((_QWORD *)v105 + 6) + 4LL);
                    if ( (v96 & 2) != 0
                      || (v96 & 1) != 0
                      || (v97 = *(_DWORD *)(*((_QWORD *)v106 + 6) + 4LL), (v97 & 2) != 0)
                      || (v97 & 1) != 0 )
                    {
                      v95 |= 1u;
                      *(_DWORD *)v93 = v95;
                    }
                    v98 = v110;
                    *(_DWORD *)v93 = v95 | 0x100;
                    v99 = DXGCONTEXT::SubmitPresent(
                            this,
                            0LL,
                            v114,
                            v98,
                            v113,
                            0LL,
                            v13,
                            v12,
                            &v117,
                            0LL,
                            v108,
                            v93,
                            v115.Format,
                            v84);
                    v30 = v99;
                    if ( v99 < 0 )
                    {
                      v102 = WdLogNewEntry5_WdError(v101, v100);
                      *(_QWORD *)(v102 + 24) = v30;
                      WdLogEvent5_WdError(v102);
                    }
                  }
                  else
                  {
                    v94 = WdLogNewEntry5_WdLowResource(v91, v90, 0LL, v92);
                    *(_QWORD *)(v94 + 24) = 7324LL;
                    WdLogEvent5_WdLowResource(v94);
                    LODWORD(v30) = -1073741801;
                  }
                  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)&v107);
                  goto LABEL_88;
                }
                LODWORD(v30) = v73;
LABEL_88:
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v105, v74);
                goto LABEL_89;
              }
              v52 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
              v52[3] = v30;
              v52[4] = this;
              v52[5] = *((unsigned int *)v105 + 4);
              v52[6] = v105;
              v52[7] = (*(_DWORD *)(*((_QWORD *)v105 + 6) + 4LL) >> 6) & 0xF;
            }
            else
            {
              v52 = (_QWORD *)WdLogNewEntry5_WdError(v55, v56);
              v52[3] = this[2].Count;
              v52[4] = v105;
              v52[5] = -1073741811LL;
            }
          }
          else
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
            v52[3] = v12;
          }
LABEL_76:
          WdLogEvent5_WdError(v52);
          goto LABEL_88;
        }
        v48 = WdLogNewEntry5_WdError(((unsigned int)v12 >> 25) & 0x60, v47);
        *(_QWORD *)(v48 + 24) = 316LL;
        WdLogEvent5_WdError(v48);
      }
    }
    v49 = 0LL;
    goto LABEL_37;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
  v31[3] = v13;
LABEL_23:
  WdLogEvent5_WdError(v31);
LABEL_89:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v106, v39);
  return (unsigned int)v30;
}
