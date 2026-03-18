/*
 * XREFs of MiSelectSystemImageAddress @ 0x140696DA4
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiSelectImageBase @ 0x1406AAA28 (MiSelectImageBase.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a2, 0LL, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
