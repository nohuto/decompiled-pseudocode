__int64 __fastcall VslInitializeSecureProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned __int64 a7)
{
  __int64 result; // rax
  unsigned int v12; // edi
  __int64 *v13[10]; // [rsp+30h] [rbp-C1h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-71h] BYREF

  memset(v13, 0, 0x48uLL);
  memset(v14, 0, 0x68uLL);
  v14[5] = a5;
  v14[1] = a1;
  v14[3] = a2;
  v14[2] = a3;
  v14[4] = a4;
  if ( !a7 )
  {
LABEL_6:
    v12 = VslpEnterIumSecureMode(2u, 7, 0, (__int64)v14);
    if ( a7 )
      VslpUnlockPagesForTransfer(v13);
    return v12;
  }
  if ( a7 > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v13, a6, a7, 0, 0);
  if ( (int)result >= 0 )
  {
    v14[6] = v13[0];
    v14[7] = v13[7];
    goto LABEL_6;
  }
  return result;
}
