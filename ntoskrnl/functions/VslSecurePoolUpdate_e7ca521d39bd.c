__int64 __fastcall VslSecurePoolUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7)
{
  int v11; // ebx
  __int64 *v13[10]; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD v14[14]; // [rsp+88h] [rbp-51h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  v14[3] = a5;
  v14[1] = a1;
  v14[2] = a3;
  v14[7] = a4;
  v14[4] = a6;
  LODWORD(v14[8]) = a2;
  v11 = VslpLockPagesForTransfer((__int64)v13, a7, a6, 0, 0);
  if ( v11 >= 0 )
  {
    v14[5] = v13[0];
    v14[6] = v13[7];
    v11 = VslpEnterIumSecureMode(2u, 83, 0, (__int64)v14);
  }
  if ( v13[0] )
    VslpUnlockPagesForTransfer(v13);
  return (unsigned int)v11;
}
