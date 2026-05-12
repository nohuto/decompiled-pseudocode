/*
 * XREFs of StorGetIdentityProductId @ 0x1C001B1AC
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001B320 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0074C34 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C0074BEC (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityProductId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 17LL, *a1 + 16LL, 16LL);
  return 0LL;
}
