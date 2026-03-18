/*
 * XREFs of PsLocateSystemDlls @ 0x1408455C8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x1403CCF10 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PspMapSystemDll @ 0x140756AD4 (PspMapSystemDll.c)
 *     PspLocateSystemDll @ 0x14084565C (PspLocateSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  __int64 *v0; // rbx
  __int64 v1; // rsi
  int i; // edi
  __int64 v3; // r10
  int v4; // ecx
  int SystemDll; // eax
  __int64 v7; // rdx

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = (__int64 *)PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags() & 4;
    for ( i = 0; i < 6; ++i )
    {
      v3 = *v0;
      if ( *v0 )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( (v4 & 0x20) != 0 )
        {
          v7 = *v0;
          *(_QWORD *)(v3 + 56) = PspSystemDlls[0][7];
          if ( (int)PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, v7, 0, 1) < 0 )
            *v0 = 0LL;
        }
        else
        {
          SystemDll = PspLocateSystemDll(*v0, (v4 & 0x10) != 0 ? (unsigned int)v1 : 0);
          if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 8) & 1) != 0 )
            KeBugCheckEx(0x6Bu, SystemDll, 2uLL, (unsigned int)i, 0LL);
        }
      }
      ++v0;
    }
  }
  return 0LL;
}
