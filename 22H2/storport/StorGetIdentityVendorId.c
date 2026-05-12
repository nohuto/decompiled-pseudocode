/*
 * XREFs of StorGetIdentityVendorId @ 0x1C001B10C
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001B2B0 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0074C34 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C0074BEC (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityVendorId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 9LL, *a1 + 8LL, 8LL);
  return 0LL;
}
