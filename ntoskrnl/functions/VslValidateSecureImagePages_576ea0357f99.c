__int64 __fastcall VslValidateSecureImagePages(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _MDL *a4,
        __int64 a5,
        int a6)
{
  int i; // edi
  int v11; // r13d
  unsigned __int64 v12; // rbx
  unsigned int v13; // r13d
  __int64 *v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-70h] BYREF

  memset(v17, 0, 0x68uLL);
  memset(v16, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v12 )
  {
    v11 = 0;
    v12 = a3;
    if ( (-(__int64)(((unsigned __int16)a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576 <= a3 )
      v12 = (-(__int64)(((unsigned __int16)a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576;
    LOBYTE(v11) = (v12 & 0xFFF) != 0;
    v13 = (v12 >> 12) + v11;
    i = VslpLockPagesForTransfer((__int64)v16, a4, v13 << 12, 0, 0x10u);
    if ( i < 0 )
      break;
    v17[1] = a1;
    v17[3] = v16[0];
    v17[4] = v16[7];
    LODWORD(v17[6]) = a6;
    v17[2] = __PAIR64__(v13, a2);
    v17[5] = a5;
    i = VslpEnterIumSecureMode(2u, 193, 0, (__int64)v17);
    VslpUnlockPagesForTransfer(v16);
    if ( i < 0 )
      break;
    a4 = (struct _MDL *)((char *)a4 + v12);
    a5 += v12;
    a2 += v13;
  }
  return (unsigned int)i;
}
