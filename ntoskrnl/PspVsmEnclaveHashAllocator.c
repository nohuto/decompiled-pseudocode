/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x1409B4C3C
 * Callers:
 *     PsCreateVsmEnclave @ 0x1409B4008 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspVsmEnclaveHashAllocator(__int64 a1)
{
  return ExAllocatePool2(257LL, a1, 1212511056LL);
}
