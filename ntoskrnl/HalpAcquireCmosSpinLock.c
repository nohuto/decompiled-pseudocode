/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x1402D1A0C
 * Callers:
 *     HalpAcquireCmosSpinLockAndWait @ 0x1402D19D8 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetSetCmosData @ 0x14039F6CC (HalpGetSetCmosData.c)
 *     HalGetEnvironmentVariable @ 0x140502810 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1405029B0 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140504630 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     x86BiosReadCmosPortByte @ 0x1405061D4 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140506350 (x86BiosWriteCmosPortByte.c)
 *     HalpSetClockAfterSleep @ 0x140508AF0 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x140508B74 (HalpSetClockBeforeSleep.c)
 *     HalpReadRtcStdPCAT @ 0x14051DB40 (HalpReadRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x14051DBD0 (HalpReadStdCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x14051DC40 (HalpWriteRtcStdPCAT.c)
 *     HalpWriteStdCmosData @ 0x14051DD10 (HalpWriteStdCmosData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
      if ( (++v3 & dword_140C6211C) != 0 || !qword_140C62120 )
        _mm_pause();
      else
        qword_140C62120(v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = (v6 & 0x200) != 0;
  return result;
}
