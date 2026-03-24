/*
 * XREFs of NtGdiDrawEscape @ 0x1C02ADE20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     GreDrawEscape @ 0x1C027C254 (GreDrawEscape.c)
 */

__int64 __fastcall NtGdiDrawEscape(HDC a1, unsigned int a2, signed int a3, _BYTE *a4)
{
  int v7; // ebx
  _BYTE *v8; // r14
  HANDLE v9; // rsi
  int v11; // ecx
  _BYTE v12[64]; // [rsp+50h] [rbp-88h] BYREF

  v7 = 0;
  v8 = a4;
  v9 = 0LL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    if ( a3 > 64 || (int)((a3 + 3) & 0xFFFFFFFC) > 64 )
    {
      v9 = MmSecureVirtualMemory(a4, a3, 2u);
      v11 = 0;
      if ( !v9 )
        v11 = -1;
      v7 = v11;
    }
    else
    {
      v8 = v12;
      if ( &a4[a3] < a4 || (unsigned __int64)&a4[a3] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v12, a4, a3);
    }
    if ( v7 >= 0 )
      v7 = GreDrawEscape(a1, a2, a3, (__int64)v8);
    if ( v9 )
      MmUnsecureVirtualMemory(v9);
  }
  else if ( a3 )
  {
    return (unsigned int)-1;
  }
  else
  {
    return (unsigned int)GreDrawEscape(a1, a2, 0, 0LL);
  }
  return (unsigned int)v7;
}
