/*
 * XREFs of ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x18026E940
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800AD854 (-Startup@@YAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall RegReadDWORD(HKEY a1, const unsigned __int16 *a2, unsigned int *a3)
{
  unsigned int v5; // [rsp+30h] [rbp-18h] BYREF
  DWORD v6[5]; // [rsp+34h] [rbp-14h] BYREF
  DWORD v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  v5 = 0;
  v6[0] = 4;
  if ( RegQueryValueExW(a1, a2, 0LL, &v7, (LPBYTE)&v5, v6) || v7 != 4 )
    return 0;
  *a3 = v5;
  return 1;
}
