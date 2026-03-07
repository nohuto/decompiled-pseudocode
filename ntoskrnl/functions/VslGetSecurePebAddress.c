__int64 __fastcall VslGetSecurePebAddress(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 992);
  result = VslpEnterIumSecureMode(2u, 192, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v5[2];
  return result;
}
