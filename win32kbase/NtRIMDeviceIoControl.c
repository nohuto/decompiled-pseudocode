__int64 __fastcall NtRIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        void *a4,
        ULONG a5,
        volatile void *Address,
        SIZE_T a7,
        _DWORD *a8,
        int a9)
{
  SIZE_T Length; // [rsp+30h] [rbp-38h]

  LODWORD(Length) = a7;
  return RIMDeviceIoControl(a1, a2, a3, a4, a5, Address, Length, a8, 0LL, 0, a9, 1);
}
