/*
 * XREFs of MiSelectSystemImageAddress @ 0x1407F6D24
 * Callers:
 *     MiSelectImageBase @ 0x1406A1934 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a2, 0LL, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
