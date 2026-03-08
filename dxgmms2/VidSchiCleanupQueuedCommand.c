/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C0046F08
 * Callers:
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C010A430 (VidSchiCleanupPacket_PriorityTable.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(__int64 a1)
{
  char v2; // al
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  v4 = 0;
  v3[0] = a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v3);
  *(_BYTE *)(a1 + 3036) |= 1u;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
  VidSchiCleanupPacket_PriorityTable(a1);
  v2 = *(_BYTE *)(a1 + 3036);
  if ( (v2 & 2) == 0 )
    *(_BYTE *)(a1 + 3036) = v2 & 0xFE;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
