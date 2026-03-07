__int64 __fastcall VslPrepareSecureImageRelocations(
        __int64 a1,
        __int64 a2,
        struct _MDL *a3,
        __int64 a4,
        struct _MDL *a5,
        unsigned int a6,
        struct _MDL *a7,
        __int64 a8)
{
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  int v13; // edi
  __int64 *v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v17[10]; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v18[10]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v19[14]; // [rsp+130h] [rbp+30h] BYREF

  memset(v19, 0, 0x68uLL);
  memset(v16, 0, 0x48uLL);
  memset(v18, 0, 0x48uLL);
  memset(v17, 0, 0x48uLL);
  v10 = ((unsigned __int64)((unsigned __int16)a3 & 0xFFF) + a4 + 4095) >> 12;
  if ( v10 > 0x1FA )
    return 3221225485LL;
  v11 = ((unsigned __int64)((unsigned __int16)a7 & 0xFFF) + a8 + 4095) >> 12;
  if ( v11 > 0x1FA )
    return 3221225485LL;
  if ( !v10 || (result = VslpLockPagesForTransfer((__int64)v16, a3, a4, 0, 0), (int)result >= 0) )
  {
    if ( v11 )
    {
      v13 = VslpLockPagesForTransfer((__int64)v17, a7, a8, 0, 0);
      if ( v13 < 0 )
      {
LABEL_7:
        VslpUnlockPagesForTransfer(v16);
        return (unsigned int)v13;
      }
      v13 = VslpLockPagesForTransfer((__int64)v18, a5, a6, 0, 0);
      if ( v13 < 0 )
      {
        VslpUnlockPagesForTransfer(v17);
        goto LABEL_7;
      }
    }
    v19[1] = a1;
    v19[2] = a2;
    v19[3] = v16[0];
    v19[4] = v16[7];
    v19[5] = v18[0];
    v19[6] = v18[7];
    v19[7] = v17[0];
    v19[8] = v17[7];
    v13 = VslpEnterIumSecureMode(2u, 28, 0, (__int64)v19);
    if ( v11 )
    {
      VslpUnlockPagesForTransfer(v17);
      VslpUnlockPagesForTransfer(v18);
    }
    if ( !v10 )
      return (unsigned int)v13;
    goto LABEL_7;
  }
  return result;
}
