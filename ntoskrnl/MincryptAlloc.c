/*
 * XREFs of MincryptAlloc @ 0x140A6F07C
 * Callers:
 *     SymCryptCallbackAlloc @ 0x14067B400 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall MincryptAlloc(__int64 a1)
{
  return ExAllocatePool2(258LL, a1, 1919109443LL);
}
