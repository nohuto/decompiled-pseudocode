__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v11; // r9d
  int v12; // esi
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdx
  struct VIDMM_MAPPED_VA_RANGE *v15; // [rsp+90h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40936) & 4) == 0 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225485LL;
  }
  a4->PagingFenceValue = 0LL;
  if ( (a4->BaseAddress & 0xFFF) != 0 )
  {
    BaseAddress = a4->BaseAddress;
LABEL_15:
    WdLogSingleEntry1(2LL, BaseAddress);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    BaseAddress = a4->Size;
    goto LABEL_15;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    WdLogSingleEntry1(2LL, 21333LL);
    return 3221225485LL;
  }
  v11 = 0x10000;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2820LL) >= 2400
    && (*((_BYTE *)this + 40936) & 1) != 0
    && *((_DWORD *)this + 10232) >= 0x28u
    && !(v9 % (unsigned int)(4096 << *((_DWORD *)this + 10233))) )
  {
    v11 = 4096 << *((_DWORD *)this + 10233);
  }
  v15 = 0LL;
  v12 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v9,
          v10,
          a4->MinimumAddress,
          a4->MaximumAddress,
          v11,
          a4->ReservationType,
          a4->DriverProtection,
          0,
          &a4->VirtualAddress,
          &v15,
          1u);
  if ( v12 < 0 )
  {
    WdLogSingleEntry0(3LL);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(this, a2, a4->VirtualAddress, a4->Size);
    if ( a4->Reserved0 == 1 )
    {
      v12 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              this,
              VirtualAddressAllocator,
              a3,
              v15,
              0,
              (const struct _DXGK_ADL *)&xmmword_1C004F0A8,
              0LL,
              0LL);
      if ( v12 < 0 )
      {
        WdLogSingleEntry0(3LL);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v12;
}
