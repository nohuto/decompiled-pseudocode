/*
 * XREFs of ExFreeAsid @ 0x14060D0E8
 * Callers:
 *     IommuPasidDeviceCreate @ 0x140935810 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpFreeAsid @ 0x14060D8A0 (ExpFreeAsid.c)
 */

__int64 __fastcall ExFreeAsid(int a1)
{
  return ExpFreeAsid((unsigned int)(a1 - 1), 0LL);
}
