/*
 * XREFs of MiScrubProcessLargePage @ 0x140A43D34
 * Callers:
 *     MiScrubActiveLargePage @ 0x140A43704 (MiScrubActiveLargePage.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14025C920 (MiIdentifyPfnWrapper.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiIsVadLargePrivate @ 0x1403316C0 (MiIsVadLargePrivate.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 */

__int64 __fastcall MiScrubProcessLargePage(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v6 = 0;
  if ( MiIdentifyPfnWrapper(48 * a2 - 0x220000000000LL, (__int64)&v11) != MiLargePageSizes[a3] )
    return 0LL;
  if ( (v11 & 0x70) != 0x60 )
    return 0LL;
  if ( (v11 & 0xF) != 0xD )
    return 0LL;
  if ( v12 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  if ( LODWORD(KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink) != (((unsigned __int64)v11 >> 9) & 0xFFFFFFFFFFFFLL) )
    return 0LL;
  v7 = MiObtainReferencedVadEx(v12, 0, &v13);
  v8 = (void *)v7;
  if ( !v7 )
    return 0LL;
  if ( MiIsVadLargePrivate(v7) && (*(_DWORD *)(v9 + 48) & 0x2200000) != 0x2200000 )
    v6 = MiScrubLargeMappedPage(a1, a2, a3, (__int64 *)&v11);
  MiUnlockAndDereferenceVad(v8);
  return v6;
}
