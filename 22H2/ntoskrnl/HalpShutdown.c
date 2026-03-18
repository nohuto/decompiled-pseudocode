/*
 * XREFs of HalpShutdown @ 0x140506D54
 * Callers:
 *     HalpCheckPowerButton @ 0x14040F120 (HalpCheckPowerButton.c)
 *     HalReturnToFirmware @ 0x140506A70 (HalReturnToFirmware.c)
 *     HaliHaltSystem @ 0x140506B10 (HaliHaltSystem.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x140362640 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1403A1570 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpHvEnterSleepState @ 0x14050BB1C (HalpHvEnterSleepState.c)
 *     HalEfiResetSystem @ 0x14050CE00 (HalEfiResetSystem.c)
 */

__int64 HalpShutdown()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int16 v2; // [rsp+60h] [rbp+30h] BYREF
  __int16 v3; // [rsp+68h] [rbp+38h] BYREF
  __int16 v4; // [rsp+70h] [rbp+40h] BYREF

  v4 = 0;
  v2 = 0;
  v3 = 0;
  if ( _InterlockedCompareExchange(&HalpShutdownActive, 1, 0) )
  {
    while ( 1 )
      ;
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(PmAcpiDispatchTable + 8))(0LL);
  if ( PmRegisters[0] )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v4, 2u, 0LL);
    v3 = v4;
    if ( byte_140C605F0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v4, 2u, 0LL);
      v3 |= v4;
    }
    result = HalpAcpiPmRegisterWrite(0, 0, (__int64)&v3, 2u, 0LL);
    if ( byte_140C605F0 )
      result = HalpAcpiPmRegisterWrite(3, 0, (__int64)&v3, 2u, 0LL);
  }
  if ( HalpShutdownContext && byte_140C60590 )
  {
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvEnterSleepState(5LL);
    HalpAcpiPmRegisterRead(1, 0, (__int64)&v2, 2u, 0LL);
    v2 = v2 & 0x203 | ((HalpShutdownContext & 7 | 8) << 10);
    result = HalpAcpiPmRegisterWrite(1, 0, (__int64)&v2, 2u, 0LL);
    if ( byte_140C60620 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v2, 2u, 0LL);
      v2 = v2 & 0x203 | ((((unsigned int)HalpShutdownContext >> 4) & 7 | 8) << 10);
      result = HalpAcpiPmRegisterWrite(4, 0, (__int64)&v2, 2u, 0LL);
    }
  }
  if ( HalFirmwareTypeEfi )
    return HalEfiResetSystem(2LL, v1);
  return result;
}
