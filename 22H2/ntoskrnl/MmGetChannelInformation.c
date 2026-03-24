/*
 * XREFs of MmGetChannelInformation @ 0x14077DB94
 * Callers:
 *     ExpQueryChannelInformation @ 0x14077A830 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AD5C (ExpQueryNumaAvailableMemory.c)
 *     KiPerformGroupConfiguration @ 0x140A4DDCC (KiPerformGroupConfiguration.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MiGetChannelInformation @ 0x1406769AC (MiGetChannelInformation.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned __int16 a1, unsigned int a2, _QWORD *a3, size_t *a4)
{
  size_t v6; // rbx
  size_t v7; // rdx
  PVOID Pool; // rax
  size_t Size[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE Src[160]; // [rsp+30h] [rbp-C8h] BYREF

  Size[0] = 0LL;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  MiGetChannelInformation(*(_QWORD *)(qword_140C4E648 + 8LL * a1), a2, (__int64)Src, Size);
  v6 = Size[0];
  v7 = Size[0];
  *a4 = Size[0];
  Pool = MiAllocatePool(64, v7, 0x68506D4Du);
  *a3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memmove(Pool, Src, v6);
  return 0LL;
}
