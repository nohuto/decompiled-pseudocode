__int64 __fastcall VslFinishSecureImageValidation(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        _BYTE *a5,
        __int64 *a6,
        _QWORD *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  int v13; // ebx
  _QWORD v15[14]; // [rsp+30h] [rbp-81h] BYREF

  memset(v15, 0, 0x68uLL);
  v15[2] = a2;
  v15[1] = a1;
  LODWORD(v15[3]) = a3;
  BYTE4(v15[3]) = a4;
  v15[4] = 0LL;
  v13 = VslpEnterIumSecureMode(2u, 27, 0, (__int64)v15);
  *a9 = v15[6];
  if ( v13 >= 0 )
  {
    *a5 = BYTE5(v15[3]);
    *a8 = v15[5];
  }
  if ( v15[4] )
  {
    *a6 = VslFreePoolTransferObject((__int64 **)v15[4], a7);
  }
  else
  {
    *a6 = 0LL;
    *a7 = 0LL;
  }
  return (unsigned int)v13;
}
