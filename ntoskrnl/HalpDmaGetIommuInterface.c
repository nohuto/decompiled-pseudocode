/*
 * XREFs of HalpDmaGetIommuInterface @ 0x1404FDDF4
 * Callers:
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140510488 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x140822E44 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IoQueryInterface @ 0x140822260 (IoQueryInterface.c)
 */

__int64 __fastcall HalpDmaGetIommuInterface(__int64 a1, void *a2)
{
  __int64 result; // rax

  result = IoQueryInterface(a1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 80, 2, a1, a2);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)a2 + 8) )
    {
      return 0LL;
    }
    else
    {
      (*((void (__fastcall **)(_QWORD))a2 + 3))(*((_QWORD *)a2 + 1));
      return 3221225474LL;
    }
  }
  return result;
}
