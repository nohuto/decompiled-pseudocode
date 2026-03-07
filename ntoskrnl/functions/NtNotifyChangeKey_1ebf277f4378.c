__int64 __fastcall NtNotifyChangeKey(
        void *a1,
        void *a2,
        void (__stdcall *a3)(POPLOCK Oplock),
        __int64 a4,
        NTSTATUS *a5,
        unsigned int a6,
        char a7,
        volatile void *a8,
        int a9,
        char a10)
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  LODWORD(Length) = a9;
  return NtNotifyChangeMultipleKeys(a1, 0, 0LL, a2, a3, a4, a5, a6, a7, a8, Length, a10);
}
