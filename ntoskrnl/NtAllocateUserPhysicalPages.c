/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x140A3F670
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 */

int __fastcall NtAllocateUserPhysicalPages(void *a1, unsigned __int64 *a2, volatile void *a3)
{
  ULONGLONG v4; // [rsp+20h] [rbp-18h]

  LODWORD(v4) = 0;
  return MiAllocateUserPhysicalPages(a1, a2, a3, 0LL, v4);
}
