/*
 * XREFs of KasanMarkAddressInvalid @ 0x140562DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KasanMarkAddressInvalid(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned __int8 a3)
{
  __int64 result; // rax
  void *v4; // rcx
  size_t v5; // rdx

  if ( KasaniEnabled )
  {
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
    result = 0x800000000000LL;
    v4 = (void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
    v5 = (BugCheckParameter4 - (((_BYTE)BugCheckParameter4 - 1) & 7) + 7) >> 3;
    if ( v5 )
      return (__int64)memset(v4, a3, v5);
  }
  return result;
}
