/*
 * XREFs of NtGdiEngCreatePalette @ 0x1C02CBC30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02CA4E8 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02CA544 (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 */

HPALETTE __fastcall NtGdiEngCreatePalette(int a1, ULONG a2, char *a3, FLONG a4, FLONG flGreen, FLONG flBlue)
{
  HANDLE v10; // rbp
  unsigned int v12; // eax
  int Bits; // eax
  HPALETTE Palette; // rdi
  ULONG *v15; // r8
  HANDLE SecureHandle; // [rsp+30h] [rbp-468h] BYREF
  ULONG pulColors[256]; // [rsp+40h] [rbp-458h] BYREF

  memset_0(pulColors, 0, sizeof(pulColors));
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
    v15 = (ULONG *)a3;
    if ( a2 <= 0x100 )
      v15 = pulColors;
    Palette = EngCreatePalette(a1 | 0x8000u, a2, v15, a4, flGreen, flBlue);
  }
  if ( v10 )
    MmUnsecureVirtualMemory(v10);
  return Palette;
}
