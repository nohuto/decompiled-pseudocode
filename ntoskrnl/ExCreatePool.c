/*
 * XREFs of ExCreatePool @ 0x140604890
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall ExCreatePool(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  if ( (a1 & 0xFFFFFFFC) != 0 || (a1 & 3) != 3 )
  {
    return (unsigned int)-1073741585;
  }
  else
  {
    v6 = 0;
    if ( a2 )
    {
      if ( a3 )
      {
        return (unsigned int)-1073741583;
      }
      else if ( a4 )
      {
        memset(v9, 0, 0x68uLL);
        v9[1] = a2;
        v7 = VslpEnterIumSecureMode(2u, 79, 0, (__int64)v9);
        if ( v7 < 0 )
          return (unsigned int)v7;
        else
          *a4 = v9[2];
      }
      else
      {
        return (unsigned int)-1073741582;
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  return v6;
}
