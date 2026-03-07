__int64 __fastcall VslLoadEnclaveData(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v13[14]; // [rsp+78h] [rbp-49h] BYREF

  v7 = a3;
  v9 = a4;
  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( !a5 || (result = VslpLockMdlForTransfer((__int64)v12, a5, 0), (int)result >= 0) )
  {
    v13[6] = v12[7];
    v13[1] = a1;
    v13[2] = a2;
    v13[3] = v7;
    v13[4] = v9;
    v13[5] = a5;
    v11 = VslpEnterIumSecureMode(2u, 47, 0, (__int64)v13);
    if ( a5 )
      VslpUnlockPagesForTransfer(v12);
    if ( v11 >= 0 )
      *a6 = v13[2];
    return (unsigned int)v11;
  }
  return result;
}
