/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03373A8
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373510 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0336740 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C033A268 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::BltFromVm(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        UINT a8,
        const struct tagRECT *a9,
        struct COREDEVICEACCESS *a10)
{
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r10
  int v25; // edx
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // r8
  const wchar_t *v31; // r9
  struct DXGDEVICE *v32; // r14
  unsigned int v33; // edi
  struct ADAPTER_RENDER *v34; // rbx
  __int64 v35; // r8
  int v36; // eax
  int right; // ecx
  LONG v38; // eax
  LONG v39; // ecx
  LONG left; // r10d
  int v41; // r9d
  LONG top; // r8d
  LONG bottom; // edx
  unsigned int v44; // ecx
  LONG *v45; // rax
  int v46; // ebx
  LONG v47; // r11d
  LONG v48; // eax
  __int64 v49; // rcx
  unsigned int v50; // edx
  unsigned int v51; // eax
  struct COREDEVICEACCESS *v52; // rbx
  int v53; // eax
  RECT v54; // xmm0
  RECT v55; // xmm1
  __int64 v56; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v57; // r8
  int v58; // edx
  int v59; // eax
  struct DXGHWQUEUE *v60; // rdx
  int v61; // eax
  __int64 v62; // rbx
  const wchar_t *v63; // r9
  struct DXGALLOCATION *v65; // [rsp+28h] [rbp-D8h]
  __int64 v66; // [rsp+30h] [rbp-D0h]
  struct DXGALLOCATION *v67; // [rsp+38h] [rbp-C8h]
  __int64 v68; // [rsp+40h] [rbp-C0h]
  struct DXGALLOCATION *v69; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v70; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v71; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v72; // [rsp+88h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v73[2]; // [rsp+90h] [rbp-70h] BYREF
  struct COREDEVICEACCESS *v74; // [rsp+A0h] [rbp-60h]
  struct DXGHWQUEUE *v75; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGCONTEXT **v76; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_DESCRIBEALLOCATION v77; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v78; // [rsp+E8h] [rbp-18h] BYREF
  struct _DXGKARG_PRESENT v79; // [rsp+120h] [rbp+20h] BYREF

  v76 = a5;
  v73[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)a9;
  v74 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a2;
  v13 = a3;
  v72 = a2;
  v14 = *(_QWORD *)(v11 + 40);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 248));
  v15 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( v15 >= *(_DWORD *)(v14 + 296) )
    goto LABEL_7;
  v16 = *(_QWORD *)(v14 + 280);
  if ( (((unsigned int)v12 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
  if ( !v17 )
    goto LABEL_7;
  if ( v17 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v18 = 0LL;
    goto LABEL_8;
  }
  v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v70, v18);
  _InterlockedDecrement((volatile signed __int32 *)(v14 + 264));
  ExReleasePushLockSharedEx(v14 + 248, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v19) = -1073741811;
  if ( v70 )
  {
    v20 = *((_QWORD *)this + 2);
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 1) + 16LL) + 16LL) != v21 )
    {
      WdLogSingleEntry3(2LL, v20, v70, -1073741811LL);
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
      goto LABEL_86;
    }
    memset(&v78, 0, sizeof(v78));
    v78.hAllocation = *(HANDLE *)(*((_QWORD *)v70 + 6) + 16LL);
    v22 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 2928LL),
            &v78,
            v21);
    v19 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v22,
        this,
        *((unsigned int *)v70 + 4),
        v70,
        (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) >> 6) & 0xF);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
        v19,
        (__int64)this,
        *((unsigned int *)v70 + 4),
        (__int64)v70,
        (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) >> 6) & 0xF);
      goto LABEL_86;
    }
    v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 248));
    v23 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( v23 < *(_DWORD *)(v19 + 296) )
    {
      v24 = *(_QWORD *)(v19 + 280);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x60)
        && (*(_DWORD *)(v24 + 16LL * v23 + 8) & 0x2000) == 0 )
      {
        v25 = *(_DWORD *)(v24 + 16LL * v23 + 8) & 0x1F;
        if ( v25 )
        {
          if ( v25 == 5 )
          {
            v26 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * v23);
LABEL_23:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v69, v26);
            _InterlockedDecrement((volatile signed __int32 *)(v19 + 264));
            ExReleasePushLockSharedEx(v19 + 248, 0LL);
            KeLeaveCriticalRegion();
            LODWORD(v19) = -1073741811;
            if ( !v69 )
            {
              WdLogSingleEntry1(2LL, v13);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid destination handle 0x%I64x",
                v13,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_85:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
              goto LABEL_86;
            }
            v27 = *((_QWORD *)this + 2);
            v28 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 1) + 16LL) + 16LL) != v28 )
            {
              WdLogSingleEntry3(2LL, v27, v69, -1073741811LL);
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
              goto LABEL_85;
            }
            memset(&v77, 0, sizeof(v77));
            v77.hAllocation = *(HANDLE *)(*((_QWORD *)v69 + 6) + 16LL);
            v29 = ADAPTER_RENDER::DdiDescribeAllocation(
                    *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 2928LL),
                    &v77,
                    v28);
            v19 = v29;
            if ( v29 < 0 )
            {
              WdLogSingleEntry5(
                2LL,
                v29,
                this,
                *((unsigned int *)v69 + 4),
                v69,
                (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
              v31 = L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x";
              v68 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
              v67 = v69;
              v66 = *((unsigned int *)v69 + 4);
              v65 = this;
LABEL_30:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v19, (__int64)v65, v66, (__int64)v67, v68);
              goto LABEL_85;
            }
            if ( *((_BYTE *)this + 438) )
            {
              if ( (v32 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                    v33 = *((_DWORD *)this + 100),
                    LOBYTE(v30) = *((_BYTE *)this + 439),
                    v34 = (struct ADAPTER_RENDER *)*((_QWORD *)v32 + 2),
                    !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v34 + 95) + 8LL)
                                                                                + 240LL))(
                       *((_QWORD *)v34 + 96),
                       *((_QWORD *)v69 + 3),
                       v30,
                       v33))
                && (v36 = MapGpuVaForAllocation(v34, v32, v33, v69), v36 < 0)
                || (LOBYTE(v35) = *((_BYTE *)this + 439),
                    !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                            + 8LL)
                                                                                + 240LL))(
                       *((_QWORD *)v34 + 96),
                       *((_QWORD *)v70 + 3),
                       v35,
                       v33))
                && (v36 = MapGpuVaForAllocation(v34, v32, v33, v70), v36 < 0) )
              {
                LODWORD(v19) = v36;
                goto LABEL_85;
              }
            }
            right = a6->right;
            if ( a6->left >= right
              || a6->left < 0
              || right > (int)v78.Width
              || (v38 = a6->top, v39 = a6->bottom, v38 >= v39)
              || v38 < 0
              || v39 > (int)v78.Height )
            {
              v62 = 7708LL;
              WdLogSingleEntry1(2LL, 7708LL);
              v63 = L"Invalid source rect";
            }
            else
            {
              left = a7->left;
              v41 = a7->right;
              if ( a7->left < v41 && left >= 0 && v41 <= (int)v77.Width )
              {
                top = a7->top;
                bottom = a7->bottom;
                if ( top < bottom && top >= 0 && bottom <= (int)v77.Height )
                {
                  v44 = 0;
                  if ( !a8 )
                  {
LABEL_58:
                    v49 = *((_QWORD *)this + 46);
                    v71 = 0LL;
                    if ( !v49 )
                      goto LABEL_65;
                    v50 = *((_DWORD *)this + 94);
                    v51 = 0;
                    if ( !v50 )
                      goto LABEL_65;
                    while ( !*(_QWORD *)(v49 + 8LL * v51) )
                    {
                      if ( ++v51 >= v50 )
                        goto LABEL_65;
                    }
                    v71 = *(struct _VIDMM_DMA_BUFFER **)(v49 + 8LL * v51);
                    *(_QWORD *)(v49 + 8LL * v51) = 0LL;
                    if ( v71 )
                    {
                      v52 = v74;
                    }
                    else
                    {
LABEL_65:
                      v52 = v74;
                      v53 = DXGCONTEXT::AcquireDmaBuffer(this, &v71, v74, 1);
                      v19 = v53;
                      if ( v53 < 0 )
                      {
                        WdLogSingleEntry1(2LL, v53);
                        v31 = L"Failed to acquire DMA buffer 0x%I64x";
                        v68 = 0LL;
                        v67 = 0LL;
                        v66 = 0LL;
                        v65 = 0LL;
                        goto LABEL_30;
                      }
                    }
                    memset(&v79, 0, sizeof(v79));
                    v54 = *a7;
                    v55 = *a6;
                    v79.Flags.Value |= 1u;
                    v79.pDstSubRects = (const RECT *)v73[0];
                    v56 = *((_QWORD *)this + 2);
                    v79.DstRect = v54;
                    v79.SubRectCnt = a8;
                    v79.SrcRect = v55;
                    v73[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v56 + 16);
                    v73[0] = 0LL;
                    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v73);
                    v57 = v73[0];
                    if ( v73[0] )
                    {
                      v58 = *(_DWORD *)v73[0] | 0x10000;
                      *(_DWORD *)v73[0] = v58;
                      if ( (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) & 3) != 0
                        || (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) & 3) != 0 )
                      {
                        v58 |= 1u;
                        *(_DWORD *)v57 = v58;
                      }
                      *(_DWORD *)v57 = v58 | 0x120;
                      v59 = *((_DWORD *)this + 101);
                      v75 = 0LL;
                      if ( (v59 & 0x10) == 0 )
                        goto LABEL_77;
                      v60 = 0LL;
                      if ( *((DXGCONTEXT **)this + 51) != (DXGCONTEXT *)((char *)this + 408) )
                        v60 = (struct DXGHWQUEUE *)*((_QWORD *)this + 51);
                      v75 = v60;
                      if ( v60 )
                      {
LABEL_77:
                        v61 = DXGCONTEXT::SubmitPresent(
                                this,
                                0LL,
                                &v75,
                                0,
                                v76,
                                0LL,
                                v72,
                                v13,
                                &v79,
                                0LL,
                                v71,
                                v57,
                                v77.Format,
                                v52);
                        v19 = v61;
                        if ( v61 < 0 )
                        {
                          WdLogSingleEntry1(2LL, v61);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"SubmitPresent failed 0x%I64x",
                            v19,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL, this);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Attempting to Blt on a HardwareContext:0x%I64x with no HwQueues",
                          (__int64)this,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        LODWORD(v19) = -1073741823;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(6LL, 7775LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262145,
                        -1,
                        (__int64)L"Failed to allocate VidSchSubmitData",
                        7775LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      LODWORD(v19) = -1073741801;
                    }
                    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v73);
                    goto LABEL_85;
                  }
                  while ( 1 )
                  {
                    v45 = (LONG *)((char *)v73[0] + 16 * v44);
                    v46 = v45[2];
                    if ( *v45 >= v46 )
                      break;
                    if ( *v45 < left )
                      break;
                    if ( v46 > v41 )
                      break;
                    v47 = v45[1];
                    v48 = v45[3];
                    if ( v47 >= v48 || v47 < top || v48 > bottom )
                      break;
                    if ( ++v44 >= a8 )
                      goto LABEL_58;
                  }
                  WdLogSingleEntry1(2LL, 7731LL);
                  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid subrect", 7731LL, 0LL, 0LL, 0LL, 0LL);
LABEL_84:
                  LODWORD(v19) = -1073741811;
                  goto LABEL_85;
                }
              }
              v62 = 7718LL;
              WdLogSingleEntry1(2LL, 7718LL);
              v63 = L"Invalid destination rect";
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v63, v62, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_84;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v26 = 0LL;
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL, v12);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v12, 0LL, 0LL, 0LL, 0LL);
LABEL_86:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v70);
  return (unsigned int)v19;
}
