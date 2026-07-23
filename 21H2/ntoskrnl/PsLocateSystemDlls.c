/*
 * XREFs of PsLocateSystemDlls @ 0x140798CF0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402653A0 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x1403AF8B0 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x140798D78 (PspLocateSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  _QWORD *v0; // rdi
  __int64 v1; // rsi
  int i; // ebx
  int SystemDll; // eax

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = &PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags() & 4;
    for ( i = 0; i < 6; ++i )
    {
      if ( *v0 )
      {
        SystemDll = PspLocateSystemDll(*v0, (*(_DWORD *)(*v0 + 16LL) & 0x10) != 0 ? (unsigned int)v1 : 0);
        if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 16LL) & 1) != 0 )
          KeBugCheckEx(0x6Bu, SystemDll, 2uLL, i, 0LL);
      }
      ++v0;
    }
  }
  return 0LL;
}
