/*
 * XREFs of KasanMarkAddressValid @ 0x140562EA0
 * Callers:
 *     MmFreeIsrStack @ 0x140A39B00 (MmFreeIsrStack.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall KasanMarkAddressValid(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  char v2; // bl
  void *result; // rax
  ULONG_PTR v4; // rsi
  _BYTE *v5; // rdi

  v2 = BugCheckParameter4;
  if ( KasaniEnabled )
  {
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    result = (void *)(BugCheckParameter3 + BugCheckParameter4);
    if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
    v4 = BugCheckParameter4 >> 3;
    v5 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
    if ( BugCheckParameter4 >> 3 )
    {
      result = memset(
                 (void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)),
                 0,
                 BugCheckParameter4 >> 3);
      v5 += v4;
    }
    if ( (v2 & 7) != 0 )
      *v5 = v2 & 7;
  }
  return result;
}
