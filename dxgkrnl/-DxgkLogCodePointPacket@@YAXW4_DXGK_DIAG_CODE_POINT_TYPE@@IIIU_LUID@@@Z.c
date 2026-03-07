__int64 __fastcall DxgkLogCodePointPacket(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  _QWORD v10[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v10, 0, 0x48uLL);
  if ( a5 )
  {
    v10[0] = 0x480000001ELL;
    v10[3] = 0LL;
    v10[8] = a5;
  }
  else
  {
    v10[0] = 0x4000000006LL;
    v10[3] = 0LL;
  }
  v10[4] = 0LL;
  LODWORD(v10[5]) = 0;
  *(_OWORD *)&v10[1] = 0LL;
  v10[7] = __PAIR64__(a4, a3);
  v10[6] = __PAIR64__(a2, a1);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v10);
}
