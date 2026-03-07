__int64 __fastcall VslResetKernelShadowStack(int a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[2] = *a2;
  LODWORD(v5[1]) = a1;
  result = VslpEnterIumSecureMode(2u, 229, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v5[2];
  return result;
}
