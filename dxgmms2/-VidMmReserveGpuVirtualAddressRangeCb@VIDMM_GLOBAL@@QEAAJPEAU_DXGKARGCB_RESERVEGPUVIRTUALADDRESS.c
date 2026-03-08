/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C00EA550
 * Callers:
 *     VidMmReserveGpuVirtualAddressRangeCb @ 0x1C002D420 (VidMmReserveGpuVirtualAddressRangeCb.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C00A6818 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABCF0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2)
{
  char v4; // dl
  __int64 v5; // rcx
  UINT Alignment; // ecx
  UINT64 BaseAddress; // rcx
  __int64 v8; // rax
  UINT64 SizeInBytes; // rcx
  UINT64 v10; // rax
  UINT64 v11; // rax
  unsigned int v12; // r10d
  unsigned int v13; // r12d
  VIDMM_PROCESS *v14; // r13
  __int64 result; // rax
  unsigned int v16; // r14d
  __int64 v17; // r15
  CVirtualAddressAllocator *VirtualAddressAllocator; // r11

  v4 = *((_BYTE *)this + 40936);
  if ( (v4 & 2) == 0 )
  {
    WdLogSingleEntry1(1LL, 22665LL);
    goto LABEL_33;
  }
  Alignment = a2->Alignment;
  if ( !Alignment || ((Alignment - 1) & Alignment) != 0 )
  {
    WdLogSingleEntry1(1LL, 22671LL);
  }
  else
  {
    if ( (a2->Flags & 1) == 0 )
    {
      BaseAddress = a2->BaseAddress;
      v8 = (1LL << *((_DWORD *)this + 10233) << 12) - 1;
      if ( BaseAddress && (BaseAddress & v8) != 0 )
      {
        WdLogSingleEntry1(1LL, 22680LL);
        goto LABEL_33;
      }
      SizeInBytes = a2->SizeInBytes;
      if ( !SizeInBytes || (SizeInBytes & v8) != 0 )
      {
        WdLogSingleEntry1(1LL, 22686LL);
        goto LABEL_33;
      }
LABEL_17:
      v12 = 0;
      v13 = 1;
      v14 = (VIDMM_PROCESS *)*((_QWORD *)a2->hDxgkProcess + 1);
      if ( (*(_DWORD *)(*((_QWORD *)a2->hDxgkProcess + 4) + 424LL) & 2) != 0 )
      {
        if ( v4 >= 0 )
        {
          result = VIDMM_PROCESS::OpenAdapter(*((struct _KTHREAD ***)a2->hDxgkProcess + 1), this);
          v12 = result;
          if ( (int)result < 0 )
            return result;
          *((_BYTE *)this + 40936) |= 0x80u;
        }
        v13 = *((_DWORD *)this + 1754);
        v16 = 0;
        if ( !v13 )
          return v12;
      }
      else
      {
        v16 = 0;
      }
      v17 = 0LL;
      do
      {
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                    v14,
                                    *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                    v16);
        if ( VirtualAddressAllocator )
        {
          v12 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
                  VirtualAddressAllocator,
                  a2->SizeInBytes,
                  a2->BaseAddress,
                  0LL,
                  0LL,
                  a2->Alignment,
                  D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
                  0LL,
                  (*(_BYTE *)&a2->0 & 1) == 0,
                  &a2->StartVirtualAddress,
                  0LL,
                  0);
        }
        else if ( (*(_BYTE *)(*((_QWORD *)this + 5028) + v17 + 444) & 1) != 0 )
        {
          return 3221225485LL;
        }
        ++v16;
        v17 += 1616LL;
      }
      while ( v16 < v13 );
      return v12;
    }
    v10 = a2->BaseAddress;
    if ( v10 && (v10 & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(1LL, 22694LL);
    }
    else
    {
      v11 = a2->SizeInBytes;
      if ( v11 && (v11 & 0xFFF) == 0 )
        goto LABEL_17;
      WdLogSingleEntry1(1LL, 22700LL);
    }
  }
LABEL_33:
  DxgkLogInternalTriageEvent(v5, 0x40000LL);
  return 3221225485LL;
}
