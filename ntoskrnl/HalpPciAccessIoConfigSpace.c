/*
 * XREFs of HalpPciAccessIoConfigSpace @ 0x14039127C
 * Callers:
 *     HalpPCIConfig @ 0x1402D7810 (HalpPCIConfig.c)
 * Callees:
 *     HalpPCIPerformConfigAccess @ 0x1402D7B78 (HalpPCIPerformConfigAccess.c)
 */

char __fastcall HalpPciAccessIoConfigSpace(
        __int16 a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  unsigned int v8; // r9d
  __int64 (__fastcall **v9)(); // rcx
  char result; // al

  v8 = a5;
  if ( a5 + a6 > 0x100 || a1 )
    return 0;
  a5 = 8 * (a3 & 0xE0 | ((a3 & 0x1F | (32 * (a2 | 0xFFFF8000))) << 8));
  v9 = HalpPCIConfigReadHandlers;
  if ( a7 )
    v9 = HalpPCIConfigWriteHandlers;
  HalpPCIPerformConfigAccess((__int64)v9, (__int64)&a5, a4, v8, a6);
  result = 1;
  __outdword(0xCF8u, 0);
  return result;
}
