/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0163594
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C02DA240 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0001148 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0001284 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C00012B0 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000E280 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C002A0B6 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C0055340 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C0163D40 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0163DD8 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C0164C00 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01CADE8 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C033995C (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v7; // rdi
  struct DXGGLOBAL *Global; // rax
  char *v9; // rax
  char *v10; // rbx
  D3DKMT_HANDLE v11; // edx
  __int64 v12; // rcx
  DXGADAPTER **v13; // rax
  __int64 *v14; // r13
  __int64 v15; // r9
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  struct DXGALLOCATION *v19; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v20; // rcx
  unsigned int v21; // esi
  unsigned int v22; // eax
  struct DXGALLOCATION *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v27; // rdx
  int v28; // ecx
  __int64 v29; // rax
  int v30; // esi
  COREDEVICEACCESS *v31; // r12
  int v32; // eax
  struct DXGPRESENTMUTEX *v33; // r8
  unsigned __int8 v34; // si
  __int64 v35; // r12
  unsigned int v36; // r12d
  int updated; // eax
  unsigned int *v38; // rdx
  ADAPTER_DISPLAY *v39; // rsi
  int CurrentOrientation; // eax
  UINT Value; // eax
  int v42; // ecx
  UINT i; // r15d
  __int64 v44; // r8
  struct _VIDMM_DMA_BUFFER *v45; // r12
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  UINT v48; // esi
  unsigned int v49; // r10d
  __int64 v50; // rdx
  unsigned int v51; // r9d
  __int64 v52; // rcx
  struct COREDEVICEACCESS *v53; // r14
  struct DXGGLOBAL *v54; // rax
  DXGPRESENT *v56; // rax
  DXGPRESENT *v57; // rax
  __int64 v58; // r9
  int v59; // ecx
  __int64 v60; // r8
  int v61; // ecx
  char *v62; // rdx
  const RECT *DdiSubRectList; // r15
  __int64 v64; // rax
  ADAPTER_DISPLAY *v65; // r12
  __int64 v66; // rsi
  UINT v67; // r12d
  int v68; // edi
  int v69; // ebx
  __int64 v70; // rsi
  LONG v71; // r8d
  LONG v72; // edx
  struct DXGCONTEXT **v73; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v74; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v76; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-70h] BYREF
  ADAPTER_DISPLAY *v78; // [rsp+B8h] [rbp-68h]
  __int64 v79; // [rsp+C0h] [rbp-60h]
  __int64 v80; // [rsp+C8h] [rbp-58h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v81[2]; // [rsp+D0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v82; // [rsp+E0h] [rbp-40h] BYREF
  struct DXGHWQUEUE *v83; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-30h]
  COREDEVICEACCESS *v85; // [rsp+F8h] [rbp-28h]
  DXGADAPTERSTOPRESETLOCKSHARED *v86; // [rsp+100h] [rbp-20h]
  char *v87; // [rsp+108h] [rbp-18h]
  DXGCONTEXT *v88; // [rsp+110h] [rbp-10h]
  _BYTE v89[24]; // [rsp+118h] [rbp-8h] BYREF
  _BYTE v90[16]; // [rsp+130h] [rbp+10h] BYREF
  struct _DXGKARG_PRESENT v91; // [rsp+140h] [rbp+20h] BYREF
  _BYTE v93[64]; // [rsp+1F0h] [rbp+D0h] BYREF
  _BYTE v94[64]; // [rsp+230h] [rbp+110h] BYREF
  _BYTE v95[64]; // [rsp+270h] [rbp+150h] BYREF
  _BYTE v96[64]; // [rsp+2B0h] [rbp+190h] BYREF

  v86 = a5;
  v7 = this;
  v82.QuadPart = (LONGLONG)a6;
  v85 = a4;
  v88 = this;
  Global = DXGGLOBAL::GetGlobal();
  v9 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
  v87 = v9;
  v10 = v9;
  if ( !v9 )
  {
    v30 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v30;
  }
  memset(v9, 0, 0x5F8uLL);
  v83 = 0LL;
  memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
  *((_QWORD *)v10 + 188) = &v83;
  if ( a2->hHwQueues )
    v11 = *a2->hHwQueues;
  else
    v11 = 0;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v90,
    v11,
    *(struct DXGPROCESS **)(*((_QWORD *)v7 + 2) + 40LL),
    &v83,
    1);
  v12 = *((_QWORD *)v7 + 2);
  v84 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
  v13 = *(DXGADAPTER ***)(*(_QWORD *)(v12 + 1880) + 2920LL);
  v78 = (ADAPTER_DISPLAY *)v13;
  if ( !v13 || !DXGADAPTER::IsCoreResourceSharedOwner(v13[2]) )
  {
    WdLogSingleEntry1(1LL, 6944LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayCore != NULL) && pDisplayCore->IsCoreResourceSharedOwner()",
      6944LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 6945LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      6945LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = (__int64 *)(v10 + 72);
  v15 = *((_QWORD *)v10 + 9);
  if ( !v15
    || !*((_DWORD *)v10 + 16)
    || (v16 = *((_DWORD *)v10 + 22), (((unsigned __int8)v16 ^ (unsigned __int8)(v16 >> 1)) & 1) == 0)
    || (v16 & 0x63C) != 0 )
  {
    v30 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v7, v15, *((unsigned int *)v10 + 16), *((unsigned int *)v10 + 22));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x 0x%I64x failed with invalid parameters 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)v7,
      *v14,
      *((unsigned int *)v10 + 16),
      *((unsigned int *)v10 + 22));
    goto LABEL_80;
  }
  memset(&v91, 0, sizeof(v91));
  v17 = *((_DWORD *)v10 + 6);
  v79 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
  v81[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(v79 + 248);
  LODWORD(v77) = v17;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v79 + 248));
  v18 = ((unsigned int)v77 >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v79 + 296) )
  {
    v58 = *(_QWORD *)(v79 + 280);
    if ( (((unsigned int)v77 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16LL * v18 + 8) & 0x60)
      && (*(_DWORD *)(v58 + 16LL * v18 + 8) & 0x2000) == 0 )
    {
      v59 = *(_DWORD *)(v58 + 16LL * v18 + 8) & 0x1F;
      if ( v59 )
      {
        if ( v59 == 5 )
        {
          v19 = *(struct DXGALLOCATION **)(v58 + 16LL * v18);
          goto LABEL_16;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v19 = 0LL;
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80, v19);
  v20 = v81[0];
  _InterlockedDecrement((volatile signed __int32 *)v81[0] + 4);
  ExReleasePushLockSharedEx(v20, 0LL);
  KeLeaveCriticalRegion();
  if ( !v80 )
  {
    v30 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v7, *v14, *((unsigned int *)v10 + 16), *((unsigned int *)v10 + 6));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x fails Present invalid parameters 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)v7,
      *v14,
      *((unsigned int *)v10 + 16),
      *((unsigned int *)v10 + 6));
    goto LABEL_79;
  }
  if ( (*((_DWORD *)v10 + 22) & 1) != 0 )
  {
    v21 = *((_DWORD *)v10 + 5);
    v79 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v79 + 248));
    v22 = (v21 >> 6) & 0xFFFFFF;
    if ( v22 < *(_DWORD *)(v79 + 296) )
    {
      v60 = *(_QWORD *)(v79 + 280);
      if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v60 + 16LL * v22 + 8) & 0x60)
        && (*(_DWORD *)(v60 + 16LL * v22 + 8) & 0x2000) == 0 )
      {
        v61 = *(_DWORD *)(v60 + 16LL * v22 + 8) & 0x1F;
        if ( v61 )
        {
          if ( v61 == 5 )
          {
            v23 = *(struct DXGALLOCATION **)(v60 + 16LL * v22);
LABEL_22:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, v23);
            v24 = v79;
            _InterlockedDecrement((volatile signed __int32 *)(v79 + 264));
            ExReleasePushLockSharedEx(v24 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( !v77 )
            {
              v30 = -1073741811;
              WdLogSingleEntry3(2LL, -1073741811LL, v7, *((unsigned int *)v10 + 5));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x 0x%I64x fails Present invalid source allocation 0x%I64x",
                -1073741811LL,
                (__int64)v7,
                *((unsigned int *)v10 + 5),
                0LL,
                0LL);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77);
              goto LABEL_79;
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77);
            goto LABEL_24;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v23 = 0LL;
    goto LABEL_22;
  }
LABEL_24:
  if ( *((_QWORD *)v7 + 19) )
    goto LABEL_25;
  v56 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL);
  if ( !v56 )
  {
    *((_QWORD *)v7 + 19) = 0LL;
LABEL_103:
    v30 = -1073741801;
    WdLogSingleEntry4(
      6LL,
      -1073741801LL,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
      *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
      v7);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
      -1073741801LL,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
      *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
      (__int64)v7,
      0LL);
    goto LABEL_79;
  }
  v57 = DXGPRESENT::DXGPRESENT(v56, 1u);
  *((_QWORD *)v7 + 19) = v57;
  if ( !v57 )
    goto LABEL_103;
LABEL_25:
  v25 = *((_QWORD *)v7 + 2);
  v81[0] = 0LL;
  v81[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v25 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v81);
  v27 = v81[0];
  if ( !v81[0] )
  {
    WdLogSingleEntry1(6LL, 7009LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      7009LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v30 = -1073741801;
    goto LABEL_78;
  }
  v28 = *(_DWORD *)v81[0] | 0x10000;
  *(_DWORD *)v81[0] = v28;
  if ( (*((_DWORD *)v10 + 22) & 0x4000) == 0 )
  {
    v28 |= 1u;
    *(_DWORD *)v27 = v28;
  }
  *(_DWORD *)v27 = v28 | 0x100;
  LOBYTE(v26) = 1;
  v29 = *((_QWORD *)v7 + 2);
  v76 = 0LL;
  v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 760LL) + 8LL)
                                                                                        + 488LL))(
          *((_QWORD *)v7 + 29),
          0LL,
          v26,
          &v76);
  if ( v30 < 0 )
    goto LABEL_78;
  if ( !v76 )
  {
    WdLogSingleEntry1(1LL, 7027LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmDmaBuffer", 7027LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX(
    (DXGPRESENTMUTEX *)v89,
    *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL));
  if ( (*((_DWORD *)v10 + 22) & 0x4000) == 0 )
  {
    v31 = v85;
    COREDEVICEACCESS::Release(v85);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v86);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v89);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v86);
    v32 = COREDEVICEACCESS::AcquireShared(v31, 0LL);
    v30 = v32;
    if ( v32 < 0 )
    {
      WdLogSingleEntry2(4LL, v32, v7);
      COREDEVICEACCESS::AcquireSharedUncheck(v31, v62);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                         + 760LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v76,
        0LL);
      goto LABEL_77;
    }
    v34 = 0;
    if ( v84 )
    {
      v35 = *((_QWORD *)v7 + 19);
      if ( *(_DWORD *)(v35 + 8) != (*(unsigned int (**)(void))(v84 + 8))() )
      {
        *(_DWORD *)(v35 + 8) = (*(__int64 (**)(void))(v84 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 2LL, 4294967293LL);
        v34 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v33, v34);
  }
  if ( (*((_DWORD *)v10 + 22) & 1) == 0
    || *((_DWORD *)v10 + 5) == *((_DWORD *)v10 + 6)
    || (*(_DWORD *)(*(_QWORD *)(v80 + 48) + 4LL) & 2) == 0 )
  {
    v36 = a3;
    v38 = (unsigned int *)(v10 + 64);
    goto LABEL_42;
  }
  v36 = a3;
  updated = DxgkCddUpdatePresentRects(v78, a3, (const struct tagRECT **)v10 + 9, (unsigned int *)v10 + 16);
  v30 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry3(4LL, updated, *((_QWORD *)v7 + 2), a3);
LABEL_112:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                       + 760LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v76,
      0LL);
    v76 = 0LL;
    goto LABEL_77;
  }
  v38 = (unsigned int *)(v10 + 64);
  if ( *((_DWORD *)v10 + 16) )
  {
LABEL_42:
    v30 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), *v38);
    if ( v30 >= 0 )
    {
      v39 = v78;
      v91.DstRect = (RECT)*((_OWORD *)v10 + 2);
      v91.SubRectCnt = *((_DWORD *)v10 + 16);
      if ( (*((_DWORD *)v10 + 22) & 0x4000) != 0 )
      {
        Value = v91.Flags.Value;
      }
      else
      {
        CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(v78, v36, 1LL);
        Value = (CurrentOrientation != 1 ? 0x80 : 0) | v91.Flags.Value & 0xFFFFFF7F;
        v91.Flags.Value = Value;
      }
      v42 = *((_DWORD *)v10 + 22);
      if ( (v42 & 1) == 0 )
      {
        if ( (v42 & 2) == 0 )
        {
          WdLogSingleEntry1(1LL, 7230LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPresent->Flags.ColorFill", 7230LL, 0LL, 0LL, 0LL, 0LL);
          Value = v91.Flags.Value;
        }
        v91.Flags.Value = Value | 2;
        v91.Color = *((_DWORD *)v10 + 7);
        v91.pDstSubRects = (const RECT *)*v14;
        goto LABEL_63;
      }
      v91.Flags.Value = Value | 1;
      v91.SrcRect = (RECT)*((_OWORD *)v10 + 3);
      if ( *((_DWORD *)v10 + 5) != *((_DWORD *)v10 + 6) )
      {
        v91.pDstSubRects = (const RECT *)*v14;
LABEL_48:
        for ( i = 0; i < v91.SubRectCnt; ++i )
        {
          if ( *(_DWORD *)(*v14 + 16LL * i) >= *(_DWORD *)(*v14 + 16LL * i + 8) )
          {
            WdLogSingleEntry1(1LL, 7214LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pPresent->pSrcSubRects[i].left < pPresent->pSrcSubRects[i].right",
              7214LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(*v14 + 16LL * i + 4) >= *(_DWORD *)(*v14 + 16LL * i + 12) )
          {
            WdLogSingleEntry1(1LL, 7215LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pPresent->pSrcSubRects[i].top < pPresent->pSrcSubRects[i].bottom",
              7215LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*((_DWORD *)v10 + 22) & 0x4000) == 0 )
          {
            if ( *(_DWORD *)(*v14 + 16LL * i) < v91.SrcRect.left )
            {
              WdLogSingleEntry1(1LL, 7220LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPresent->pSrcSubRects[i].left >= PresentDdiArg.SrcRect.left",
                7220LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *(_DWORD *)(*v14 + 16LL * i + 8) > v91.SrcRect.right )
            {
              WdLogSingleEntry1(1LL, 7221LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPresent->pSrcSubRects[i].right <= PresentDdiArg.SrcRect.right",
                7221LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *(_DWORD *)(*v14 + 16LL * i + 4) < v91.SrcRect.top )
            {
              WdLogSingleEntry1(1LL, 7222LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPresent->pSrcSubRects[i].top >= PresentDdiArg.SrcRect.top",
                7222LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *(_DWORD *)(*v14 + 16LL * i + 12) > v91.SrcRect.bottom )
            {
              WdLogSingleEntry1(1LL, 7223LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPresent->pSrcSubRects[i].bottom <= PresentDdiArg.SrcRect.bottom",
                7223LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
        }
LABEL_63:
        if ( bTracingEnabled )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                         + 760LL)
                                                             + 8LL)
                                                 + 336LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 768LL),
            *((unsigned int *)v10 + 6));
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                         + 760LL)
                                                             + 8LL)
                                                 + 336LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 768LL),
            *((unsigned int *)v10 + 5));
          v45 = v76;
          pDstSubRects = v91.pDstSubRects;
          SubRectCnt = v91.SubRectCnt;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
              HIDWORD(*(_QWORD *)&v91.DstRect.left),
              HIDWORD(*(_QWORD *)&v91.DstRect.right),
              HIDWORD(*(_QWORD *)&v91.SrcRect.left),
              0LL,
              v76);
          v48 = 0;
          if ( SubRectCnt )
          {
            while ( 1 )
            {
              v49 = 0;
              v50 = SubRectCnt - v48;
              if ( (unsigned int)v50 > 0x10 )
                break;
              v51 = SubRectCnt - v48;
              if ( (_DWORD)v50 )
                goto LABEL_69;
LABEL_71:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v74) = v51;
                LODWORD(v73) = (unsigned int)v50 <= 0x10;
                McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer((__int64)v96, v50, v44, v45, v73, v74, v96, v95, v94, v93);
              }
              v48 += 16;
              if ( v48 >= SubRectCnt )
                goto LABEL_74;
            }
            v51 = 16;
LABEL_69:
            v44 = 0LL;
            do
            {
              v52 = v49 + v48;
              ++v49;
              v52 *= 2LL;
              v44 += 4LL;
              *(_DWORD *)&v95[v44 + 60] = *(&pDstSubRects->left + 2 * v52);
              *(_DWORD *)&v94[v44 + 60] = *(&pDstSubRects->right + 2 * v52);
              *(_DWORD *)&v93[v44 + 60] = *(&pDstSubRects->top + 2 * v52);
              *(_DWORD *)&v93[v44 - 4] = *(&pDstSubRects->bottom + 2 * v52);
            }
            while ( v49 < v51 );
            goto LABEL_71;
          }
        }
LABEL_74:
        v53 = v85;
        v30 = DXGCONTEXT::SubmitPresent(
                v7,
                (const struct _D3DKMT_PRESENT *)v10,
                *((struct DXGHWQUEUE ***)v10 + 188),
                *((_DWORD *)v10 + 23),
                (struct DXGCONTEXT **)v82.QuadPart,
                0LL,
                *((_DWORD *)v10 + 5),
                *((_DWORD *)v10 + 6),
                &v91,
                0LL,
                v76,
                v81[0],
                D3DDDIFMT_A8B8G8R8,
                v85);
        if ( v30 >= 0 && *((_DWORD *)v10 + 90) == 1 )
        {
          v82.QuadPart = -100000LL;
          v30 = SubmitPresentHistoryToken(
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v10 + 360),
                  v53,
                  v86,
                  0LL,
                  0,
                  &v82,
                  (struct DXGK_PRESENT_PARAMS *)v10,
                  0LL,
                  v7,
                  0LL,
                  0LL);
        }
        goto LABEL_77;
      }
      if ( (*((_DWORD *)v10 + 22) & 0x4000) != 0 || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v39, v36) )
      {
        DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
        v91.pDstSubRects = DdiSubRectList;
        if ( v91.DstRect.right - v91.DstRect.left != v91.SrcRect.right - v91.SrcRect.left )
        {
          WdLogSingleEntry1(1LL, 7175LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.DstRect.right - PresentDdiArg.DstRect.left == PresentDdiArg.SrcRect.right - PresentDd"
                      "iArg.SrcRect.left",
            7175LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v91.DstRect.bottom - v91.DstRect.top != v91.SrcRect.bottom - v91.SrcRect.top )
        {
          WdLogSingleEntry1(1LL, 7178LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.DstRect.bottom - PresentDdiArg.DstRect.top == PresentDdiArg.SrcRect.bottom - PresentD"
                      "diArg.SrcRect.top",
            7178LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v91.SrcRect.left >= v91.SrcRect.right )
        {
          WdLogSingleEntry1(1LL, 7180LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.SrcRect.left < PresentDdiArg.SrcRect.right",
            7180LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v91.SrcRect.left < 0 )
        {
          WdLogSingleEntry1(1LL, 7181LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.SrcRect.left >= 0",
            7181LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v64 = v36;
        v65 = v78;
        v66 = 4000 * v64;
        if ( v91.SrcRect.right > *(_DWORD *)(*((_QWORD *)v78 + 16) + 4000 * v64 + 636)
                               - *(_DWORD *)(*((_QWORD *)v78 + 16) + 4000 * v64 + 628) )
        {
          WdLogSingleEntry1(1LL, 7182LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.SrcRect.right <= pDisplayCore->GetContentRect(VidPnSourceId)->right - pDisplayCore->G"
                      "etContentRect(VidPnSourceId)->left",
            7182LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v91.DstRect.top >= v91.DstRect.bottom )
        {
          WdLogSingleEntry1(1LL, 7184LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.DstRect.top < PresentDdiArg.DstRect.bottom",
            7184LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v91.DstRect.top < 0 )
        {
          WdLogSingleEntry1(1LL, 7185LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.DstRect.top >= 0",
            7185LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v91.SrcRect.bottom > *(_DWORD *)(*((_QWORD *)v65 + 16) + v66 + 640)
                                - *(_DWORD *)(*((_QWORD *)v65 + 16) + v66 + 632) )
        {
          WdLogSingleEntry1(1LL, 7186LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"PresentDdiArg.SrcRect.bottom <= pDisplayCore->GetContentRect(VidPnSourceId)->bottom - pDisplayCore-"
                      ">GetContentRect(VidPnSourceId)->top",
            7186LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v67 = 0;
        LODWORD(v77) = v91.DstRect.left - v91.SrcRect.left;
        if ( v91.SubRectCnt )
        {
          v68 = v77;
          v69 = v91.DstRect.top - v91.SrcRect.top;
          do
          {
            v70 = v67;
            v71 = v68 + *(_DWORD *)(*v14 + 16LL * v67);
            DdiSubRectList[v70].left = v71;
            v72 = v68 + *(_DWORD *)(*v14 + 16LL * v67 + 8);
            DdiSubRectList[v70].right = v72;
            DdiSubRectList[v70].top = v69 + *(_DWORD *)(*v14 + 16LL * v67 + 4);
            DdiSubRectList[v70].bottom = v69 + *(_DWORD *)(*v14 + 16LL * v67 + 12);
            if ( v71 >= v72 )
            {
              WdLogSingleEntry1(1LL, 7198LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDstSubRects[i].left < pDstSubRects[i].right",
                7198LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( DdiSubRectList[v67].left < v91.DstRect.left )
            {
              WdLogSingleEntry1(1LL, 7199LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDstSubRects[i].left >= PresentDdiArg.DstRect.left",
                7199LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( DdiSubRectList[v67].right > v91.DstRect.right )
            {
              WdLogSingleEntry1(1LL, 7200LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDstSubRects[i].right <= PresentDdiArg.DstRect.right",
                7200LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( DdiSubRectList[v67].top >= DdiSubRectList[v67].bottom )
            {
              WdLogSingleEntry1(1LL, 7201LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDstSubRects[i].top < pDstSubRects[i].bottom",
                7201LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( DdiSubRectList[v67].top < v91.DstRect.top )
            {
              WdLogSingleEntry1(1LL, 7202LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDstSubRects[i].top >= PresentDdiArg.DstRect.top",
                7202LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( DdiSubRectList[v67].bottom > v91.DstRect.bottom )
            {
              WdLogSingleEntry1(1LL, 7203LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDstSubRects[i].bottom <= PresentDdiArg.DstRect.bottom",
                7203LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            ++v67;
          }
          while ( v67 < v91.SubRectCnt );
          v10 = v87;
          v7 = v88;
        }
        goto LABEL_48;
      }
      v30 = -1071774910;
      WdLogSingleEntry4(4LL, -1071774910LL, *((_QWORD *)v7 + 2), *((unsigned int *)v10 + 6), v36);
    }
    goto LABEL_112;
  }
  WdLogSingleEntry4(4LL, 0LL, *((_QWORD *)v7 + 2), *((unsigned int *)v10 + 6), a3);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 760LL)
                                                                         + 8LL)
                                                             + 496LL))(
    v76,
    0LL);
  v76 = 0LL;
  v30 = 0;
LABEL_77:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v89);
LABEL_78:
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v81);
LABEL_79:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80);
LABEL_80:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v90);
  v54 = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v54 + 1136), v10);
  return (unsigned int)v30;
}
