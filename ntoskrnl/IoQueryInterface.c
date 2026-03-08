/*
 * XREFs of IoQueryInterface @ 0x140822260
 * Callers:
 *     HalpIommuGetDeviceId @ 0x14038CC4C (HalpIommuGetDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x1404FDDF4 (HalpDmaGetIommuInterface.c)
 *     ExInitializeDeviceAts @ 0x140609E90 (ExInitializeDeviceAts.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060B7D4 (ExpShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x140821A84 (HalpGetCacheCoherency.c)
 * Callees:
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408222B0 (IopQueryInterfaceRecurseUp.c)
 */

__int64 __fastcall IoQueryInterface(
        _QWORD *a1,
        char a2,
        ULONG_PTR a3,
        USHORT a4,
        USHORT a5,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((int)a1, a3, a4, a5, (__int64)a6, a7);
  else
    return PnpQueryInterface(a1, a3, a5, a4, a6, (USHORT *)a7);
}
