/*
 * XREFs of __asan_memcpy @ 0x140566380
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     KasanValidateAddress @ 0x140565450 (KasanValidateAddress.c)
 */

void *__fastcall _asan_memcpy(ULONG_PTR BugCheckParameter1, const void *a2, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  KasanValidateAddress((ULONG_PTR)a2, BugCheckParameter2, 0, retaddr);
  KasanValidateAddress(BugCheckParameter1, BugCheckParameter2, 1u, retaddr);
  return memmove((void *)BugCheckParameter1, a2, BugCheckParameter2);
}
