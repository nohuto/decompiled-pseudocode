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
