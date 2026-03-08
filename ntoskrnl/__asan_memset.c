/*
 * XREFs of __asan_memset @ 0x140563F50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     KasanValidateAddress @ 0x140562FB0 (KasanValidateAddress.c)
 */

void *__fastcall _asan_memset(void *a1, int Val, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  KasanValidateAddress((ULONG_PTR)a1, BugCheckParameter2, 1u, retaddr);
  return memset(a1, Val, BugCheckParameter2);
}
