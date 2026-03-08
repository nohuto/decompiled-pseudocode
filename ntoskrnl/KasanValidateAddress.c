/*
 * XREFs of KasanValidateAddress @ 0x140562FB0
 * Callers:
 *     AsanWrapperMemcmp @ 0x140562D60 (AsanWrapperMemcmp.c)
 *     __asan_memcpy @ 0x140563EE0 (__asan_memcpy.c)
 *     __asan_memset @ 0x140563F50 (__asan_memset.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KasanValidateAddress(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a3,
        ULONG_PTR a4)
{
  __int64 v4; // rdi
  ULONG_PTR v7; // rcx
  __int64 result; // rax
  ULONG_PTR v10; // r8
  __int64 v11; // r9

  v4 = a3;
  v7 = BugCheckParameter2 + BugCheckParameter1;
  result = v7 >= 0xFFFF800000000000uLL;
  if ( BugCheckParameter1 >= 0xFFFF800000000000uLL != (_DWORD)result )
    KeBugCheckEx(0x1F1u, 3uLL, 1uLL, BugCheckParameter1, BugCheckParameter2);
  if ( v7 < BugCheckParameter1 )
    KeBugCheckEx(0x1F1u, 3uLL, 3uLL, BugCheckParameter1, BugCheckParameter2);
  if ( KasaniEnabled && BugCheckParameter1 >= 0xFFFF800000000000uLL && BugCheckParameter2 )
  {
    v10 = BugCheckParameter1;
    do
    {
      v11 = *(unsigned __int8 *)(((v10 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( (_BYTE)v11 )
      {
        if ( (char)((v10 & 7) + 1) > (char)v11 )
          KeBugCheckEx(0x1F2u, BugCheckParameter1, BugCheckParameter2, a4, v11 | (v4 << 8));
      }
      result = ++v10 - BugCheckParameter1;
    }
    while ( v10 - BugCheckParameter1 < BugCheckParameter2 );
  }
  return result;
}
