__int64 __fastcall VslAccessPciDevice(
        char a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        size_t Size,
        char *Src)
{
  unsigned int v13; // ebx
  int v14; // edi
  unsigned int v15; // eax
  _QWORD v17[14]; // [rsp+20h] [rbp-79h] BYREF

  memset(v17, 0, 0x68uLL);
  v17[3] = __PAIR64__(a6, a5);
  HIDWORD(v17[1]) = a2;
  v13 = Size;
  v17[2] = __PAIR64__(a4, a3);
  v14 = 0;
  LOBYTE(v17[1]) = a1;
  while ( v13 && v14 >= 0 )
  {
    v15 = 64;
    if ( v13 < 0x40 )
      v15 = v13;
    LODWORD(v17[4]) = v15;
    if ( a1 )
      memmove(&v17[5], Src, v15);
    v14 = VslpEnterIumSecureMode(2u, 264, 0, (__int64)v17);
    if ( v14 >= 0 )
    {
      if ( !a1 )
        memmove(Src, &v17[5], LODWORD(v17[4]));
      Src += LODWORD(v17[4]);
      v13 -= LODWORD(v17[4]);
      HIDWORD(v17[3]) += LODWORD(v17[4]);
    }
  }
  return (unsigned int)v14;
}
