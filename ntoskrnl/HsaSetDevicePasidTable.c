/*
 * XREFs of HsaSetDevicePasidTable @ 0x14052E770
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HsaUpdateDeviceTableEntry @ 0x14052E900 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HsaSetDevicePasidTable(__int64 a1, int a2, __int64 a3, char a4)
{
  _DWORD *v7; // rax
  __int64 result; // rax
  _DWORD v9[28]; // [rsp+58h] [rbp-19h] BYREF
  int v10; // [rsp+D8h] [rbp+67h] BYREF
  int v11; // [rsp+DCh] [rbp+6Bh]

  v11 = 0;
  v10 = a2;
  memset(v9, 0, sizeof(v9));
  if ( a4 )
  {
    v7 = 0LL;
  }
  else
  {
    if ( a3 )
    {
      v9[12] = *(_DWORD *)(a3 + 16);
    }
    else
    {
      result = *(unsigned int *)(a1 + 172);
      v9[0] = 1;
      if ( (_DWORD)result == 2 )
      {
        v9[1] = 1;
      }
      else
      {
        if ( (_DWORD)result != 1 )
          return result;
        v9[1] = 0;
        v9[12] = 0;
      }
    }
    v7 = v9;
  }
  return HsaUpdateDeviceTableEntry(a1, (unsigned int)&v10, a3, 0, (__int64)v7, 0, 0);
}
