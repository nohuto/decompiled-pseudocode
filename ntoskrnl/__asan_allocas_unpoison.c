/*
 * XREFs of __asan_allocas_unpoison @ 0x140563370
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall _asan_allocas_unpoison(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR v2; // rbx
  void *result; // rax
  _BYTE *v4; // rdi

  if ( BugCheckParameter3 )
  {
    if ( BugCheckParameter3 <= a2 )
    {
      v2 = a2 - BugCheckParameter3;
      if ( KasaniEnabled )
      {
        result = (void *)0xFFFF800000000000LL;
        if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
        if ( (BugCheckParameter3 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
        v4 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
        if ( v2 >> 3 )
        {
          result = memset((void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)), 0, v2 >> 3);
          v4 += v2 >> 3;
        }
        if ( (v2 & 7) != 0 )
          *v4 = v2 & 7;
      }
    }
  }
  return result;
}
