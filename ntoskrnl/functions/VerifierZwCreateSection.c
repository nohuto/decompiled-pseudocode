__int64 __fastcall VerifierZwCreateSection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, unsigned int, int, __int64))pXdvZwCreateSection)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
