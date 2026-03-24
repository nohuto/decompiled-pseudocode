/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00B50AC
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C0022FC0 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F08C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0073560 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0084188 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BBB9C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00BD03C (-RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  __int64 v8; // rax
  __int64 v10; // rax
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct VIDMM_MAPPED_VA_RANGE *v27; // [rsp+90h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40936) & 2) == 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(this, a2);
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  a4->PagingFenceValue = 0LL;
  if ( (a4->BaseAddress & 0xFFF) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    BaseAddress = a4->BaseAddress;
LABEL_6:
    *(_QWORD *)(v10 + 24) = BaseAddress;
LABEL_7:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3, a4);
    BaseAddress = a4->Size;
    goto LABEL_6;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    v10 = WdLogNewEntry5_WdError(v13, v12, v15, v16);
    *(_QWORD *)(v10 + 24) = 20429LL;
    goto LABEL_7;
  }
  v19 = 0x10000;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2596LL) >= 2400
    && (*((_BYTE *)this + 40936) & 1) != 0
    && *((_DWORD *)this + 10232) >= 0x28u
    && !(v17 % (unsigned int)(4096 << *((_DWORD *)this + 10233))) )
  {
    v19 = 4096 << *((_DWORD *)this + 10233);
  }
  v27 = 0LL;
  v22 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v17,
          v18,
          a4->MinimumAddress,
          a4->MaximumAddress,
          v19,
          a4->ReservationType,
          a4->DriverProtection,
          0,
          &a4->VirtualAddress,
          &v27,
          1u);
  if ( v22 >= 0 )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(this, a2, a4->VirtualAddress, a4->Size);
    if ( a4->Reserved0 == 1 )
    {
      v22 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v27, 0, 0LL, 0LL, 0LL);
      if ( v22 < 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v25, v24);
        WdLogEvent5_WdWarning(v26);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v21, v20);
    WdLogEvent5_WdWarning(v23);
  }
  return (unsigned int)v22;
}
