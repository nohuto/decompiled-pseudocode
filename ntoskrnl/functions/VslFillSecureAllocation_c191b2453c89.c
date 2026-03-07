__int64 __fastcall VslFillSecureAllocation(__int64 a1, __int64 a2, unsigned __int64 a3, struct _MDL *a4)
{
  int i; // ebx
  unsigned int v9; // r14d
  __int64 *v11[10]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v12[14]; // [rsp+80h] [rbp-A8h] BYREF

  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v9 )
  {
    v9 = a3;
    if ( 2072576 - ((unsigned __int16)a4 & 0xFFFu) <= a3 )
      v9 = 2072576 - ((unsigned __int16)a4 & 0xFFF);
    i = VslpLockPagesForTransfer((__int64)v11, a4, v9, 0, 0);
    if ( i < 0 )
      break;
    v12[3] = v11[0];
    v12[4] = v11[7];
    v12[1] = a1;
    v12[2] = a2;
    i = VslpEnterIumSecureMode(2u, 23, 0, (__int64)v12);
    VslpUnlockPagesForTransfer(v11);
    if ( i < 0 )
      break;
    a4 = (struct _MDL *)((char *)a4 + v9);
    a2 += v9;
  }
  return (unsigned int)i;
}
