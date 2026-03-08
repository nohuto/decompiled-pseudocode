/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x140585B10
 * Callers:
 *     DifPoFxNotifySurprisePowerOnWrapper @ 0x1405E72B0 (DifPoFxNotifySurprisePowerOnWrapper.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x1402B91F4 (PopFxLockDevice.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140584B8C (PopDirectedDripsStartDisengageTimer.c)
 *     PopPepSurprisePowerOn @ 0x14059D930 (PopPepSurprisePowerOn.c)
 */

int __fastcall PoFxNotifySurprisePowerOn(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx

  v1 = (__int64 *)(a1 + 312);
  v2 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*v1 + 40);
  v3 = PopFxLockDevice(a1, 1);
  v4 = v3;
  if ( v3 )
  {
    LODWORD(v3) = PopPepSurprisePowerOn(*(_QWORD *)(v3 + 56));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 244), 0xFFFFFFFF) == 1 )
      LODWORD(v3) = KeSetEvent((PRKEVENT)(v4 + 248), 0, 0);
    if ( v2 )
    {
      v3 = *v1;
      v5 = *(_QWORD *)(*v1 + 40);
      if ( v5 )
      {
        LODWORD(v3) = *(_DWORD *)(v5 + 760);
        if ( (v3 & 0x30000) != 0 )
          LODWORD(v3) = PopDirectedDripsStartDisengageTimer(1);
      }
    }
  }
  return v3;
}
