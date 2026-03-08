/*
 * XREFs of PsLocateSystemDlls @ 0x14084ADDC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402D85B0 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x1403A1420 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PspMapSystemDll @ 0x140727ACC (PspMapSystemDll.c)
 *     PspLocateSystemDll @ 0x14084AE64 (PspLocateSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  __int64 *v0; // rbx
  __int64 v1; // rsi
  int i; // edi
  __int64 v3; // r10
  int v5; // ecx
  int SystemDll; // eax
  __int64 v7; // rdx

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = (__int64 *)PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags() & 4;
    for ( i = 0; i < 7; ++i )
    {
      v3 = *v0;
      if ( *v0 )
      {
        v5 = *(_DWORD *)(v3 + 8);
        if ( (v5 & 0x20) != 0 )
        {
          v7 = *v0;
          *(_QWORD *)(v3 + 56) = PspSystemDlls[0][7];
          if ( (int)PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, v7, 0, 1) < 0 )
            *v0 = 0LL;
        }
        else
        {
          SystemDll = PspLocateSystemDll(*v0, (v5 & 0x10) != 0 ? (unsigned int)v1 : 0);
          if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 8) & 1) != 0 )
            KeBugCheckEx(0x6Bu, SystemDll, 2uLL, i, 0LL);
        }
      }
      ++v0;
    }
  }
  return 0LL;
}
