/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x14033BA0C
 * Callers:
 *     HalpAcquireCmosSpinLockAndWait @ 0x14033B9D8 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetSetCmosData @ 0x1403A4CAC (HalpGetSetCmosData.c)
 *     HalGetEnvironmentVariable @ 0x1405048F0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140504A90 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140506710 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x140506A70 (HalReturnToFirmware.c)
 *     x86BiosReadCmosPortByte @ 0x1405082B4 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140508430 (x86BiosWriteCmosPortByte.c)
 *     HalpSetClockAfterSleep @ 0x14050ABD0 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x14050AC54 (HalpSetClockBeforeSleep.c)
 *     HalpReadRtcStdPCAT @ 0x140520070 (HalpReadRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x140520100 (HalpReadStdCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x140520170 (HalpWriteRtcStdPCAT.c)
 *     HalpWriteStdCmosData @ 0x140520240 (HalpWriteStdCmosData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcquireCmosSpinLock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v3 = 0;
  while ( 1 )
  {
    _disable();
    LODWORD(a1) = KeGetPcr()->Prcb.Number;
    v4 = v6 & 0x200;
    LOBYTE(a3) = (v6 & 0x200) != 0;
    result = (unsigned int)_InterlockedCompareExchange(&HalpSystemHardwareLock, a1, -1);
    if ( (_DWORD)result == -1 )
      break;
    if ( (v6 & 0x200) != 0 )
      _enable();
    while ( HalpSystemHardwareLock != -1 )
    {
      if ( HalpRebootNow )
        HalpRebootNow(a1, v4, a3);
      if ( (++v3 & dword_140C6257C) != 0 || !qword_140C62580 )
        _mm_pause();
      else
        qword_140C62580(v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = (v6 & 0x200) != 0;
  return result;
}
