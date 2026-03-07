void __fastcall VidMmiLogEndVaRangeMapping(
        struct CVirtualAddressAllocator *a1,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 VidMmAllocFromOwner; // rax
  int v7; // r10d
  _QWORD *v8; // r11
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-28h]

  if ( (byte_1C00769C2 & 0x20) != 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a2 + 16) << 28) >> 28, *((_QWORD *)a2 + 7));
    v11 = v7;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      a5,
      &EndGpuVirtualAddressRangeMapping,
      v9,
      a1,
      VidMmAllocFromOwner,
      v9,
      v10,
      a5,
      v8[11],
      v8[10],
      v11,
      v8[14],
      v8[15]);
  }
}
