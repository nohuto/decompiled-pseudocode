void __fastcall HalpSetPlatformFlags(__int64 a1, __int64 a2)
{
  const char *v3; // rcx

  if ( (!a2 || (v3 = *(const char **)(a2 + 216)) == 0LL || !strstr(v3, "FORCELEGACYPLATFORM"))
    && *(_BYTE *)(a1 + 8) >= 5u )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x100000) != 0 )
      HalpPlatformFlags &= ~1u;
    if ( (*(_BYTE *)(a1 + 109) & 2) == 0 )
      HalpPlatformFlags &= ~2u;
    if ( (*(_BYTE *)(a1 + 109) & 0x20) != 0 )
      HalpPlatformFlags &= ~4u;
    off_140C01C70[0] = (__int64 (__fastcall *)())HalpAcpiAoacCapable;
    if ( (*(_DWORD *)(a1 + 112) & 0x200000) != 0 )
      HalpPlatformFlags |= 8u;
  }
}
