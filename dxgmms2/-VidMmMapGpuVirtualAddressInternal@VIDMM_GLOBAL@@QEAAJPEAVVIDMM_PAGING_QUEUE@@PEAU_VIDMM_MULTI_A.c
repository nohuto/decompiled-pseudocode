/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C008F0C0
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C008EFF0 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0001340 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0001430 (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0089AAC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C008EDC0 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C00F11E4 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  int v5; // r11d
  UINT64 *p_PagingFenceValue; // rax
  _QWORD *v7; // rsi
  D3DGPU_SIZE_T SizeInPages; // r9
  D3DGPU_SIZE_T v11; // r14
  VIDMM_GLOBAL *v13; // r10
  int v14; // edi
  _QWORD *v15; // r8
  D3DGPU_SIZE_T OffsetInPages; // rax
  D3DGPU_SIZE_T v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // r13
  D3DGPU_SIZE_T v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  bool v26; // zf
  char v27; // al
  __int64 v28; // rbx
  struct VIDMM_PAGING_QUEUE **v29; // r14
  struct VIDMM_PAGING_QUEUE *v30; // r13
  struct VIDMM_PAGING_QUEUE **NewPacket; // rbx
  struct VIDMM_PAGING_QUEUE *v32; // rax
  __int64 v33; // rcx
  struct _VIDSCH_SYNC_OBJECT *i; // r14
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  VIDMM_GLOBAL *v39; // rbx
  unsigned int v40; // r14d
  struct DXGK_LOG *v41; // r15
  __int64 v42; // r12
  _QWORD *v43; // rsi
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v48; // r8
  D3DGPU_SIZE_T v49; // rdx
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // [rsp+28h] [rbp-D8h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-D0h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-C8h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-B8h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-B0h]
  struct _VIDSCH_SYNC_OBJECT *v55; // [rsp+70h] [rbp-90h] BYREF
  struct VIDMM_VAD_PENDING_OPERATION *v56[13]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v57[8]; // [rsp+E0h] [rbp-20h] BYREF
  DXGPUSHLOCK *v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+F0h] [rbp-10h]
  _QWORD v60[11]; // [rsp+100h] [rbp+0h] BYREF
  int v63; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v64; // [rsp+1C8h] [rbp+C8h]

  v5 = *((_DWORD *)a2 + 36);
  p_PagingFenceValue = &a4->PagingFenceValue;
  v7 = 0LL;
  v63 = v5;
  SizeInPages = a4->SizeInPages;
  if ( a5 )
    v7 = p_PagingFenceValue;
  v11 = SizeInPages << 12;
  v13 = this;
  v14 = 4096;
  if ( a3 )
  {
    if ( !SizeInPages )
      v11 = *(_QWORD *)(**(_QWORD **)a3 + 16LL);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v15 = *(_QWORD **)a3;
    OffsetInPages = a4->OffsetInPages;
    v17 = *(_QWORD *)(*v15 + 16LL) >> 12;
    if ( OffsetInPages >= v17 )
    {
      v48 = 21057LL;
      v49 = a4->OffsetInPages;
LABEL_63:
      WdLogSingleEntry2(3LL, v49, v48);
      return 3221225485LL;
    }
    if ( v17 - OffsetInPages < v11 >> 12 && (*((_BYTE *)v13 + 40937) & 0x10) == 0 )
    {
      v48 = 21068LL;
      v49 = SizeInPages;
      goto LABEL_63;
    }
    v18 = *(_DWORD *)(*v15 + 32LL);
    v19 = 1LL;
    v20 = v15[1];
    if ( v18 > 0x1000 )
      v14 = v18;
  }
  else
  {
    v20 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v20 )
      v20 = *(_QWORD *)(v20 + 8);
    v13 = this;
    v19 = 0LL;
    v5 = v63;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v19 = 6LL;
  }
  if ( !v11 )
  {
    v49 = a4->SizeInPages;
    v48 = 21090LL;
    goto LABEL_63;
  }
  v21 = *(_QWORD **)(*(_QWORD *)(v20 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)v13 + 3) + 240LL));
  if ( !v21
    || !*(_DWORD *)(*v21 + 40928LL)
    || ((*(_DWORD *)(v20 + 96) & 2) != 0 ? (v22 = *(_QWORD *)(*v21 + 0x800009DD8LL)) : (v22 = v21[63]), (v64 = v22) == 0) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  DriverProtection = a4->DriverProtection;
  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  MaximumAddress = a4->MaximumAddress;
  MinimumAddress = a4->MinimumAddress;
  BaseAddress = a4->BaseAddress;
  v23 = a4->OffsetInPages << 12;
  v56[0] = 0LL;
  v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD, _BYTE, _QWORD))CVirtualAddressAllocator::MapVirtualAddressRange)(
          v22,
          a3,
          v23,
          v19,
          v11,
          BaseAddress,
          MinimumAddress,
          MaximumAddress,
          v14,
          Value,
          DriverProtection,
          v5,
          v56,
          1,
          v55);
  v25 = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(2LL, 21122LL);
    return 3221225473LL;
  }
  v26 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
  a4->VirtualAddress = *(_QWORD *)(v24 + 96);
  a4->PagingFenceValue = 0LL;
  if ( !v26 )
  {
    v39 = this;
    v40 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)v22,
            (struct VIDMM_MAPPED_VA_RANGE *)v24,
            0,
            v56[0]);
    goto LABEL_40;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v24 + 128));
  memset(v60, 0, sizeof(v60));
  v60[0] = -4294967183LL;
  v60[6] = v25;
  *(_OWORD *)&v60[7] = xmmword_1C004F0A8;
  v60[5] = v22;
  v60[9] = v56[0];
  memset(&v56[1], 0, 0x58uLL);
  v56[2] = *((struct VIDMM_VAD_PENDING_OPERATION **)a2 + 17);
  v27 = *(_DWORD *)(v25 + 64) & 0xF;
  LODWORD(v56[1]) = 113;
  if ( v27 == 1 )
    v56[3] = *(struct VIDMM_VAD_PENDING_OPERATION **)(v25 + 56);
  *(_OWORD *)&v56[5] = *(_OWORD *)&v60[5];
  *(_OWORD *)&v56[7] = xmmword_1C004F0A8;
  *(_OWORD *)&v56[9] = *(_OWORD *)&v60[9];
  LOBYTE(v56[10]) = 1;
  a5 = !v7 || !dword_1C007646C;
  v28 = *((_QWORD *)a2 + 10);
  v55 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
  v63 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v28 + 144, 0LL);
  v29 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 16);
  *(_QWORD *)(v28 + 152) = KeGetCurrentThread();
  v30 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 13) = (char *)v30 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 2);
  if ( NewPacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
    || (v32 = *NewPacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPacket + 1) != NewPacket) )
  {
    __fastfail(3u);
  }
  *v29 = v32;
  *((_QWORD *)v32 + 1) = v29;
  v33 = *((_QWORD *)a2 + 10) + 144LL;
  *(_QWORD *)(v33 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v33, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket == v29 )
  {
    NewPacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
    if ( !NewPacket )
      goto LABEL_30;
  }
  else
  {
    memset(NewPacket, 0, 0xA0uLL);
  }
  NewPacket[5] = v30;
LABEL_30:
  if ( !v56[2] )
    v56[2] = *((struct VIDMM_VAD_PENDING_OPERATION **)v56[3] + 1);
  for ( i = v55; !NewPacket; NewPacket = (struct VIDMM_PAGING_QUEUE **)VIDMM_PAGING_QUEUE::GetNewPacket(a2) )
    VIDMM_GLOBAL::WaitForFence(this, v55, *((_QWORD *)a2 + 12));
  v26 = a5 == 0;
  v35 = *(_OWORD *)&v56[3];
  *((_OWORD *)NewPacket + 3) = *(_OWORD *)&v56[1];
  *((_WORD *)NewPacket + 12) = 257;
  v36 = *(_OWORD *)&v56[5];
  *((_OWORD *)NewPacket + 4) = v35;
  v55 = 0LL;
  v37 = *(_OWORD *)&v56[7];
  *((_OWORD *)NewPacket + 5) = v36;
  v38 = *(_OWORD *)&v56[9];
  *((_OWORD *)NewPacket + 6) = v37;
  *(struct VIDMM_VAD_PENDING_OPERATION **)&v37 = v56[11];
  *((_OWORD *)NewPacket + 7) = v38;
  NewPacket[16] = (struct VIDMM_PAGING_QUEUE *)v37;
  if ( v26 )
  {
    VIDMM_PAGING_QUEUE::AppendReadyPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, (unsigned __int64 *)&v55);
    v39 = this;
    if ( v7 )
    {
      *v7 = v55;
      v63 = 259;
    }
  }
  else
  {
    NewPacket[9] = (struct VIDMM_PAGING_QUEUE *)&v63;
    VIDMM_PAGING_QUEUE::AppendReadyPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, (unsigned __int64 *)&v55);
    v39 = this;
    VIDMM_GLOBAL::WaitForFence(this, i, (unsigned __int64)v55);
  }
  v40 = v63;
  if ( v63 == 259 && a3 )
  {
    v22 = v64;
    if ( (*((_DWORD *)a3 + 7) & 0x20) != 0 )
    {
      *((_QWORD *)a3 + 31) = a2;
      *((_QWORD *)a3 + 34) = *v7;
    }
  }
  else
  {
    v22 = v64;
  }
LABEL_40:
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
  {
    v41 = (VIDMM_GLOBAL *)((char *)v39 + 41024);
    if ( *((_QWORD *)v39 + 5128) )
      goto LABEL_42;
  }
  else if ( *((_QWORD *)v39 + 5123) )
  {
    v41 = (VIDMM_GLOBAL *)((char *)v39 + 41024);
LABEL_42:
    if ( v7 )
      v42 = *v7;
    else
      v42 = 0LL;
    v43 = *(_QWORD **)(v22 + 96);
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)v39 + 5123) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v39 + 41000, 0LL);
      v26 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
      *((_QWORD *)v39 + 5126) = KeGetCurrentThread();
      if ( v26 )
        VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 14LL, 80LL);
      else
        VaPagingHistoryEntry = operator new(80, v41, 0xEu, 0);
      v45 = VaPagingHistoryEntry;
      if ( VaPagingHistoryEntry )
      {
        *VaPagingHistoryEntry = *v43;
        VaPagingHistoryEntry[1] = v43[4];
        VaPagingHistoryEntry[2] = a2;
        VaPagingHistoryEntry[3] = v42;
        VaPagingHistoryEntry[4] = *(_QWORD *)(v25 + 96);
        VaPagingHistoryEntry[5] = *(_QWORD *)(v25 + 104);
        VaPagingHistoryEntry[6] = *(_QWORD *)(v25 + 56);
        *((_DWORD *)VaPagingHistoryEntry + 14) = (int)(*(_DWORD *)(v25 + 64) << 28) >> 28;
        VaPagingHistoryEntry[8] = *(_QWORD *)(v25 + 72);
        VaPagingHistoryEntry[9] = 0LL;
        if ( (*(_DWORD *)(v25 + 64) & 0xF) == 1 )
        {
          v46 = *(_QWORD *)(*(_QWORD *)(v25 + 56) + 16LL);
          if ( v46 )
            v45[9] = *(_QWORD *)(v46 + 32);
        }
      }
      *((_QWORD *)v39 + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v39 + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 128), 0xFFFFFFFF) == 1 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57, (struct _KTHREAD **)(v22 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v58);
    v59 = 2;
    VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((VIDMM_MAPPED_VA_RANGE *)v25);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
  }
  return v40;
}
