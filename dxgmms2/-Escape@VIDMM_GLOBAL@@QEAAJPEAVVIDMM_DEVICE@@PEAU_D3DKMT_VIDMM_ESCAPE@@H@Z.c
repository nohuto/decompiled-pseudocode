__int64 __fastcall VIDMM_GLOBAL::Escape(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        int a4)
{
  unsigned int v7; // edi
  unsigned int v8; // r8d
  unsigned __int64 *v9; // r9
  D3DKMT_VIDMMESCAPETYPE Type; // edx
  __int32 v11; // edx
  __int32 v12; // edx
  __int32 v13; // edx
  unsigned int v15; // eax
  __int64 v16; // rcx
  ULONG v17; // ecx
  D3DKMT_HANDLE v18; // edx
  UINT v19; // r8d
  PRKEVENT *v20; // rcx
  __int32 v21; // edx
  __int32 v22; // edx
  __int32 v23; // edx
  UINT64 v24; // rdx
  struct DXGPROCESS *Current; // rax
  D3DKMT_VIDMMESCAPETYPE v26; // ecx
  __int32 v27; // ecx
  __int32 v28; // ecx
  VIDMM_PROCESS *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  HANDLE hProcess; // r9
  UINT64 NtHandle; // r10
  VIDMM_GLOBAL **v34; // rdx
  VIDMM_GLOBAL *v35; // rcx
  unsigned int i; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  D3DKMT_VAD_ESCAPE_COMMAND Command; // eax
  __int64 Value; // rax
  __int64 v41; // r10
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r10
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rdx
  VIDMM_PROCESS *v52; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v54; // [rsp+20h] [rbp-B8h]
  unsigned __int64 *v55; // [rsp+28h] [rbp-B0h]
  unsigned __int64 *v56; // [rsp+30h] [rbp-A8h]
  char v57[8]; // [rsp+50h] [rbp-88h] BYREF
  DXGPUSHLOCK *v58; // [rsp+58h] [rbp-80h]
  int v59; // [rsp+60h] [rbp-78h]
  _DWORD v60[24]; // [rsp+70h] [rbp-68h] BYREF

  v7 = -1073741811;
  memset(v60, 0, 0x58uLL);
  Type = a3->Type;
  if ( a3->Type > D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS )
  {
    v21 = Type - 14;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( !v23 )
        {
          Current = DXGPROCESS::GetCurrent();
          if ( !Current || (*((_DWORD *)Current + 106) & 0x1000) == 0 )
            goto LABEL_26;
          v60[10] = a3->SetFault.0;
          v60[0] = 132;
          v15 = VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v60, 1);
LABEL_25:
          v7 = v15;
          if ( v15 != -1073741811 )
            return v7;
LABEL_26:
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57, this + 5134, 0);
          DXGPUSHLOCK::AcquireShared(v58);
          v26 = a3->Type;
          v59 = 1;
          v27 = v26 - 7;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              if ( v28 != 3 )
              {
                WdLogSingleEntry0(3LL);
LABEL_59:
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
                return v7;
              }
              v29 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
              if ( v29 )
                v29 = (VIDMM_PROCESS *)*((_QWORD *)v29 + 1);
              VIDMM_PROCESS::GetNumBytesToTrim(v29, *((_DWORD *)this[3] + 60), &a3->EvictByNtHandle.NtHandle);
            }
            else
            {
              v30 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
              if ( v30 )
                v31 = *(_QWORD *)(v30 + 8);
              else
                v31 = 0LL;
              hProcess = a3->Evict.hProcess;
              NtHandle = a3->EvictByNtHandle.NtHandle;
              v34 = *(VIDMM_GLOBAL ***)(*(_QWORD *)(v31 + 16) + 8LL * *((unsigned int *)this[3] + 60));
              if ( v34 )
              {
                v35 = *v34;
                for ( i = 0; i < *((_DWORD *)*v34 + 1754); v35 = *v34 )
                {
                  v37 = i++;
                  v38 = (__int64)v34[6] + 296 * v37;
                  *(_QWORD *)(v38 + 40) = NtHandle;
                  *(_QWORD *)(v38 + 48) = hProcess;
                }
                VIDMM_GLOBAL::RequestNewBudget(v35, 0);
              }
            }
LABEL_58:
            v7 = 0;
            goto LABEL_59;
          }
          if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
          {
            Command = a3->GetVads.Command;
            if ( Command == D3DKMT_VAD_ESCAPE_GET_GPUMMU_CAPS )
            {
              Value = a3->SetFault.Value;
              if ( (unsigned int)Value >= *((_DWORD *)this + 1754) )
              {
LABEL_43:
                v7 = -1073741811;
                WdLogSingleEntry0(3LL);
                goto LABEL_59;
              }
              v41 = 0LL;
              v42 = (__int64)this[5028] + 1616 * Value;
              v43 = *(_QWORD *)(v42 + 448);
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v43 & 1;
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v43 & 2) != 0;
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v43 & 4) != 0;
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v43 & 0x10) != 0;
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v43 & 0x40) != 0;
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v43 & 0x80) != 0;
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v43) & 1;
              a3->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v43 + 8);
              a3->GetVads.GetVad.VadType = *(_DWORD *)(v43 + 16);
              if ( *(_DWORD *)(v43 + 16) )
              {
                do
                {
                  v44 = 5 * v41;
                  v45 = 3 * v41;
                  v41 = (unsigned int)(v41 + 1);
                  v45 *= 2LL;
                  a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v44 / 5].IndexBitCount = *(_DWORD *)(v42 + 8 * v45 + 100);
                  *(&a3->GetVads.GetVad.EndAddress + v44) = *(_QWORD *)(v42 + 8 * v45 + 112);
                  a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v44 / 5].IndexShift = *(_QWORD *)(v42 + 8 * v45 + 120);
                  *(&a3->GetVads.GetVadRange.pOwner + v44) = *(_QWORD *)(v42 + 8 * v45 + 128);
                  *(&a3->GetVads.GetVadRange.OwnerOffset + v44) = *(_QWORD *)(v42 + 8 * v45 + 136);
                }
                while ( (unsigned int)v41 < *(_DWORD *)(v43 + 16) );
              }
LABEL_46:
              a3->GetVads.Status = 0;
              goto LABEL_58;
            }
            if ( Command == D3DKMT_VAD_ESCAPE_GET_SEGMENT_CAPS )
            {
              v46 = a3->SetFault.Value;
              if ( (unsigned int)v46 >= *((_DWORD *)this + 1754) )
                goto LABEL_43;
              v47 = (__int64)this[5028] + 1616 * v46;
              v48 = 0LL;
              a3->Evict.AllocationHandle = *(_DWORD *)(v47 + 32);
              while ( 1 )
              {
                v49 = *(unsigned int *)(v47 + 32);
                if ( (unsigned int)v49 > 0x20 )
                  v49 = 32LL;
                if ( (unsigned int)v48 >= v49 )
                  break;
                v50 = 3 * v48;
                v51 = *((_QWORD *)this[464]
                      + (unsigned int)(v48 + *((_DWORD *)this[5028] + 404 * a3->SetFault.Value + 7)));
                a3->GetVads.GetSegmentCaps.SegmentCaps[v50 / 3].bAperture = *(_BYTE *)(v51 + 80) & 1;
                *(&a3->GetVads.GetVad.VadAddress + v50) = *(_QWORD *)(v51 + 48);
                *(&a3->GetVads.GetVad.NumMappedRanges + 2 * v50) = *(_DWORD *)(v51 + 376);
                *(&a3->GetVads.GetVad.VadType + 2 * v50) = *(_DWORD *)(v51 + 20);
                a3->GetVads.GetPte.PageTableIndex[2 * v50 + 5] = *(_DWORD *)(v51 + 476);
                a3->GetVads.GetSegmentCaps.SegmentCaps[v50 / 3].bReservedSysMem = (*(_DWORD *)(v51 + 80) & 0x1000) != 0;
                v48 = (unsigned int)(v48 + 1);
              }
              goto LABEL_46;
            }
          }
          v52 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
          if ( v52 )
            v52 = (VIDMM_PROCESS *)*((_QWORD *)v52 + 1);
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      v52,
                                      *((_DWORD *)this[3] + 60),
                                      0xFFFFFFFF);
          if ( VirtualAddressAllocator )
            CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
          goto LABEL_58;
        }
        if ( v23 != 1 )
          goto LABEL_26;
        Feature_DelayedForceEviction__private_ReportDeviceUsage();
        v24 = qword_1C0076600 / 10000000;
        qword_1C0076600 = 10000000 * a3->EvictByNtHandle.NtHandle;
        a3->EvictByNtHandle.NtHandle = v24;
      }
      else
      {
        VIDMM_GLOBAL::PerformDefragmentationEscape((VIDMM_GLOBAL *)this, a3->Defrag.Operation, v8, v9, v54, v55, v56);
      }
      return 0;
    }
    v20 = (PRKEVENT *)*this;
    if ( a3->SetFault.Value )
    {
      VIDMM_WORKER_THREAD::Flush((VIDMM_WORKER_THREAD *)v20);
      return 0;
    }
LABEL_14:
    KeSetEvent(v20[22], 0, 0);
    return 0;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS )
  {
    v17 = dword_1C00764C8;
    v18 = dword_1C00764C4;
    v19 = dword_1C00764BC;
    dword_1C00764C8 = a3->Wake.bFlush;
    dword_1C00764C4 = a3->Evict.AllocationHandle;
    dword_1C00764BC = a3->SuspendProcess.bAllowWakeOnSubmission;
    a3->SetFault.Value = v17;
    a3->Evict.AllocationHandle = v18;
    a3->GetVads.GetVadRange.VaRangeIndex = v19;
    v20 = (PRKEVENT *)*this;
    goto LABEL_14;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    WdLogSingleEntry1(1LL, 19458LL);
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return (unsigned int)-1073741823;
  }
  v11 = Type - 1;
  if ( !v11 )
    return 0;
  v12 = v11 - 1;
  if ( !v12 )
    return 0;
  v13 = v12 - 1;
  if ( !v13 )
  {
    v15 = VIDMM_GLOBAL::ApertureCorruptionCheck((VIDMM_GLOBAL *)this, 0);
    goto LABEL_25;
  }
  if ( v13 != 1 )
    goto LABEL_26;
  if ( a4 )
    return 0LL;
  return (unsigned int)-1073741790;
}
