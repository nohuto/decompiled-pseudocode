/*
 * XREFs of VslCapturePgoData @ 0x14088EF70
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall VslCapturePgoData(size_t Size, struct _MDL *a2)
{
  __int64 v4; // rbp
  int v5; // ebx
  ULONG v6; // r14d
  __int64 *v8[10]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-98h] BYREF

  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  v4 = 0LL;
  v5 = 0;
  memset(a2, 0, Size);
  if ( Size )
  {
    while ( 1 )
    {
      v6 = Size;
      if ( 2072576 - ((unsigned __int16)a2 & 0xFFFu) < Size )
        v6 = 2072576 - ((unsigned __int16)a2 & 0xFFF);
      v5 = VslpLockPagesForTransfer((__int64)v8, a2, v6, 1, 0);
      if ( v5 < 0 )
        break;
      v9[2] = v8[0];
      v9[3] = v8[7];
      v9[1] = v4;
      v5 = VslpEnterIumSecureMode(2u, 74, 0, (__int64)v9);
      VslpUnlockPagesForTransfer(v8);
      if ( v5 == -2147483622 )
        return 0;
      if ( v5 >= 0 )
      {
        a2 = (struct _MDL *)((char *)a2 + v6);
        v4 += v6;
        Size -= v6;
        if ( Size )
          continue;
      }
      return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
