/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0087130
 * Callers:
 *     VidMmFreeGpuVirtualAddress @ 0x1C002D1E0 (VidMmFreeGpuVirtualAddress.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C00A8B30 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087B28 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3,
        char a4)
{
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdi
  bool v9; // r8
  _QWORD v11[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*((_BYTE *)this + 40936) & 4) == 0 )
    return 0LL;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    BaseAddress = a3->BaseAddress;
    if ( BaseAddress )
    {
      memset(v11, 0, 0x58uLL);
      v11[7] = a3->Size >> 12;
      v11[0] = -4294967176LL;
      v11[6] = BaseAddress;
      v11[5] = VirtualAddressAllocator;
      LOBYTE(v11[8]) = a4;
      return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v11, v9);
    }
    WdLogSingleEntry0(3LL);
  }
  return 3221225485LL;
}
