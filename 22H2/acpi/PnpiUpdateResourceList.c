/*
 * XREFs of PnpiUpdateResourceList @ 0x1C009D638
 * Callers:
 *     PnpiBiosIrqToIoDescriptor @ 0x1C009BA54 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C009CA80 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C009CCB8 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C009D5A0 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009D6AC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A26F8 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00A3360 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B35FC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B3A44 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00B3E58 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00B3EC0 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B4020 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00B4084 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B4108 (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     PnpiGrowResourceDescriptor @ 0x1C009CDEC (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(const void **a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // zf
  _OWORD *v8; // rdx
  __int64 result; // rax

  v2 = 0;
  if ( *a1 && (*((_DWORD *)*a1 + 1) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, (__int64)a2, 0LL), v2 = result, (int)result >= 0) )
  {
    v5 = (__int64)*a1 + 8;
    v6 = 32LL * *((unsigned int *)*a1 + 1);
    v7 = v6 + v5 == 0;
    v8 = (_OWORD *)(v6 + v5);
    *a2 = v8;
    if ( v7 )
    {
      return 3221225473LL;
    }
    else
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      ++*((_DWORD *)*a1 + 1);
      return v2;
    }
  }
  return result;
}
