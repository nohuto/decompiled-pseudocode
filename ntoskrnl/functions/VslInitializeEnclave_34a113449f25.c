__int64 __fastcall VslInitializeEnclave(
        __int64 a1,
        __int64 a2,
        struct _MDL *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 result; // rax
  int v12; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-B1h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-61h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v13, a3, a4, 0, 0);
  if ( (int)result >= 0 )
  {
    v14[3] = v13[0];
    v14[4] = v13[7];
    v14[5] = a5;
    v14[6] = a6;
    v14[1] = a1;
    v14[2] = a2;
    v12 = VslpEnterIumSecureMode(2u, 49, 0, (__int64)v14);
    if ( v12 >= 0 )
      *a7 = v14[2];
    VslpUnlockPagesForTransfer(v13);
    return (unsigned int)v12;
  }
  return result;
}
