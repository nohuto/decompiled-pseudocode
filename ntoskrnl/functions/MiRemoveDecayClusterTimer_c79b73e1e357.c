void __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67E00);
  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = v2 | 0x100000000LL;
    MiUnlinkDecayClusterTimer(a1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
}
