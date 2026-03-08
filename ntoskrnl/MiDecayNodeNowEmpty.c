/*
 * XREFs of MiDecayNodeNowEmpty @ 0x1402D6BC0
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14032F4F0 (MiUnlinkProtectedStandbyPfn.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     MiRemoveDecayClusterTimer @ 0x1402D6C5C (MiRemoveDecayClusterTimer.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiDecayNodeNowEmpty(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG v4; // edi

  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_BYTE *)(v2 + 35) & 8) == 0 )
  {
    MiRemoveDecayClusterTimer(48 * a1 - 0x220000000000LL);
    v3 = MiSwizzleInvalidPte(((a1 & 0xFFFFFFFFFFLL) << 12) | 0x880);
    v4 = a1 - qword_140C67DE0;
    *(_QWORD *)(v2 + 16) = v3;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67E00);
    RtlSetBits(&BitMapHeader, v4, 1u);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
  }
}
