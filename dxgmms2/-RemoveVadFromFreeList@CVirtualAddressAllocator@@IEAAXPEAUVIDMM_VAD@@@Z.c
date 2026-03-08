/*
 * XREFs of ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0089A5C
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00897A0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C009BC60 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0030060 (McTemplateK0pqxx_EtwWriteTransfer.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVadFromFreeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( (byte_1C00769C2 & 0x20) != 0 )
  {
    v5 = *((_DWORD *)a2 + 18);
    McTemplateK0pqxx_EtwWriteTransfer(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v5,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  }
  RtlAvlRemoveNode((char *)this + 40, a2);
  *((_DWORD *)a2 + 18) &= 0xFFFFFFF0;
}
