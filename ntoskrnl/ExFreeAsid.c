/*
 * XREFs of ExFreeAsid @ 0x14060ACA8
 * Callers:
 *     IommuPasidDeviceCreate @ 0x140932800 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpFreeAsid @ 0x14060B464 (ExpFreeAsid.c)
 */

__int64 __fastcall ExFreeAsid(int a1)
{
  return ExpFreeAsid((unsigned int)(a1 - 1), 0LL);
}
