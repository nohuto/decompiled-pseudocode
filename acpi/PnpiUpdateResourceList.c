/*
 * XREFs of PnpiUpdateResourceList @ 0x1C0092328
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00904A0 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0090830 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0090C88 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0090EAC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00912CC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C009168C (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C0091754 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00917BC (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C0091918 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C009197C (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C0091A50 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C0091B5C (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0091BE0 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C0091C74 (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     PnpiGrowResourceDescriptor @ 0x1C0091DB0 (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(const void **a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // zf
  _OWORD *v9; // rdx

  v2 = 0;
  if ( *a1 && (*((_DWORD *)*a1 + 1) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, (__int64)a2, 0), v2 = result, (int)result >= 0) )
  {
    v6 = (__int64)*a1 + 8;
    v7 = 32LL * *((unsigned int *)*a1 + 1);
    v8 = v7 + v6 == 0;
    v9 = (_OWORD *)(v7 + v6);
    *a2 = v9;
    if ( v8 )
    {
      return 3221225473LL;
    }
    else
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      ++*((_DWORD *)*a1 + 1);
      return v2;
    }
  }
  return result;
}
