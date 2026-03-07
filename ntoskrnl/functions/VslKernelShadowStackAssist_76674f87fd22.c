__int64 __fastcall VslKernelShadowStackAssist(int a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, ULONG_PTR a5, int a6)
{
  ULONG_PTR v7; // rdi
  __int64 result; // rax
  int v11; // ebx
  _QWORD v12[14]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3[20]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = a1;
  memset(v12, 0, 0x68uLL);
  v12[5] = a5;
  LODWORD(v12[6]) = a6;
  LODWORD(v12[1]) = v7;
  v12[2] = a2;
  v12[3] = a3;
  v12[4] = a4;
  result = VslpEnterIumSecureMode(2u, 269, 0, (__int64)v12);
  v11 = result;
  if ( (int)result < 0 )
  {
    memset(BugCheckParameter3, 0, 0x98uLL);
    LODWORD(BugCheckParameter3[0]) = v11;
    BugCheckParameter3[4] = 67LL;
    LODWORD(BugCheckParameter3[3]) = 7;
    BugCheckParameter3[5] = v7;
    BugCheckParameter3[6] = a2;
    BugCheckParameter3[7] = a3;
    BugCheckParameter3[8] = a4;
    BugCheckParameter3[9] = a5;
    BugCheckParameter3[10] = a6;
    KeBugCheckEx(0x139u, 0x43uLL, 0LL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  return result;
}
