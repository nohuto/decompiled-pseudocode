/*
 * XREFs of ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C01A31F4
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C01A273C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMDeadzone::_IsAngleWithinRange(unsigned int a1, __int64 a2, __int64 a3)
{
  return (RIMDeadzone::s_counterClockwiseDeviceRotation
        + a1
        + 360 * (1 - a1 / 0x168 - RIMDeadzone::s_counterClockwiseDeviceRotation / 0x168)
        - (unsigned int)a3 % 0x168)
       % 0x168 < (HIDWORD(a3) + 360 * (1 - HIDWORD(a3) / 0x168) - (unsigned int)a3 % 0x168) % 0x168;
}
