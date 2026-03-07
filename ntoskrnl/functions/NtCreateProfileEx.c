__int64 __fastcall NtCreateProfileEx(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int a7,
        int a8,
        unsigned __int16 a9,
        unsigned __int64 a10)
{
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0);
}
