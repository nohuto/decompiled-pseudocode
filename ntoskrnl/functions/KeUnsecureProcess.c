__int64 __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = *(_QWORD *)(a1 + 992);
  *(_QWORD *)(a1 + 992) = 0LL;
  if ( v1 )
  {
    memset(v3, 0, 0x68uLL);
    v3[1] = v1;
    return VslpEnterIumSecureMode(2u, 30, 0, (__int64)v3);
  }
  return result;
}
