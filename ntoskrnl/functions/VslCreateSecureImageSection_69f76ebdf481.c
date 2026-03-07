__int64 __fastcall VslCreateSecureImageSection(
        unsigned int a1,
        struct _MDL *a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // r15
  __int64 v9; // r14
  __int64 result; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-59h] BYREF

  v7 = a3;
  v9 = a4;
  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( a1 > 0x1FA )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v12, a2, a1 << 12, 0, 0);
  if ( (int)result >= 0 )
  {
    v13[1] = v12[0];
    v13[2] = v12[7];
    v13[5] = a5;
    v13[3] = v7;
    v13[4] = v9;
    v11 = VslpEnterIumSecureMode(2u, 25, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( v11 >= 0 )
      *a6 = v13[2];
    return (unsigned int)v11;
  }
  return result;
}
