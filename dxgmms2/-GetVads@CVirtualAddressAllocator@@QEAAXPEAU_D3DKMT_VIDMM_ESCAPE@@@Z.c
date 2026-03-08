/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00F26A4
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00E2184 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // ecx
  UINT v5; // edi
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int32 v8; // ecx
  int v9; // ecx
  struct _KTHREAD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  struct _KTHREAD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbp
  _DWORD *v25; // r12
  UINT64 *p_IndexShift; // r14
  __int64 v27; // rcx
  __int64 v28; // r9
  UINT NumPtes; // r13d
  struct _KTHREAD *v30; // rax
  int v31; // r15d
  __int64 v32; // rsi
  unsigned int v33; // r8d
  __int64 v34; // r10
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // r11d
  __int64 v38; // rdx
  UINT v39; // r8d
  __int64 v40; // rcx
  UINT v41; // r9d
  unsigned int v42; // r15d
  __int64 v43; // rdx
  _QWORD *v44; // rsi
  _QWORD *v45; // rdx
  UINT64 NtHandle; // rax
  __int64 PhysicalAdapterIndex; // rcx
  int v48; // eax
  _QWORD **v49; // r8
  _QWORD *v50; // rcx
  _QWORD *v51; // rcx
  _QWORD *v52; // rsi
  _QWORD *v53; // rcx
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // eax
  HANDLE hProcess; // rdx
  _QWORD **v56; // rsi
  _QWORD *i; // rcx
  char v58[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v59; // [rsp+28h] [rbp-40h]
  int v60; // [rsp+30h] [rbp-38h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v59);
  Command = a2->GetVads.Command;
  v5 = 0;
  v60 = 2;
  a2->GetVads.Status = 0;
  if ( Command )
  {
    v6 = Command - 1;
    if ( !v6 )
    {
      v52 = this + 3;
      v53 = (_QWORD *)*v52;
      if ( (_QWORD *)*v52 != v52 )
      {
        Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
        do
        {
          ++v5;
          if ( Value == -1 )
          {
            hProcess = a2->Evict.hProcess;
            if ( (unsigned __int64)hProcess >= *(v53 - 2) && (unsigned __int64)hProcess < *(v53 - 1) )
            {
LABEL_76:
              a2->GetVads.GetVad.StartAddress = *(v53 - 2);
              a2->GetVads.GetVad.EndAddress = *(v53 - 1);
              a2->GetVads.GetVad.VadType = v53[4] & 0xF;
              a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)v53 + 9);
              goto LABEL_84;
            }
          }
          else if ( Value == v5 )
          {
            goto LABEL_76;
          }
          v53 = (_QWORD *)*v53;
        }
        while ( v53 != v52 );
      }
LABEL_80:
      a2->GetVads.Status = -1073741811;
      WdLogSingleEntry0(3LL);
      goto LABEL_84;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = this[11];
            v11 = a2->SetFault.Value;
            if ( (unsigned int)v11 >= *((_DWORD *)v10 + 1754) )
              goto LABEL_80;
            v12 = *((_QWORD *)v10 + 5028) + 1616 * v11;
            a2->Evict.AllocationHandle = *(_DWORD *)(v12 + 32);
            while ( 1 )
            {
              v13 = *(unsigned int *)(v12 + 32);
              if ( (unsigned int)v13 > 0x20 )
                v13 = 32LL;
              if ( v5 >= v13 )
                break;
              v14 = 3LL * v5;
              v15 = *(_QWORD *)(*((_QWORD *)this[11] + 464)
                              + 8LL
                              * (v5 + *(_DWORD *)(1616LL * a2->SetFault.Value + *((_QWORD *)this[11] + 5028) + 28)));
              a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bAperture = *(_BYTE *)(v15 + 80) & 1;
              *(&a2->GetVads.GetVad.VadAddress + v14) = *(_QWORD *)(v15 + 48);
              *(&a2->GetVads.GetVad.NumMappedRanges + 2 * v14) = *(_DWORD *)(v15 + 376);
              *(&a2->GetVads.GetVad.VadType + 2 * v14) = *(_DWORD *)(v15 + 20);
              a2->GetVads.GetPte.PageTableIndex[2 * v14 + 5] = *(_DWORD *)(v15 + 476);
              a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bReservedSysMem = (*(_DWORD *)(v15 + 80) & 0x1000) != 0;
              ++v5;
            }
          }
        }
        else
        {
          v16 = this[11];
          v17 = a2->SetFault.Value;
          if ( (unsigned int)v17 >= *((_DWORD *)v16 + 1754) )
            goto LABEL_80;
          v18 = *((_QWORD *)v16 + 5028) + 1616 * v17;
          v19 = *(_QWORD *)(v18 + 448);
          a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v19 & 1;
          a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v19 & 2) != 0;
          a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v19 & 4) != 0;
          a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v19 & 0x10) != 0;
          a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v19 & 0x40) != 0;
          a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v19 & 0x80) != 0;
          a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v19) & 1;
          a2->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v19 + 8);
          a2->GetVads.GetVad.VadType = *(_DWORD *)(v19 + 16);
          if ( *(_DWORD *)(v19 + 16) )
          {
            do
            {
              v20 = v5++;
              v21 = 5 * v20;
              a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v21 / 5].IndexBitCount = *(_DWORD *)(v18 + 48 * v20 + 100);
              *(&a2->GetVads.GetVad.EndAddress + v21) = *(_QWORD *)(v18 + 48 * v20 + 112);
              a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v21 / 5].IndexShift = *(_QWORD *)(v18 + 48 * v20 + 120);
              *(&a2->GetVads.GetVadRange.pOwner + v21) = *(_QWORD *)(v18 + 48 * v20 + 128);
              *(&a2->GetVads.GetVadRange.OwnerOffset + v21) = *(_QWORD *)(v18 + 48 * v20 + 136);
            }
            while ( v5 < *(_DWORD *)(v19 + 16) );
          }
        }
      }
      else
      {
        v22 = this[11];
        v23 = a2->SetFault.Value;
        if ( (unsigned int)v23 >= *((_DWORD *)v22 + 1754) )
          goto LABEL_80;
        if ( a2->GetVads.GetPte.NumPtes > 0x40 )
          goto LABEL_80;
        v24 = *((_QWORD *)v22 + 5028) + 1616 * v23;
        v25 = *(_DWORD **)(v24 + 448);
        if ( a2->Evict.AllocationHandle >= v25[4] )
          goto LABEL_80;
        p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
        memset(&a2->Defrag + 1, 0, 0x400uLL);
        v27 = a2->SetFault.Value;
        v28 = 0LL;
        NumPtes = a2->GetVads.GetPte.NumPtes;
        a2->GetVads.GetPte.NumPtes = 0;
        v30 = this[15];
        v31 = v25[4];
        v27 *= 32LL;
        v32 = *(_QWORD *)((char *)v30 + v27);
        v33 = *(_DWORD *)((char *)v30 + v27 + 16);
        if ( v31 )
        {
          do
          {
            v34 = (unsigned int)--v31;
            if ( !v32 || !(_DWORD)v34 && !v28 )
              break;
            v35 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v34);
            v36 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v34);
            if ( !(_DWORD)v34 && (*(_DWORD *)v28 & 0x40) != 0 )
              v36 >>= 4;
            if ( v36 >= v33 )
            {
              WdLogSingleEntry0(3LL);
              break;
            }
            v37 = 0;
            if ( (_DWORD)v34 == 1 && (*v25 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
              v37 = v33;
            if ( (_DWORD)v34 == a2->Evict.AllocationHandle )
            {
              v39 = v33 - v36;
              if ( v39 >= NumPtes )
                v39 = NumPtes;
              if ( (_DWORD)v34 )
              {
                v41 = 0;
                if ( v39 )
                {
                  v42 = v37 + v36;
                  do
                  {
                    *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v32 + 40) + 16LL * (v42 + v41));
                    if ( (_DWORD)v34 == 1 )
                    {
                      if ( (*v25 & 0x80u) != 0 )
                      {
                        *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | -(__int64)(v37 != 0) & 0x80000;
                      }
                      else
                      {
                        v43 = 0LL;
                        if ( (**(_DWORD **)(v32 + 40) & 0x60000) == 0x20000LL )
                          v43 = 0x80000LL;
                        *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | v43;
                      }
                    }
                    ++v41;
                    p_IndexShift += 2;
                  }
                  while ( v41 < v39 );
                }
                a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v32 + 4);
              }
              else
              {
                if ( v39 )
                {
                  do
                  {
                    v40 = 2LL * (v5 + v36);
                    ++v5;
                    *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v28 + 32) + 8 * v40);
                    p_IndexShift += 2;
                  }
                  while ( v5 < v39 );
                }
                a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v28 + 4);
                a2->GetVads.GetPte.b64KBPte = (*(_DWORD *)v28 & 0x40) != 0;
              }
              a2->GetVads.GetPte.NumPtes = v39;
              break;
            }
            v38 = *(_QWORD *)(v32 + 48);
            if ( (_DWORD)v34 == 1 )
              v28 = *(_QWORD *)(v38 + 8LL * ((unsigned int)v35 + v37));
            else
              v32 = *(_QWORD *)(v38 + 8 * v35);
            v33 = *(_DWORD *)(v24 + 48 * ((unsigned int)(v34 - 1) + 2LL));
          }
          while ( (_DWORD)v34 );
        }
      }
    }
    else
    {
      v44 = this + 3;
      v45 = (_QWORD *)*v44;
      if ( (_QWORD *)*v44 != v44 )
      {
        NtHandle = a2->EvictByNtHandle.NtHandle;
        while ( NtHandle < *(v45 - 2) || NtHandle >= *(v45 - 1) )
        {
          v45 = (_QWORD *)*v45;
          if ( v45 == v44 )
            goto LABEL_84;
        }
        PhysicalAdapterIndex = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
        if ( (unsigned int)PhysicalAdapterIndex >= ((*((_DWORD *)v45 + 8) >> 4) & 0x7Fu) )
          goto LABEL_80;
        v48 = 0;
        v49 = (_QWORD **)&v45[2 * PhysicalAdapterIndex + 7 + PhysicalAdapterIndex];
        v50 = *v49;
        if ( *v49 == v49 )
          goto LABEL_80;
        while ( v48 != a2->GetVads.GetVadRange.VaRangeIndex )
        {
          v50 = (_QWORD *)*v50;
          ++v48;
          if ( v50 == v49 )
            goto LABEL_80;
        }
        v51 = v50 - 1;
        if ( !v51 )
          goto LABEL_80;
        a2->GetVads.GetVadRange.StartAddress = v51[12];
        a2->GetVads.GetVad.StartAddress = v51[13];
        a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)v51 + 16) << 28) >> 28;
        a2->GetVads.GetVadRange.pOwner = v51[7];
        a2->GetVads.GetVadRange.Protection = *((_DWORD *)v51 + 22);
        a2->GetVads.GetVad.EndAddress = v51[10];
        a2->GetVads.GetVadRange.OwnerOffset = v51[9];
      }
    }
  }
  else
  {
    v56 = (_QWORD **)(this + 3);
    a2->SetFault.Value = 0;
    for ( i = *v56; i != v56; i = (_QWORD *)*i )
      a2->SetFault.Value = ++v5;
  }
LABEL_84:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
}
