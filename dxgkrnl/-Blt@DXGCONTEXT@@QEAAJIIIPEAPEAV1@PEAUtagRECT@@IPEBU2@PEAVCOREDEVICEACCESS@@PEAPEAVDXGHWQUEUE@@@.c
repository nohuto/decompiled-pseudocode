/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0336940
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02F235C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032FBA4 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0336740 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C033A268 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0380730 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        UINT a7,
        const struct tagRECT *a8,
        struct COREDEVICEACCESS *a9,
        struct DXGHWQUEUE **a10)
{
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r9
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // r9
  int v26; // edx
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  const wchar_t *v31; // r9
  UINT bottom; // edx
  UINT right; // ecx
  const struct tagRECT *v34; // rsi
  signed int Width; // r9d
  int v36; // ecx
  __int64 Height; // r8
  int v38; // edx
  unsigned int v39; // eax
  int *p_top; // rbx
  __int64 v41; // rcx
  __int64 v42; // rsi
  unsigned int v43; // edi
  unsigned int v44; // ebx
  struct DXGPROCESS *Current; // rax
  int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // rdi
  struct DXGDEVICE *v49; // rsi
  unsigned int v50; // edi
  struct ADAPTER_RENDER *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // rcx
  unsigned int v54; // edx
  unsigned int v55; // eax
  struct COREDEVICEACCESS *v56; // rbx
  int v57; // eax
  __int64 v58; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v59; // r10
  LONG v60; // edx
  unsigned int v61; // r9d
  struct DXGHWQUEUE **v62; // r8
  int v63; // eax
  struct tagRECT *v65; // [rsp+28h] [rbp-D8h]
  __int64 v66; // [rsp+30h] [rbp-D0h]
  struct DXGALLOCATION *v67; // [rsp+38h] [rbp-C8h]
  __int64 v68; // [rsp+40h] [rbp-C0h]
  struct DXGALLOCATION *v69; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v70; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v71; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v72; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v73; // [rsp+98h] [rbp-68h]
  struct tagRECT *v74[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct COREDEVICEACCESS *v75; // [rsp+B0h] [rbp-50h]
  struct tagRECT v76; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGCONTEXT **v77; // [rsp+C8h] [rbp-38h]
  struct DXGHWQUEUE **v78; // [rsp+D0h] [rbp-30h]
  struct _DXGKARG_DESCRIBEALLOCATION v79; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v80; // [rsp+108h] [rbp+8h] BYREF
  struct _DXGKARG_PRESENT v81; // [rsp+140h] [rbp+40h] BYREF

  v77 = a5;
  v75 = a9;
  v78 = a10;
  v11 = *((_QWORD *)this + 2);
  v73 = a4;
  v12 = a3;
  v13 = a2;
  v14 = *(_QWORD *)(v11 + 16);
  v74[0] = (struct tagRECT *)a8;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    WdLogSingleEntry1(1LL, 7354LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7354LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
  v16 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( v16 >= *(_DWORD *)(v15 + 296) )
    goto LABEL_9;
  v17 = *(_QWORD *)(v15 + 280);
  if ( (((unsigned int)v13 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F;
  if ( !v18 )
    goto LABEL_9;
  if ( v18 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v19 = 0LL;
    goto LABEL_10;
  }
  v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * v16);
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v70, v19);
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v20) = -1073741811;
  if ( v70 )
  {
    v21 = *((_QWORD *)this + 2);
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 1) + 16LL) + 16LL) != v22 )
    {
      WdLogSingleEntry3(2LL, v21, v70, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)this + 2),
        (__int64)v70,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_76;
    }
    memset(&v80, 0, sizeof(v80));
    v80.hAllocation = *(HANDLE *)(*((_QWORD *)v70 + 6) + 16LL);
    v23 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 2928LL),
            &v80,
            v22);
    v20 = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v23,
        this,
        *((unsigned int *)v70 + 4),
        v70,
        (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) >> 6) & 0xF);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
        v20,
        (__int64)this,
        *((unsigned int *)v70 + 4),
        (__int64)v70,
        (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) >> 6) & 0xF);
      goto LABEL_76;
    }
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
    v24 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
    if ( v24 < *(_DWORD *)(v20 + 296)
      && (v25 = *(_QWORD *)(v20 + 280), (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60))
      && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) == 0
      && (v26 = *(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F) != 0 )
    {
      if ( v26 == 5 )
      {
        v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * v24);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v27 = 0LL;
      }
    }
    else
    {
      v27 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v69, v27);
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 264));
    ExReleasePushLockSharedEx(v20 + 248, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v20) = -1073741811;
    if ( !v69 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid destination handle 0x%I64x",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_75:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
      goto LABEL_76;
    }
    v28 = *((_QWORD *)this + 2);
    v29 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 1) + 16LL) + 16LL) != v29 )
    {
      WdLogSingleEntry3(2LL, v28, v69, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)this + 2),
        (__int64)v69,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_75;
    }
    memset(&v79, 0, sizeof(v79));
    v79.hAllocation = *(HANDLE *)(*((_QWORD *)v69 + 6) + 16LL);
    v30 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 2928LL),
            &v79,
            v29);
    v20 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v30,
        this,
        *((unsigned int *)v69 + 4),
        v69,
        (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
      v31 = L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x";
      v68 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
      v67 = v69;
      v66 = *((unsigned int *)v69 + 4);
      v65 = (struct tagRECT *)this;
LABEL_64:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v20, (__int64)v65, v66, (__int64)v67, v68);
      goto LABEL_75;
    }
    *(_QWORD *)&v76.left = 0LL;
    v72 = 0LL;
    if ( a6 )
    {
      v72 = *a6;
      bottom = v72.bottom;
      right = v72.right;
    }
    else
    {
      right = v80.Width;
      bottom = v80.Height;
    }
    v34 = a8;
    Width = v79.Width;
    v36 = right - v72.left;
    Height = v79.Height;
    if ( v36 < (int)v79.Width )
      Width = v36;
    v38 = bottom - v72.top;
    v76.right = Width;
    if ( v38 < (int)v79.Height )
      Height = (unsigned int)v38;
    v72.right = Width + v72.left;
    v76.bottom = Height;
    v72.bottom = Height + v72.top;
    v39 = 0;
    if ( a7 )
    {
      while ( 1 )
      {
        p_top = &v34->top;
        if ( v34->left < 0 || *p_top < 0 )
          break;
        if ( v34->right > Width || v34->bottom > (int)Height )
        {
          v47 = (int)Height;
          v48 = Width;
          WdLogSingleEntry4(2LL, v34->right, v34->bottom, Width, (int)Height);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The (right bottom) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
            v34->right,
            v34->bottom,
            v48,
            v47,
            0LL);
          goto LABEL_49;
        }
        ++v39;
        ++v34;
        if ( v39 >= a7 )
          goto LABEL_45;
      }
      WdLogSingleEntry4(2LL, v34->left, *p_top, 0LL, 0LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The (left, top) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        v34->left,
        *p_top,
        0LL,
        0LL,
        0LL);
LABEL_49:
      LODWORD(v20) = -1073741811;
      goto LABEL_75;
    }
LABEL_45:
    if ( *((_BYTE *)this + 442) )
    {
      v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v42 = *(_QWORD *)(v41 + 16);
      v43 = *((_DWORD *)v69 + 5);
      v44 = *((_DWORD *)v70 + 5);
      Current = DXGPROCESS::GetCurrent(v41);
      v46 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v42 + 4472),
              Current,
              this,
              v44,
              v43,
              &v72,
              &v76,
              a7,
              v74[0],
              0,
              0LL);
    }
    else if ( !*((_BYTE *)this + 438)
           || ((v49 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                v50 = *((_DWORD *)this + 100),
                LOBYTE(Height) = *((_BYTE *)this + 439),
                v51 = (struct ADAPTER_RENDER *)*((_QWORD *)v49 + 2),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v51 + 95) + 8LL)
                                                                           + 240LL))(
                  *((_QWORD *)v51 + 96),
                  *((_QWORD *)v69 + 3),
                  Height,
                  v50))
            || (v46 = MapGpuVaForAllocation(v51, v49, v50, v69), v46 >= 0))
           && ((LOBYTE(v52) = *((_BYTE *)this + 439),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                       + 8LL)
                                                                           + 240LL))(
                  *((_QWORD *)v51 + 96),
                  *((_QWORD *)v70 + 3),
                  v52,
                  v50))
            || (v46 = MapGpuVaForAllocation(v51, v49, v50, v70), v46 >= 0)) )
    {
      v53 = *((_QWORD *)this + 46);
      v71 = 0LL;
      if ( !v53 )
        goto LABEL_62;
      v54 = *((_DWORD *)this + 94);
      v55 = 0;
      if ( !v54 )
        goto LABEL_62;
      while ( !*(_QWORD *)(v53 + 8LL * v55) )
      {
        if ( ++v55 >= v54 )
          goto LABEL_62;
      }
      v71 = *(struct _VIDMM_DMA_BUFFER **)(v53 + 8LL * v55);
      *(_QWORD *)(v53 + 8LL * v55) = 0LL;
      if ( v71 )
      {
        v56 = v75;
      }
      else
      {
LABEL_62:
        v56 = v75;
        v57 = DXGCONTEXT::AcquireDmaBuffer(this, &v71, v75, 1);
        v20 = v57;
        if ( v57 < 0 )
        {
          WdLogSingleEntry1(2LL, v57);
          v68 = 0LL;
          v31 = L"Failed to acquire DMA buffer 0x%I64x";
          v67 = 0LL;
          v66 = 0LL;
          v65 = 0LL;
          goto LABEL_64;
        }
      }
      memset(&v81, 0, sizeof(v81));
      v58 = *((_QWORD *)this + 2);
      v81.Flags.Value |= 1u;
      v81.pDstSubRects = v74[0];
      v81.DstRect = v76;
      v81.SubRectCnt = a7;
      v81.SrcRect = v72;
      v74[1] = *(struct tagRECT **)(v58 + 16);
      v74[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v74);
      v59 = (struct VIDSCH_SUBMIT_DATA_BASE *)v74[0];
      if ( v74[0] )
      {
        v60 = v74[0]->left | 0x10000;
        v74[0]->left = v60;
        if ( (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) & 3) != 0 )
        {
          v60 |= 1u;
          *(_DWORD *)v59 = v60;
        }
        v61 = v73;
        v62 = v78;
        *(_DWORD *)v59 = v60 | 0x100;
        v63 = DXGCONTEXT::SubmitPresent(this, 0LL, v62, v61, v77, 0LL, v13, v12, &v81, 0LL, v71, v59, v79.Format, v56);
        v20 = v63;
        if ( v63 < 0 )
        {
          WdLogSingleEntry1(2LL, v63);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"SubmitPresent failed 0x%I64x",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(6LL, 7550LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VidSchSubmitData",
          7550LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v20) = -1073741801;
      }
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v74);
      goto LABEL_75;
    }
    LODWORD(v20) = v46;
    goto LABEL_75;
  }
  WdLogSingleEntry1(2LL, v13);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v13, 0LL, 0LL, 0LL, 0LL);
LABEL_76:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v70);
  return (unsigned int)v20;
}
