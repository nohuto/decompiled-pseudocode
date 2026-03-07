__int64 __fastcall VfMiscKeReleaseQueuedSpinLock_Entry(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = *(_BYTE *)(a1 + 8);
  LOBYTE(a1) = KeGetCurrentIrql();
  return ViMiscCheckKeLowerIrql(a1, a2);
}
