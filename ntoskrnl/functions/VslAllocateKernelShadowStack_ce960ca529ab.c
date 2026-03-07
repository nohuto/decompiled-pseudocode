__int64 __fastcall VslAllocateKernelShadowStack(__int64 a1, __int64 a2, int a3, _QWORD *a4, int a5, _QWORD *a6)
{
  __int64 result; // rax
  _QWORD v10[14]; // [rsp+20h] [rbp-98h] BYREF

  memset(v10, 0, 0x68uLL);
  v10[4] = *a4;
  v10[1] = a1;
  v10[2] = 0x100003000LL;
  LODWORD(v10[3]) = a3;
  result = VslpEnterIumSecureMode(2u, 227, 0, (__int64)v10);
  if ( (int)result >= 0 )
    *a6 = v10[2];
  return result;
}
