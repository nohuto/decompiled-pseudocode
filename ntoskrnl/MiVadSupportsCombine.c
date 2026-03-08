/*
 * XREFs of MiVadSupportsCombine @ 0x1402285E0
 * Callers:
 *     MiCrcStillIntact @ 0x140210E18 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiVadSupportsPrivateCommit @ 0x14031EE80 (MiVadSupportsPrivateCommit.c)
 */

__int64 __fastcall MiVadSupportsCombine(__int64 a1, __int64 a2)
{
  __int64 Address; // rbx
  int v4; // eax
  __int64 v5; // rcx

  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                  + 284));
  Address = MiLocateAddress(a2);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                    + 284));
  if ( !Address || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16 )
    return 0LL;
  v4 = MiVadSupportsPrivateCommit(Address);
  v5 = 0LL;
  if ( v4 )
    return Address;
  return v5;
}
