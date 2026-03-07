__int64 __fastcall VslEndSecurePageIteration(unsigned __int8 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a1;
  memset(v5, 0, 0x68uLL);
  v5[1] = v3;
  result = VslpEnterIumSecureMode(2u, 2049, 0, (__int64)v5);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v5[2];
  }
  return result;
}
