__int64 __fastcall VerifierMmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned int a10)
{
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  VfCheckPageProtection(a10, retaddr);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, int, int, unsigned int))pXdvMmMapViewOfSection)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
