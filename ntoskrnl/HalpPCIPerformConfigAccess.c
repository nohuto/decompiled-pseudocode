__int64 __fastcall HalpPCIPerformConfigAccess(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  int i; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  for ( i = a5; i; i -= result )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1
                                                                 + 8LL
                                                                 * *((unsigned __int8 *)PCIDeref + 4 * (a4 & 3)
                                                                                                 + (i & 3))))(
               a2,
               a3,
               a4);
    a4 += result;
    a3 += (unsigned int)result;
  }
  return result;
}
