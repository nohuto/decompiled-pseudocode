/*
 * XREFs of ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C008FC00
 * Callers:
 *     ?VidMmMakeResident@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1C00017B0 (-VidMmMakeResident@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPE.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B1224 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00016D0 (VidSchIsMonitoredFenceSignaled.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0001910 (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EF24 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C00900F8 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C009215C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00921C0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0092260 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        __int64 a4,
        char a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  struct VIDMM_PAGING_QUEUE *v8; // r12
  __int64 v11; // rsi
  bool v12; // bp
  _QWORD *v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  struct _VIDMM_MULTI_ALLOC **v17; // rdi
  struct _VIDMM_MULTI_ALLOC **v18; // r9
  __int64 v19; // r9
  __int64 **v20; // r10
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _VIDMM_MULTI_ALLOC **v25; // rcx
  __int64 v26; // rax
  struct _VIDMM_MULTI_ALLOC **j; // r10
  struct _VIDMM_MULTI_ALLOC *v28; // r9
  __int64 v29; // rbp
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // r11
  __int64 v35; // rcx
  _QWORD *v36; // r8
  unsigned int k; // edx
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // ebp
  int *v42; // rsi
  unsigned __int64 *v43; // r15
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // r15
  bool v47; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  unsigned __int64 *v57; // [rsp+20h] [rbp-B8h]
  char v58[8]; // [rsp+30h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v59; // [rsp+38h] [rbp-A0h]
  int i; // [rsp+40h] [rbp-98h]
  _QWORD v61[12]; // [rsp+50h] [rbp-88h] BYREF

  v8 = a2;
  *a6 = 0LL;
  *a7 = 0LL;
  v11 = *((_QWORD *)a2 + 17);
  v12 = a5 & 1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58, (struct _KTHREAD **)(*(_QWORD *)(v11 + 16) + 360LL), 0);
  DXGPUSHLOCK::AcquireExclusive(v59);
  v13 = *(_QWORD **)(v11 + 16);
  v14 = 0;
  for ( i = 2; v14 < *(_DWORD *)(*v13 + 7016LL); v16[16] = v16[12] )
  {
    v15 = v14++;
    v16 = (_QWORD *)(v13[6] + 296 * v15);
    v16[13] = v16[9];
    v16[14] = v16[10];
    v16[15] = v16[11];
  }
  v17 = &a3[a4];
  v18 = a3;
  if ( a3 == v17 )
  {
    VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*(VIDMM_PROCESS_ADAPTER_INFO **)(v11 + 16), a7, v12, 0);
  }
  else
  {
    do
    {
      if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(*v18)
        && !(*((_BYTE *)v20 + 25) & 1 | *((_DWORD *)v20 + 38))
        && !*((_BYTE *)v20 + 27) )
      {
        v23 = **v20;
        if ( (*((_BYTE *)v20 + 36) & 1) != 0 && (*(_DWORD *)(v23 + 68) & 0x1E0000) == 0x40000 )
          v24 = 0LL;
        else
          v24 = (*(_DWORD *)(v23 + 68) >> 17) & 0xF;
        v22 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 48LL) + 296LL * (*(_DWORD *)(v21 + 68) & 0x3F);
        *(_QWORD *)(v22 + 8 * v24 + 104) += *(_QWORD *)(v21 + 16);
        *((_BYTE *)v20 + 27) = 1;
      }
      v18 = (struct _VIDMM_MULTI_ALLOC **)(v19 + 8);
    }
    while ( v18 != v17 );
    VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*(VIDMM_PROCESS_ADAPTER_INFO **)(v11 + 16), a7, v12, 0);
    v25 = a3;
    do
    {
      v26 = (__int64)*v25++;
      *(_BYTE *)(v26 + 27) = 0;
    }
    while ( v25 != v17 );
  }
  if ( *a7 )
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
    if ( (a5 & 2) != 0 )
      VidSchMarkDeviceAsError(*(_QWORD *)(v11 + 32));
    return 3221225495LL;
  }
  else
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v11 + 16));
    for ( j = a3; j != v17; ++*((_DWORD *)v28 + 38) )
    {
      v28 = *j;
      v29 = **(_QWORD **)*j;
      if ( !(*((_BYTE *)*j + 25) & 1 | *((_DWORD *)*j + 38)) )
      {
        v30 = (_QWORD *)*((_QWORD *)v28 + 14);
        v31 = (_QWORD *)((char *)v28 + 112);
        if ( (struct _VIDMM_MULTI_ALLOC *)v30[1] != (struct _VIDMM_MULTI_ALLOC *)((char *)v28 + 112)
          || (v32 = (_QWORD *)*((_QWORD *)v28 + 15), (_QWORD *)*v32 != v31)
          || (*v32 = v30, v30[1] = v32, v33 = *(_QWORD **)(v11 + 168), *v33 != v11 + 160) )
        {
          __fastfail(3u);
        }
        *v31 = v11 + 160;
        *((_QWORD *)v28 + 15) = v33;
        *v33 = v31;
        *(_QWORD *)(v11 + 168) = v31;
        if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v28) )
        {
          v35 = (*(_DWORD *)(v29 + 68) >> 13) & 0xF;
          *(_QWORD *)(v34 + 8 * v35 + 136) += *(_QWORD *)(v29 + 16);
        }
      }
      ++j;
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v11 + 16));
    v36 = *(_QWORD **)(v11 + 16);
    for ( k = 0; k < *(_DWORD *)(*v36 + 7016LL); v39[12] = v39[16] )
    {
      v38 = k++;
      v39 = (_QWORD *)(v36[6] + 296 * v38);
      v39[9] = v39[13];
      v39[10] = v39[14];
      v39[11] = v39[15];
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
    v41 = 0;
    while ( a3 != v17 )
    {
      v42 = (int *)*a3;
      if ( *((int *)*a3 + 41) <= 0
        && (v42[7] & 3) == 2
        && (*((_DWORD *)this + 2) != 206 || *((int **)this + 880) != v42)
        && ((v54 = **(_QWORD **)v42,
             v55 = *(_QWORD *)(v54 + 152),
             v45 = *(_DWORD *)(v54 + 68) & 0x3F,
             v56 = *((_QWORD *)this + v45 + 685),
             v56 > v55)
         && v56 - v55 >= 0x7FFFFFFF
         || VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v45 + 749), v55)) )
      {
        v43 = a6;
      }
      else
      {
        memset(v61, 0, 0x58uLL);
        LODWORD(v61[0]) = 206;
        v61[2] = v42;
        v61[4] = 0LL;
        v43 = a6;
        v44 = VIDMM_GLOBAL::QueueDeferredCommand(
                this,
                v8,
                (struct _VIDMM_DEFERRED_COMMAND *)v61,
                dword_1C007646C == 0,
                a6);
        v45 = (unsigned int)v42[7];
        v41 = v44;
        if ( (v45 & 0x20) != 0 && v44 == 259 )
        {
          *((_QWORD *)v42 + 30) = v8;
          v45 = *a6;
          *((_QWORD *)v42 + 33) = *a6;
        }
      }
      if ( (byte_1C00769C1 & 0x10) != 0 )
      {
        LODWORD(v57) = v42[38];
        McTemplateK0pq_EtwWriteTransfer(v45, &EventVidMmMakeResident, v40, v42, v57);
      }
      ++a3;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
      {
        v46 = *v43;
        if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
          v47 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
          *((_QWORD *)this + 5126) = KeGetCurrentThread();
          if ( v47 )
            VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 11LL, 48LL);
          else
            VaPagingHistoryEntry = operator new(48, (VIDMM_GLOBAL *)((char *)this + 41024), 0xBu, 0);
          v49 = VaPagingHistoryEntry;
          if ( VaPagingHistoryEntry )
          {
            VaPagingHistoryEntry[1] = a2;
            v50 = 0LL;
            v49[2] = v42;
            *((_BYTE *)v49 + 32) = v41 == 259;
            if ( v41 == 259 )
              v50 = v46;
            v49[5] = v50;
            v51 = *((_QWORD *)v42 + 2);
            if ( v51 )
              v52 = *(_QWORD *)(v51 + 32);
            else
              v52 = 0LL;
            v8 = a2;
            *v49 = 0LL;
            v49[3] = v52;
            *v49 = **(_QWORD **)(*((_QWORD *)a2 + 17) + 8LL);
          }
          else
          {
            v8 = a2;
          }
          *((_QWORD *)this + 5126) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          v8 = a2;
        }
      }
    }
    return v41;
  }
}
