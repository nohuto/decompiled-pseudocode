int __fastcall NtAllocateUserPhysicalPagesEx(
        void *a1,
        unsigned __int64 *a2,
        volatile void *a3,
        unsigned __int64 *a4,
        ULONGLONG a5)
{
  ULONGLONG ullMultiplicand; // [rsp+20h] [rbp-18h]

  LODWORD(ullMultiplicand) = a5;
  return MiAllocateUserPhysicalPages(a1, a2, a3, a4, ullMultiplicand);
}
