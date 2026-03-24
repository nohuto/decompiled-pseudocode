/*
 * XREFs of MiInitializeMdlPfn @ 0x140354D24
 * Callers:
 *     MiInitializeMdlLeafPfns @ 0x140354C1C (MiInitializeMdlLeafPfns.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053424C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140553314 (MmAllocateSecureKernelPages.c)
 *     MiCreateEnclaveRegions @ 0x140A54ED8 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  char v4; // cl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  if ( (a2 & 0x100) != 0 )
  {
    v4 = *(_BYTE *)(a1 + 34);
    if ( (v4 & 7) != 5 )
      *(_BYTE *)(a1 + 34) = v4 & 0xF8 | 5;
    LOBYTE(v5) = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    v6 = 0LL;
    if ( (a2 & 0x80000200) == 0 )
      v6 = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 8) = v6;
    if ( a2 < 0 )
      *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_140C4E000);
    }
    LOBYTE(v5) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v5;
    if ( a2 < 0 )
    {
      v5 = *(_QWORD *)(a1 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      *(_QWORD *)(a1 + 40) = v5;
    }
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_DWORD *)(a1 + 36) = 0;
  return v5;
}
