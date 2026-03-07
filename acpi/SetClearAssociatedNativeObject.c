void __fastcall SetClearAssociatedNativeObject(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int16 v5; // r9
  __int16 v6; // r8
  __int16 v7; // r9

  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = *(_WORD *)(a1 + 64);
  *(_QWORD *)(a1 + 136) = a2;
  v6 = v5 & 0xFBFF;
  v7 = v5 | 0x400;
  if ( !a2 )
    v7 = v6;
  *(_WORD *)(a1 + 64) = v7;
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
