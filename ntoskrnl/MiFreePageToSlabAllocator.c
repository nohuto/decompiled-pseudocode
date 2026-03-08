/*
 * XREFs of MiFreePageToSlabAllocator @ 0x1402CE4E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402CE68C (MiReInitializeFreeSlabPfn.c)
 *     MiFreePageToSlabEntry @ 0x1402CE6EC (MiFreePageToSlabEntry.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14034A0A8 (MiUpdateSlabPagePlaceholderState.c)
 */

__int64 __fastcall MiFreePageToSlabAllocator(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  volatile LONG *v9; // r15
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax

  v3 = *(_QWORD *)a2;
  v4 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v3 )
      return 0LL;
    v3 ^= a2;
  }
  if ( !v3 )
    return 0LL;
  v9 = (volatile LONG *)(a2 + 16);
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 && v10 <= *(_QWORD *)(v11 + 32) && v10 >= *(_QWORD *)(v11 + 24) )
    goto LABEL_17;
  v11 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v11 )
    v11 ^= a2;
  while ( v11 )
  {
    if ( v10 > *(_QWORD *)(v11 + 32) )
    {
      v13 = *(_QWORD *)(v11 + 8);
    }
    else
    {
      if ( v10 >= *(_QWORD *)(v11 + 24) )
        break;
      v13 = *(_QWORD *)v11;
    }
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v13 )
      v11 ^= v13;
    else
      v11 = v13;
  }
  if ( v11 )
  {
LABEL_17:
    if ( (*(_DWORD *)(a2 + 88) & 4) != 0 && (*(_BYTE *)(a3 + 34) & 7) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 108));
      if ( (*(_BYTE *)(a3 + 34) & 0xC0) == 0x40 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(v9);
        MiZeroPhysicalPage(v12, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4), 0LL, 1LL);
        *(_BYTE *)(a3 + 34) &= 0xF8u;
        ExAcquireSpinLockSharedAtDpcLevel(v9);
      }
    }
    MiReInitializeFreeSlabPfn(a3, a2);
    MiUpdateSlabPagePlaceholderState(a2, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4), 1LL);
    MiFreePageToSlabEntry(a3, v11, a2);
    *(_QWORD *)(a2 + 40) = v11;
    *(_QWORD *)(25408LL * *(unsigned int *)(a2 + 84) + *(_QWORD *)(a1 + 16) + 25240) = a2;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v9);
  LOBYTE(v4) = v11 != 0;
  return v4;
}
