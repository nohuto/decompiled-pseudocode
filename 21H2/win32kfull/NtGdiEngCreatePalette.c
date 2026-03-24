/*
 * XREFs of NtGdiEngCreatePalette @ 0x1C0129060
 * Callers:
 *     <none>
 * Callees:
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0155330 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02B1E54 (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 */

HPALETTE __fastcall NtGdiEngCreatePalette(int a1, ULONG a2, ULONG *a3, FLONG a4, FLONG flGreen, FLONG flBlue)
{
  HANDLE v10; // rsi
  unsigned int v12; // eax
  int Bits; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  HPALETTE Palette; // rdi
  ULONG *v17; // r8
  HANDLE SecureHandle; // [rsp+30h] [rbp-468h] BYREF
  ULONG pulColors[256]; // [rsp+40h] [rbp-458h] BYREF

  memset(pulColors, 0, sizeof(pulColors));
  v10 = 0LL;
  SecureHandle = 0LL;
  if ( a2 > 0x10000 )
    return 0LL;
  if ( (a1 & 0xFFFF7FFF) != 1
    || !a2
    || ((v12 = 4 * a2, a2 <= 0x100)
      ? (HANDLE)(Bits = bSafeReadBits(pulColors, a3, v12))
      : (Bits = bSecureBits(a3, v12, &SecureHandle), v10 = SecureHandle),
        (Palette = (HPALETTE)Bits) != 0LL) )
  {
    v17 = a3;
    if ( a2 <= 0x100 )
      v17 = pulColors;
    Palette = EngCreatePalette(a1 | 0x8000u, a2, v17, a4, flGreen, flBlue);
  }
  if ( v10 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v15, v14) )
      GrepUnsecureVirtualMemory(v10);
    else
      MmUnsecureVirtualMemory(v10);
  }
  return Palette;
}
